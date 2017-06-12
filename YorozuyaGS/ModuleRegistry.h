#pragma once

#include <map>
#include <filesystem>
#include "../Common/Helpers/SingletonHelper.hpp"
#include "../Common/Interfaces/ModuleInterface.h"

namespace GameServer
{
    using namespace SingletonHelper;
    using namespace Yorozuya::Module;

    class CModuleRegistry : public CSingleton<CModuleRegistry>
    {
    public:
        CModuleRegistry();

        void load();

        void unload();

        void loop();

        void configure(const rapidjson::Value& nodeConfig);

        void push_module(Module_ptr spModule);

    private:
        void load_module();

    private:
        _STD mutex m_mtxMap;
        _STD map<ModuleName_t, Module_ptr> m_mapModules;
    };

    #pragma optimize("", off)
    template<typename _Ty>
    class CModuleRegister
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
                registry->push_module(CSingleton<_Ty>::get_instance());
            }
        };
        static exec_register objModuleRegister;
    };

    template<typename _Ty> 
    typename CModuleRegister<_Ty>::exec_register CModuleRegister<_Ty>::objModuleRegister;
    #pragma optimize("", on)

    template<typename _Ty>
    static auto GetModule() {
        return CSingleton<_Ty>::get_instance();
    }
};
