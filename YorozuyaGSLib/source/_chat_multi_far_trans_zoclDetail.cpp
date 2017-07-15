#include <_chat_multi_far_trans_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_ptr _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_next(nullptr);
        Info::_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_clbk _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_user(nullptr);
        
        Info::_chat_multi_far_trans_zoclsize4_ptr _chat_multi_far_trans_zoclsize4_next(nullptr);
        Info::_chat_multi_far_trans_zoclsize4_clbk _chat_multi_far_trans_zoclsize4_user(nullptr);
        
        
        void _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_wrapper(struct _chat_multi_far_trans_zocl* _this)
        {
           _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_user(_this, _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_next);
        };
        int _chat_multi_far_trans_zoclsize4_wrapper(struct _chat_multi_far_trans_zocl* _this)
        {
           return _chat_multi_far_trans_zoclsize4_user(_this, _chat_multi_far_trans_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _chat_multi_far_trans_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140095150L,
                (LPVOID *)&_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_user,
                (LPVOID *)&_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_next,
                (LPVOID)cast_pointer_function(_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_chat_multi_far_trans_zocl::*)())&_chat_multi_far_trans_zocl::ctor__chat_multi_far_trans_zocl)
            },
            _hook_record {
                (LPVOID)0x140095170L,
                (LPVOID *)&_chat_multi_far_trans_zoclsize4_user,
                (LPVOID *)&_chat_multi_far_trans_zoclsize4_next,
                (LPVOID)cast_pointer_function(_chat_multi_far_trans_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_chat_multi_far_trans_zocl::*)())&_chat_multi_far_trans_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
