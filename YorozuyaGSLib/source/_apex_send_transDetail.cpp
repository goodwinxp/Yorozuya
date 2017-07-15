#include <_apex_send_transDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_apex_send_transsize2_ptr _apex_send_transsize2_next(nullptr);
        Info::_apex_send_transsize2_clbk _apex_send_transsize2_user(nullptr);
        
        int _apex_send_transsize2_wrapper(struct _apex_send_trans* _this)
        {
           return _apex_send_transsize2_user(_this, _apex_send_transsize2_next);
        };
        
        ::std::array<hook_record, 1> _apex_send_trans_functions = 
        {
            _hook_record {
                (LPVOID)0x140410c30L,
                (LPVOID *)&_apex_send_transsize2_user,
                (LPVOID *)&_apex_send_transsize2_next,
                (LPVOID)cast_pointer_function(_apex_send_transsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_apex_send_trans::*)())&_apex_send_trans::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
