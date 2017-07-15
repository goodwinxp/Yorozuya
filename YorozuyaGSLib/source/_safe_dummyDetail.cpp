#include <_safe_dummyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_safe_dummySetDummy2_ptr _safe_dummySetDummy2_next(nullptr);
        Info::_safe_dummySetDummy2_clbk _safe_dummySetDummy2_user(nullptr);
        
        
        Info::_safe_dummyctor__safe_dummy4_ptr _safe_dummyctor__safe_dummy4_next(nullptr);
        Info::_safe_dummyctor__safe_dummy4_clbk _safe_dummyctor__safe_dummy4_user(nullptr);
        
        bool _safe_dummySetDummy2_wrapper(struct _safe_dummy* _this, struct _dummy_position* pDumPos)
        {
           return _safe_dummySetDummy2_user(_this, pDumPos, _safe_dummySetDummy2_next);
        };
        
        void _safe_dummyctor__safe_dummy4_wrapper(struct _safe_dummy* _this)
        {
           _safe_dummyctor__safe_dummy4_user(_this, _safe_dummyctor__safe_dummy4_next);
        };
        
        ::std::array<hook_record, 2> _safe_dummy_functions = 
        {
            _hook_record {
                (LPVOID)0x140189bf0L,
                (LPVOID *)&_safe_dummySetDummy2_user,
                (LPVOID *)&_safe_dummySetDummy2_next,
                (LPVOID)cast_pointer_function(_safe_dummySetDummy2_wrapper),
                (LPVOID)cast_pointer_function((bool(_safe_dummy::*)(struct _dummy_position*))&_safe_dummy::SetDummy)
            },
            _hook_record {
                (LPVOID)0x140189bd0L,
                (LPVOID *)&_safe_dummyctor__safe_dummy4_user,
                (LPVOID *)&_safe_dummyctor__safe_dummy4_next,
                (LPVOID)cast_pointer_function(_safe_dummyctor__safe_dummy4_wrapper),
                (LPVOID)cast_pointer_function((void(_safe_dummy::*)())&_safe_dummy::ctor__safe_dummy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
