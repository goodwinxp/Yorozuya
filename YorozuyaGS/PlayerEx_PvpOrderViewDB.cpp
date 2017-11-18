#include "stdafx.h"

#include <ATF/global.hpp>
#include <ATF/CNationSettingManager.hpp>
#include "PlayerEx_PvpOrderViewDB.h"

namespace GameServer
{
    namespace Extension
    {
        CPvpOrderViewDB::CPvpOrderViewDB()
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
            CRFNewDatabase::ExecUpdateQuery(L"DELETE FROM [tbl_KillerList]", false);
        }

        bool CPvpOrderViewDB::LoadKillerList(std::set<uint32_t>& setKillerInfo)
        {
            // todo
            return false;
        }

        bool CPvpOrderViewDB::SaveKillerList(const std::set<uint32_t>& setKillerInfo)
        {
            // todo
            return false;
        }
    }
}