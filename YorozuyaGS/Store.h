#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CItemStoreInfo.hpp>

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

            virtual ModuleName_t get_name();
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
                ATF::Info::CItemStoreIsSell36_ptr next);
        };
    };
};
