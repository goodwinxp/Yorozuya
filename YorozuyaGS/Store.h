#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CItemStore_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CStore : public IModule, CModuleRegister<CStore>
        {
        public:
            CStore() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static char WINAPIV IsSell(
                ATF::CItemStore* pObj,
                char byOfferNum, 
                ATF::_buy_offer* pOffer,
                unsigned int dwHasDalant, 
                unsigned int dwHasGold, 
                long double dHasPoint, 
                unsigned int* dwHasActPoint, 
                char* pbyActCode, 
                float fDiscountRate, 
                char byRace, 
                char byGrade,
                ATF::info::CItemStoreIsSell36_ptr next);
        };
    };
};
