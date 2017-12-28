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
    }
}
