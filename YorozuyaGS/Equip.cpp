#include "stdafx.h"

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
            core.set_hook(&ATF::CPlayer::IsEffectableEquip, &CEquip::IsEffectableEquip);
            core.set_hook(&ATF::CNetworkEX::SetItemCheckRequest, &CEquip::SetItemCheckRequest);
            core.set_hook(&ATF::CPlayer::Emb_AddStorage, &CEquip::Emb_AddStorage);
            core.set_hook(&ATF::CPlayer::Emb_DelStorage, &CEquip::Emb_DelStorage);
            core.set_hook(&ATF::CPlayer::pc_SetItemCheckRequest, &CEquip::pc_SetItemCheckRequest);
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

        void CEquip::loop()
        {
        }

        ModuleVersion_t CEquip::get_version()
        {
            return usVersion;
        }

        ModuleName_t CEquip::get_name()
        {
            static const ModuleName_t name = "fix_Equip";
            return name;
        }

        void CEquip::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool WINAPIV CEquip::IsEffectableEquip(
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

        bool WINAPIV CEquip::SetItemCheckRequest(
            ATF::CNetworkEX *pNetwork,
            int n, 
            char *pBuf,
            ATF::Info::CNetworkEXSetItemCheckRequest512_ptr next)
        {
            UNREFERENCED_PARAMETER(pNetwork);
            UNREFERENCED_PARAMETER(next);

            if (n < ATF::Global::max_player)
            {
                auto pPlayer = &ATF::Global::g_Player[n];
                if (pPlayer->m_bOper)
                {
                    ATF::_set_item_check_request_clzo* pMsg = (ATF::_set_item_check_request_clzo*)pBuf;
                    if (pMsg->bSet)
                    {
                        auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
                        PlayerEx.set_item_check_request(pMsg->dwSetIndex, pMsg->bySetItemNum, pMsg->bySetEffectNum);
                    }
                    else
                    {
                        pPlayer->SendMsg_SetItemCheckResult(2, pMsg->dwSetIndex, pMsg->bySetItemNum);
                    }
                }
            }

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
                PlayerEx.update_set_item();
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
                PlayerEx.update_set_item();
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
            bool result = false;

            do
            {
                auto pSUItemSystemInst = ATF::CSUItemSystem::Instance();
                auto pSetItemType = pSUItemSystemInst->GetCSetItemType();
                if (!pSetItemType)
                {
                    break;
                }

                auto pSI = pSetItemType->Getsi_interpret(dwSetItem);
                if (!pSI)
                {
                    break;
                }

                uint8_t byResult = 9;
                if (!bSet)
                {
                    byResult = pPlayer->m_clsSetItem.SetOffEffect(dwSetItem, bySetItemNum, bySetEffectNum);
                    if (byResult == 1)
                        pPlayer->ApplySetItemEffect(pSI, dwSetItem, bySetItemNum, bySetEffectNum, false);
                }
                else
                {
                    char szStrCode[64]{ 0 };
                    bool bIsEquipAbleGrade = false;

                    int nTableCode = pSUItemSystemInst->GetSetItemTableInfo(dwSetItem, szStrCode, 64);
                    if (nTableCode > -1)
                    {
                        int nEquipGrade = ATF::Global::GetItemEquipGrade(nTableCode, szStrCode);
                        if (pPlayer->IsEquipAbleGrade(nEquipGrade))
                            bIsEquipAbleGrade = true;
                    }

                    if (bIsEquipAbleGrade)
                    {
                        byResult = pPlayer->m_clsSetItem.SetOnEffect(
                            &pPlayer->m_pUserDB->m_AvatorData,
                            dwSetItem,
                            bySetItemNum,
                            bySetEffectNum);

                        switch (byResult)
                        {
                        case 0:
                            pPlayer->ApplySetItemEffect(pSI, dwSetItem, bySetItemNum, bySetEffectNum, true);
                            break;
                        case 8:
                            pPlayer->ApplySetItemEffect(
                                pSI, 
                                pPlayer->m_clsSetItem.GetResetIdx(),
                                pPlayer->m_clsSetItem.GetResetItemNum(),
                                pPlayer->m_clsSetItem.GetResetEffectNum(),
                                false);
                            pPlayer->ApplySetItemEffect(
                                pSI, 
                                dwSetItem, 
                                bySetItemNum, 
                                bySetEffectNum, 
                                true);
                            break;
                        case 4:
                        case 3:
                        case 2:
                        case 7:
                            break;
                        default:
                            byResult = 9;
                            break;
                        }
                    }
                }

                result = true;
            } while (false);

            return result;
        }
    }
}