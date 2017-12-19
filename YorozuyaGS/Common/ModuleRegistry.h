#pragma once

#include <unordered_map>
#include <unordered_set>
#include <filesystem>
#include <ATF.hpp>
#include "../Common/Helpers/SingletonHelper.hpp"
#include "../Common/Interfaces/ModuleInterface.h"
#include "../Common/Helpers/ModuleHook.hpp"

namespace GameServer
{
    class CModuleRegistry
        : public SingletonHelper::CSingleton<CModuleRegistry>
    {
    public:
        CModuleRegistry();

        void load();

        void unload();

        void loop();

        void zone_start();

        void configure(const rapidjson::Value& nodeConfig);

        void push_module(Yorozuya::Module::Module_ptr spModule);

    private:
        using ModulesMap_t = ::std::unordered_map<
            Yorozuya::Module::ModuleName_t,
            Yorozuya::Module::Module_ptr>;

    private:
        void load_module();

    private:
        ::std::mutex m_mtxMap;
        ModulesMap_t m_mapModules;
    };

    #pragma optimize("", off)
    template<typename _Ty>
    class CModuleRegister
        : public CModuleHook
    {
    public:
        CModuleRegister()
        {
            (void)objModuleRegister;
        }

    private:
        struct exec_register 
        {
            exec_register() 
            {
                auto registry = CModuleRegistry::get_instance();
                registry->push_module(
                    SingletonHelper::CSingleton<_Ty>::get_instance());
            }
        };
        static exec_register objModuleRegister;
    };

    template<typename _Ty> 
    typename CModuleRegister<_Ty>::exec_register CModuleRegister<_Ty>::objModuleRegister;
    #pragma optimize("", on)

    template<typename _Ty>
    static auto GetModule() {
        return SingletonHelper::CSingleton<_Ty>::get_instance();
    }
};
