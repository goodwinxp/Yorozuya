#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>

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
                ATF::info::CPlayer_pre_check_skill_attack1374_ptr next);
        };
    };
};
