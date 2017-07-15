#include <_qry_case_selfleaveDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_selfleavesize2_ptr _qry_case_selfleavesize2_next(nullptr);
        Info::_qry_case_selfleavesize2_clbk _qry_case_selfleavesize2_user(nullptr);
        
        int _qry_case_selfleavesize2_wrapper(struct _qry_case_selfleave* _this)
        {
           return _qry_case_selfleavesize2_user(_this, _qry_case_selfleavesize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_selfleave_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ad1d0L,
                (LPVOID *)&_qry_case_selfleavesize2_user,
                (LPVOID *)&_qry_case_selfleavesize2_next,
                (LPVOID)cast_pointer_function(_qry_case_selfleavesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_selfleave::*)())&_qry_case_selfleave::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
