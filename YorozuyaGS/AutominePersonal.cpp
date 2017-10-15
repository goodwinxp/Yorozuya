#include "stdafx.h"

#include "AutominePersonal.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CAutominePersonal::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&AutominePersonal::send_attacked, &CAutominePersonal::send_attacked);
            core.set_hook(&AutominePersonal::sub_battery, &CAutominePersonal::sub_battery);
        }

        void CAutominePersonal::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&AutominePersonal::send_attacked);
            core.unset_hook(&AutominePersonal::sub_battery);
        }

        void CAutominePersonal::loop()
        {
        }

        ModuleVersion_t CAutominePersonal::get_version()
        {
            return usVersion;
        }

        ModuleName_t CAutominePersonal::get_name()
        {
            static const ModuleName_t name = "fix_AutominePersonal";
            return name;
        }

        void CAutominePersonal::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }
        void WINAPIV CAutominePersonal::send_attacked(
            ATF::AutominePersonal * pObj,
            ATF::Info::AutominePersonalsend_attacked64_ptr next)
        {
            _personal_automine_alter_dur_zocl msg;
            msg.dwObjSerial = pObj->m_dwObjSerial;
            msg.wHPRate = pObj->vfptr->CalcCurHPRate(pObj);
            char byType[2] = { 14, 60 };
            pObj->CircleReport(byType, (char *)&msg, msg.size(), false);
        }

        uint8_t WINAPIV CAutominePersonal::sub_battery(
            ATF::AutominePersonal * pObj,
            unsigned int dwUsed,
            ATF::Info::AutominePersonalsub_battery86_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            uint8_t result = -1;

            do
            {
                if (pObj->m_byUseBattery == 255)
                    break;

                uint8_t byUseBattery = pObj->m_byUseBattery;
                result = byUseBattery;

                unsigned int dwNewUsed = pObj->m_pBatterySlot[pObj->m_byUseBattery].sub_dur(dwUsed);
                if (pObj->m_pBatterySlot[pObj->m_byUseBattery].get_dur())
                    break;

                pObj->m_pBatterySlot[byUseBattery].clear();
                auto pBattery = pObj->m_pBatterySlot[byUseBattery].get_battery();
                ATF::Global::s_MgrItemHistory->personal_amine_itemlog(
                    "BATTERY_DISCHARGE",
                    byUseBattery,
                    pBattery->m_byTableCode,
                    pBattery->m_wItemIndex,
                    pBattery->m_dwDur,
                    pObj->m_pOwner->m_szItemHistoryFileName);

                static const char s_conver_index[2]{ 1, 0 };
                pObj->m_byUseBattery = s_conver_index[pObj->m_byUseBattery];

                if (dwNewUsed == 0)
                    break;

                dwNewUsed = pObj->m_pBatterySlot[pObj->m_byUseBattery].sub_dur(dwNewUsed);
                if (dwNewUsed == 0)
                    break;

                byUseBattery = pObj->m_byUseBattery;
                result = byUseBattery;

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