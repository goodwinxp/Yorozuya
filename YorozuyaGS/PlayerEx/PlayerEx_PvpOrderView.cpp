#include "stdafx.h"

#include "PlayerEx.h"
#include "PlayerEx_PvpOrderViewDB.h"

namespace GameServer
{
    namespace Extension
    {
        void CPlayerEx::CheckDayChangedPvpPointClear()
        {
            AdjustSerialKillerList();
        }

        void CPlayerEx::LoadSerialKillerListComplete(
            std::set<uint32_t>&& setKillerList,
            uint32_t dwPlayerSerial)
        {
            if (m_dwPlayerSerial == dwPlayerSerial)
            {
                std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
                m_setKillerInfo = setKillerList;
                m_setSavedKillerInfo = m_setKillerInfo;
            }
        }

        bool CPlayerEx::AlreadyKilled(DWORD dwKillerSerial)
        {
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            return m_setKillerInfo.find(dwKillerSerial) != m_setKillerInfo.cend();
        }

        bool CPlayerEx::PushSerialKiller(DWORD dwKillerSerial)
        {
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            return m_setKillerInfo.insert(dwKillerSerial).second;
        }

        void CPlayerEx::CleanSerialKillerList()
        {
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            m_setKillerInfo.clear();
            m_setSavedKillerInfo.clear();
        }
        
        void CPlayerEx::AdjustSerialKillerList()
        {
            for (auto& player : g_PlayerEx)
            {
                player.CleanSerialKillerList();
            }
            auto instance = CPvpOrderViewDB::get_instance();
            instance->CleanKillerList();
        }

        void CPlayerEx::LoadSerialKillerList()
        {
            auto instance = CPvpOrderViewDB::get_instance();
            instance->LoadKillerList(this, m_dwPlayerSerial);
        }

        void CPlayerEx::SaveSerialKillerList()
        {
            auto instance = CPvpOrderViewDB::get_instance();
            ::std::set<uint32_t> setKillerInfo, setDiffKillerInfo;
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            setKillerInfo = m_setKillerInfo;

            ::std::set_difference(
                setKillerInfo.begin(), setKillerInfo.end(),
                m_setSavedKillerInfo.begin(), m_setSavedKillerInfo.end(),
                std::inserter(setDiffKillerInfo, setDiffKillerInfo.end()));

            instance->SaveKillerList(
                std::move(setDiffKillerInfo),
                m_dwPlayerSerial);

            m_setSavedKillerInfo.insert(setKillerInfo.begin(), setKillerInfo.end());
        }
    }
}