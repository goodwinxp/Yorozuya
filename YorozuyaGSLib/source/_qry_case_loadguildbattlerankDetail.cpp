#include <_qry_case_loadguildbattlerankDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_loadguildbattleranksize2_ptr _qry_case_loadguildbattleranksize2_next(nullptr);
        Info::_qry_case_loadguildbattleranksize2_clbk _qry_case_loadguildbattleranksize2_user(nullptr);
        
        int _qry_case_loadguildbattleranksize2_wrapper(struct _qry_case_loadguildbattlerank* _this)
        {
           return _qry_case_loadguildbattleranksize2_user(_this, _qry_case_loadguildbattleranksize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_loadguildbattlerank_functions = 
        {
            _hook_record {
                (LPVOID)0x140207580L,
                (LPVOID *)&_qry_case_loadguildbattleranksize2_user,
                (LPVOID *)&_qry_case_loadguildbattleranksize2_next,
                (LPVOID)cast_pointer_function(_qry_case_loadguildbattleranksize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_loadguildbattlerank::*)())&_qry_case_loadguildbattlerank::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
