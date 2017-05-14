#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CTrade : public IModule, CModuleRegister<CTrade>
        {
        public:
            CTrade() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

        private:
            static void WINAPIV pc_DTradeOKRequest(
                struct ATF::CPlayer* pObj,
                unsigned int* pdwKey,
                ATF::info::CPlayerpc_DTradeOKRequest1687_ptr next);
        };
    };
};
