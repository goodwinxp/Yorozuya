#include <_qry_case_load_guildbattle_totalrecordDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_load_guildbattle_totalrecordsize2_ptr _qry_case_load_guildbattle_totalrecordsize2_next(nullptr);
        Info::_qry_case_load_guildbattle_totalrecordsize2_clbk _qry_case_load_guildbattle_totalrecordsize2_user(nullptr);
        
        int _qry_case_load_guildbattle_totalrecordsize2_wrapper(struct _qry_case_load_guildbattle_totalrecord* _this)
        {
           return _qry_case_load_guildbattle_totalrecordsize2_user(_this, _qry_case_load_guildbattle_totalrecordsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_load_guildbattle_totalrecord_functions = 
        {
            _hook_record {
                (LPVOID)0x140207590L,
                (LPVOID *)&_qry_case_load_guildbattle_totalrecordsize2_user,
                (LPVOID *)&_qry_case_load_guildbattle_totalrecordsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_load_guildbattle_totalrecordsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_load_guildbattle_totalrecord::*)())&_qry_case_load_guildbattle_totalrecord::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
