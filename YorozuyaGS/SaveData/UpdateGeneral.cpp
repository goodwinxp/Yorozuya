#include "stdafx.h"

#include "UpdateGeneral.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CUpdateGeneral::load()
        {
            enable_hook(&ATF::CMainThread::_db_Update_General, &CUpdateGeneral::_db_Update_General);
        }

        void CUpdateGeneral::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CUpdateGeneral::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.update_general";
            return name;
        }

        bool WINAPIV CUpdateGeneral::_db_Update_General(
            ATF::CMainThread *pObj,
            unsigned int dwSerial,
            ATF::_AVATOR_DATA* pNewData,
            ATF::_AVATOR_DATA* pOldData,
            char* pSzQuery,
            bool bCheckLowHigh,
            ATF::Info::CMainThread_db_Update_General258_ptr next)
        {
            for (int i = 0; i < _countof(pNewData->dbAvator.m_fStartPos); ++i)
            {
                if (::std::isfinite(pOldData->dbAvator.m_fStartPos[i]) &&
                    ::std::isfinite(pNewData->dbAvator.m_fStartPos[i]))
                    continue;

                for (int j = 0; j < _countof(pNewData->dbAvator.m_fStartPos); ++j)
                {
                    pOldData->dbAvator.m_fStartPos[j] = 0.0f;
                    pNewData->dbAvator.m_fStartPos[j] = 1.0f;
                }
                break;
            }

            return next(pObj, dwSerial, pNewData, pOldData, pSzQuery, bCheckLowHigh);
        }
    }
}