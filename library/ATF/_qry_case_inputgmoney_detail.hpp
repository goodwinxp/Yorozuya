// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_inputgmoney_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_qry_case_inputgmoneysize2_ptr _qry_case_inputgmoneysize2_next(nullptr);
        info::_qry_case_inputgmoneysize2_clbk _qry_case_inputgmoneysize2_user(nullptr);
        
        int _qry_case_inputgmoneysize2_wrapper(struct _qry_case_inputgmoney* _this)
        {
           return _qry_case_inputgmoneysize2_user(_this, _qry_case_inputgmoneysize2_next);
        };
        
        hook_record _qry_case_inputgmoney_functions[] = {
        {   (LPVOID)0x1400ad290L,
            (LPVOID *)&_qry_case_inputgmoneysize2_user,
            (LPVOID *)&_qry_case_inputgmoneysize2_next,
            (LPVOID)cast_pointer_function(_qry_case_inputgmoneysize2_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_inputgmoney::*)())&_qry_case_inputgmoney::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE