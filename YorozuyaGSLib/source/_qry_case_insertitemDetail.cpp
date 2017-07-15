#include <_qry_case_insertitemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_insertitemsize2_ptr _qry_case_insertitemsize2_next(nullptr);
        Info::_qry_case_insertitemsize2_clbk _qry_case_insertitemsize2_user(nullptr);
        
        int _qry_case_insertitemsize2_wrapper(struct _qry_case_insertitem* _this)
        {
           return _qry_case_insertitemsize2_user(_this, _qry_case_insertitemsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_insertitem_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf540L,
                (LPVOID *)&_qry_case_insertitemsize2_user,
                (LPVOID *)&_qry_case_insertitemsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_insertitemsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_insertitem::*)())&_qry_case_insertitem::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
