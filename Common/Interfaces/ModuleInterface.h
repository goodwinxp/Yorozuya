#pragma once

#include <string>
#include <memory>
#include <rapidjson/document.h>

namespace Yorozuya
{
    namespace Module
    {
        using ModuleVersion_t = uint32_t;
        using ModuleName_t = ::std::string;

        class IModule
        {
        public:
            virtual void load() = 0;

            virtual void unload() = 0;

            virtual ModuleName_t get_name() = 0;

            virtual void loop()
            {
            }

            virtual void zone_start()
            {
            }

            virtual ModuleVersion_t get_version()
            {
                return ATF::usVersion;
            }

            virtual void configure(const rapidjson::Value& nodeConfig)
            {
                UNREFERENCED_PARAMETER(nodeConfig);
            }
        };
        using Module_ptr = ::std::shared_ptr<IModule>;
    }

    namespace ModuleApi
    {
        using MethodName_t = char[];

        Module::IModule* CreateModule();
        using CreateModule_ptr = decltype(&CreateModule);
        static MethodName_t csNameCreateModule = "CreateModule";

        void ReleaseModule(Module::IModule*);
        using ReleaseModule_ptr = decltype(&ReleaseModule);
        static MethodName_t csNameReleaseModule = "ReleaseModule";
    }
}
