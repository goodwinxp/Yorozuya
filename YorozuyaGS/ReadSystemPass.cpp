#include "stdafx.h"

#include "ReadSystemPass.h"
#include <ATF/GlobalNames.hpp>

namespace GameServer
{
    namespace Extension
    {
        void CReadSystemPass::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::Global::AfxWinMain, &CReadSystemPass::AfxWinMain);
            core.set_hook(&ATF::CNationSettingDataKR::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataGB::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataID::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataJP::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataPH::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataRU::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataBR::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataTW::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataCN::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataUS::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataES::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            core.set_hook(&ATF::CNationSettingDataTH::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
        }

        void CReadSystemPass::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::Global::AfxWinMain);
            core.unset_hook(&ATF::CNationSettingDataKR::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataGB::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataID::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataJP::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataPH::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataRU::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataBR::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataTW::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataCN::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataUS::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataES::ReadSystemPass);
            core.unset_hook(&ATF::CNationSettingDataTH::ReadSystemPass);
        }

        ModuleName_t CReadSystemPass::get_name()
        {
            static const ModuleName_t name = "ext_ReadSystemPass";
            return name;
        }

        bool WINAPIV CReadSystemPass::ReadSystemPass(ATF::CNationSettingData * pObj, void * next)
        {
            UNREFERENCED_PARAMETER(pObj);
            UNREFERENCED_PARAMETER(next);
            return true;
        }

        int64_t WINAPIV CReadSystemPass::AfxWinMain(
            ATF::HINSTANCE arg_0,
            ATF::HINSTANCE arg_1,
            char * arg_2, 
            int arg_3,
            ATF::Global::Info::AfxWinMain17_ptr next)
        {
            *ATF::Global::g_HideLicenseWindow = true;

            return next(arg_0, arg_1, arg_2, arg_3);
        }
    }
}