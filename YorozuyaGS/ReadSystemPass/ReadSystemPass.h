#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/Global__GlobalInfo.hpp>
#include <ATF/CNationSettingData.hpp>

namespace GameServer
{
    namespace Extension
    {
        class CReadSystemPass 
            : public Yorozuya::Module::IModule
            , CModuleRegister<CReadSystemPass>
        {
        public:
            CReadSystemPass() { };

            virtual void load();

            virtual void unload();

            virtual Yorozuya::Module::ModuleName_t get_name();

        private:
            
            static bool WINAPIV ReadSystemPass(
                ATF::CNationSettingData* pObj, 
                ATF::Info::CNationSettingDataReadSystemPass52_ptr next);

            static int64_t WINAPIV AfxWinMain(
                ATF::HINSTANCE arg_0,
                ATF::HINSTANCE arg_1,
                char* arg_2,
                int arg_3,
                ATF::Global::Info::AfxWinMain17_ptr next);
        };
    };
};
