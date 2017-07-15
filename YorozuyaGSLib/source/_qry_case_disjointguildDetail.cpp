#include <_qry_case_disjointguildDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_disjointguildsize2_ptr _qry_case_disjointguildsize2_next(nullptr);
        Info::_qry_case_disjointguildsize2_clbk _qry_case_disjointguildsize2_user(nullptr);
        
        int _qry_case_disjointguildsize2_wrapper(struct _qry_case_disjointguild* _this)
        {
           return _qry_case_disjointguildsize2_user(_this, _qry_case_disjointguildsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_disjointguild_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ad420L,
                (LPVOID *)&_qry_case_disjointguildsize2_user,
                (LPVOID *)&_qry_case_disjointguildsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_disjointguildsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_disjointguild::*)())&_qry_case_disjointguild::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
