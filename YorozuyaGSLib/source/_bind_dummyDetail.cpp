#include <_bind_dummyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_bind_dummySetDummy2_ptr _bind_dummySetDummy2_next(nullptr);
        Info::_bind_dummySetDummy2_clbk _bind_dummySetDummy2_user(nullptr);
        
        
        Info::_bind_dummyctor__bind_dummy4_ptr _bind_dummyctor__bind_dummy4_next(nullptr);
        Info::_bind_dummyctor__bind_dummy4_clbk _bind_dummyctor__bind_dummy4_user(nullptr);
        
        bool _bind_dummySetDummy2_wrapper(struct _bind_dummy* _this, struct _dummy_position* pDumPos)
        {
           return _bind_dummySetDummy2_user(_this, pDumPos, _bind_dummySetDummy2_next);
        };
        
        void _bind_dummyctor__bind_dummy4_wrapper(struct _bind_dummy* _this)
        {
           _bind_dummyctor__bind_dummy4_user(_this, _bind_dummyctor__bind_dummy4_next);
        };
        
        ::std::array<hook_record, 2> _bind_dummy_functions = 
        {
            _hook_record {
                (LPVOID)0x140189470L,
                (LPVOID *)&_bind_dummySetDummy2_user,
                (LPVOID *)&_bind_dummySetDummy2_next,
                (LPVOID)cast_pointer_function(_bind_dummySetDummy2_wrapper),
                (LPVOID)cast_pointer_function((bool(_bind_dummy::*)(struct _dummy_position*))&_bind_dummy::SetDummy)
            },
            _hook_record {
                (LPVOID)0x140189450L,
                (LPVOID *)&_bind_dummyctor__bind_dummy4_user,
                (LPVOID *)&_bind_dummyctor__bind_dummy4_next,
                (LPVOID)cast_pointer_function(_bind_dummyctor__bind_dummy4_wrapper),
                (LPVOID)cast_pointer_function((void(_bind_dummy::*)())&_bind_dummy::ctor__bind_dummy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
