// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagNMHDR.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagNMREBARAUTOBREAK
    {
        tagNMHDR hdr;
        unsigned int uBand;
        unsigned int wID;
        __int64 lParam;
        unsigned int uMsg;
        unsigned int fStyleCurrent;
        int fAutoBreak;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE