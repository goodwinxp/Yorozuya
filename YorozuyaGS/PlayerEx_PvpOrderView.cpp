#include "stdafx.h"

#include "PlayerEx.h"

namespace GameServer
{
    namespace Extension
    {
        bool CPlayerEx::PushSerialKiller(DWORD dwKillerSerial)
        {
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            return m_setKillerInfo.insert(dwKillerSerial).second;
        }

        void CPlayerEx::CleanSerialList()
        {
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            m_setKillerInfo.clear();
        }
    }
}