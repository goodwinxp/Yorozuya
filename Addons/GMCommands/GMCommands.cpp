#include "stdafx.h"

#include "GMCommands.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        namespace
        {
            const int default_use_degree = 22;
            const int default_mgr_degree = 7;
        };

        ::std::vector<CGMCommands::_gm_command> CGMCommands::m_RegistryCommand;

        CGMCommands::CGMCommands()
        {
            m_RegistryCommand = {
                { "allcall", &ct_recall_all_player, default_use_degree, default_mgr_degree }
            };
        }

        void CGMCommands::load()
        {
            enable_hook(&ATF::CNationSettingFactory::RegistCheatTableUnion, &CGMCommands::RegistCheatTableUnion);
        }

        void CGMCommands::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CGMCommands::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.gm_commands";
            return name;
        }

        bool WINAPIV CGMCommands::ct_recall_all_player(
            ATF::CPlayer* pObj)
        {
            if (!pObj)
                return false;

            for(auto& player : ATF::Global::g_Player)
            {
                if (player.m_bLive)
                {
                    pObj->mgr_recall_player(player.m_Param.GetCharNameA());
                }
            }
            return true;
        }

        bool WINAPIV CGMCommands::RegistCheatTableUnion(
            ATF::CNationSettingFactory * pObj,
            ATF::CNationSettingData * pkData,
            ATF::Info::CNationSettingFactoryRegistCheatTableUnion18_ptr next)
        {
            bool result = false;
            
            do
            {
                result = next(pObj, pkData);
                if (!result)
                    break;

                for (auto& r : CGMCommands::m_RegistryCommand)
                {
                    result = pObj->RegistCheat(pkData, (char *)r.pszCommand, r.pCommandFn, r.iUseDegree, r.iMgrDegree);
                    if (!result)
                        break;
                }
            } while (false);

            return result;
        }
    }
}
