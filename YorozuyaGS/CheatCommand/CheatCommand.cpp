#include "stdafx.h"

#include <sstream>
#include "CheatCommand.h"

namespace GameServer
{
    namespace Fixes
    {
        void CCheatCommand::load()
        {
            enable_hook(&ATF::Global::AuthorityFilter, &CCheatCommand::AuthorityFilter);
            enable_hook(&ATF::CMainThread::Init, &CCheatCommand::Init);
        }

        void CCheatCommand::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CCheatCommand::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.cheat_command";
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

        bool WINAPIV CCheatCommand::Init(
            ATF::CMainThread * pObj,
            ATF::Info::CMainThreadInit88_ptr next)
        {
            bool result = next(pObj);
            if (result)
            {
                ATF::CLogFile* s_logCheat = (ATF::CLogFile *)0x1849ACC70L;

                std::stringstream ss;
                ss << "..\\ZoneServerLog\\ServiceLog\\Cheat" << ATF::Global::GetKorLocalTime();
                ss << ".log";

                s_logCheat->SetWriteLogFile((char *)ss.str().c_str(), TRUE, false, true, true);
            }

            return result;
        }
    }
}
