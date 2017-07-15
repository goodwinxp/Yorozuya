#include <_qry_case_update_punishmentDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_update_punishmentsize2_ptr _qry_case_update_punishmentsize2_next(nullptr);
        Info::_qry_case_update_punishmentsize2_clbk _qry_case_update_punishmentsize2_user(nullptr);
        
        int _qry_case_update_punishmentsize2_wrapper(struct _qry_case_update_punishment* _this)
        {
           return _qry_case_update_punishmentsize2_user(_this, _qry_case_update_punishmentsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_update_punishment_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b0f60L,
                (LPVOID *)&_qry_case_update_punishmentsize2_user,
                (LPVOID *)&_qry_case_update_punishmentsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_update_punishmentsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_update_punishment::*)())&_qry_case_update_punishment::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
