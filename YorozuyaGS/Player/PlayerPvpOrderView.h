#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerPvpOrderView
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerPvpOrderView>
        {
        public:
            CPlayerPvpOrderView() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

        private:
            static void WINAPIV CalcPvP(
                ATF::CPlayer *pPlayer,
                ATF::CPlayer *pDier,
                char byKillerObjID,
                ATF::Info::CPlayerCalcPvP74_ptr next);

            static void WINAPIV UpdatePvpOrderView(
                ATF::CPlayer *pPlayer,
                int64_t tCurTime,
                ATF::Info::CPlayerUpdatePvpOrderView1288_ptr next);

            static void WINAPIV CalPvpTempCash(
                ATF::CPlayer *pPlayer,
                ATF::CPlayer *pDier,
                char byKillerObjID,
                ATF::Info::CPlayerCalPvpTempCash52_ptr next);

            static void WINAPIV CheckDayChangedPvpPointClear(
                ATF::CMainThread *pObj,
                ATF::Info::CMainThreadCheckDayChangedPvpPointClear20_ptr next);

        private:
            static bool WINAPIV CheckPvpLoseCondition(
                ATF::CPvpCashPoint* pObj,
                ATF::CPlayer* pKiller,
                ATF::CPlayer* pDier,
                ATF::Info::CPvpCashPointCheckPvpLoseCondition8_ptr next);

            static bool WINAPIV CheckPvpHaveCondition(
                ATF::CPvpCashPoint *pObj,
                ATF::CPlayer* pKiller,
                ATF::CPlayer* pDier,
                long double dOldTempPoint,
                ATF::Info::CPvpCashPointCheckPvpHaveCondition6_ptr next);
        };
    };
};
