#include "stdafx.h"

#include "../../Common/ETypes.h"
#include "ItemCheckHelper.h"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace ItemCheckHelper
    {
        bool WINAPIV IsExchangable(ATF::_STORAGE_LIST::_db_con* pItem)
        {
            bool isExchangable = false;

            do
            {
                if (!pItem)
                {
                    break;
                }

                ATF::_base_fld* pRecordItem = ATF::Global::g_MainThread->m_tblItemData[pItem->m_byTableCode].GetRecord(pItem->m_wItemIndex);
                if (!pRecordItem)
                {
                    break;
                }

                switch ((e_code_item_table)pItem->m_byTableCode)
                {
                case e_code_item_table::tbl_code_upper:
                case e_code_item_table::tbl_code_lower:
                case e_code_item_table::tbl_code_gauntlet:
                case e_code_item_table::tbl_code_shoe:
                case e_code_item_table::tbl_code_helmet:
                case e_code_item_table::tbl_code_shield:
                    isExchangable = ((ATF::_DfnEquipItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_weapon:
                    isExchangable = ((ATF::_WeaponItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_cloak:
                    isExchangable = ((ATF::_CloakItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_ring: 
                case e_code_item_table::tbl_code_amulet:
                    isExchangable = ((ATF::_RingItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_bullet:
                    isExchangable = ((ATF::_BulletItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_maketool:
                    isExchangable = ((ATF::_MakeToolItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_bag:
                    isExchangable = ((ATF::_BagItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_potion:
                    isExchangable = ((ATF::_PotionItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_fcitem:
                    isExchangable = ((ATF::_ForceItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_battery:
                    isExchangable = ((ATF::_BatteryItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_ore:
                    isExchangable = ((ATF::_OreItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_res:
                    isExchangable = ((ATF::_ResourceItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_key:
                    isExchangable = ((ATF::_UnitKeyItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_booty:
                    isExchangable = ((ATF::_BootyItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_map:
                    isExchangable = ((ATF::_MapItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_town:
                    isExchangable = ((ATF::_TOWNItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_bdungeon:
                    isExchangable = ((ATF::_BattleDungeonItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_animus:
                    isExchangable = ((ATF::_AnimusItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_tower:
                    isExchangable = ((ATF::_GuardTowerItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_trap:
                    isExchangable = ((ATF::_TrapItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_siege_kit:
                    isExchangable = ((ATF::_SiegeKitItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_ticket:
                    isExchangable = ((ATF::_TicketItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_recovery:
                    isExchangable = ((ATF::_RecoveryItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_box:
                    isExchangable = ((ATF::_BoxItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_FIRECRACKER:
                    isExchangable = ((ATF::_FIRECRACKER_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_unmannedminer:
                    isExchangable = ((ATF::_UNmannedminer_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_radar:
                    isExchangable = ((ATF::_RadarItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_npc_link:
                    isExchangable = ((ATF::_NPCLink_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_npc_cupone:
                    isExchangable = ((ATF::_CouponItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_face:
                case e_code_item_table::tbl_code_event:
                default:
                    break;
                }
            } while (false);

            return isExchangable;
        }
    }
}
