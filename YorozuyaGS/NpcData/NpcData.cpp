#include "stdafx.h"

#include "NpcData.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CNpcData::load()
        {
            enable_hook(&ATF::CCheckSumCharacAccountTrunkData::Update, &CNpcData::Update);
        }

        void CNpcData::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CNpcData::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.npc_data";
            return name;
        }

        bool WINAPIV CNpcData::Update(
            ATF::CCheckSumCharacAccountTrunkData* pObj,
            ATF::CRFWorldDatabase* pkDB,
            ATF::Info::CCheckSumCharacAccountTrunkDataUpdate20_ptr next)
        {
            bool result = false;

            do
            {
                result = pkDB->Update_NpcData(pObj->m_dwSerial, pObj->m_dwValues);
                if (!result)
                {
                    result = pkDB->Insert_NpcData(pObj->m_dwSerial, pObj->m_dwValues);
                    if (!result)
                        break;

                    result = pkDB->Update_NpcData(pObj->m_dwSerial, pObj->m_dwValues);
                    if (!result)
                        break;
                }

                result = pkDB->Update_AnimusData(pObj->m_dwAccountSerial, pObj->m_byRace, pObj->m_dValues);
                if (!result)
                {
                    result = pkDB->Insert_AnimusData(pObj->m_dwAccountSerial, pObj->m_dValues);
                    if (!result)
                        break;

                    result = pkDB->Update_AnimusData(pObj->m_dwAccountSerial, pObj->m_byRace, pObj->m_dValues);
                    if (!result)
                        break;
                }

                result = true;
            } while (false);

            return result;
        }
    }
}