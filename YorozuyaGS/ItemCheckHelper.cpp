#include "stdafx.h"

#include "Etypes.h"
#include "ItemCheckHelper.h"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace ItemCheckHelper
    {
        using namespace ATF;

        bool WINAPIV IsExchangable(ATF::_STORAGE_LIST::_db_con* pItem)
        {
            bool isExchangable = false;

            do
            {
                if (!pItem)
                {
                    break;
                }

                _base_fld* pRecordItem = global::g_MainThread->m_tblItemData[pItem->m_byTableCode].GetRecord(pItem->m_wItemIndex);
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
                    isExchangable = ((_DfnEquipItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_weapon:
                    isExchangable = ((_WeaponItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_cloak:
                    isExchangable = ((_CloakItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_ring: 
                case e_code_item_table::tbl_code_amulet:
                    isExchangable = ((_RingItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_bullet:
                    isExchangable = ((_BulletItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_maketool:
                    isExchangable = ((_MakeToolItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_bag:
                    isExchangable = ((_BagItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_potion:
                    isExchangable = ((_PotionItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_fcitem:
                    isExchangable = ((_ForceItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_battery:
                    isExchangable = ((_BatteryItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_ore:
                    isExchangable = ((_OreItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_res:
                    isExchangable = ((_ResourceItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_key:
                    isExchangable = ((_UnitKeyItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_booty:
                    isExchangable = ((_BootyItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_map:
                    isExchangable = ((_MapItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_town:
                    isExchangable = ((_TOWNItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_bdungeon:
                    isExchangable = ((_BattleDungeonItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_animus:
                    isExchangable = ((_AnimusItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_tower:
                    isExchangable = ((_GuardTowerItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_trap:
                    isExchangable = ((_TrapItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_siege_kit:
                    isExchangable = ((_SiegeKitItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_ticket:
                    isExchangable = ((_TicketItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_recovery:
                    isExchangable = ((_RecoveryItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_box:
                    isExchangable = ((_BoxItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_FIRECRACKER:
                    isExchangable = ((_FIRECRACKER_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_unmannedminer:
                    isExchangable = ((_UNmannedminer_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_radar:
                    isExchangable = ((_RadarItem_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_npc_link:
                    isExchangable = ((_NPCLink_fld *)pRecordItem)->m_bExchange;
                    break;
                case e_code_item_table::tbl_code_npc_cupone:
                    isExchangable = ((_CouponItem_fld *)pRecordItem)->m_bExchange;
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
