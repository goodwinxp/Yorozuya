#pragma once

#include <ATF/CMainThread_info.hpp>
#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CMacros : public IModule, CModuleRegister<CMacros>
        {
        public:
            CMacros() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static bool WINAPIV _db_Update_MacroData(
                struct ATF::CMainThread* pObj,
                unsigned int dwSerial,
                struct ATF::_AIOC_A_MACRODATA* pMacro,
                struct ATF::_AIOC_A_MACRODATA* pOldMacro,
                ATF::info::CMainThread_db_Update_MacroData266_ptr next);
        };
    };
};
