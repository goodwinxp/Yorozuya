// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMyTimer.hpp"
#include "CNetIndexList.hpp"
#include "CPlayer.hpp"
#include "CReturnGate.hpp"


START_ATF_NAMESPACE
    struct CReturnGateController
    {
        CMyTimer *m_pkTimer;
        CNetIndexList *m_pkEmptyInxList;
        CNetIndexList *m_pkUseInxList;
        unsigned int m_uiGateTotCnt;
        CReturnGate **m_ppkGatePool;
    public:
        CReturnGateController()
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
            (org_ptr(0x140250040L))(this);
        };
        void ctor_CReturnGateController()
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
            (org_ptr(0x140250040L))(this);
        };
        void CleanUp()
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
            (org_ptr(0x1402509d0L))(this);
        };
        void Close(struct CReturnGate* pkGate)
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*, struct CReturnGate*);
            (org_ptr(0x140250f70L))(this, pkGate);
        };
        static void Destroy()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1402501a0L))();
        };
        bool Enter(unsigned int uiGateInx, struct CPlayer* pkObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CReturnGateController*, unsigned int, struct CPlayer*);
            return (org_ptr(0x1402508b0L))(this, uiGateInx, pkObj);
        };
        struct CReturnGate* GetEmpty()
        {
            using org_ptr = struct CReturnGate* (WINAPIV*)(struct CReturnGateController*);
            return (org_ptr(0x140250c30L))(this);
        };
        struct CReturnGate* GetGate(unsigned int uiInx)
        {
            using org_ptr = struct CReturnGate* (WINAPIV*)(struct CReturnGateController*, unsigned int);
            return (org_ptr(0x140250980L))(this, uiInx);
        };
        bool Init(unsigned int uiSize)
        {
            using org_ptr = bool (WINAPIV*)(struct CReturnGateController*, unsigned int);
            return (org_ptr(0x140250220L))(this, uiSize);
        };
        static struct CReturnGateController* Instance()
        {
            using org_ptr = struct CReturnGateController* (WINAPIV*)();
            return (org_ptr(0x1402500e0L))();
        };
        bool IsExistOwner(struct CPlayer* pkObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CReturnGateController*, struct CPlayer*);
            return (org_ptr(0x140250ce0L))(this, pkObj);
        };
        void OnLoop()
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
            (org_ptr(0x140250920L))(this);
        };
        bool Open(struct CPlayer* pkOwner)
        {
            using org_ptr = bool (WINAPIV*)(struct CReturnGateController*, struct CPlayer*);
            return (org_ptr(0x1402506a0L))(this, pkOwner);
        };
        int ProcessEnter(unsigned int uiGateInx, struct CPlayer* pkObj)
        {
            using org_ptr = int (WINAPIV*)(struct CReturnGateController*, unsigned int, struct CPlayer*);
            return (org_ptr(0x140250dd0L))(this, uiGateInx, pkObj);
        };
        void SendEnterResult(int iResult, struct CPlayer* pkObj)
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*, int, struct CPlayer*);
            (org_ptr(0x140251000L))(this, iResult, pkObj);
        };
        void UpdateClose()
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
            (org_ptr(0x140250e90L))(this);
        };
        ~CReturnGateController()
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
            (org_ptr(0x1402500a0L))(this);
        };
        void dtor_CReturnGateController()
        {
            using org_ptr = void (WINAPIV*)(struct CReturnGateController*);
            (org_ptr(0x1402500a0L))(this);
        };
    };
END_ATF_NAMESPACE