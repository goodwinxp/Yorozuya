// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _guild_member_buddy_download_zocl
    {
        unsigned __int16 wDataSize;
        char sData[900];
    public:
        _guild_member_buddy_download_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_member_buddy_download_zocl*);
            (org_ptr(0x14025ce10L))(this);
        };
        void ctor__guild_member_buddy_download_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_member_buddy_download_zocl*);
            (org_ptr(0x14025ce10L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _guild_member_buddy_download_zocl*);
            return (org_ptr(0x14025d480L))(this);
        };
    };
END_ATF_NAMESPACE