#include <_chat_lock_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_chat_lock_inform_zoclsize2_ptr _chat_lock_inform_zoclsize2_next(nullptr);
        Info::_chat_lock_inform_zoclsize2_clbk _chat_lock_inform_zoclsize2_user(nullptr);
        
        int _chat_lock_inform_zoclsize2_wrapper(struct _chat_lock_inform_zocl* _this)
        {
           return _chat_lock_inform_zoclsize2_user(_this, _chat_lock_inform_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _chat_lock_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f1f0L,
                (LPVOID *)&_chat_lock_inform_zoclsize2_user,
                (LPVOID *)&_chat_lock_inform_zoclsize2_next,
                (LPVOID)cast_pointer_function(_chat_lock_inform_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_chat_lock_inform_zocl::*)())&_chat_lock_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
