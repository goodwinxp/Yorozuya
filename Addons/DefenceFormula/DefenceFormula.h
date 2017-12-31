#pragma once

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

#include <ATF/CCharacterInfo.hpp>

namespace GameServer
{
    namespace Addon
    {
        class CDefenceFormula
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CDefenceFormula() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            static bool m_bActivated;
            static float m_fBaseCoeffResist;
            static float m_fSupportCoeffResist;

        private:
            static float CalcDefPlus(ATF::CPlayer* pObj);
            static float GetDefPlusFromItem(ATF::CPlayer* pObj, int nAttPart);
            static float SecDstFcCoeff(ATF::CCharacter* pObj, int nAttPart);

        private:
            static int WINAPIV GetTotalTol(
                ATF::CCharacter* pObj,
                char byAttTolType,
                int nDamPoint,
                ATF::Info::CCharacterGetTotalTol42_ptr next);

            static int WINAPIV GetAttackDamPoint(
                ATF::CCharacter* pObj,
                int nAttPnt,
                int nAttPart,
                int nTolType,
                ATF::CCharacter* pDst,
                bool bBackAttack,
                ATF::Info::CCharacterGetAttackDamPoint28_ptr next);
        };
    };
};
