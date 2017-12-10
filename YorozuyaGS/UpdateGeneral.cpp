#include "stdafx.h"

#include "UpdateGeneral.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        template <typename T, size_t N>
        constexpr size_t size_array(T(&)[N])
        {
            return N;
        }

        

        void CUpdateGeneral::load()
        {
            enable_hook(&ATF::CMainThread::_db_Update_General, &CUpdateGeneral::_db_Update_General);
        }

        void CUpdateGeneral::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CUpdateGeneral::get_name()
        {
            static const ModuleName_t name = "fix_UpdateGeneral";
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
            for (int i = 0; i < size_array(pNewData->dbAvator.m_fStartPos); ++i)
            {
                if (_STD isfinite(pOldData->dbAvator.m_fStartPos[i]) &&
                    _STD isfinite(pNewData->dbAvator.m_fStartPos[i]))
                    continue;

                for (int j = 0; j < size_array(pNewData->dbAvator.m_fStartPos); ++j)
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