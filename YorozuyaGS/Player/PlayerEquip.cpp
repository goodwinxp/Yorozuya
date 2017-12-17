#include "stdafx.h"

#include "PlayerEquip.h"
#include "../../Common/ETypes.h"
#include "../PlayerEx/PlayerEx.h"

#include <ATF/global.hpp>
#include <ATF/_set_item_check_request_clzo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        namespace
        {
            using namespace GameServer::Extension;
        }

        void CPlayerEquip::load()
        {
            enable_hook(&ATF::CPlayer::IsEffectableEquip, &CPlayerEquip::IsEffectableEquip);
            enable_hook(&ATF::CPlayer::Emb_AddStorage, &CPlayerEquip::Emb_AddStorage);
            enable_hook(&ATF::CPlayer::Emb_DelStorage, &CPlayerEquip::Emb_DelStorage);
            enable_hook(&ATF::CPlayer::pc_SetItemCheckRequest, &CPlayerEquip::pc_SetItemCheckRequest);
        }

        void CPlayerEquip::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerEquip::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.equip";
            return name;
        }

        bool WINAPIV CPlayerEquip::IsEffectableEquip(
            ATF::CPlayer * pPlayer,
            ATF::_STORAGE_LIST::_storage_con * pCon, 
            ATF::Info::CPlayerIsEffectableEquip308_ptr next)
        {
            bool result = false;
            
            do 
            {
                if ((uint8_t)e_code_item_table::tbl_code_siege_kit == pCon->m_byTableCode)
                {
                    result = next(pPlayer, pCon);
                    break;
                }

                int nItemEquipGrade = ATF::Global::GetItemEquipGrade(pCon->m_byTableCode, pCon->m_wItemIndex);
                if (!pPlayer->IsEquipAbleGrade(nItemEquipGrade))
                    break;

                result = next(pPlayer, pCon);
            } while (false);
            
            return result;
        }

        ATF::_STORAGE_LIST::_db_con *WINAPIV CPlayerEquip::Emb_AddStorage(
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

                if (byStorageCode != ATF::STORAGE_POS::EMBELLISH &&
                    byStorageCode != ATF::STORAGE_POS::EQUIP)
                    break;

                auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
                PlayerEx.UpdateSetItem();
            } while (false);

            return pItem;
        }

        bool WINAPIV CPlayerEquip::Emb_DelStorage(
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
                if (byStorageCode >= ATF::STORAGE_POS::STORAGE_NUM)
                {
                    result = next(pPlayer, byStorageCode, byStorageIndex, bEquipChange, bDelete, strErrorCodePos);
                    break;
                }

                result = next(pPlayer, byStorageCode, byStorageIndex, bEquipChange, bDelete, strErrorCodePos);
                if (!result)
                    break;

                if (byStorageCode != ATF::STORAGE_POS::EMBELLISH &&
                    byStorageCode != ATF::STORAGE_POS::EQUIP)
                    break;

                auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
                PlayerEx.UpdateSetItem();
            } while (false);

            return result;
        }

        bool WINAPIV CPlayerEquip::pc_SetItemCheckRequest(
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