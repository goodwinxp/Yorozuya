#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CCheckSumCharacAccountTrunkDataInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CNpcData : public IModule, CModuleRegister<CNpcData>
        {
        public:
            CNpcData() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static bool WINAPIV Update(
                ATF::CCheckSumCharacAccountTrunkData* pObj,
                ATF::CRFWorldDatabase* pkDB,
                ATF::Info::CCheckSumCharacAccountTrunkDataUpdate20_ptr next);
        };
    };
};
