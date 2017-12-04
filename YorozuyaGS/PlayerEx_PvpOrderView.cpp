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
            auto instance = CPvpOrderViewDB::get_instance();
            instance->CleanKillerList();
            for (auto& player : g_PlayerEx)
            {
                player.CleanSerialKillerList();
            }
        }

        void CPlayerEx::LoadSerialKillerList()
        {
            auto instance = CPvpOrderViewDB::get_instance();
            std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
            instance->LoadKillerList(m_setKillerInfo);
        }

        void CPlayerEx::SaveSerialKillerList()
        {
            auto instance = CPvpOrderViewDB::get_instance();
            _STD set<uint32_t> setKillerInfo, setDiffKillerInfo;
            {
                std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
                setKillerInfo = m_setKillerInfo;
            }

            _STD set_difference(
                setKillerInfo.begin(), setKillerInfo.end(),
                m_setSavedKillerInfo.begin(), m_setSavedKillerInfo.end(),
                std::inserter(setDiffKillerInfo, setDiffKillerInfo.end()));

            // todo: push to dqs thread this set
            //instance->SaveKillerList(setDiffKillerInfo);

            {
                std::unique_lock<decltype(m_mtxKillerInfo)> lock(m_mtxKillerInfo);
                m_setSavedKillerInfo.insert(setKillerInfo.begin(), setKillerInfo.end());
            }
        }
    }
}