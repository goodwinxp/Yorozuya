#include "stdafx.h"

#include "ReadSystemPass.h"
#include <ATF/GlobalNames.hpp>
#include <array>

namespace GameServer
{
    namespace Extension
    {
        namespace
        {
            using SignSymbols_t = const char[5];
            ::std::string GenPassword(SignSymbols_t symbols)
            {
                ::std::array<char, 16> szPassword;
                szPassword.fill('x');
                szPassword[15] = '\0';

                szPassword[0] = 'X';
                szPassword[3] = symbols[0];
                szPassword[5] = symbols[1];
                szPassword[8] = symbols[2];
                szPassword[11] = symbols[3];

                return ::std::string(szPassword.data());
            }
        }

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

        Yorozuya::Module::ModuleName_t CReadSystemPass::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "system.read_system_pass";
            return name;
        }

        bool WINAPIV CReadSystemPass::ReadSystemPass(
            ATF::CNationSettingData * pObj,
            ATF::Info::CNationSettingDataReadSystemPass52_ptr next)
        {
            static const ::std::unordered_map<int, ::std::string> mapSystemPass = {
                { 410, GenPassword("trj7") }, //"KR"
                { 826, GenPassword("wp2v") }, //"GB"
                { 360, GenPassword("k0qf") }, //"ID"
                { 392, GenPassword("n729") }, //"JP"
                { 608, GenPassword("qah3") }, //"PH"
                { 643, GenPassword("u71v") }, //"RU"
                { 76,  GenPassword("6dxo") }, //"BR"
                { 158, GenPassword("zw3t") }, //"TW"
                { 156, GenPassword("s4iy") }, //"CN"
                { 840, GenPassword("9ecs") }, //"US"
                { 724, GenPassword("p5yt") }, //"ES"
                { 764, GenPassword("dvb3") }, //"TH"
            };

            const auto it_find = mapSystemPass.find(pObj->m_iNationCode);
            if (it_find == mapSystemPass.end())
                return next(pObj);

            strcpy_s(pObj->m_szVaildKey, it_find->second.c_str());

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