#pragma once

#include <ATF/_DfnEquipItem_fld.hpp>
#include <ATF/_WeaponItem_fld.hpp>
#include <ATF/_CloakItem_fld.hpp>
#include <ATF/_RingItem_fld.hpp>
#include <ATF/_BulletItem_fld.hpp>
#include <ATF/_MakeToolItem_fld.hpp>
#include <ATF/_BagItem_fld.hpp>
#include <ATF/_PotionItem_fld.hpp>
#include <ATF/_ForceItem_fld.hpp>
#include <ATF/_BatteryItem_fld.hpp>
#include <ATF/_OreItem_fld.hpp>
#include <ATF/_ResourceItem_fld.hpp>
#include <ATF/_UnitKeyItem_fld.hpp>
#include <ATF/_BootyItem_fld.hpp>
#include <ATF/_MapItem_fld.hpp>
#include <ATF/_TOWNItem_fld.hpp>
#include <ATF/_BattleDungeonItem_fld.hpp>
#include <ATF/_AnimusItem_fld.hpp>
#include <ATF/_GuardTowerItem_fld.hpp>
#include <ATF/_TrapItem_fld.hpp>
#include <ATF/_SiegeKitItem_fld.hpp>
#include <ATF/_TicketItem_fld.hpp>
#include <ATF/_RecoveryItem_fld.hpp>
#include <ATF/_BoxItem_fld.hpp>
#include <ATF/_FIRECRACKER_fld.hpp>
#include <ATF/_UNmannedminer_fld.hpp>
#include <ATF/_RadarItem_fld.hpp>
#include <ATF/_NPCLink_fld.hpp>
#include <ATF/_CouponItem_fld.hpp>

namespace GameServer
{
    enum class e_code_item_table : size_t
    {
        tbl_code_upper = 0,
        tbl_code_lower = 1,
        tbl_code_gauntlet = 2,
        tbl_code_shoe = 3,
        tbl_code_helmet = 4,
        tbl_code_shield = 5,
        tbl_code_weapon = 6,
        tbl_code_cloak = 7,
        tbl_code_ring = 8,
        tbl_code_amulet = 9,
        tbl_code_bullet = 10,
        tbl_code_maketool = 11,
        tbl_code_bag = 12,
        tbl_code_potion = 13,
        tbl_code_face = 14,
        tbl_code_fcitem = 15,
        tbl_code_battery = 16,
        tbl_code_ore = 17,
        tbl_code_res = 18,
        tbl_code_key = 19,
        tbl_code_booty = 20,
        tbl_code_map = 21,
        tbl_code_town = 22,
        tbl_code_bdungeon = 23,
        tbl_code_animus = 24,
        tbl_code_tower = 25,
        tbl_code_trap = 26,
        tbl_code_siege_kit = 27,
        tbl_code_ticket = 28,
        tbl_code_event = 29,
        tbl_code_recovery = 30,
        tbl_code_box = 31,
        tbl_code_FIRECRACKER = 32,
        tbl_code_unmannedminer = 33,
        tbl_code_radar = 34,
        tbl_code_npc_link = 35,
        tbl_code_npc_cupone = 36,
        item_tbl_num = 37,
    };

    enum class e_obj_id : uint8_t
    {
        obj_id_player = 0,
        obj_id_monster = 1,
        obj_id_npc = 2,
        obj_id_animus = 3,
        obj_id_tower = 4,
        obj_id_stone = 5,
        obj_id_keeper = 6,
        obj_id_trap = 7,
        num = 8
    };

    enum class e_type_line : uint8_t
    {
        client = 0,
        account = 1,
        web_agent = 2,
        billing = 3,
        num
    };

    #define MAX_PLAYER 2532
}
