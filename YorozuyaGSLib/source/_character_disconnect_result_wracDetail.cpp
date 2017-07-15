#include <_character_disconnect_result_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_character_disconnect_result_wracsize2_ptr _character_disconnect_result_wracsize2_next(nullptr);
        Info::_character_disconnect_result_wracsize2_clbk _character_disconnect_result_wracsize2_user(nullptr);
        
        int _character_disconnect_result_wracsize2_wrapper(struct _character_disconnect_result_wrac* _this)
        {
           return _character_disconnect_result_wracsize2_user(_this, _character_disconnect_result_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _character_disconnect_result_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x1401d24e0L,
                (LPVOID *)&_character_disconnect_result_wracsize2_user,
                (LPVOID *)&_character_disconnect_result_wracsize2_next,
                (LPVOID)cast_pointer_function(_character_disconnect_result_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_character_disconnect_result_wrac::*)())&_character_disconnect_result_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
