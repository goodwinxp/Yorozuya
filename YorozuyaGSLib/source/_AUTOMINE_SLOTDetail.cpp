#include <_AUTOMINE_SLOTDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_ptr _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_next(nullptr);
        Info::_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_clbk _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_user(nullptr);
        
        
        void _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_wrapper(struct _AUTOMINE_SLOT* _this)
        {
           _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_user(_this, _AUTOMINE_SLOTctor__AUTOMINE_SLOT2_next);
        };
        
        ::std::array<hook_record, 1> _AUTOMINE_SLOT_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d4180L,
                (LPVOID *)&_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_user,
                (LPVOID *)&_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_next,
                (LPVOID)cast_pointer_function(_AUTOMINE_SLOTctor__AUTOMINE_SLOT2_wrapper),
                (LPVOID)cast_pointer_function((void(_AUTOMINE_SLOT::*)())&_AUTOMINE_SLOT::ctor__AUTOMINE_SLOT)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
