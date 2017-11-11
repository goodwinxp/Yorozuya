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
            enable_hook(&ATF::CPcBangFavor::PcBangGiveItem, &CPcBangFavor::PcBangGiveItem);
        }

        void CPcBangFavor::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CPcBangFavor::PcBangGiveItem);
        }

        ModuleName_t CPcBangFavor::get_name()
        {
            static const ModuleName_t name = "fix_PCBangFavor";
            return name;
        }

        bool WINAPIV CPcBangFavor::PcBangGiveItem(
            ATF::CPcBangFavor* pObj,
            ATF::CPlayer * pOne, 
            unsigned int dwRecIndex, 
            char * bySeletItemIndex, 
            int nSelectCount, 
            ATF::Info::CPcBangFavorPcBangGiveItem16_ptr next)
        {
            bool result = false;

            do
            {
                int count = 0;
                for (auto& UID : pOne->m_pUserDB->m_AvatorData.dbPcBangFavorItem.lnUID)
                {
                    if (UID != -1)
                    {
                        ++count;
                        break;
                    }
                }

                if (count != 0)
                {
                    pOne->SendMsg_PcRoomError(1);
                    break;
                }

                if (!pOne->IsApplyPcbangPrimium())
                {
                    pOne->SendMsg_PcRoomError(1);
                    break;
                }

                result = next(pObj, pOne, dwRecIndex, bySeletItemIndex, nSelectCount);
            } while (false);

            return result;
        }
    }
}