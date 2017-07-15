#include <_REGEDDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_REGEDRelease2_ptr _REGEDRelease2_next(nullptr);
        Info::_REGEDRelease2_clbk _REGEDRelease2_user(nullptr);
        
        Info::_REGEDSet4_ptr _REGEDSet4_next(nullptr);
        Info::_REGEDSet4_clbk _REGEDSet4_user(nullptr);
        
        Info::_REGEDUpdateEquipLv6_ptr _REGEDUpdateEquipLv6_next(nullptr);
        Info::_REGEDUpdateEquipLv6_clbk _REGEDUpdateEquipLv6_user(nullptr);
        
        
        Info::_REGEDctor__REGED8_ptr _REGEDctor__REGED8_next(nullptr);
        Info::_REGEDctor__REGED8_clbk _REGEDctor__REGED8_user(nullptr);
        
        Info::_REGEDinit10_ptr _REGEDinit10_next(nullptr);
        Info::_REGEDinit10_clbk _REGEDinit10_user(nullptr);
        
        bool _REGEDRelease2_wrapper(struct _REGED* _this, char bySlot)
        {
           return _REGEDRelease2_user(_this, bySlot, _REGEDRelease2_next);
        };
        bool _REGEDSet4_wrapper(struct _REGED* _this, char bySlot, struct _STORAGE_LIST::_db_con* pItem)
        {
           return _REGEDSet4_user(_this, bySlot, pItem, _REGEDSet4_next);
        };
        void _REGEDUpdateEquipLv6_wrapper(struct _REGED* _this)
        {
           _REGEDUpdateEquipLv6_user(_this, _REGEDUpdateEquipLv6_next);
        };
        
        void _REGEDctor__REGED8_wrapper(struct _REGED* _this)
        {
           _REGEDctor__REGED8_user(_this, _REGEDctor__REGED8_next);
        };
        void _REGEDinit10_wrapper(struct _REGED* _this)
        {
           _REGEDinit10_user(_this, _REGEDinit10_next);
        };
        
        ::std::array<hook_record, 5> _REGED_functions = 
        {
            _hook_record {
                (LPVOID)0x140120660L,
                (LPVOID *)&_REGEDRelease2_user,
                (LPVOID *)&_REGEDRelease2_next,
                (LPVOID)cast_pointer_function(_REGEDRelease2_wrapper),
                (LPVOID)cast_pointer_function((bool(_REGED::*)(char))&_REGED::Release)
            },
            _hook_record {
                (LPVOID)0x14011fef0L,
                (LPVOID *)&_REGEDSet4_user,
                (LPVOID *)&_REGEDSet4_next,
                (LPVOID)cast_pointer_function(_REGEDSet4_wrapper),
                (LPVOID)cast_pointer_function((bool(_REGED::*)(char, struct _STORAGE_LIST::_db_con*))&_REGED::Set)
            },
            _hook_record {
                (LPVOID)0x14011f5f0L,
                (LPVOID *)&_REGEDUpdateEquipLv6_user,
                (LPVOID *)&_REGEDUpdateEquipLv6_next,
                (LPVOID)cast_pointer_function(_REGEDUpdateEquipLv6_wrapper),
                (LPVOID)cast_pointer_function((void(_REGED::*)())&_REGED::UpdateEquipLv)
            },
            _hook_record {
                (LPVOID)0x140075420L,
                (LPVOID *)&_REGEDctor__REGED8_user,
                (LPVOID *)&_REGEDctor__REGED8_next,
                (LPVOID)cast_pointer_function(_REGEDctor__REGED8_wrapper),
                (LPVOID)cast_pointer_function((void(_REGED::*)())&_REGED::ctor__REGED)
            },
            _hook_record {
                (LPVOID)0x1400755a0L,
                (LPVOID *)&_REGEDinit10_user,
                (LPVOID *)&_REGEDinit10_next,
                (LPVOID)cast_pointer_function(_REGEDinit10_wrapper),
                (LPVOID)cast_pointer_function((void(_REGED::*)())&_REGED::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
