// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CW2AEX_info.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace detail
        {
            info::ATL__CW2AEXctor_CW2AEX2_ptr ATL__CW2AEXctor_CW2AEX2_next(nullptr);
            info::ATL__CW2AEXctor_CW2AEX2_clbk ATL__CW2AEXctor_CW2AEX2_user(nullptr);
            info::ATL__CW2AEXInit4_ptr ATL__CW2AEXInit4_next(nullptr);
            info::ATL__CW2AEXInit4_clbk ATL__CW2AEXInit4_user(nullptr);
            info::ATL__CW2AEXdtor_CW2AEX8_ptr ATL__CW2AEXdtor_CW2AEX8_next(nullptr);
            info::ATL__CW2AEXdtor_CW2AEX8_clbk ATL__CW2AEXdtor_CW2AEX8_user(nullptr);
            
            void ATL__CW2AEXctor_CW2AEX2_wrapper(struct ATL::CW2AEX<128>* _this, wchar_t* psz)
            {
               ATL__CW2AEXctor_CW2AEX2_user(_this, psz);
            };
            void ATL__CW2AEXInit4_wrapper(struct ATL::CW2AEX<128>* _this, wchar_t* psz, unsigned int nConvertCodePage)
            {
               ATL__CW2AEXInit4_user(_this, psz, nConvertCodePage);
            };
            void ATL__CW2AEXdtor_CW2AEX8_wrapper(struct ATL::CW2AEX<128>* _this)
            {
               ATL__CW2AEXdtor_CW2AEX8_user(_this);
            };
            
            hook_record ATL::CW2AEX<128>_functions[] = {
            {   (LPVOID)0x140026ef0L,
                (LPVOID *)&ATL__CW2AEXctor_CW2AEX2_user,
                (LPVOID *)&ATL__CW2AEXctor_CW2AEX2_next,
                (LPVOID)cast_pointer_function(ATL__CW2AEXctor_CW2AEX2_wrapper),
                (LPVOID)cast_pointer_function((void(ATL::CW2AEX<128>::*)(wchar_t*))&ATL::CW2AEX<128>::ctor_CW2AEX) },
            {   (LPVOID)0x140027110L,
                (LPVOID *)&ATL__CW2AEXInit4_user,
                (LPVOID *)&ATL__CW2AEXInit4_next,
                (LPVOID)cast_pointer_function(ATL__CW2AEXInit4_wrapper),
                (LPVOID)cast_pointer_function((void(ATL::CW2AEX<128>::*)(wchar_t*, unsigned int))&ATL::CW2AEX<128>::Init) },
            {   (LPVOID)0x140026f70L,
                (LPVOID *)&ATL__CW2AEXdtor_CW2AEX8_user,
                (LPVOID *)&ATL__CW2AEXdtor_CW2AEX8_next,
                (LPVOID)cast_pointer_function(ATL__CW2AEXdtor_CW2AEX8_wrapper),
                (LPVOID)cast_pointer_function((void(ATL::CW2AEX<128>::*)())&ATL::CW2AEX<128>::dtor_CW2AEX) },
            
            };
            
        }; // end namespace detail
    }; // end namespace ATL
END_ATF_NAMESPACE