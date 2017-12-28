#pragma once

#include <array>
#include <filesystem>

namespace fs = ::std::experimental::filesystem::v1;

#include <ATF/CPlayerInfo.hpp>
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
            static void WINAPIV pc_ChatCircleRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatCircleRequest1633_ptr next);

            static void WINAPIV pc_ChatFarRequest(
                ATF::CPlayer* pObj,
                char* pwszName,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatFarRequest1635_ptr next);

            static void WINAPIV pc_ChatPartyRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatPartyRequest1651_ptr next);

            static void WINAPIV pc_ChatRaceRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatRaceRequest1657_ptr next);

            static void WINAPIV pc_ChatRaceBossCryRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatRaceBossCryRequest1653_ptr next);

            static void WINAPIV pc_ChatGuildRequest(
                ATF::CPlayer* pObj,
                unsigned int dwDstSerial,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatGuildRequest1641_ptr next);

            static void WINAPIV pc_ChatMapRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatMapRequest1643_ptr next);

            static void WINAPIV pc_ChatRaceBossRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatRaceBossRequest1655_ptr next);

            static void WINAPIV pc_ChatGuildEstSenRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatGuildEstSenRequest1639_ptr next);

            static void WINAPIV pc_ChatMultiFarRequest(
                ATF::CPlayer* pObj,
                char byDstNum,
                ATF::_w_name* pDstName,
                char* pwszMsg,
                ATF::Info::CPlayerpc_ChatMultiFarRequest1647_ptr next);

            static void WINAPIV pc_ChatRePresentationRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatRePresentationRequest1659_ptr next);

            static void WINAPIV pc_ChatAllRequest(
                ATF::CPlayer* pObj,
                char* pwszChatData,
                ATF::Info::CPlayerpc_ChatAllRequest1631_ptr next);

            static void WINAPIV pc_ChatTradeRequestMsg(
                ATF::CPlayer* pObj,
                char bySubType,
                char* pwszTradeMsg,
                ATF::Info::CPlayerpc_ChatTradeRequestMsg1661_ptr next);
        };
    };
};
