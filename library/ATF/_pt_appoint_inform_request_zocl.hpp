// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
	#pragma pack(push, 1)
    struct _pt_appoint_inform_request_zocl
    {
        struct  __body
        {
            char byLevel;
            char byClassType;
            long double dPvpPoint;
            char wszAvatorName[17];
        public:
            __body()
            {
                using org_ptr = void (WINAPIV*)(struct __body*);
                (org_ptr(0x1402b98e0L))(this);
            };
            void ctor___body()
            {
                using org_ptr = void (WINAPIV*)(struct __body*);
                (org_ptr(0x1402b98e0L))(this);
            };
        };
        __body body[4];
    public:
        _pt_appoint_inform_request_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _pt_appoint_inform_request_zocl*);
            (org_ptr(0x1402b9880L))(this);
        };
        void ctor__pt_appoint_inform_request_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _pt_appoint_inform_request_zocl*);
            (org_ptr(0x1402b9880L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _pt_appoint_inform_request_zocl*);
            return (org_ptr(0x1402b9c50L))(this);
        };
    };
	#pragma pack(pop)
END_ATF_NAMESPACE