#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerEquip
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerEquip>
        {
        public:
            CPlayerEquip() { };

            virtual void load();

            virtual void unload();

            virtual Yorozuya::Module::ModuleName_t get_name();
        private:
            static bool WINAPIV IsEffectableEquip(
                ATF::CPlayer *pPlayer, 
                ATF::_STORAGE_LIST::_storage_con* pCon,
                ATF::Info::CPlayerIsEffectableEquip308_ptr next);

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

            static bool WINAPIV pc_SetItemCheckRequest(
                ATF::CPlayer *pPlayer,
                unsigned int dwSetItem,
                char bySetItemNum,
                char bySetEffectNum,
                bool bSet,
                ATF::Info::CPlayerpc_SetItemCheckRequest1937_ptr next);
        };
    };
};
