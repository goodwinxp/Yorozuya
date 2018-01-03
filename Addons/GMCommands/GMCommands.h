#pragma once

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

#include <ATF/CNationSettingFactoryInfo.hpp>


namespace GameServer
{
    namespace Addon
    {
        class CGMCommands
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CGMCommands();

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

        private:
            using CommandFn_t = bool WINAPIV(ATF::CPlayer*);
            struct _gm_command
            {
                const char* pszCommand;
                CommandFn_t* pCommandFn;
                int iUseDegree;
                int iMgrDegree;
            };
            static ::std::vector<_gm_command> m_RegistryCommand;

        private:
            static CommandFn_t ct_recall_all_player;

        private:
            static bool WINAPIV RegistCheatTableUnion(
                ATF::CNationSettingFactory* pObj,
                ATF::CNationSettingData *pkData,
                ATF::Info::CNationSettingFactoryRegistCheatTableUnion18_ptr next);
        };
    };
};
