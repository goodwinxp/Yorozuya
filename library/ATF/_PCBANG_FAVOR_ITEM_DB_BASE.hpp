// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_STORAGE_LIST.hpp"


START_ATF_NAMESPACE
    struct _PCBANG_FAVOR_ITEM_DB_BASE
    {
        unsigned __int64 lnUID[50];
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _PCBANG_FAVOR_ITEM_DB_BASE*);
            (org_ptr(0x140077df0L))(this);
        };
        bool InsertItem(struct _STORAGE_LIST::_db_con* Item)
        {
            using org_ptr = bool (WINAPIV*)(struct _PCBANG_FAVOR_ITEM_DB_BASE*, struct _STORAGE_LIST::_db_con*);
            return (org_ptr(0x14040cb90L))(this, Item);
        };
        bool IsDeleteItem(struct _STORAGE_LIST::_db_con* Item)
        {
            using org_ptr = bool (WINAPIV*)(struct _PCBANG_FAVOR_ITEM_DB_BASE*, struct _STORAGE_LIST::_db_con*);
            return (org_ptr(0x14040cc30L))(this, Item);
        };
    };
END_ATF_NAMESPACE