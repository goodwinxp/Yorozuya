#include "stdafx.h"

#include "CheatCommand.h"

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CCheatCommand::load()
        {
            enable_hook(&Global::AuthorityFilter, &CCheatCommand::AuthorityFilter);
        }

        void CCheatCommand::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CCheatCommand::get_name()
        {
            static const ModuleName_t name = "fix_CheatCommand";
            return name;
        }

        bool WINAPIV CCheatCommand::AuthorityFilter(
            ATF::CHEAT_COMMAND* pCmd, 
            ATF::CPlayer* pOne, 
            ATF::Global::Info::AuthorityFilter25_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            if (pOne)
            {
                if (pOne->m_byUserDgr == 0)
                {
                    return false;
                }

                if (!((1 << pOne->m_byUserDgr) & pCmd->nUseDegree))
                    return false;

                if (pOne->m_byUserDgr == 2)
                {
                    if (!((1 << pOne->m_bySubDgr) & pCmd->nMgrDegree))
                        return false;
                }
            }
            else if (!(pCmd->nUseDegree & 0x20))
            {
                return false;
            }
            return true;
        }
    }
}
