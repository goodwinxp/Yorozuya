#include "stdafx.h"

#include "PcBangFavor.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CPcBangFavor::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::CPcBangFavor::PcBangGiveItem, &CPcBangFavor::PcBangGiveItem);
        }

        void CPcBangFavor::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CPcBangFavor::PcBangGiveItem);
        }

        void CPcBangFavor::loop()
        {
        }

        ModuleVersion_t CPcBangFavor::get_version()
        {
            return usVersion;
        }

        ModuleName_t CPcBangFavor::get_name()
        {
            static const ModuleName_t name = "fix_pcbangfavor";
            return name;
        }

        void CPcBangFavor::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool WINAPIV CPcBangFavor::PcBangGiveItem(
            ATF::CPcBangFavor* pObj,
            ATF::CPlayer * pOne, 
            unsigned int dwRecIndex, 
            char * bySeletItemIndex, 
            int nSelectCount, 
            ATF::info::CPcBangFavorPcBangGiveItem16_ptr next)
        {
            bool result = false;

            do
            {
                if (pOne->m_dwPcBangGiveItemListIndex != -1)
                {
                    pOne->SendMsg_PcRoomError(1);
                    break;
                }

                if (!next(pObj, pOne, dwRecIndex, bySeletItemIndex, nSelectCount))
                    break;

                pOne->m_dwPcBangGiveItemListIndex = dwRecIndex;
                result = true;
            } while (false);

            return result;
        }
    }
}