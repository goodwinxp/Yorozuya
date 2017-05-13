#pragma once

#include "../Common/Helpers/SingletonHelper.hpp"

namespace GameServer
{
    using namespace SingletonHelper;
    class CYorozuya : public CSingleton<CYorozuya>
    {
    public:
        CYorozuya();

        void start();

        void stop();

    private:
        ATF::CATFCoreRegistry& m_AtfCoreRegistry;
    };
}
