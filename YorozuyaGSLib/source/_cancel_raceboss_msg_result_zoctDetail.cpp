#include <_cancel_raceboss_msg_result_zoctDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_cancel_raceboss_msg_result_zoctsize2_ptr _cancel_raceboss_msg_result_zoctsize2_next(nullptr);
        Info::_cancel_raceboss_msg_result_zoctsize2_clbk _cancel_raceboss_msg_result_zoctsize2_user(nullptr);
        
        int _cancel_raceboss_msg_result_zoctsize2_wrapper(struct _cancel_raceboss_msg_result_zoct* _this)
        {
           return _cancel_raceboss_msg_result_zoctsize2_user(_this, _cancel_raceboss_msg_result_zoctsize2_next);
        };
        
        ::std::array<hook_record, 1> _cancel_raceboss_msg_result_zoct_functions = 
        {
            _hook_record {
                (LPVOID)0x1401c7740L,
                (LPVOID *)&_cancel_raceboss_msg_result_zoctsize2_user,
                (LPVOID *)&_cancel_raceboss_msg_result_zoctsize2_next,
                (LPVOID)cast_pointer_function(_cancel_raceboss_msg_result_zoctsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_cancel_raceboss_msg_result_zoct::*)())&_cancel_raceboss_msg_result_zoct::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
