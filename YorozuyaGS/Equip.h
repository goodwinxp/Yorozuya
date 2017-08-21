#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CEquip : public IModule, CModuleRegister<CEquip>
        {
        public:
            CEquip() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static bool WINAPIV IsEffectableEquip(
                ATF::CPlayer *pPlayer, 
                ATF::_STORAGE_LIST::_storage_con* pCon,
                ATF::Info::CPlayerIsEffectableEquip308_ptr next);

            static bool WINAPIV SetItemCheckRequest(
                ATF::CNetworkEX *pNetwork,
                int n, 
                char *pBuf,
                ATF::Info::CNetworkEXSetItemCheckRequest512_ptr next);

            static ATF::_STORAGE_LIST::_db_con* WINAPIV Emb_AddStorage(
                ATF::CPlayer *pPlayer,
                char byStorageCode, 
                ATF::_STORAGE_LIST::_storage_con *pCon,
                bool bEquipChange, 
                bool bAdd,
                ATF::Info::CPlayerEmb_AddStorage114_ptr next);

            static bool WINAPIV Emb_DelStorage(
                ATF::CPlayer *pPlayer,
                char byStorageCode, 
                char byStorageIndex, 
                bool bEquipChange, 
                bool bDelete, 
                char *strErrorCodePos,
                ATF::Info::CPlayerEmb_DelStorage132_ptr next);
        };
    };
};
