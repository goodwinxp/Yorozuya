#include "stdafx.h"

#include "ReplaceLootName.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>
#include <ATF/_itembox_fixpositon_zocl.hpp>
#include <ATF/_itembox_create_zocl.hpp>

namespace GameServer
{
    namespace Addon
    {
        bool CReplaceLootName::m_bActivated = false;
        CReplaceLootName::_item_code CReplaceLootName::m_ReplaceItem;

        void CReplaceLootName::load()
        {
            enable_hook(&ATF::CItemBox::SendMsg_Create, &CReplaceLootName::SendMsg_Create);
            enable_hook(&ATF::CItemBox::SendMsg_FixPosition, &CReplaceLootName::SendMsg_FixPosition);
            enable_hook(&ATF::CPlayer::pc_TakeGroundingItem, &CReplaceLootName::pc_TakeGroundingItem);
        }

        void CReplaceLootName::unload()
        {
            cleanup_all_hook();
        }

        void CReplaceLootName::zone_start()
        {
            int nTableCode = ATF::Global::GetItemTableCode((char *)m_sItemCode.c_str());
            if (nTableCode == -1)
            {
                throw std::runtime_error("not found table code for item code = " + m_sItemCode);
            }

            auto& ItemRecords = ATF::Global::g_MainThread->m_tblItemData[nTableCode];
            auto pRecord = ItemRecords.GetRecord((char *)m_sItemCode.c_str());
            if (!pRecord)
            {
                throw std::runtime_error("not found item = " + m_sItemCode);
            }

            m_ReplaceItem.nItemIndx = pRecord->m_dwIndex;
            m_ReplaceItem.nTableCode = nTableCode;
        }

        Yorozuya::Module::ModuleName_t CReplaceLootName::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addons.replace_loot_name";
            return name;
        }

        void CReplaceLootName::configure(
            const rapidjson::Value& nodeConfig)
        {
            m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            m_sItemCode = RapidHelper::GetValue<std::string>(nodeConfig, "replace_item");
        }

        CReplaceLootName::_item_code& CReplaceLootName::GetItemCode()
        {
            return m_ReplaceItem;
        }

        void WINAPIV CReplaceLootName::SendMsg_Create(
            ATF::CItemBox * pObj,
            ATF::Info::CItemBoxSendMsg_Create14_ptr next)
        {
            if (!CReplaceLootName::m_bActivated)
            {
                next(pObj);
                return;
            }

            ATF::_itembox_create_zocl msg;
            msg.byItemTableCode = GetItemCode().nTableCode;
            msg.wItemRecIndex = GetItemCode().nItemIndx;
            msg.byAmount = pObj->m_Item.m_dwDur;
            msg.wBoxIndex = pObj->m_ObjID.m_wIndex;
            msg.byState = pObj->m_nStateCode;
            msg.dwOwerSerial = pObj->m_dwOwnerSerial;
            msg.idDumber.byID = pObj->m_byThrowerID;
            msg.idDumber.wIndex = pObj->m_wThrowerIndex;
            msg.idDumber.dwSerial = pObj->m_dwThrowerSerial;
            msg.byThrowerRace = pObj->m_byThrowerRaceCode;
            ATF::Global::FloatToShort(pObj->m_fCurPos, msg.zPos, _countof(msg.zPos));
            char pbyType[2]{ 3, 20 };

            if (pObj->m_bHide)
            {
                if (pObj->m_wOwnerIndex != 0xFFFF)
                {
                    ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->
                        LoadSendMsg(pObj->m_wOwnerIndex, pbyType, (char *)&msg, sizeof(msg));
                }
            }
            else
            {
                pObj->CircleReport(pbyType, (char *)&msg, sizeof(msg), false);
            }
        }

        void WINAPIV CReplaceLootName::SendMsg_FixPosition(
            ATF::CItemBox * pObj, int n,
            ATF::Info::CItemBoxSendMsg_FixPosition18_ptr next)
        {
            if (!CReplaceLootName::m_bActivated)
            {
                next(pObj, n);
                return;
            }

            if (pObj->m_bHide)
                return;

            ATF::_itembox_fixpositon_zocl msg;
            msg.byItemTableCode = GetItemCode().nTableCode;
            msg.wItemRecIndex = GetItemCode().nItemIndx;
            msg.byAmount = pObj->m_Item.m_dwDur;
            msg.byState = pObj->m_nStateCode;
            msg.wItemBoxIndex = pObj->m_ObjID.m_wIndex;
            msg.dwOwerSerial = pObj->m_dwOwnerSerial;
            msg.byThrowerRace = pObj->m_byThrowerRaceCode;
            ATF::Global::FloatToShort(pObj->m_fCurPos, msg.zPos, _countof(msg.zPos));

            char pbyType[] = { 4, 15 };
            ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(n, pbyType, (char *)&msg, sizeof(msg));
        }

        void WINAPIV CReplaceLootName::pc_TakeGroundingItem(
            ATF::CPlayer * pObj,
            ATF::CItemBox * pBox,
            uint16_t wAddSerial,
            ATF::Info::CPlayerpc_TakeGroundingItem1947_ptr next)
        {
            ATF::_STORAGE_LIST::_db_con* pItem = nullptr;
            do
            {
                if (!CReplaceLootName::m_bActivated)
                    break;

                if (!ATF::Global::IsOverLapItem(pBox->m_Item.m_byTableCode))
                {
                    break;
                }

                for (auto& item : pObj->m_Param.m_dbInven.m_List)
                {
                    if (!item.m_bLoad)
                        continue;

                    if (item.m_bLock)
                        continue;

                    if (item.m_byTableCode != pBox->m_Item.m_byTableCode)
                        continue;

                    if (item.m_wItemIndex != pBox->m_Item.m_wItemIndex)
                        continue;

                    if (item.m_dwDur + pBox->m_Item.m_dwDur <= 99)
                    {
                        pItem = &item;
                        break;
                    }
                }

                if (pItem == nullptr)
                    break;

                wAddSerial = pItem->m_wSerial;
            } while (false);

            next(pObj, pBox, wAddSerial);
            if (CReplaceLootName::m_bActivated && pItem && wAddSerial != -1)
            {
                pObj->SendMsg_AdjustAmountInform(0, wAddSerial, pItem->m_dwDur);
            }
        }
    }
}