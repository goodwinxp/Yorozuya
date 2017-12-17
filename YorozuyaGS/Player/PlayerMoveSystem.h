#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerMoveSystem
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerMoveSystem>
        {
        public:
            CPlayerMoveSystem() { };

            virtual void load();

            virtual void unload();

            virtual Yorozuya::Module::ModuleName_t get_name();
        private:
            static void WINAPIV pc_MoveNext(
                ATF::CPlayer *pPlayer,
                char byMoveType,
                float* pfCur,
                float* pfTar,
                char byDirect,
                ATF::Info::CPlayerpc_MoveNext1793_ptr next);

            static void WINAPIV pc_RealMovPos(
                ATF::CPlayer *pPlayer,
                float* pfCur,
                ATF::Info::CPlayerpc_RealMovPos1879_ptr next);

            static void WINAPIV pc_MoveStop(
                ATF::CPlayer *pPlayer,
                float* pfCur,
                ATF::Info::CPlayerpc_MoveStop1797_ptr next);
        };
    };
};
