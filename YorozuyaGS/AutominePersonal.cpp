#include "stdafx.h"

#include "AutominePersonal.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CAutominePersonal::load()
        {
            enable_hook(&ATF::AutominePersonal::send_attacked, &CAutominePersonal::send_attacked);
            enable_hook(&ATF::AutominePersonal::sub_battery, &CAutominePersonal::sub_battery);
        }

        void CAutominePersonal::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CAutominePersonal::get_name()
        {
            static const ModuleName_t name = "fix_AutominePersonal";
            return name;
        }

        void WINAPIV CAutominePersonal::send_attacked(
            ATF::AutominePersonal * pObj,
            ATF::Info::AutominePersonalsend_attacked64_ptr next)
        {
            ATF::_personal_automine_alter_dur_zocl msg;
            msg.dwObjSerial = pObj->m_dwObjSerial;
            msg.wHPRate = pObj->vfptr->CalcCurHPRate(pObj);
            char byType[2] = { 14, 60 };
            pObj->CircleReport(byType, (char *)&msg, msg.size(), false);
        }

        char WINAPIV CAutominePersonal::sub_battery(
            ATF::AutominePersonal * pObj,
            unsigned int dwUsed,
            ATF::Info::AutominePersonalsub_battery86_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            char result = -1;

            do
            {
                if (pObj->m_byUseBattery == 255)
                    break;

                uint8_t byUseBattery = pObj->m_byUseBattery;
                unsigned int dwNewUsed = pObj->m_pBatterySlot[byUseBattery].sub_dur(dwUsed);
                if (pObj->m_pBatterySlot[byUseBattery].get_dur())
                    break;

                result = byUseBattery;
                auto pBattery = pObj->m_pBatterySlot[byUseBattery].get_battery();
                ATF::Global::s_MgrItemHistory->personal_amine_itemlog(
                    "BATTERY_DISCHARGE",
                    byUseBattery,
                    pBattery->m_byTableCode,
                    pBattery->m_wItemIndex,
                    pBattery->m_dwDur,
                    pObj->m_pOwner->m_szItemHistoryFileName);
                pObj->m_pBatterySlot[byUseBattery].clear();

                static const char s_conver_index[2]{ 1, 0 };
                byUseBattery = pObj->m_byUseBattery = s_conver_index[pObj->m_byUseBattery];
                if (dwNewUsed == 0)
                    break;

                dwNewUsed = pObj->m_pBatterySlot[byUseBattery].sub_dur(dwNewUsed);
                if (dwNewUsed == 0)
                    break;

                pBattery = pObj->m_pBatterySlot[byUseBattery].get_battery();
                ATF::Global::s_MgrItemHistory->personal_amine_itemlog(
                    "BATTERY_DISCHARGE",
                    byUseBattery,
                    pBattery->m_byTableCode,
                    pBattery->m_wItemIndex,
                    pBattery->m_dwDur,
                    pObj->m_pOwner->m_szItemHistoryFileName);
                pObj->m_pBatterySlot[byUseBattery].clear();
                pObj->m_byUseBattery = -1;
            } while (false);

            return result;
        }
    }
}