#include <_qry_case_updatedrawguildbattlerankDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_updatedrawguildbattleranksize2_ptr _qry_case_updatedrawguildbattleranksize2_next(nullptr);
        Info::_qry_case_updatedrawguildbattleranksize2_clbk _qry_case_updatedrawguildbattleranksize2_user(nullptr);
        
        int _qry_case_updatedrawguildbattleranksize2_wrapper(struct _qry_case_updatedrawguildbattlerank* _this)
        {
           return _qry_case_updatedrawguildbattleranksize2_user(_this, _qry_case_updatedrawguildbattleranksize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_updatedrawguildbattlerank_functions = 
        {
            _hook_record {
                (LPVOID)0x1403eb3d0L,
                (LPVOID *)&_qry_case_updatedrawguildbattleranksize2_user,
                (LPVOID *)&_qry_case_updatedrawguildbattleranksize2_next,
                (LPVOID)cast_pointer_function(_qry_case_updatedrawguildbattleranksize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_updatedrawguildbattlerank::*)())&_qry_case_updatedrawguildbattlerank::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
