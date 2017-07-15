#include <_EQUIP_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_EQUIP_DB_BASEInit2_ptr _EQUIP_DB_BASEInit2_next(nullptr);
        Info::_EQUIP_DB_BASEInit2_clbk _EQUIP_DB_BASEInit2_user(nullptr);
        
        
        Info::_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_ptr _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_next(nullptr);
        Info::_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_clbk _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_user(nullptr);
        
        void _EQUIP_DB_BASEInit2_wrapper(struct _EQUIP_DB_BASE* _this)
        {
           _EQUIP_DB_BASEInit2_user(_this, _EQUIP_DB_BASEInit2_next);
        };
        
        void _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_wrapper(struct _EQUIP_DB_BASE* _this)
        {
           _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_user(_this, _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _EQUIP_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140075b90L,
                (LPVOID *)&_EQUIP_DB_BASEInit2_user,
                (LPVOID *)&_EQUIP_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_EQUIP_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_EQUIP_DB_BASE::*)())&_EQUIP_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140075a10L,
                (LPVOID *)&_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_user,
                (LPVOID *)&_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_EQUIP_DB_BASE::*)())&_EQUIP_DB_BASE::ctor__EQUIP_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
