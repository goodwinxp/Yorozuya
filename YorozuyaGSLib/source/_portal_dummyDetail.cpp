#include <_portal_dummyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_portal_dummySetDummy2_ptr _portal_dummySetDummy2_next(nullptr);
        Info::_portal_dummySetDummy2_clbk _portal_dummySetDummy2_user(nullptr);
        
        
        Info::_portal_dummyctor__portal_dummy4_ptr _portal_dummyctor__portal_dummy4_next(nullptr);
        Info::_portal_dummyctor__portal_dummy4_clbk _portal_dummyctor__portal_dummy4_user(nullptr);
        
        bool _portal_dummySetDummy2_wrapper(struct _portal_dummy* _this, struct _portal_fld* pRec, struct _dummy_position* pDumPos)
        {
           return _portal_dummySetDummy2_user(_this, pRec, pDumPos, _portal_dummySetDummy2_next);
        };
        
        void _portal_dummyctor__portal_dummy4_wrapper(struct _portal_dummy* _this)
        {
           _portal_dummyctor__portal_dummy4_user(_this, _portal_dummyctor__portal_dummy4_next);
        };
        
        ::std::array<hook_record, 2> _portal_dummy_functions = 
        {
            _hook_record {
                (LPVOID)0x1401892f0L,
                (LPVOID *)&_portal_dummySetDummy2_user,
                (LPVOID *)&_portal_dummySetDummy2_next,
                (LPVOID)cast_pointer_function(_portal_dummySetDummy2_wrapper),
                (LPVOID)cast_pointer_function((bool(_portal_dummy::*)(struct _portal_fld*, struct _dummy_position*))&_portal_dummy::SetDummy)
            },
            _hook_record {
                (LPVOID)0x1401892c0L,
                (LPVOID *)&_portal_dummyctor__portal_dummy4_user,
                (LPVOID *)&_portal_dummyctor__portal_dummy4_next,
                (LPVOID)cast_pointer_function(_portal_dummyctor__portal_dummy4_wrapper),
                (LPVOID)cast_pointer_function((void(_portal_dummy::*)())&_portal_dummy::ctor__portal_dummy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
