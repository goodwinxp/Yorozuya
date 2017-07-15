#include <_start_dummyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_start_dummySetDummy2_ptr _start_dummySetDummy2_next(nullptr);
        Info::_start_dummySetDummy2_clbk _start_dummySetDummy2_user(nullptr);
        
        
        Info::_start_dummyctor__start_dummy4_ptr _start_dummyctor__start_dummy4_next(nullptr);
        Info::_start_dummyctor__start_dummy4_clbk _start_dummyctor__start_dummy4_user(nullptr);
        
        bool _start_dummySetDummy2_wrapper(struct _start_dummy* _this, struct _dummy_position* pDumPos)
        {
           return _start_dummySetDummy2_user(_this, pDumPos, _start_dummySetDummy2_next);
        };
        
        void _start_dummyctor__start_dummy4_wrapper(struct _start_dummy* _this)
        {
           _start_dummyctor__start_dummy4_user(_this, _start_dummyctor__start_dummy4_next);
        };
        
        ::std::array<hook_record, 2> _start_dummy_functions = 
        {
            _hook_record {
                (LPVOID)0x140189410L,
                (LPVOID *)&_start_dummySetDummy2_user,
                (LPVOID *)&_start_dummySetDummy2_next,
                (LPVOID)cast_pointer_function(_start_dummySetDummy2_wrapper),
                (LPVOID)cast_pointer_function((bool(_start_dummy::*)(struct _dummy_position*))&_start_dummy::SetDummy)
            },
            _hook_record {
                (LPVOID)0x1401893f0L,
                (LPVOID *)&_start_dummyctor__start_dummy4_user,
                (LPVOID *)&_start_dummyctor__start_dummy4_next,
                (LPVOID)cast_pointer_function(_start_dummyctor__start_dummy4_wrapper),
                (LPVOID)cast_pointer_function((void(_start_dummy::*)())&_start_dummy::ctor__start_dummy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
