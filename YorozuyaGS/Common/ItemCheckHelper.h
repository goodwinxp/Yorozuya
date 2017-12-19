#pragma once

#include <ATF/_STORAGE_LIST.hpp>

namespace GameServer
{
    namespace ItemCheckHelper
    {
        bool WINAPIV IsExchangable(ATF::_STORAGE_LIST::_db_con *pItem);
    }
}
