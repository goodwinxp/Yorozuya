#include "stdafx.h"

#include "StoneHP.h"
#include "../../Common/Helpers/ModuleProxy.hpp"
#include "../../Common/Interfaces/ModuleInterface.h"

using namespace GameServer::Addon;

#define DllExport __declspec(dllexport)

extern "C" DllExport
Yorozuya::Module::IModule* CreateModule()
{
    return ModuleProxy::CModuleProxy<CStoneHP>::get_instance()->CreateModule();
}

extern "C" DllExport
void ReleaseModule(Yorozuya::Module::IModule* pObj)
{
    ModuleProxy::CModuleProxy<CStoneHP>::get_instance()->ReleaseModule(pObj);
}
