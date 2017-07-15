#include <_PCBANG_PLAY_TIMEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_PCBANG_PLAY_TIMEInit2_ptr _PCBANG_PLAY_TIMEInit2_next(nullptr);
        Info::_PCBANG_PLAY_TIMEInit2_clbk _PCBANG_PLAY_TIMEInit2_user(nullptr);
        
        void _PCBANG_PLAY_TIMEInit2_wrapper(struct _PCBANG_PLAY_TIME* _this)
        {
           _PCBANG_PLAY_TIMEInit2_user(_this, _PCBANG_PLAY_TIMEInit2_next);
        };
        
        ::std::array<hook_record, 1> _PCBANG_PLAY_TIME_functions = 
        {
            _hook_record {
                (LPVOID)0x140077da0L,
                (LPVOID *)&_PCBANG_PLAY_TIMEInit2_user,
                (LPVOID *)&_PCBANG_PLAY_TIMEInit2_next,
                (LPVOID)cast_pointer_function(_PCBANG_PLAY_TIMEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_PCBANG_PLAY_TIME::*)())&_PCBANG_PLAY_TIME::Init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
