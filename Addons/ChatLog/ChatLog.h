#pragma once

#include <array>
#include <filesystem>

namespace fs = ::std::experimental::filesystem::v1;

#include <ATF/CPlayerInfo.hpp>
#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"
#include "../../Common/Helpers/P7Helper.hpp"

namespace GameServer
{
    namespace Addon
    {
        class CChatLog
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CChatLog();;

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            std::wstring build_init_string();

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
            using ChatTrace_t = ::std::array<P7Helper::CP7Trace::Ptr_t, (size_t)chat_type::num>;
            static P7Helper::CP7LogShared::Ptr_t m_pClientLog;
            static ChatTrace_t m_arrChatTrace;

        private:
            static P7Helper::CP7Trace::Ptr_t get_trace(chat_type eType);

            static std::wstring utf8_to_utf16(const std::string& str)
            {
                int wlen = MultiByteToWideChar(1251, 0, str.c_str(), -1, NULL, 0);
                std::wstring value;
                if (wlen > 0)
                {
                    value.resize(wlen, L'\0');
                    MultiByteToWideChar(1251, 0, str.c_str(), -1, (LPWSTR)value.c_str(), wlen);
                }

                return value;
            }

            template<chat_type eType>
            static void chat_log(
                ATF::CPlayer* pObj,
                const char* pwszChatData,
                std::vector<char*> vecRecipients = {})
            {
                auto spTrace = CChatLog::get_trace(eType);
                if (!spTrace)
                    return;

                ::std::string sRecipients;
                if (vecRecipients.empty())
                {
                    sRecipients = "=";
                }
                else
                {
                    bool first = true;
                    for (auto& r : vecRecipients)
                    {
                        if (!first)
                            sRecipients += ",";
                        sRecipients += r;
                    }
                }

                ::std::stringstream ss; 
                ss  << "[Player ip:" << ip4_to_string(pObj->m_pUserDB->m_ipAddress) << "]"
                    << "[Player race:" << pObj->m_Param.GetRaceCode() << "]"
                    << "[Player serial:" << pObj->m_Param.GetCharSerial() 
                    << ";Player name:" << pObj->m_Param.GetCharNameA() << "]"
                    << "[Recipients:" << sRecipients << "]"
                    << "[Message:" << pwszChatData << "]";

                ::std::wstring wstr = utf8_to_utf16(ss.str());
                spTrace->trace(EP7TRACE_LEVEL_INFO, __LINE__, __FILE__, __FUNCTION__, wstr.c_str());
            }

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
