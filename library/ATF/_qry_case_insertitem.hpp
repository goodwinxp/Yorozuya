// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_insertitem
    {
        unsigned int dwSerial;
        unsigned int dwItemCodeK;
        unsigned int dwItemCodeD;
        unsigned int dwItemCodeU;
        char byType;
        unsigned int dwRemainTime;
        unsigned __int64 lnUID;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_insertitem*);
            return (org_ptr(0x1401bf540L))(this);
        };
    };
END_ATF_NAMESPACE