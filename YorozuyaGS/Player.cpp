#include "stdafx.h"

#include "Player.h"
#include "ETypes.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayer::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CPlayer::CalcPvP, &CPlayer::CalcPvP);
            core.set_hook(&ATF::CPlayer::CalPvpTempCash, &CPlayer::CalPvpTempCash);
        }

        void CPlayer::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CPlayer::CalcPvP);
            core.unset_hook(&ATF::CPlayer::CalPvpTempCash);
        }

        void CPlayer::loop()
        {
        }

        ModuleVersion_t CPlayer::get_version()
        {
            return ATF::usVersion;
        }

        ModuleName_t CPlayer::get_name()
        {
            static const ModuleName_t name = "fix_player";
            return name;
        }

        void CPlayer::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        void WINAPIV CPlayer::CalcPvP(
            ATF::CPlayer * pObj, 
            ATF::CPlayer * pDier, 
            char byKillerObjID,
            ATF::info::CPlayerCalcPvP74_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
            {
                return;
            }

            next(pObj, pDier, byKillerObjID);
        }

        void WINAPIV CPlayer::CalPvpTempCash(
            ATF::CPlayer * pObj, 
            ATF::CPlayer * pDier, 
            char byKillerObjID,
            ATF::info::CPlayerCalPvpTempCash52_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
            {
                return;
            }

            next(pObj, pDier, byKillerObjID);
        }
    }
}