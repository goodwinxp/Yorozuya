#include "stdafx.h"

#include <regex>
#include "ModuleRegistry.h"
#include "../Common/Helpers/ModuleDllHelper.hpp"

namespace GameServer
{
    CModuleRegistry::CModuleRegistry()
    {
        load_module();
    }

    void CModuleRegistry::load()
    {
        ::std::unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        for (auto& m : m_mapModules)
        {
            m.second->load();
        }
    }

    void CModuleRegistry::unload()
    {
        ::std::unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        for (auto& m : m_mapModules)
        {
            m.second->unload();
        }
    }

    void CModuleRegistry::loop()
    {
        ::std::unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        for (auto& m : m_mapModules)
        {
            m.second->loop();
        }
    }

    void CModuleRegistry::configure(
        const rapidjson::Value& nodeConfig)
    {
        ::std::unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        for (auto& module : nodeConfig["modules"].GetArray())
        {
            Yorozuya::Module::ModuleName_t name = module["name"].GetString();

            auto it = m_mapModules.find(name);
            if (it == m_mapModules.end())
            {
                continue;
            }

            it->second->configure(module["config"]);
        }
    }

    void CModuleRegistry::load_module()
    {
        static const fs::path pathModuleFolder = L"./YorozuyaGS/";
        static const ::std::wregex maskDll(L".*?.dll");

        fs::directory_iterator end_itr;
        for (fs::directory_iterator i(pathModuleFolder); i != end_itr; ++i)
        {
            if (!fs::is_regular_file(i->status())) 
                continue;

            if (!::std::regex_match(i->path().filename().generic_wstring(), maskDll))
                continue;

            push_module(::std::make_shared<ModuleDllHelper::CModuleDll>(i->path()));
        }
    }

    void CModuleRegistry::push_module(Yorozuya::Module::Module_ptr spModule)
    {
        ::std::unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        auto it = m_mapModules.insert({ spModule->get_name(), ::std::move(spModule) });
        assert(it.second);
    }
}
