#pragma once

#include <ATF/CPotionMgrInfo.hpp>
#include "../../Common/ETypes.h"
#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

namespace GameServer
{
    namespace Addon
    {
        namespace detail
        {
            const size_t count_orig_effect_func = 182;
            const size_t count_new_effect_func = 189;
        }

        class CPvpPotion
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CPvpPotion() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            using TempEffectFunc_t = bool(WINAPIV)(ATF::CCharacter *pActChar, ATF::CCharacter *pTargetChar, float fEffectValue, char *byRet);
            using TempEffectFunc_Ptr = TempEffectFunc_t * ;
            using TempEffectFunc_Cont = ::std::array<TempEffectFunc_Ptr, detail::count_new_effect_func>;

        private:
            static bool m_bActivated;
            static TempEffectFunc_Cont g_TempEffectFunc;

            template<e_money_type eType>
            static bool WINAPIV AlterMoneyPotion(
                ATF::CCharacter *pAct,
                ATF::CCharacter *pTargetChar,
                float fEffectValue,
                char *byRet)
            {
                ATF::CPlayer *pActChar = (ATF::CPlayer *)pAct;

                auto fnAddActPoint = [&](char byActionCode)->bool
                {
                    bool result = ATF::CActionPointSystemMgr::Instance()->GetEventStatus(byActionCode) == 2;
                    if (!result)
                        return result;

                    auto dwPoint = pActChar->m_pUserDB->GetActPoint(byActionCode);
                    dwPoint += fEffectValue;
                    pActChar->m_pUserDB->Update_User_Action_Point(byActionCode, dwPoint);
                    pActChar->SendMsg_Alter_Action_Point(byActionCode, dwPoint);

                    return result;
                };

                bool result = false;
                switch (eType)
                {
                case e_money_type::cp:
                    pActChar->AlterDalant(fEffectValue);
                    pActChar->SendMsg_AlterMoneyInform(0);
                    result = true;
                    break;
                case e_money_type::gold:
                    pActChar->AlterGold(fEffectValue);
                    pActChar->SendMsg_AlterMoneyInform(0);
                    result = true;
                    break;
                case e_money_type::pvp_point:
                    pActChar->AlterPvPPoint(fEffectValue, ATF::PVP_ALTER_TYPE::cheat, -1);
                    result = true;
                    break;
                case e_money_type::pvp_point_2:
                    pActChar->AlterPvPCashBag(fEffectValue, ATF::PVP_MONEY_ALTER_TYPE::pm_kill);
                    result = true;
                    break;
                case e_money_type::processing_point:
                    result = fnAddActPoint(0);
                    break;
                case e_money_type::hunter_point:
                    result = fnAddActPoint(1);
                    break;
                case e_money_type::gold_point:
                    result = fnAddActPoint(2);
                    break;
                }

                return result;
            }

        private:
            static int WINAPIV ApplyPotion(
                ATF::CPotionMgr *pObj,
                ATF::CPlayer* pUsePlayer,
                ATF::CPlayer* pApplyPlayer,
                ATF::_skill_fld* pEffecFld,
                ATF::_CheckPotion_fld* pCheckFld,
                ATF::_PotionItem_fld* pfB,
                bool bCommonPotion,
                ATF::Info::CPotionMgrApplyPotion2_ptr next);
        };
    };
};
