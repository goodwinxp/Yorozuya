#pragma once

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

#include <ATF/CItemBoxInfo.hpp>
#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Addon
    {
        class CReplaceLootName
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CReplaceLootName() { };

            virtual void load() override;

            virtual void unload() override;

            virtual void zone_start() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            static bool m_bActivated;
            static bool m_bOnlyPitboss;

            struct _item_code
            {
                int nTableCode;
                int nItemIndx;
            };
            static _item_code m_ReplaceItem;
            std::string m_sItemCode;

            static _item_code& GetItemCode();

        private:
            static void WINAPIV SendMsg_Create(
                ATF::CItemBox* pObj,
                ATF::Info::CItemBoxSendMsg_Create14_ptr next);

            static void WINAPIV SendMsg_FixPosition(
                ATF::CItemBox* pObj, int n,
                ATF::Info::CItemBoxSendMsg_FixPosition18_ptr next);

            static void WINAPIV pc_TakeGroundingItem(
                ATF::CPlayer* pObj,
                ATF::CItemBox* pBox,
                uint16_t wAddSerial,
                ATF::Info::CPlayerpc_TakeGroundingItem1947_ptr next);
        };
    };
};
