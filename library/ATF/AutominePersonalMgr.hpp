// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "AutominePersonal.hpp"
#include "CLogFile.hpp"
#include "CMapData.hpp"
#include "CPlayer.hpp"
#include "_PERSONALAMINE_INVEN_DB_BASE.hpp"
#include "_STORAGE_LIST.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct AutominePersonalMgr
    {
        CLogFile m_logService;
        CLogFile m_logError;
        unsigned int m_dwObjSerial;
        AutominePersonal *m_pMachine;
        unsigned __int16 m_wOreIndex[5];
    public:
        AutominePersonalMgr()
        {
            using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
            (org_ptr(0x1402de440L))(this);
        };
        void ctor_AutominePersonalMgr()
        {
            using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
            (org_ptr(0x1402de440L))(this);
        };
        bool CreateDBTable()
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
            return (org_ptr(0x1402de950L))(this);
        };
        bool Is_MineRun(int n)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
            return (org_ptr(0x1402dfac0L))(this, n);
        };
        bool Open_InfoUI(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402e0120L))(this, n, pmsg);
        };
        bool Open_InvenUI(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402e0060L))(this, n, pmsg);
        };
        bool check_dummy(struct CMapData* pMap, char byCurDummyIndex, float* pfCurPos)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, struct CMapData*, char, float*);
            return (org_ptr(0x1402deba0L))(this, pMap, byCurDummyIndex, pfCurPos);
        };
        bool check_machine(int n, unsigned int dwSerial, struct AutominePersonal* pMachine, struct _STORAGE_LIST::_db_con* pcitem)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, unsigned int, struct AutominePersonal*, struct _STORAGE_LIST::_db_con*);
            return (org_ptr(0x1402dec40L))(this, n, dwSerial, pMachine, pcitem);
        };
        bool db_load_inven(unsigned int dwSerial, struct _PERSONALAMINE_INVEN_DB_BASE* pCon)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, unsigned int, struct _PERSONALAMINE_INVEN_DB_BASE*);
            return (org_ptr(0x1402e05d0L))(this, dwSerial, pCon);
        };
        bool extract_battery(int n)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
            return (org_ptr(0x1402dfb50L))(this, n);
        };
        bool extract_battery(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402df720L))(this, n, pmsg);
        };
        struct _STORAGE_LIST::_db_con* get_localitem(struct CPlayer* pOne, uint16_t wItemSerial)
        {
            using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct AutominePersonalMgr*, struct CPlayer*, uint16_t);
            return (org_ptr(0x1402e1850L))(this, pOne, wItemSerial);
        };
        struct AutominePersonal* get_machine(int nIdx)
        {
            using org_ptr = struct AutominePersonal* (WINAPIV*)(struct AutominePersonalMgr*, int);
            return (org_ptr(0x14010e0d0L))(this, nIdx);
        };
        bool init_objects()
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
            return (org_ptr(0x1402de9e0L))(this);
        };
        bool initialize()
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
            return (org_ptr(0x1402de760L))(this);
        };
        bool insert_battery(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402df540L))(this, n, pmsg);
        };
        bool install(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402deeb0L))(this, n, pmsg);
        };
        static struct AutominePersonalMgr* instance()
        {
            using org_ptr = struct AutominePersonalMgr* (WINAPIV*)();
            return (org_ptr(0x1402de560L))();
        };
        bool make_storagebox(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402ded30L))(this, n, pmsg);
        };
        void pop_dqs_makestorage(char byRet, char* pdata)
        {
            using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, char, char*);
            (org_ptr(0x1402e0aa0L))(this, byRet, pdata);
        };
        bool pop_ore(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402e0260L))(this, n, pmsg);
        };
        void push_dqs_makestorage(int n, unsigned int dwAvatorSerial, unsigned int dwTotGold)
        {
            using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, int, unsigned int, unsigned int);
            (org_ptr(0x1402e0a00L))(this, n, dwAvatorSerial, dwTotGold);
        };
        static void release()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1402de620L))();
        };
        int request_query(char* pdata)
        {
            using org_ptr = int (WINAPIV*)(struct AutominePersonalMgr*, char*);
            return (org_ptr(0x1402e0720L))(this, pdata);
        };
        void result_query(char byRet, char* pdata)
        {
            using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, char, char*);
            (org_ptr(0x1402e09a0L))(this, byRet, pdata);
        };
        bool selectore(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402df3b0L))(this, n, pmsg);
        };
        void send_ecode(int n, char byCode)
        {
            using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, int, char);
            (org_ptr(0x1402e0c20L))(this, n, byCode);
        };
        bool uninstall(int n)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
            return (org_ptr(0x1402dff30L))(this, n);
        };
        bool uninstall(int n, char* pmsg)
        {
            using org_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
            return (org_ptr(0x1402df290L))(this, n, pmsg);
        };
        ~AutominePersonalMgr()
        {
            using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
            (org_ptr(0x1402de4e0L))(this);
        };
        void dtor_AutominePersonalMgr()
        {
            using org_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
            (org_ptr(0x1402de4e0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE