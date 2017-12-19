#include "stdafx.h"

#include "LogType.h"
#include "../../Common/ETypes.h"

#include <process.h>
#include <ATF/global.hpp>
#include <ATF/_d_trade_ask_request_clzo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        std::atomic<bool> CLogType::m_bDBProcDestroy = false;
        std::mutex CLogType::m_mtxDestroy;

        void CLogType::load()
        {
            enable_hook(&ATF::CLogTypeDBTaskManager::ProcThread, &CLogType::ProcThread);
            enable_hook(&ATF::CLogTypeDBTaskManager::dtor_CLogTypeDBTaskManager, &CLogType::dtor_CLogTypeDBTaskManager);
        }

        void CLogType::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CLogType::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.log_type";
            return name;
        }

        void WINAPIV CLogType::ProcThread(
            void * pParam,
            ATF::Info::CLogTypeDBTaskManagerProcThread32_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            int counter = 0;
            auto pThis = (ATF::CLogTypeDBTaskManager*)pParam;

            while (!CLogType::m_bDBProcDestroy)
            {
                {
                    std::unique_lock<std::mutex> lock(CLogType::m_mtxDestroy);
                    if (CLogType::m_bDBProcDestroy)
                        break;

                    pThis->DBProcess();
                }
                
                if (++counter > 100)
                {
                    Sleep(1);
                    counter = 0;
                }
            }

            _endthread();
        }

        void WINAPIV CLogType::dtor_CLogTypeDBTaskManager(
            ATF::CLogTypeDBTaskManager* pObj,
            ATF::Info::CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_ptr next)
        {
            std::unique_lock<std::mutex> lock(CLogType::m_mtxDestroy);
            CLogType::m_bDBProcDestroy = true;
            next(pObj);
        }
    }
}