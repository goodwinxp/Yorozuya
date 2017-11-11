#include "stdafx.h"

#include "ReadSystemPass.h"
#include <ATF/GlobalNames.hpp>

namespace GameServer
{
    namespace Extension
    {
        void CReadSystemPass::load()
        {
            enable_hook(&ATF::Global::AfxWinMain, &CReadSystemPass::AfxWinMain);
            enable_hook(&ATF::CNationSettingDataKR::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataGB::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataID::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataJP::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataPH::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataRU::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataBR::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataTW::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataCN::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataUS::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataES::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
            enable_hook(&ATF::CNationSettingDataTH::ReadSystemPass, &CReadSystemPass::ReadSystemPass);
        }

        void CReadSystemPass::unload()
        {
            cleanup_all_hook();
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