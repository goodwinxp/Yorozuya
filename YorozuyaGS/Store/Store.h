#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CItemStoreInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CStore
            : public Yorozuya::Module::IModule
            , CModuleRegister<CStore>
        {
        public:
            CStore() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
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
