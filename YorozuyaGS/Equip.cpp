#include "stdafx.h"

#include "ETypes.h"
#include "Equip.h"
#include "PlayerEx.h"
#include <ATF/global.hpp>
#include <ATF/_set_item_check_request_clzo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        namespace
        {
            using namespace ATF;
            using namespace GameServer::Extension;
        }

        void CEquip::load()
        {
            auto& core = CATFCore::get_instance();
            enable_hook(&ATF::CPlayer::IsEffectableEquip, &CEquip::IsEffectableEquip);
            enable_hook(&ATF::CNetworkEX::SetItemCheckRequest, &CEquip::SetItemCheckRequest);
            enable_hook(&ATF::CPlayer::Emb_AddStorage, &CEquip::Emb_AddStorage);
            enable_hook(&ATF::CPlayer::Emb_DelStorage, &CEquip::Emb_DelStorage);
            enable_hook(&ATF::CPlayer::pc_SetItemCheckRequest, &CEquip::pc_SetItemCheckRequest);
        }

        void CEquip::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CPlayer::IsEffectableEquip);
            core.unset_hook(&ATF::CNetworkEX::SetItemCheckRequest);
            core.unset_hook(&ATF::CPlayer::Emb_AddStorage);
            core.unset_hook(&ATF::CPlayer::Emb_DelStorage);
            core.unset_hook(&ATF::CPlayer::pc_SetItemCheckRequest);
        }

        ModuleName_t CEquip::get_name()
        {
            static const ModuleName_t name = "fix_Equip";
            return name;
        }

        bool WINAPIV CEquip::IsEffectableEquip(
            ATF::CPlayer * pPlayer,
            ATF::_STORAGE_LIST::_storage_con * pCon, 
            ATF::Info::CPlayerIsEffectableEquip308_ptr next)
        {
            bool result = false;
            
            do 
            {
                if ((uint8_t)e_code_item_table::tbl_code_siege_kit == pCon->m_byTableCode)
                {
                    result = true;
                    break;
                }

                int nItemEquipGrade = ATF::Global::GetItemEquipGrade(pCon->m_byTableCode, pCon->m_wItemIndex);
                if (!pPlayer->IsEquipAbleGrade(nItemEquipGrade))
                    break;

                result = next(pPlayer, pCon);
            } while (false);
            
            return result;
        }

        bool WINAPIV CEquip::SetItemCheckRequest(
            ATF::CNetworkEX *pNetwork,
            int n, 
            char *pBuf,
            ATF::Info::CNetworkEXSetItemCheckRequest512_ptr next)
        {
            UNREFERENCED_PARAMETER(pNetwork);
            UNREFERENCED_PARAMETER(n);
            UNREFERENCED_PARAMETER(pBuf);
            UNREFERENCED_PARAMETER(next);
            return true;
        }

        ATF::_STORAGE_LIST::_db_con *WINAPIV CEquip::Emb_AddStorage(
            ATF::CPlayer * pPlayer, 
            char byStorageCode, 
            ATF::_STORAGE_LIST::_storage_con* pCon,
            bool bEquipChange, 
            bool bAdd, 
            ATF::Info::CPlayerEmb_AddStorage114_ptr next)
        {
            ATF::_STORAGE_LIST::_db_con* pItem = nullptr;

            do
            {
                pItem = next(pPlayer, byStorageCode, pCon, bEquipChange, bAdd);
                if (pItem == nullptr)
                    break;

                if (byStorageCode != STORAGE_POS::EMBELLISH &&
                    byStorageCode != STORAGE_POS::EQUIP)
                    break;

                auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
                PlayerEx.UpdateSetItem();
            } while (false);

            return pItem;
        }

        bool WINAPIV CEquip::Emb_DelStorage(
            ATF::CPlayer * pPlayer, 
            char byStorageCode,
            char byStorageIndex,
            bool bEquipChange,
            bool bDelete,
            char* strErrorCodePos, 
            ATF::Info::CPlayerEmb_DelStorage132_ptr next)
        {
            bool result = false;

            do 
            {
                if (byStorageCode >= STORAGE_POS::STORAGE_NUM)
                {
                    result = next(pPlayer, byStorageCode, byStorageIndex, bEquipChange, bDelete, strErrorCodePos);
                    break;
                }

                result = next(pPlayer, byStorageCode, byStorageIndex, bEquipChange, bDelete, strErrorCodePos);
                if (!result)
                    break;

                if (byStorageCode != STORAGE_POS::EMBELLISH &&
                    byStorageCode != STORAGE_POS::EQUIP)
                    break;

                auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
                PlayerEx.UpdateSetItem();
            } while (false);

            return result;
        }

        bool WINAPIV CEquip::pc_SetItemCheckRequest(
            ATF::CPlayer *pPlayer,
            unsigned int dwSetItem,
            char bySetItemNum,
            char bySetEffectNum,
            bool bSet,
            ATF::Info::CPlayerpc_SetItemCheckRequest1937_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            uint8_t byResult;
            return CPlayerEx::pc_SetItemCheckRequest(pPlayer, dwSetItem, bySetItemNum, bySetEffectNum, bSet, byResult);
        }
    }
}