// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_Cvtvec.hpp"
#include "std__locale.hpp"


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct  num_get<char,istreambuf_iterator<char,char_traits<char> > > : locale::facet
        {
            _Cvtvec _Cvt;
        };
    }; // end namespace std
END_ATF_NAMESPACE
#include "_Cvtvec.hpp"
#include "std__locale.hpp"


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct  num_get<wchar_t,istreambuf_iterator<wchar_t,char_traits<wchar_t> > > : locale::facet
        {
            _Cvtvec _Cvt;
        };
    }; // end namespace std
END_ATF_NAMESPACE