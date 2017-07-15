#include <_qry_case_joinacguildDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_joinacguildsize2_ptr _qry_case_joinacguildsize2_next(nullptr);
        Info::_qry_case_joinacguildsize2_clbk _qry_case_joinacguildsize2_user(nullptr);
        
        int _qry_case_joinacguildsize2_wrapper(struct _qry_case_joinacguild* _this)
        {
           return _qry_case_joinacguildsize2_user(_this, _qry_case_joinacguildsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_joinacguild_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ad170L,
                (LPVOID *)&_qry_case_joinacguildsize2_user,
                (LPVOID *)&_qry_case_joinacguildsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_joinacguildsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_joinacguild::*)())&_qry_case_joinacguild::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
