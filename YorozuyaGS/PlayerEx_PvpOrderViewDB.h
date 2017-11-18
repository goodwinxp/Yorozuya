#pragma once

#include <set>
#include <ATF/CRFNewDatabase.hpp>
#include "..\Common\Helpers\SingletonHelper.hpp"

namespace GameServer
{
    namespace Extension
    {
        class CPvpOrderViewDB
            : public SingletonHelper::CSingleton<CPvpOrderViewDB>
            , protected ATF::CRFNewDatabase
        {
        public:
            CPvpOrderViewDB();

        public:
            void CleanKillerList();

            bool LoadKillerList(_STD set<uint32_t>& setKillerInfo);

            bool SaveKillerList(const _STD set<uint32_t>& setKillerInfo);
        };
    }
}
