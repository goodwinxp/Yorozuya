#include "stdafx.h"

#include "advert.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        void CAdvert::load()
        {
        }

        void CAdvert::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CAdvert::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addons.advert";
            return name;
        }

        void CAdvert::loop()
        {
            if (!m_bActivated)
                return;

            for (auto& i : m_vecRecords)
            {
                if (!i.timer.is_end())
                    continue;

                i.timer.begin(i.sDelay);

                char byType[2]{ 2, 14 };
                for (auto& player : ATF::Global::g_Player)
                {
                    if (!player.m_bLive)
                        continue;

                    if (!player.m_bOper)
                        continue;

                    if (i.bHideForPremium && player.IsApplyPcbangPrimium())
                        continue;

                    ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]
                        ->LoadSendMsg(player.m_ObjID.m_wIndex, byType, (char *)&i.packet, i.packet.size());

                    player.SendData_ChatTrans(
                        0,
                        -1,
                        player.GetObjRace(),
                        false,
                        (char *)i.sMsg.c_str(),
                        player.m_Param.m_byPvPGrade,
                        nullptr);
                }
            }
        }

        void CAdvert::configure(const rapidjson::Value & nodeConfig)
        {
            m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            if (!m_bActivated)
                return;

            for (auto& rec : nodeConfig["records"].GetArray())
            {
                advert_fld item(
                    RapidHelper::GetValueOrDefault(rec, "hide_for_premium", true),
                    RapidHelper::GetValue<::std::string>(rec, "message"),
                    ::std::chrono::seconds(RapidHelper::GetValue<uint64_t>(rec, "delay"))
                );
                m_vecRecords.emplace_back(item);
            }
        }
    }
}
