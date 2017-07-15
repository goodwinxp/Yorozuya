#include <_qry_case_insert_timelimit_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_insert_timelimit_infosize2_ptr _qry_case_insert_timelimit_infosize2_next(nullptr);
        Info::_qry_case_insert_timelimit_infosize2_clbk _qry_case_insert_timelimit_infosize2_user(nullptr);
        
        int _qry_case_insert_timelimit_infosize2_wrapper(struct _qry_case_insert_timelimit_info* _this)
        {
           return _qry_case_insert_timelimit_infosize2_user(_this, _qry_case_insert_timelimit_infosize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_insert_timelimit_info_functions = 
        {
            _hook_record {
                (LPVOID)0x14029dae0L,
                (LPVOID *)&_qry_case_insert_timelimit_infosize2_user,
                (LPVOID *)&_qry_case_insert_timelimit_infosize2_next,
                (LPVOID)cast_pointer_function(_qry_case_insert_timelimit_infosize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_insert_timelimit_info::*)())&_qry_case_insert_timelimit_info::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
