// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_insertguild_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_qry_case_insertguildsize2_ptr _qry_case_insertguildsize2_next(nullptr);
        info::_qry_case_insertguildsize2_clbk _qry_case_insertguildsize2_user(nullptr);
        
        int _qry_case_insertguildsize2_wrapper(struct _qry_case_insertguild* _this)
        {
           return _qry_case_insertguildsize2_user(_this, _qry_case_insertguildsize2_next);
        };
        
        hook_record _qry_case_insertguild_functions[] = {
        {   (LPVOID)0x1400ad0c0L,
            (LPVOID *)&_qry_case_insertguildsize2_user,
            (LPVOID *)&_qry_case_insertguildsize2_next,
            (LPVOID)cast_pointer_function(_qry_case_insertguildsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_insertguild::*)())&_qry_case_insertguild::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE