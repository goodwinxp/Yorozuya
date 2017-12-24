#include "stdafx.h"

#include "StoneHP.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>
#include <ATF/_holy_stone_hp_inform_zocl.hpp>

namespace GameServer
{
    namespace Addon
    {
        namespace
        {
            const int default_lv = -1;
        }

        bool CStoneHP::m_bActivated = false;
        int CStoneHP::m_nMinLv = default_lv;

        void CStoneHP::load()
        {
            enable_hook(&ATF::CHolyStoneSystem::SendNotifyHolyStoneDestroyedToRaceBoss, &CStoneHP::SendNotifyHolyStoneDestroyedToRaceBoss);
            enable_hook(&ATF::CHolyStoneSystem::SendHolyStoneHPToRaceBoss, &CStoneHP::SendHolyStoneHPToRaceBoss);
            enable_hook(&ATF::CHolyStoneSystem::SendHolyStoneHP, &CStoneHP::SendHolyStoneHP);
        }

        void CStoneHP::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CStoneHP::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addons.stone_hp";
            return name;
        }

        void CStoneHP::configure(const rapidjson::Value & nodeConfig)
        {
            CStoneHP::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            CStoneHP::m_nMinLv = RapidHelper::GetValueOrDefault(nodeConfig, "min_lv", default_lv);
        }

        bool CStoneHP::check_lv(int nLv)
        {
            if (CStoneHP::m_nMinLv == default_lv)
                return true;

            return nLv >= CStoneHP::m_nMinLv;
        }

        void WINAPIV CStoneHP::SendNotifyHolyStoneDestroyedToRaceBoss(
            ATF::CHolyStoneSystem * pObj,
            ATF::Info::CHolyStoneSystemSendNotifyHolyStoneDestroyedToRaceBoss150_ptr next)
        {
            if (!m_bActivated)
            {
                next(pObj);
                return;
            }

            char byType[2]{ 13, 34 };
            ATF::_holy_stone_hp_inform_zocl msg;
            memset(&msg, 0, sizeof(msg));

            ATF::Global::CHolyStone_Ref gStone = **ATF::Global::g_Stone;

            for (int j = 0; j < 3; ++j)
                msg.wHPRate[j] = gStone[j].GetHP();

            for (auto& player : ATF::Global::g_Player)
            {
                if (player.m_bLive && player.m_bOper)
                {
                    auto instance = ATF::CPvpUserAndGuildRankingSystem::Instance();
                    bool bIsCurrentRaceBossGroup = instance->IsCurrentRaceBossGroup(
                        player.m_Param.GetRaceCode(),
                        player.m_Param.GetCharSerial());

                    if (bIsCurrentRaceBossGroup || check_lv(player.GetLevel()))
                    {
                        ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]
                            ->LoadSendMsg(player.m_ObjID.m_wIndex, byType, (char *)&msg, sizeof(msg)); // or size = 1
                    }
                }
            }
        }

        void WINAPIV CStoneHP::SendHolyStoneHPToRaceBoss(
            ATF::CHolyStoneSystem * pObj,
            ATF::Info::CHolyStoneSystemSendHolyStoneHPToRaceBoss118_ptr next)
        {
            if (!m_bActivated)
            {
                next(pObj);
                return;
            }

            char byType[2]{ 13, 33 };
            ATF::_holy_stone_hp_inform_zocl msg;
            memset(&msg, 0, sizeof(msg));

            ATF::Global::CHolyStone_Ref gStone = **ATF::Global::g_Stone;

            for (int j = 0; j < 3; ++j)
                msg.wHPRate[j] = gStone[j].GetHP();

            for (auto& player : ATF::Global::g_Player)
            {
                if (player.m_bLive && player.m_bOper)
                {
                    auto instance = ATF::CPvpUserAndGuildRankingSystem::Instance();
                    bool bIsCurrentRaceBossGroup = instance->IsCurrentRaceBossGroup(
                        player.m_Param.GetRaceCode(),
                        player.m_Param.GetCharSerial());

                    if (bIsCurrentRaceBossGroup || check_lv(player.GetLevel()))
                    {
                        ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]
                            ->LoadSendMsg(player.m_ObjID.m_wIndex, byType, (char *)&msg, sizeof(msg));
                    }
                }
            }
        }

        void WINAPIV CStoneHP::SendHolyStoneHP(
            ATF::CHolyStoneSystem * pObj,
            ATF::CPlayer * pkPlayer,
            ATF::Info::CHolyStoneSystemSendHolyStoneHP116_ptr next)
        {
            if (!m_bActivated)
            {
                next(pObj, pkPlayer);
                return;
            }

            if (pObj->m_SaveData.m_nSceneCode == 1 &&
                pObj->m_SaveData.m_nHolyMasterRace == -1)
            {
                if (pkPlayer->m_bLive && pkPlayer->m_bOper)
                {
                    auto instance = ATF::CPvpUserAndGuildRankingSystem::Instance();
                    bool bIsCurrentRaceBossGroup = instance->IsCurrentRaceBossGroup(
                        pkPlayer->m_Param.GetRaceCode(),
                        pkPlayer->m_Param.GetCharSerial());

                    if (bIsCurrentRaceBossGroup || check_lv(pkPlayer->GetLevel()))
                    {
                        ATF::_holy_stone_hp_inform_zocl msg;
                        memset(&msg, 0, sizeof(msg));

                        ATF::Global::CHolyStone_Ref gStone = **ATF::Global::g_Stone;

                        for (int j = 0; j < 3; ++j)
                            msg.wHPRate[j] = gStone[j].GetHP();

                        char byType[2]{ 13, 33 };
                        ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]
                            ->LoadSendMsg(pkPlayer->m_ObjID.m_wIndex, byType, (char *)&msg, sizeof(msg));
                    }
                }
            }
        }
    }
}
