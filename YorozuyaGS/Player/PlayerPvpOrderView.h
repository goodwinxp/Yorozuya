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

            virtual void load();

            virtual void unload();

            virtual Yorozuya::Module::ModuleName_t get_name();

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
        };
    };
};
