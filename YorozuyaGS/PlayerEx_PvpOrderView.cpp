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

        void CPlayerEx::CleanSerialKillerList()
        {
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            m_setKillerInfo.clear();
        }
        
        void CPlayerEx::AdjustSerialKillerList()
        {
            // delete all info for current serial
        }

        void CPlayerEx::LoadSerialKillerList()
        {
            // select all info for current serial
        }

        void CPlayerEx::SaveSerialKillerList()
        {
            // delete all info for current serial
            // inser all info for current serial
        }
    }
}