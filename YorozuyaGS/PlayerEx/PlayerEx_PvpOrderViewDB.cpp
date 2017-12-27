#include "stdafx.h"

#include <sql.h>
#include <sqlext.h>
#include <ATF/global.hpp>
#include <ATF/CNationSettingManager.hpp>
#include "PlayerEx_PvpOrderViewDB.h"

#pragma comment(lib, "odbc32.lib")

namespace
{
    static const size_t nCountThread = 1;
}

namespace GameServer
{
    namespace Extension
    {
        CPvpOrderViewDB::CPvpOrderViewDB()
            : m_thPool(nCountThread)
        {
            auto instance = ATF::CNationSettingManager::Instance();

            SetLogFile("..\\ZoneServerLog\\", 
                ATF::Global::g_MainThread->m_szWorldDBName);

            bool result = StartDataBase(
                ATF::Global::g_MainThread->m_szWorldDBName,
                instance->GetWorldDBID(),
                instance->GetWorldDBPW());

            if (!result)
            {
                ATF::Global::MyMessageBox("DatabaseInit", "Connect World DB Failed!");
                throw std::runtime_error("Connect World DB Failed!");
            }
        }

        void CPvpOrderViewDB::CleanKillerList()
        {
            m_thPool.enqueue([=]() {
                CRFNewDatabase::ExecUpdateQuery(L"DELETE FROM [tbl_KillerList]", false);
            });
        }

        void CPvpOrderViewDB::LoadKillerList(
            CPlayerEx* pPlayer,
            uint32_t dwPlayerSerial)
        {
            m_thPool.enqueue([=]() {
                std::set<uint32_t> setKillerList;
                LoadKillerListImpl(dwPlayerSerial, setKillerList);
                pPlayer->LoadSerialKillerListComplete(std::move(setKillerList), dwPlayerSerial);
            });
        }

        void CPvpOrderViewDB::SaveKillerList(
            std::set<uint32_t>&& setKillerList,
            uint32_t dwPlayerSerial)
        {
            m_thPool.enqueue(
                [this, dwPlayerSerial, list = std::set<uint32_t>(setKillerList)]()
                {
                    SaveKillerListImpl(list, dwPlayerSerial);
                });
        }

        void CPvpOrderViewDB::AdjustTable()
        {
            if (!TableExist("tbl_KillerList"))
            {
                static wchar_t wszQueryCreateTable[] = LR"(
                    CREATE TABLE [dbo].[tbl_KillerList](
                        [PlayerSerial] [int] NOT NULL,
                        [DiedPlayerSerial] [int] NOT NULL,
                        [When] [date] NOT NULL);
                    CREATE INDEX indx_load_list ON [tbl_KillerList] ([PlayerSerial], [When]);
                )";

                CRFNewDatabase::ExecUpdateQuery(wszQueryCreateTable, false);
            }

            static wchar_t wszQueryUpdateTable[] = LR"(
                UPDATE dbo.tbl_pvporderview
                   SET [KillerSerial0] = 0
                      ,[KillerSerial1] = 0
                      ,[KillerSerial2] = 0
                      ,[KillerSerial3] = 0
                      ,[KillerSerial4] = 0
                      ,[KillerSerial5] = 0
                      ,[KillerSerial6] = 0
                      ,[KillerSerial7] = 0
                      ,[KillerSerial8] = 0
                      ,[KillerSerial9] = 0
            )";

            CRFNewDatabase::ExecUpdateQuery(wszQueryUpdateTable, false);
        }

        void CPvpOrderViewDB::LoadKillerListImpl(
            uint32_t dwPlayerSerial,
            ::std::set<uint32_t>& setKillerList)
        {
            std::string sQuerySelect(
                "SELECT [DiedPlayerSerial] FROM [tbl_KillerList] WHERE [When] = CONVERT(date, GETDATE()) AND [PlayerSerial] = ");
            sQuerySelect += std::to_string(dwPlayerSerial);

            char* strQuery = (char *)sQuerySelect.c_str();

            if (m_bSaveDBLog)
            {
                CRFNewDatabase::Log(strQuery);
            }

            if (m_hStmtSelect == SQL_NULL_HSTMT)
            {
                if (ReConnectDataBase() == false)
                {
                    CRFNewDatabase::ErrFmtLog("ReConnectDataBase Fail. Load killer list");
                    return;
                }
            }

            SQLRETURN sqlRet = SQLExecDirectA(m_hStmtSelect, (SQLCHAR *)strQuery, SQL_NTS);
            if (sqlRet != SQL_SUCCESS && sqlRet != SQL_SUCCESS_WITH_INFO)
            {
                SQLCloseCursor(m_hStmtSelect);
                if (sqlRet == SQL_NO_DATA)
                    return;
                else
                {
                    CRFNewDatabase::ErrorMsgLog(sqlRet, strQuery, "SQLExecDirectA", m_hStmtSelect);
                    CRFNewDatabase::ErrorAction(sqlRet, m_hStmtSelect);
                    return;
                }
            }

            SQLLEN size;
            while (TRUE)
            {
                sqlRet = SQLFetch(m_hStmtSelect);

                if (sqlRet != SQL_SUCCESS && sqlRet != SQL_SUCCESS_WITH_INFO) 
                    break;

                uint32_t dwSerial;
                sqlRet = SQLGetData(m_hStmtSelect, 1, SQL_C_ULONG, &dwSerial, 0, &size);
                setKillerList.insert(dwSerial);

                if (sqlRet != SQL_SUCCESS && sqlRet != SQL_SUCCESS_WITH_INFO)
                    break;
            }

            SQLCloseCursor(m_hStmtSelect);

            if (m_bSaveDBLog)
                CRFNewDatabase::Log((char *)(sQuerySelect + " Success").c_str());
        }

        void CPvpOrderViewDB::SaveKillerListImpl(
            const std::set<uint32_t>& setKillerList,
            uint32_t dwPlayerSerial)
        {
            if (setKillerList.empty())
                return;

            std::string sQueryInsert(
                "INSERT INTO [tbl_KillerList] ([PlayerSerial], [DiedPlayerSerial], [When]) VALUES ");

            bool first = true;
            for (auto& v : setKillerList)
            {
                if (!first)
                {
                    sQueryInsert += ",";
                }
                else
                {
                    first = false;
                }
                    
                sQueryInsert += "(" + std::to_string(dwPlayerSerial);
                sQueryInsert += ", " + std::to_string(v);
                sQueryInsert += ", CONVERT(date, GETDATE()))";
            }

            CRFNewDatabase::ExecUpdateQuery((char *)sQueryInsert.c_str(), false);
        }
    }
}