#include "stdafx.h"

#include "ViewInvisible.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CViewInvisible::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&CTrap::SendMsg_FixPosition, &CViewInvisible::SendMsg_FixPosition);
        }

        void CViewInvisible::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CTrap::SendMsg_FixPosition);
        }

        void CViewInvisible::loop()
        {
        }

        ModuleVersion_t CViewInvisible::get_version()
        {
            return usVersion;
        }

        ModuleName_t CViewInvisible::get_name()
        {
            static const ModuleName_t name = "fix_viewinvisible";
            return name;
        }

        void CViewInvisible::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        void WINAPIV CViewInvisible::SendMsg_FixPosition(
            CTrap* pTrap, 
            int n, 
            info::CTrapSendMsg_FixPosition82_ptr next)
        {
            CPlayer* pPlayer = &global::g_Player[n];
            if (pTrap->m_dwMasterSerial != pPlayer->m_Param.GetCharSerial())
            {
                if (!pPlayer->m_EP.GetEff_State(23))
                {
                    return;
                }
            }

            next(pTrap, n);
        }
    }
}