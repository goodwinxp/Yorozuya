#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>
#include <ATF/CPostSystemManagerInfo.hpp>
#include <ATF/CMainThreadInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CPostSystem : public IModule, CModuleRegister<CPostSystem>
        {
        public:
            CPostSystem() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

        private:
            static void WINAPIV CMainThread__Load_ReturnPost_Complete(
                ATF::CMainThread *pObj, 
                char *pData, 
                ATF::Info::CMainThreadLoad_ReturnPost_Complete114_ptr next);

            static void WINAPIV CMainThread__Load_PostStorage_Complete(
                ATF::CMainThread *pObj, 
                char *pData,
                ATF::Info::CMainThreadLoad_PostStorage_Complete112_ptr next);

            static char WINAPIV CheckRegister(
                ATF::CPostSystemManager *pObj, 
                ATF::CPlayer *pOne, 
                ATF::_STORAGE_POS_INDIV *pItemInfo, 
                unsigned int dwGold, 
                ATF::_STORAGE_LIST::_db_con **pItem,
                ATF::Info::CPostSystemManagerCheckRegister4_ptr next);
        };
    };
};
