#pragma once

#include <array>
#include <filesystem>

namespace fs = ::std::experimental::filesystem::v1;

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

namespace GameServer
{
    namespace Addon
    {
        class CChatLog
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CChatLog() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;
        private:
            static bool m_bActivated;

            enum class chat_type : uint8_t
            {
                chat_circle,
                chat_far,
                chat_party,
                chat_race,
                chat_race_boss_cry,
                chat_guild,
                chat_map,
                chat_race_boss,
                chat_guild_est_sen,
                chat_multi_far,
                chat_re_resentation,
                chat_all,
                chat_trade,
                num
            };
            using ChatLogging_t = ::std::array<bool, (size_t)chat_type::num>;

            static ChatLogging_t m_arrChatLogging;

            static fs::path m_pathLogFolder;

        private:

        };
    };
};
