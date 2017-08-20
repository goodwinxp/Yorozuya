#include "stdafx.h"

#include "CheckEquip.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CCheckEquip::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::CPlayer::IsEffectableEquip, &CCheckEquip::IsEffectableEquip);
        }

        void CCheckEquip::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CPlayer::IsEffectableEquip);
        }

        void CCheckEquip::loop()
        {
        }

        ModuleVersion_t CCheckEquip::get_version()
        {
            return usVersion;
        }

        ModuleName_t CCheckEquip::get_name()
        {
            static const ModuleName_t name = "fix_CheckEquip";
            return name;
        }

        void CCheckEquip::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool WINAPIV CCheckEquip::IsEffectableEquip(
            ATF::CPlayer * pPlayer,
            ATF::_STORAGE_LIST::_storage_con * pCon, 
            ATF::Info::CPlayerIsEffectableEquip308_ptr next)
        {
            bool result = false;
            
            do 
            {
                int nItemEquipGrade = ATF::Global::GetItemEquipGrade(pCon->m_byTableCode, pCon->m_wItemIndex);
                if (!pPlayer->IsEquipAbleGrade(nItemEquipGrade))
                    break;

                result = next(pPlayer, pCon);
            } while (false);
            
            return result;
        }
    }
}