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

        class CSystemPass
        {
        public:
            constexpr CSystemPass(const char* symbols)
                : m_szPassword{ '\0' }
            {
                for (auto& c : m_szPassword)
                    c = 'x';
                m_szPassword[15] = '\0';

                m_szPassword[0] = 'X';
                m_szPassword[3] = symbols[0];
                m_szPassword[5] = symbols[1];
                m_szPassword[8] = symbols[2];
                m_szPassword[11] = symbols[3];
            }

            const char* get_password() const
            {
                return m_szPassword;
            }
        private:
            char m_szPassword[16];
        };

        bool WINAPIV CReadSystemPass::ReadSystemPass(
            ATF::CNationSettingData * pObj,
            ATF::Info::CNationSettingDataReadSystemPass52_ptr next)
        {
            static const _STD unordered_map<int, const char*> mapSystemPass = {
                { 410, CSystemPass("trj7").get_password() }, //"KR"
                { 826, CSystemPass("wp2v").get_password() }, //"GB"
                { 360, CSystemPass("k0qf").get_password() }, //"ID"
                { 392, CSystemPass("n729").get_password() }, //"JP"
                { 608, CSystemPass("qah3").get_password() }, //"PH"
                { 643, CSystemPass("u71v").get_password() }, //"RU"
                { 76,  CSystemPass("6dxo").get_password() }, //"BR"
                { 158, CSystemPass("zw3t").get_password() }, //"TW"
                { 156, CSystemPass("s4iy").get_password() }, //"CN"
                { 840, CSystemPass("9ecs").get_password() }, //"US"
                { 724, CSystemPass("p5yt").get_password() }, //"ES"
                { 764, CSystemPass("dvb3").get_password() }, //"TH"
            };

            const auto it_find = mapSystemPass.find(pObj->m_iNationCode);
            if (it_find == mapSystemPass.end())
                return next(pObj);

            strcpy_s(pObj->m_szVaildKey, it_find->second);

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