// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CExtDummy.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CExtDummyDrawAllDummyBBox1_ptr = void (WINAPIV*)(struct CExtDummy*);
        using CExtDummyDrawAllDummyBBox1_clbk = void (WINAPIV*)(struct CExtDummy*, CExtDummyDrawAllDummyBBox1_ptr);
        using CExtDummyDrawDummyBBox2_ptr = void (WINAPIV*)(struct CExtDummy*, uint32_t);
        using CExtDummyDrawDummyBBox2_clbk = void (WINAPIV*)(struct CExtDummy*, uint32_t, CExtDummyDrawDummyBBox2_ptr);
        using CExtDummyGetDummy3_ptr = struct _EXT_DUMMY* (WINAPIV*)(struct CExtDummy*, uint32_t);
        using CExtDummyGetDummy3_clbk = struct _EXT_DUMMY* (WINAPIV*)(struct CExtDummy*, uint32_t, CExtDummyGetDummy3_ptr);
        using CExtDummyGetDummyList4_ptr = void (WINAPIV*)(struct CExtDummy*, uint32_t, uint32_t*, uint32_t*);
        using CExtDummyGetDummyList4_clbk = void (WINAPIV*)(struct CExtDummy*, uint32_t, uint32_t*, uint32_t*, CExtDummyGetDummyList4_ptr);
        using CExtDummyGetLocalFromWorld5_ptr = int (WINAPIV*)(struct CExtDummy*, float**, uint32_t, float*);
        using CExtDummyGetLocalFromWorld5_clbk = int (WINAPIV*)(struct CExtDummy*, float**, uint32_t, float*, CExtDummyGetLocalFromWorld5_ptr);
        using CExtDummyGetTotalNum7_ptr = unsigned int (WINAPIV*)(struct CExtDummy*);
        using CExtDummyGetTotalNum7_clbk = unsigned int (WINAPIV*)(struct CExtDummy*, CExtDummyGetTotalNum7_ptr);
        using CExtDummyGetWorldFromLocal8_ptr = int (WINAPIV*)(struct CExtDummy*, float**, uint32_t, float*);
        using CExtDummyGetWorldFromLocal8_clbk = int (WINAPIV*)(struct CExtDummy*, float**, uint32_t, float*, CExtDummyGetWorldFromLocal8_ptr);
        using CExtDummyIsInBBox9_ptr = int (WINAPIV*)(struct CExtDummy*, uint32_t, float*);
        using CExtDummyIsInBBox9_clbk = int (WINAPIV*)(struct CExtDummy*, uint32_t, float*, CExtDummyIsInBBox9_ptr);
        using CExtDummyLoadExtDummy10_ptr = int (WINAPIV*)(struct CExtDummy*, char*);
        using CExtDummyLoadExtDummy10_clbk = int (WINAPIV*)(struct CExtDummy*, char*, CExtDummyLoadExtDummy10_ptr);
        using CExtDummyReleaseExtDummy11_ptr = void (WINAPIV*)(struct CExtDummy*);
        using CExtDummyReleaseExtDummy11_clbk = void (WINAPIV*)(struct CExtDummy*, CExtDummyReleaseExtDummy11_ptr);
        using CExtDummydtor_CExtDummy14_ptr = int64_t (WINAPIV*)(struct CExtDummy*);
        using CExtDummydtor_CExtDummy14_clbk = int64_t (WINAPIV*)(struct CExtDummy*, CExtDummydtor_CExtDummy14_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE