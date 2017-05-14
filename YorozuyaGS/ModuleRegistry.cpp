#include "stdafx.h"

#include <regex>
#include "ModuleRegistry.h"
#include "../Common/Helpers/ModuleDllHelper.hpp"

#include "Macros.h"

namespace GameServer
{
    CModuleRegistry::CModuleRegistry()
    {
        load_module();
    }

    void CModuleRegistry::load()
    {
        _STD unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        for (auto& m : m_mapModules)
        {
            m.second->load();
        }
    }

    void CModuleRegistry::unload()
    {
        _STD unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        for (auto& m : m_mapModules)
        {
            m.second->unload();
        }
    }

    void CModuleRegistry::loop()
    {
        _STD unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        for (auto& m : m_mapModules)
        {
            m.second->loop();
        }
    }

    void CModuleRegistry::configure(
        const rapidjson::Value& nodeConfig)
    {
        _STD unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        for (auto& module : nodeConfig["modules"].GetArray())
        {
            ModuleName_t name = module["name"].GetString();

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
        static const _STD wregex maskDll(L".*?.dll");

        fs::directory_iterator end_itr;
        for (fs::directory_iterator i(pathModuleFolder); i != end_itr; ++i)
        {
            if (!fs::is_regular_file(i->status())) 
                continue;

            if (!_STD regex_match(i->path().filename().generic_wstring(), maskDll))
                continue;

            push_module(_STD make_shared<ModuleDllHelper::CModuleDll>(i->path()));
        }
    }

    void CModuleRegistry::push_module(Module_ptr spModule)
    {
        _STD unique_lock<decltype(m_mtxMap)> lock(m_mtxMap);
        auto it = m_mapModules.insert(
            _STD pair<ModuleName_t, Module_ptr>(
                spModule->get_name(), 
                _STD move(spModule)));

        assert(it.second);
    }
}
