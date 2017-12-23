#include "stdafx.h"

#include "addon.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        bool CAddon::m_bActivated = false;
        bool CAddon::m_bOnlyPitboss = false;
        int CAddon::m_nRange = 10;

        void CAddon::load()
        {
            enable_hook(
                (ATF::Global::Info::CreateItemBox111_ptr)&ATF::Global::CreateItemBox,
                &CAddon::CreateItemBox);
        }

        void CAddon::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CAddon::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addons.radius_drop_loot";
            return name;
        }

        void CAddon::configure(const rapidjson::Value & nodeConfig)
        {
            CAddon::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            CAddon::m_bOnlyPitboss = RapidHelper::GetValueOrDefault(nodeConfig, "only_pitboss", false);
            CAddon::m_nRange = RapidHelper::GetValueOrDefault(nodeConfig, "range", 100);
        }

        ATF::CItemBox* CAddon::CreateItemBox(
            ATF::_STORAGE_LIST::_db_con* pItem,
            ATF::CPlayer* pOwner,
            unsigned int dwPartyBossSerial,
            bool bPartyShare,
            ATF::CCharacter* pThrower,
            char byCreateCode,
            ATF::CMapData* pMap,
            uint16_t wLayerIndex,
            float* pStdPos,
            bool bHide,
            ATF::Global::Info::CreateItemBox111_ptr next)
        {
            ATF::CItemBox* result = nullptr;
            do
            {
                if (!CAddon::m_bActivated)
                {
                    result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
                    break;
                }

                if (pThrower->m_ObjID.m_byKind == 0 &&
                    pThrower->m_ObjID.m_byID != (uint8_t)e_obj_id::obj_id_monster)
                {
                    result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
                    break;
                }

                ATF::CMonster* pMonster = (ATF::CMonster*)pThrower;
                if (CAddon::m_bOnlyPitboss && !pMonster->IsBossMonster())
                {
                    result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
                    break;
                }

                ATF::CItemBox* pItemBox = nullptr;

                ATF::Global::CItemBox_Ref gItemBox = **ATF::Global::g_ItemBox;
                for (auto& item_box : gItemBox)
                {
                    if (!item_box.m_bLive)
                    {
                        pItemBox = &item_box;
                        break;
                    }
                }

                if (pItemBox == nullptr)
                    break;

                ATF::_itembox_create_setdata Dst;
                memcpy(&Dst.Item, pItem, sizeof(Dst.Item));

                auto& ItemRecords = ATF::Global::g_MainThread->m_tblItemData[pItem->m_byTableCode];
                Dst.m_pRecordSet = ItemRecords.GetRecord(pItem->m_wItemIndex);
                if (Dst.m_pRecordSet == nullptr)
                    break;

                Dst.byCreateCode = byCreateCode;
                Dst.pOwner = pOwner;
                Dst.bParty = bPartyShare;
                Dst.pThrower = pThrower;
                Dst.m_pMap = pMap;
                Dst.m_nLayerIndex = wLayerIndex;
                Dst.dwPartyBossSerial = dwPartyBossSerial;
                if (!pMap->GetRandPosInRange(pStdPos, CAddon::m_nRange, Dst.m_fStartPos))
                    break;

                if (!pItemBox->Create(&Dst, bHide))
                    break;

                result = pItemBox;
            } while (false);

            return result;
        }
    }
}
