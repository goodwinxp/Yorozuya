#pragma once

#include <vector>
#include <string>
#include <ATF/_trans_gm_msg_inform_zocl.hpp>

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"
#include "../../Common/Helpers/TimeHelper.hpp"

namespace GameServer
{
    namespace Addon
    {
        class CAdvert
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CAdvert() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void loop() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            bool m_bActivated;

        private:
            struct advert_fld
            {
                advert_fld(
                    bool bHideForPremium,
                    const std::string& sMsg,
                    const ::std::chrono::seconds& sDelay)
                    : bHideForPremium(bHideForPremium)
                    , sMsg(sMsg)
                    , sDelay(sDelay)
                {
                    packet.wMsgSize = sMsg.length();
                    memcpy(packet.wszChatData, sMsg.c_str(), packet.wMsgSize);
                    packet.wszChatData[packet.wMsgSize] = '\0';
                }

            public:
                bool bHideForPremium;
                ::std::string sMsg;
                ::std::chrono::seconds sDelay;
                ATF::_trans_gm_msg_inform_zocl packet;
                TimeHelper::CTimer timer;
            };
            ::std::vector<advert_fld> m_vecRecords;
        };
    };
};
