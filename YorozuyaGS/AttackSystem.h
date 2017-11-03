#pragma once

#include "ETypes.h"
#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        namespace detail
        {
            enum class ATTACK_TYPE : uint8_t
            {
                self_destruction = 0,
                class_skill,
                normal,
                skill,
                force,
                unit,
                siege,
                num
            };
        }

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

            static char WINAPIV skill_process(
                ATF::CPlayer* pPlayer,
                int nEffectCode,
                int nSkillIndex,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                int* pnLv,
                ATF::Info::CPlayerskill_process2035_ptr next);

            static void WINAPIV pc_ForceRequest(
                ATF::CPlayer* pPlayer,
                uint16_t wForceSerial,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_ForceRequest1717_ptr next);

            static void WINAPIV pc_ThrowSkillRequest(
                ATF::CPlayer* pPlayer,
                uint16_t wBulletSerial,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_ThrowSkillRequest1951_ptr next);

            static void WINAPIV pc_ThrowUnitRequest(
                ATF::CPlayer* pPlayer,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_ThrowUnitRequest1955_ptr next);

        private:
            static ATF::_STORAGE_LIST::_db_con* WINAPIV IsBulletValidity(
                ATF::CPlayer* pPlayer,
                uint16_t wBulletSerial,
                ATF::Info::CPlayerIsBulletValidity302_ptr next);

            static void WINAPIV make_gen_attack_param(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                char byPart,
                ATF::_BulletItem_fld* pBulletFld,
                float fAddBulletFc,
                ATF::_attack_param* pAP,
                ATF::_BulletItem_fld* pEffBtFld,
                float fAddEffBtFc,
                ATF::Info::CPlayermake_gen_attack_param1505_ptr next);

            static void WINAPIV make_siege_attack_param(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                float* pfAttackPos,
                char byPart,
                ATF::_BulletItem_fld* pBulletFld,
                float fAddBulletFc,
                ATF::_attack_param* pAP,
                ATF::_BulletItem_fld* pEffBulletFld,
                float fAddEffBtFc,
                ATF::Info::CPlayermake_siege_attack_param1507_ptr next);

            static void WINAPIV make_skill_attack_param(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                float* pfAttackPos,
                char byEffectCode,
                ATF::_skill_fld* pSkillFld,
                int nAttType,
                ATF::_STORAGE_LIST::_db_con* pBulletItem,
                float fAddBulletFc,
                ATF::_attack_param* pAP,
                ATF::_STORAGE_LIST::_db_con* pEffBulletItem,
                float fAddEffBulletFc,
                ATF::Info::CPlayermake_skill_attack_param1509_ptr next);

            static void WINAPIV make_wpactive_skill_attack_param(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                ATF::_skill_fld* pSkillFld,
                float* pfAttackPos,
                char byEffectCode,
                int nAttType,
                ATF::_STORAGE_LIST::_db_con* pBulletItem,
                float fAddBulletFc,
                ATF::_attack_param* pAP,
                int* nShotNum,
                ATF::Info::CPlayermake_wpactive_skill_attack_param1515_ptr next);
        };
    };
};
