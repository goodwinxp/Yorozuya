#include "stdafx.h"

#include "PlayerTrunk.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        void CPlayerTrunk::load()
        {
            enable_hook(&ATF::CPlayer::pc_TrunkAlterItemSlotRequest, &CPlayerTrunk::pc_TrunkAlterItemSlotRequest);
            enable_hook(&ATF::CPlayer::pc_TrunkResDivision, &CPlayerTrunk::pc_TrunkResDivision);
            enable_hook(&ATF::CPlayer::pc_TrunkPotionDivision, &CPlayerTrunk::pc_TrunkPotionDivision);
            enable_hook(&ATF::CPlayer::pc_TrunkIoMergeRequest, &CPlayerTrunk::pc_TrunkIoMergeRequest);
            enable_hook(&ATF::CPlayer::pc_TrunkIoMoveRequest, &CPlayerTrunk::pc_TrunkIoMoveRequest);
            enable_hook(&ATF::CPlayer::pc_TrunkIoSwapRequest, &CPlayerTrunk::pc_TrunkIoSwapRequest);
        }

        void CPlayerTrunk::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerTrunk::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.trunk";
            return name;
        }

        bool WINAPIV CPlayerTrunk::check_item_race(
            ATF::CPlayer *pPlayer,
            unsigned int dwItemSerial,
            char byStorageIndex)
        {
            bool result = false;

            do 
            {
                int nItemRace = -1;
                if (byStorageIndex == ATF::STORAGE_POS::TRUNK)
                {
                    nItemRace = pPlayer->m_Param.GetTrunkSlotRace(dwItemSerial);
                }
                else if (byStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    nItemRace = pPlayer->m_Param.GetExtTrunkSlotRace(dwItemSerial);
                }

                if (nItemRace == -1)
                {
                    break;
                }

                result = pPlayer->m_Param.GetRaceCode() == nItemRace;
            } while (false);

            return result;
        }

        void WINAPIV CPlayerTrunk::pc_TrunkAlterItemSlotRequest(
            ATF::CPlayer *pPlayer,
            unsigned int dwItemSerial,
            char byClientSlotIndex, 
            char byStorageIndex,
            ATF::Info::CPlayerpc_TrunkAlterItemSlotRequest1963_ptr next)
        {
            if (CPlayerTrunk::check_item_race(pPlayer, dwItemSerial, byStorageIndex))
            {
                next(pPlayer, dwItemSerial, byClientSlotIndex, byStorageIndex);
            }
            else
            {
                pPlayer->SendMsg_TrunkIoResult(1, 17, pPlayer->m_Param.GetDalant(), 0);
            }
        }

        void WINAPIV CPlayerTrunk::pc_TrunkResDivision(
            ATF::CPlayer *pPlayer,
            uint16_t wStartSerial, 
            uint16_t wTarSerial,
            uint16_t wMoveAmount, 
            char byStorageIndex,
            ATF::Info::CPlayerpc_TrunkResDivision1989_ptr next)
        {
            if (CPlayerTrunk::check_item_race(pPlayer, wStartSerial, byStorageIndex) &&
                CPlayerTrunk::check_item_race(pPlayer, wTarSerial, byStorageIndex))
            {
                next(pPlayer, wStartSerial, wTarSerial, wMoveAmount, byStorageIndex);
            }
            else
            {
                pPlayer->SendMsg_TrunkIoResult(1, 17, pPlayer->m_Param.GetDalant(), 0);
            }
        }

        void WINAPIV CPlayerTrunk::pc_TrunkPotionDivision(
            ATF::CPlayer *pPlayer,
            uint16_t wStartSerial,
            uint16_t wTarSerial,
            uint16_t wMoveAmount, 
            char byStorageIndex, 
            ATF::Info::CPlayerpc_TrunkPotionDivision1985_ptr next)
        {
            if (CPlayerTrunk::check_item_race(pPlayer, wStartSerial, byStorageIndex) &&
                CPlayerTrunk::check_item_race(pPlayer, wTarSerial, byStorageIndex))
            {
                next(pPlayer, wStartSerial, wTarSerial, wMoveAmount, byStorageIndex);
            }
            else
            {
                pPlayer->SendMsg_TrunkIoResult(1, 17, pPlayer->m_Param.GetDalant(), 0);
            }
        }

        void WINAPIV CPlayerTrunk::pc_TrunkIoMergeRequest(
            ATF::CPlayer *pPlayer,
            char byStartStorageIndex, 
            char byTarStorageIndex, 
            uint16_t wStartItemSerial, 
            uint16_t wTarItemSerial, 
            uint16_t wMoveAmount, 
            ATF::Info::CPlayerpc_TrunkIoMergeRequest1977_ptr next)
        {
            bool succeeded = false;

            do 
            {
                if (byStartStorageIndex == ATF::STORAGE_POS::TRUNK || 
                    byStartStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    if (!CPlayerTrunk::check_item_race(pPlayer, wStartItemSerial, byStartStorageIndex))
                        break;
                }
                
                if (byTarStorageIndex == ATF::STORAGE_POS::TRUNK ||
                    byTarStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    if (!CPlayerTrunk::check_item_race(pPlayer, wTarItemSerial, byTarStorageIndex))
                        break;
                }

                succeeded = true;
                next(pPlayer, byStartStorageIndex, byTarStorageIndex, wStartItemSerial, wTarItemSerial, wMoveAmount);
            } while (false);
            
            if (!succeeded)
            {
                pPlayer->SendMsg_TrunkIoResult(1, 17, pPlayer->m_Param.GetDalant(), 0);
            }
        }

        void WINAPIV CPlayerTrunk::pc_TrunkIoMoveRequest(
            ATF::CPlayer * pPlayer, 
            char byStartStorageIndex, 
            char byTarStorageIndex, 
            uint16_t wItemSerial, 
            char byClientSlotIndex, 
            ATF::Info::CPlayerpc_TrunkIoMoveRequest1981_ptr next)
        {
            bool succeeded = false;

            do
            {
                if (byStartStorageIndex == ATF::STORAGE_POS::TRUNK ||
                    byStartStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    if (!CPlayerTrunk::check_item_race(pPlayer, wItemSerial, byStartStorageIndex))
                        break;
                }

                succeeded = true;
                next(pPlayer, byStartStorageIndex, byTarStorageIndex, wItemSerial, byClientSlotIndex);
            } while (false);

            if (!succeeded)
            {
                pPlayer->SendMsg_TrunkIoResult(1, 17, pPlayer->m_Param.GetDalant(), 0);
            }
        }

        void WINAPIV CPlayerTrunk::pc_TrunkIoSwapRequest(
            ATF::CPlayer * pPlayer, 
            char byStartStorageIndex, 
            char byTarStorageIndex,
            uint16_t wStartItemSerial, 
            uint16_t wTarItemSerial, 
            ATF::Info::CPlayerpc_TrunkIoSwapRequest1983_ptr next)
        {
            bool succeeded = false;

            do
            {
                if (byStartStorageIndex == ATF::STORAGE_POS::TRUNK ||
                    byStartStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    if (!CPlayerTrunk::check_item_race(pPlayer, wStartItemSerial, byStartStorageIndex))
                        break;
                }

                if (byTarStorageIndex == ATF::STORAGE_POS::TRUNK ||
                    byTarStorageIndex == ATF::STORAGE_POS::EXT_TRUNK)
                {
                    if (!CPlayerTrunk::check_item_race(pPlayer, wTarItemSerial, byTarStorageIndex))
                        break;
                }

                succeeded = true;
                next(pPlayer, byStartStorageIndex, byTarStorageIndex, wStartItemSerial, wTarItemSerial);
            } while (false);

            if (!succeeded)
            {
                pPlayer->SendMsg_TrunkIoResult(1, 17, pPlayer->m_Param.GetDalant(), 0);
            }
        }
    }
}