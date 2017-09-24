#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CAttackSystem : public IModule, CModuleRegister<CAttackSystem>
        {
        public:
            CAttackSystem() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static int WINAPIV _pre_check_skill_attack(
                ATF::CPlayer *pPlayer, 
                ATF::CCharacter* pDst,
                float* pfAttackPos, 
                char byEffectCode, 
                ATF::_skill_fld* pSkillFld,
                uint16_t wBulletSerial, 
                ATF::_STORAGE_LIST::_db_con** ppBulletProp,
                ATF::_BulletItem_fld** ppfldBullet,
                int nEffectGroup, 
                uint16_t* pdwDecPoint, 
                uint16_t wEffBtSerial, 
                ATF::_STORAGE_LIST::_db_con** ppEffBtProp,
                ATF::_BulletItem_fld** ppfldEffBt,
                ATF::Info::CPlayer_pre_check_skill_attack1374_ptr next);

            static void WINAPIV pc_ForceRequest(
                ATF::CPlayer* pPlayer,
                uint16_t wForceSerial,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_ForceRequest1717_ptr next);

            static char WINAPIV skill_process(
                ATF::CPlayer* pPlayer,
                int nEffectCode,
                int nSkillIndex,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                int* pnLv,
                ATF::Info::CPlayerskill_process2035_ptr next);
        };
    };
};
