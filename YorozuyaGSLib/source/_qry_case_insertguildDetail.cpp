#include <_qry_case_insertguildDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_insertguildsize2_ptr _qry_case_insertguildsize2_next(nullptr);
        Info::_qry_case_insertguildsize2_clbk _qry_case_insertguildsize2_user(nullptr);
        
        int _qry_case_insertguildsize2_wrapper(struct _qry_case_insertguild* _this)
        {
           return _qry_case_insertguildsize2_user(_this, _qry_case_insertguildsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_insertguild_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ad0c0L,
                (LPVOID *)&_qry_case_insertguildsize2_user,
                (LPVOID *)&_qry_case_insertguildsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_insertguildsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_insertguild::*)())&_qry_case_insertguild::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
