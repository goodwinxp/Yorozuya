#include "stdafx.h"

#include "PlayerEx.h"

namespace GameServer
{
    namespace Extension
    {
        bool CPlayerEx::insert_serial_killer(DWORD dwKillerSerial)
        {
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            return m_setKillerInfo.insert(dwKillerSerial).second;
        }

        void CPlayerEx::clear_serial_list()
        {
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            m_setKillerInfo.clear();
        }
    }
}