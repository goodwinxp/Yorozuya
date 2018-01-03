#pragma once

#include "../../Common/Helpers/ModuleHook.hpp"
#include "../../Common/Helpers/RapidHelper.hpp"

namespace GameServer
{
    namespace Addon
    {
        class ISettings
        {
        public:
            ISettings(CModuleHook* pParent)
                : m_pParent(pParent)
            {
            }

        protected:
            CModuleHook* m_pParent;
        };
    };
};
