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
            core.set_hook(&CPlayer::SendMsg_FixPosition, &CViewInvisible::Player_SendMsg_FixPosition);
        }

        void CViewInvisible::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CPlayer::SendMsg_FixPosition);
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

        void WINAPIV CViewInvisible::Player_SendMsg_FixPosition(
            ATF::CPlayer* pPlayer,
            int n,
            ATF::info::CPlayerSendMsg_FixPosition752_ptr next)
        {
            /* CPlayer* pDstPlayer = &global::g_Player[n];
            if (pPlayer->m_EP.GetEff_State())
            {
                if (!pDstPlayer->m_EP.GetEff_State(23))
                {
                    return;
                }
            }*/

            next(pPlayer, n);
        }
    }
}