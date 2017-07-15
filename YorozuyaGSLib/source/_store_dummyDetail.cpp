#include <_store_dummyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_store_dummySetDummy2_ptr _store_dummySetDummy2_next(nullptr);
        Info::_store_dummySetDummy2_clbk _store_dummySetDummy2_user(nullptr);
        
        
        Info::_store_dummyctor__store_dummy4_ptr _store_dummyctor__store_dummy4_next(nullptr);
        Info::_store_dummyctor__store_dummy4_clbk _store_dummyctor__store_dummy4_user(nullptr);
        
        bool _store_dummySetDummy2_wrapper(struct _store_dummy* _this, int nType, struct _base_fld* pRec, struct _dummy_position* pDumPos)
        {
           return _store_dummySetDummy2_user(_this, nType, pRec, pDumPos, _store_dummySetDummy2_next);
        };
        
        void _store_dummyctor__store_dummy4_wrapper(struct _store_dummy* _this)
        {
           _store_dummyctor__store_dummy4_user(_this, _store_dummyctor__store_dummy4_next);
        };
        
        ::std::array<hook_record, 2> _store_dummy_functions = 
        {
            _hook_record {
                (LPVOID)0x140189380L,
                (LPVOID *)&_store_dummySetDummy2_user,
                (LPVOID *)&_store_dummySetDummy2_next,
                (LPVOID)cast_pointer_function(_store_dummySetDummy2_wrapper),
                (LPVOID)cast_pointer_function((bool(_store_dummy::*)(int, struct _base_fld*, struct _dummy_position*))&_store_dummy::SetDummy)
            },
            _hook_record {
                (LPVOID)0x140189340L,
                (LPVOID *)&_store_dummyctor__store_dummy4_user,
                (LPVOID *)&_store_dummyctor__store_dummy4_next,
                (LPVOID)cast_pointer_function(_store_dummyctor__store_dummy4_wrapper),
                (LPVOID)cast_pointer_function((void(_store_dummy::*)())&_store_dummy::ctor__store_dummy)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
