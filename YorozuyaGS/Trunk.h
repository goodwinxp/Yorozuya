#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CTrunk : public IModule, CModuleRegister<CTrunk>
        {
        public:
            CTrunk() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

        private:
            static bool WINAPIV check_item_race(
                ATF::CPlayer *pPlayer, 
                unsigned int dwItemSerial,
                char byStorageIndex);

        private:
            static void WINAPIV pc_TrunkAlterItemSlotRequest(
                ATF::CPlayer *pPlayer,
                unsigned int dwItemSerial, 
                char byClientSlotIndex, 
                char byStorageIndex,
                ATF::Info::CPlayerpc_TrunkAlterItemSlotRequest1963_ptr next);

            static void WINAPIV pc_TrunkResDivision(
                ATF::CPlayer *pPlayer,
                uint16_t wStartSerial, 
                uint16_t wTarSerial, 
                uint16_t wMoveAmount, 
                char byStorageIndex,
                ATF::Info::CPlayerpc_TrunkResDivision1989_ptr next);

            static void WINAPIV pc_TrunkPotionDivision(
                ATF::CPlayer *pPlayer,
                uint16_t wStartSerial, 
                uint16_t wTarSerial, 
                uint16_t wMoveAmount, 
                char byStorageIndex,
                ATF::Info::CPlayerpc_TrunkPotionDivision1985_ptr next);

            static void WINAPIV pc_TrunkIoMergeRequest(
                ATF::CPlayer *pPlayer,
                char byStartStorageIndex, 
                char byTarStorageIndex, 
                uint16_t wStartItemSerial, 
                uint16_t wTarItemSerial, 
                uint16_t wMoveAmount,
                ATF::Info::CPlayerpc_TrunkIoMergeRequest1977_ptr next);

            static void WINAPIV pc_TrunkIoMoveRequest(
                ATF::CPlayer *pPlayer,
                char byStartStorageIndex, 
                char byTarStorageIndex, 
                uint16_t wItemSerial, 
                char byClientSlotIndex,
                ATF::Info::CPlayerpc_TrunkIoMoveRequest1981_ptr next);

            static void WINAPIV pc_TrunkIoSwapRequest(
                ATF::CPlayer *pPlayer,
                char byStartStorageIndex, 
                char byTarStorageIndex, 
                uint16_t wStartItemSerial, 
                uint16_t wTarItemSerial, 
                ATF::Info::CPlayerpc_TrunkIoSwapRequest1983_ptr next);
        };
    };
};
