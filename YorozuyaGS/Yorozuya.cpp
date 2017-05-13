#include "stdafx.h"

#include "Yorozuya.h"

namespace GameServer
{
    CYorozuya::CYorozuya()
        : m_AtfCoreRegistry(ATF::CATFCoreRegistry::get_instance())
    {
        m_AtfCoreRegistry.registry();
    }

    void CYorozuya::start()
    {
        // load config
        // load modules
        // init modules
        // start main thread
    }

    void CYorozuya::stop()
    {
        // set stopped in true
        // notify all
    }
}
