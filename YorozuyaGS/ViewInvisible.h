#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>
#include <ATF/CGameObject_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CViewInvisible : public IModule, CModuleRegister<CViewInvisible>
        {
        public:
            CViewInvisible() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static void WINAPIV CGameObject__CircleReport(
                ATF::CGameObject* pObj,
                char* pbyType,
                char* szMsg,
                int nMsgSize,
                bool bToOne,
                ATF::info::CGameObjectCircleReport24_ptr next);

            static void WINAPIV CPlayer__SendMsg_FixPosition(
                ATF::CPlayer* pPlayer,
                int dwClientIndex,
                ATF::info::CPlayerSendMsg_FixPosition752_ptr next);

            static void WINAPIV CPlayer__SendMsg_RealMovePoint(
                ATF::CPlayer *pPlayer,
                int dwClientIndex,
                ATF::info::CPlayerSendMsg_RealMovePoint1000_ptr next);

            static void WINAPIV CPlayer__SendMsg_OtherShapePart(
                ATF::CPlayer *pPlayer,
                ATF::CPlayer *pDst,
                ATF::info::CPlayerSendMsg_OtherShapePart914_ptr next);

            static void WINAPIV CPlayer__SendMsg_OtherShapeAll(
                ATF::CPlayer *pPlayer,
                ATF::CPlayer *pDst,
                ATF::info::CPlayerSendMsg_OtherShapeAll910_ptr next);
        };
    };
};
