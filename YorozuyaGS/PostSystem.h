#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>
#include <ATF/CMainThread_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CPostSystem : public IModule, CModuleRegister<CPostSystem>
        {
        public:
            CPostSystem() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

        private:
            static void WINAPIV CMainThread__Load_ReturnPost_Complete(
                ATF::CMainThread *pObj, 
                char *pData, 
                ATF::info::CMainThreadLoad_ReturnPost_Complete114_ptr next);

            static void WINAPIV CMainThread__Load_PostStorage_Complete(
                ATF::CMainThread *pObj, 
                char *pData,
                ATF::info::CMainThreadLoad_PostStorage_Complete112_ptr next);
        };
    };
};
