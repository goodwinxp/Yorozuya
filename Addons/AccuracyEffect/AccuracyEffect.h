#pragma once

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

#include <ATF/CPlayerInfo.hpp>
#include <ATF/CAttackInfo.hpp>
#include <ATF/CPlayerAttackInfo.hpp>

namespace GameServer
{
    namespace Addon
    {
        class CAccuracyEffect
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CAccuracyEffect() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            enum class eHitType
            {
                standart,
                one_to_one,
                gen
            };
            static bool m_bActivated;
            static eHitType m_eHitRand;

        private:
            inline static float CalcBaseAccuration(
                ATF::CPlayer* pPlayer, ATF::CCharacter* pDst);

            inline static float CalcBaseAccurationRand(
                ATF::CPlayer* pPlayer, ATF::CCharacter* pDst);

            inline static float CalcBaseAccurationRandGen(
                ATF::CPlayer* pPlayer, ATF::CCharacter* pDst);

            inline static float CalcBaseAccurationOneToOne(
                ATF::CPlayer* pPlayer, ATF::CCharacter* pDst);
        private:
            inline static bool Hit(int nDiff);

            inline static bool HitRand(int nDiff);

            inline static bool HitRandGen(int nDiff);

            inline static bool HitOneToOne(int nDiff);

        private:
            static void WINAPIV apply_normal_item_std_effect(
                ATF::CPlayer* pObj,
                int nEffCode,
                float fVal,
                bool bEquip,
                ATF::Info::CPlayerapply_normal_item_std_effect1397_ptr next);

            static void WINAPIV apply_have_item_std_effect(
                ATF::CPlayer* pObj,
                int nEffCode,
                float fVal,
                bool bAdd,
                int nDiffCnt,
                ATF::Info::CPlayerapply_have_item_std_effect1395_ptr next);

            static void WINAPIV AttackForce(
                ATF::CAttack* pObj,
                ATF::_attack_param* pParam,
                bool bUseEffBullet,
                ATF::Info::CAttackAttackForce4_ptr next);

            static void WINAPIV AttackSkill(
                ATF::CPlayerAttack* pObj,
                ATF::_attack_param* pParam,
                bool bUseEffBullet,
                ATF::Info::CPlayerAttackAttackSkill2_ptr next);
        };
    };
};
