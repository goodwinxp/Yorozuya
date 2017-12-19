#pragma once

#include <set>
#include <stdint.h>
#include <ATF/CRFNewDatabase.hpp>

#include "PlayerEx.h"
#include "../../Common/Helpers/SingletonHelper.hpp"
#include "../../Common/Helpers/ThreadPool.hpp"

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
            void AdjustTable();

            void CleanKillerList();

            void LoadKillerList(
                CPlayerEx* pPlayer,
                uint32_t dwPlayerSerial);

            void SaveKillerList(
                ::std::set<uint32_t>&& setKillerList,
                uint32_t dwPlayerSerial);
        private:
            void LoadKillerListImpl(
                uint32_t dwPlayerSerial,
                ::std::set<uint32_t>& setKillerList);

            void SaveKillerListImpl(
                const ::std::set<uint32_t>& setKillerList,
                uint32_t dwPlayerSerial);

        private:
            CThreadPool m_thPool;
        };
    }
}
