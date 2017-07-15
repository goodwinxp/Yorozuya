#include <_qry_case_addpvppointDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_addpvppointsize2_ptr _qry_case_addpvppointsize2_next(nullptr);
        Info::_qry_case_addpvppointsize2_clbk _qry_case_addpvppointsize2_user(nullptr);
        
        int _qry_case_addpvppointsize2_wrapper(struct _qry_case_addpvppoint* _this)
        {
           return _qry_case_addpvppointsize2_user(_this, _qry_case_addpvppointsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_addpvppoint_functions = 
        {
            _hook_record {
                (LPVOID)0x1401413f0L,
                (LPVOID *)&_qry_case_addpvppointsize2_user,
                (LPVOID *)&_qry_case_addpvppointsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_addpvppointsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_addpvppoint::*)())&_qry_case_addpvppoint::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
