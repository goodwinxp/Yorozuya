#include <_qry_case_update_vote_availableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_update_vote_availablesize2_ptr _qry_case_update_vote_availablesize2_next(nullptr);
        Info::_qry_case_update_vote_availablesize2_clbk _qry_case_update_vote_availablesize2_user(nullptr);
        
        int _qry_case_update_vote_availablesize2_wrapper(struct _qry_case_update_vote_available* _this)
        {
           return _qry_case_update_vote_availablesize2_user(_this, _qry_case_update_vote_availablesize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_update_vote_available_functions = 
        {
            _hook_record {
                (LPVOID)0x14007e130L,
                (LPVOID *)&_qry_case_update_vote_availablesize2_user,
                (LPVOID *)&_qry_case_update_vote_availablesize2_next,
                (LPVOID)cast_pointer_function(_qry_case_update_vote_availablesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_update_vote_available::*)())&_qry_case_update_vote_available::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
