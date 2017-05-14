#pragma once

#include <string>
#include <memory>
#include <rapidjson/document.h>

namespace Yorozuya
{
    namespace Module
    {
        using ModuleVersion_t = uint32_t;
        using ModuleName_t = _STD string;

        class IModule
        {
        public:
            virtual void load() = 0;

            virtual void unload() = 0;

            virtual void loop() = 0;

            virtual ModuleVersion_t get_version() = 0;

            virtual ModuleName_t get_name() = 0;

            virtual void configure(const rapidjson::Value& nodeConfig) = 0;
        };
        using Module_ptr = _STD shared_ptr<IModule>;
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
