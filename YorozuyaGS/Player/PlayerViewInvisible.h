#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>
#include <ATF/CGameObjectInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerViewInvisible
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerViewInvisible>
        {
        public:
            CPlayerViewInvisible() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static void WINAPIV SendMsg_StateInform(
                ATF::CPlayer *pPlayer,
                uint64_t dwStateFlag,
                bool bBreakTransparant);

        private:
            static void WINAPIV SenseState(
                ATF::CPlayer *pPlayer,
                ATF::Info::CPlayerSenseState1188_ptr next);

            static void WINAPIV CGameObject__CircleReport(
                ATF::CGameObject* pObj,
                char* pbyType,
                char* szMsg,
                int nMsgSize,
                bool bToOne,
                ATF::Info::CGameObjectCircleReport24_ptr next);

            static void WINAPIV SendMsg_FixPosition(
                ATF::CPlayer* pPlayer,
                int dwClientIndex,
                ATF::Info::CPlayerSendMsg_FixPosition752_ptr next);

            static void WINAPIV SendMsg_RealMovePoint(
                ATF::CPlayer *pPlayer,
                int dwClientIndex,
                ATF::Info::CPlayerSendMsg_RealMovePoint1000_ptr next);

            static void WINAPIV SendMsg_OtherShapePart(
                ATF::CPlayer *pPlayer,
                ATF::CPlayer *pDst,
                ATF::Info::CPlayerSendMsg_OtherShapePart914_ptr next);

            static void WINAPIV SendMsg_OtherShapeAll(
                ATF::CPlayer *pPlayer,
                ATF::CPlayer *pDst,
                ATF::Info::CPlayerSendMsg_OtherShapeAll910_ptr next);

        private:
            static void SendMsg_OtherShapeAllImpl(
                ATF::CPlayer * pPlayer,
                ATF::CPlayer * pDst);
        };
    };
};
