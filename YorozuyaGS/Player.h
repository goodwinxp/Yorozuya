#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CPlayer : public IModule, CModuleRegister<CPlayer>
        {
        public:
            CPlayer() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static void WINAPIV CalcPvP(
                ATF::CPlayer *pObj, 
                ATF::CPlayer *pDier, 
                char byKillerObjID,
                ATF::info::CPlayerCalcPvP74_ptr next);

            static void WINAPIV CalPvpTempCash(
                ATF::CPlayer *pObj,
                ATF::CPlayer *pDier,
                char byKillerObjID,
                ATF::info::CPlayerCalPvpTempCash52_ptr next);
        };
    };
};
