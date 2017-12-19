#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CCheckSumCharacAccountTrunkDataInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CNpcData
            : public Yorozuya::Module::IModule
            , CModuleRegister<CNpcData>
        {
        public:
            CNpcData() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static bool WINAPIV Update(
                ATF::CCheckSumCharacAccountTrunkData* pObj,
                ATF::CRFWorldDatabase* pkDB,
                ATF::Info::CCheckSumCharacAccountTrunkDataUpdate20_ptr next);
        };
    };
};
