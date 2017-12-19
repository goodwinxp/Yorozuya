#pragma once

#include <ATF.hpp>

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/SingletonHelper.hpp"

namespace ModuleProxy
{
    template<typename Module>
    class CModuleProxy
        : public SingletonHelper::CSingleton<CModuleProxy<Module>>
    {
    public:
        CModuleProxy()
            : m_AtfCoreRegistry(ATF::CATFCoreRegistry::get_instance())
        {
            m_AtfCoreRegistry.registry();
        }

        Yorozuya::Module::IModule* CreateModule()
        {
            return new Module;
        }

        void ReleaseModule(Yorozuya::Module::IModule* pObj)
        {
            delete pObj;
        }

    private:
        ATF::CATFCoreRegistry& m_AtfCoreRegistry;
    };
}