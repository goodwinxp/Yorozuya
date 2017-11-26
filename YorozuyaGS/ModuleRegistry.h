#pragma once

#include <unordered_map>
#include <unordered_set>
#include <filesystem>
#include <ATF.hpp>
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
        _STD unordered_map<ModuleName_t, Module_ptr> m_mapModules;
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

    protected:
        template <typename T1, typename T2>
        inline bool enable_hook(T1 pTarget, T2 pDetour)
        {
            auto& core = ATF::CATFCore::get_instance();
            bool result = core.set_hook(pTarget, pDetour);
            if (result)
                m_setEnabledHook.insert(ATF::cast_pointer_function(pTarget));

            if (!result)
                throw std::runtime_error("enable_hook");

            return result;
        }

        void cleanup_all_hook() const
        {
            auto& core = ATF::CATFCore::get_instance();
            for (auto& p : m_setEnabledHook)
            {
                core.unset_hook(p);
            }
        }
    private:
        _STD unordered_set<LPVOID> m_setEnabledHook;

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
