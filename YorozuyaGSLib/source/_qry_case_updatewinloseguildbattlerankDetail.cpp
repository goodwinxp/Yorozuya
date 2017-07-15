#include <_qry_case_updatewinloseguildbattlerankDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_updatewinloseguildbattleranksize2_ptr _qry_case_updatewinloseguildbattleranksize2_next(nullptr);
        Info::_qry_case_updatewinloseguildbattleranksize2_clbk _qry_case_updatewinloseguildbattleranksize2_user(nullptr);
        
        int _qry_case_updatewinloseguildbattleranksize2_wrapper(struct _qry_case_updatewinloseguildbattlerank* _this)
        {
           return _qry_case_updatewinloseguildbattleranksize2_user(_this, _qry_case_updatewinloseguildbattleranksize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_updatewinloseguildbattlerank_functions = 
        {
            _hook_record {
                (LPVOID)0x1403eb3e0L,
                (LPVOID *)&_qry_case_updatewinloseguildbattleranksize2_user,
                (LPVOID *)&_qry_case_updatewinloseguildbattleranksize2_next,
                (LPVOID)cast_pointer_function(_qry_case_updatewinloseguildbattleranksize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_updatewinloseguildbattlerank::*)())&_qry_case_updatewinloseguildbattlerank::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
