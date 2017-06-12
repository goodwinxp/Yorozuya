#include "stdafx.h"

#include "CreatePlayer.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CCreatePlayer::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&CUserDB::Insert_Char_Request, &CCreatePlayer::Insert_Char_Request);
        }

        void CCreatePlayer::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CUserDB::Insert_Char_Request);
        }

        void CCreatePlayer::loop()
        {
        }

        ModuleVersion_t CCreatePlayer::get_version()
        {
            return usVersion;
        }

        ModuleName_t CCreatePlayer::get_name()
        {
            static const ModuleName_t name = "fix_CreatePlayer";
            return name;
        }

        void CCreatePlayer::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool CheckBaseShape(unsigned int dwBaseShape)
        {
            for (int i = 2, j = 0; i < 8; ++i)
            {
                j = dwBaseShape << (i * 4);
                j = j >> 28;
                if (15 == j)
                    return false;
            }

            return true;
        }

        bool WINAPIV CCreatePlayer::Insert_Char_Request(
            ATF::CUserDB * pObj, 
            char * pwszCharName, 
            char bySlotIndex, 
            char byRaceSexCode, 
            char * pszClassCode, 
            unsigned int dwBaseShape, 
            ATF::info::CUserDBInsert_Char_Request50_ptr next)
        {
            if (!CheckBaseShape(dwBaseShape))
            {
                pObj->Insert_Char_Complete(47, nullptr);
                return true;
            }

            return next(pObj, pwszCharName, bySlotIndex, byRaceSexCode, pszClassCode, dwBaseShape);
        }
    }
}