#pragma once

#include <Windows.h>
#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <vector>
#include <array>
#include <mutex>

#define START_ATF_NAMESPACE namespace ATF {
#define END_ATF_NAMESPACE };

START_ATF_NAMESPACE
    #include "ATFRegister.hpp"
    
    const uint16_t usVersion = 0x0100;
    const wchar_t wszVersion[] = L"1.0";
    
    typedef struct _hook_record {
        LPVOID pTrgAppOrig; // Адрес в целевом приложении
        LPVOID* ppOrig;     // clbk
        LPVOID* ppTramp;    // tramp
        LPVOID  pWrapper;   // tramp
        LPVOID  pBind;      // bind
    } hook_record;
    
    template<typename _Ty, size_t _Need, size_t _Have = sizeof(_Ty)>
    constexpr bool checkSize()
    {
        static_assert(_Have == _Need, "Invalid size");
        return true;
    }
END_ATF_NAMESPACE
