// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_SYSTEMTIME.hpp"
#include "tagPOINT.hpp"


START_ATF_NAMESPACE
    struct MCHITTESTINFO
    {
        unsigned int cbSize;
        tagPOINT pt;
        unsigned int uHit;
        _SYSTEMTIME st;
    };
END_ATF_NAMESPACE