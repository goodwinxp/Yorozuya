#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CGuildInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CGuild
            : public Yorozuya::Module::IModule
            , CModuleRegister<CGuild>
        {
        public:
            CGuild() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static char WINAPIV ManageAcceptORRefuseGuildBattle(
                ATF::CGuild* pObj, 
                bool bAccept, 
                ATF::Info::CGuildManageAcceptORRefuseGuildBattle80_ptr next);

            static char WINAPIV ManageExpulseMember(
                ATF::CGuild *pGuild,
                unsigned int dwMemberSerial,
                ATF::Info::CGuildManageExpulseMember84_ptr next);
        };
    };
};
