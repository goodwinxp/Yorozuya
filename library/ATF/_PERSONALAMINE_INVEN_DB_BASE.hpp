// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _PERSONALAMINE_INVEN_DB_BASE
    {
        struct _LIST
        {
            _INVENKEY Key;
            unsigned int dwDur;
        public:
            void Init()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140075f20L))(this);
            };
            bool Release()
            {
                using org_ptr = bool (WINAPIV*)(struct _LIST*);
                return (org_ptr(0x140120850L))(this);
            };
            bool Set(struct _STORAGE_LIST::_db_con* pItem)
            {
                using org_ptr = bool (WINAPIV*)(struct _LIST*, struct _STORAGE_LIST::_db_con*);
                return (org_ptr(0x140120220L))(this, pItem);
            };
            _LIST()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140075ec0L))(this);
            };
            void ctor__LIST()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140075ec0L))(this);
            };
        };
        bool bUsable;
        _LIST m_List[40];
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE*);
            (org_ptr(0x140075f70L))(this);
        };
        _PERSONALAMINE_INVEN_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE*);
            (org_ptr(0x140075e40L))(this);
        };
        void ctor__PERSONALAMINE_INVEN_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE*);
            (org_ptr(0x140075e40L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE