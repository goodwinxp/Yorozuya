#include "stdafx.h"

#include "ChatLog.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>
#include <unordered_map>

namespace GameServer
{
    namespace Addon
    {
        namespace
        {
            const ::std::string default_folder_path = "./YorozuyaGS/Logs/Chat/";
        }

        bool CChatLog::m_bActivated = false;

        CChatLog::ChatLogging_t CChatLog::m_arrChatLogging{ false };

        fs::path CChatLog::m_pathLogFolder = default_folder_path;

        void CChatLog::load()
        {
            enable_hook(&ATF::CPlayer::pc_ChatCircleRequest, &CChatLog::pc_ChatCircleRequest);
            enable_hook(&ATF::CPlayer::pc_ChatFarRequest, &CChatLog::pc_ChatFarRequest);
            enable_hook(&ATF::CPlayer::pc_ChatPartyRequest, &CChatLog::pc_ChatPartyRequest);
            enable_hook(&ATF::CPlayer::pc_ChatRaceRequest, &CChatLog::pc_ChatRaceRequest);
            enable_hook(&ATF::CPlayer::pc_ChatRaceBossCryRequest, &CChatLog::pc_ChatRaceBossCryRequest);
            enable_hook(&ATF::CPlayer::pc_ChatGuildRequest, &CChatLog::pc_ChatGuildRequest);
            enable_hook(&ATF::CPlayer::pc_ChatMapRequest, &CChatLog::pc_ChatMapRequest);
            enable_hook(&ATF::CPlayer::pc_ChatRaceBossRequest, &CChatLog::pc_ChatRaceBossRequest);
            enable_hook(&ATF::CPlayer::pc_ChatGuildEstSenRequest, &CChatLog::pc_ChatGuildEstSenRequest);
            enable_hook(&ATF::CPlayer::pc_ChatMultiFarRequest, &CChatLog::pc_ChatMultiFarRequest);
            enable_hook(&ATF::CPlayer::pc_ChatRePresentationRequest, &CChatLog::pc_ChatRePresentationRequest);
            enable_hook(&ATF::CPlayer::pc_ChatAllRequest, &CChatLog::pc_ChatAllRequest);
            enable_hook(&ATF::CPlayer::pc_ChatTradeRequestMsg, &CChatLog::pc_ChatTradeRequestMsg);
        }

        void CChatLog::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CChatLog::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.chat_log";
            return name;
        }

        void CChatLog::configure(const rapidjson::Value & nodeConfig)
        {
            CChatLog::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            if (!m_bActivated)
                return;

            CChatLog::m_pathLogFolder = RapidHelper::GetValueOrDefault(nodeConfig, "folder", default_folder_path);

            ::std::unordered_map<::std::string, chat_type> mapChatName {
                { "circle", chat_type::chat_circle },
                { "far", chat_type::chat_far },
                { "party", chat_type::chat_party },
                { "race", chat_type::chat_race },
                { "race_boss_cry", chat_type::chat_race_boss_cry },
                { "guild", chat_type::chat_guild },
                { "map", chat_type::chat_map },
                { "race_boss", chat_type::chat_race_boss },
                { "guild_est_sen", chat_type::chat_guild_est_sen },
                { "multi_far", chat_type::chat_multi_far },
                { "re_resentation", chat_type::chat_re_resentation },
                { "all", chat_type::chat_all },
                { "trade", chat_type::chat_trade }
            };

            for (auto& chat : nodeConfig.GetObject())
            {
                ::std::string sNameBlock(chat.name.GetString());
                const auto if_find = mapChatName.find(sNameBlock);
                if (if_find == mapChatName.cend())
                    continue;

                CChatLog::m_arrChatLogging[(size_t)if_find->second] = chat.value.Get<bool>();
            }
        }

        void CChatLog::pc_ChatCircleRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatCircleRequest1633_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatFarRequest(
            ATF::CPlayer* pObj,
            char* pwszName,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatFarRequest1635_ptr next)
        {
            next(pObj, pwszName, pwszChatData);
        }

        void CChatLog::pc_ChatPartyRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatPartyRequest1651_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatRaceRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatRaceRequest1657_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatRaceBossCryRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatRaceBossCryRequest1653_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatGuildRequest(
            ATF::CPlayer* pObj,
            unsigned int dwDstSerial,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatGuildRequest1641_ptr next)
        {
            next(pObj, dwDstSerial, pwszChatData);
        }

        void CChatLog::pc_ChatMapRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatMapRequest1643_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatRaceBossRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatRaceBossRequest1655_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatGuildEstSenRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatGuildEstSenRequest1639_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatMultiFarRequest(
            ATF::CPlayer* pObj,
            char byDstNum,
            ATF::_w_name* pDstName,
            char* pwszMsg,
            ATF::Info::CPlayerpc_ChatMultiFarRequest1647_ptr next)
        {
            next(pObj, byDstNum, pDstName, pwszMsg);
        }

        void CChatLog::pc_ChatRePresentationRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatRePresentationRequest1659_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatAllRequest(
            ATF::CPlayer* pObj,
            char* pwszChatData,
            ATF::Info::CPlayerpc_ChatAllRequest1631_ptr next)
        {
            next(pObj, pwszChatData);
        }

        void CChatLog::pc_ChatTradeRequestMsg(
            ATF::CPlayer* pObj,
            char bySubType,
            char* pwszTradeMsg,
            ATF::Info::CPlayerpc_ChatTradeRequestMsg1661_ptr next)
        {
            next(pObj, bySubType, pwszTradeMsg);
        }
    }
}
