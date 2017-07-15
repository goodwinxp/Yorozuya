#include <_BUDDY_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_BUDDY_DB_BASEInit2_ptr _BUDDY_DB_BASEInit2_next(nullptr);
        Info::_BUDDY_DB_BASEInit2_clbk _BUDDY_DB_BASEInit2_user(nullptr);
        
        
        Info::_BUDDY_DB_BASEctor__BUDDY_DB_BASE4_ptr _BUDDY_DB_BASEctor__BUDDY_DB_BASE4_next(nullptr);
        Info::_BUDDY_DB_BASEctor__BUDDY_DB_BASE4_clbk _BUDDY_DB_BASEctor__BUDDY_DB_BASE4_user(nullptr);
        
        void _BUDDY_DB_BASEInit2_wrapper(struct _BUDDY_DB_BASE* _this)
        {
           _BUDDY_DB_BASEInit2_user(_this, _BUDDY_DB_BASEInit2_next);
        };
        
        void _BUDDY_DB_BASEctor__BUDDY_DB_BASE4_wrapper(struct _BUDDY_DB_BASE* _this)
        {
           _BUDDY_DB_BASEctor__BUDDY_DB_BASE4_user(_this, _BUDDY_DB_BASEctor__BUDDY_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _BUDDY_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140076cc0L,
                (LPVOID *)&_BUDDY_DB_BASEInit2_user,
                (LPVOID *)&_BUDDY_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_BUDDY_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_BUDDY_DB_BASE::*)())&_BUDDY_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140076bd0L,
                (LPVOID *)&_BUDDY_DB_BASEctor__BUDDY_DB_BASE4_user,
                (LPVOID *)&_BUDDY_DB_BASEctor__BUDDY_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_BUDDY_DB_BASEctor__BUDDY_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_BUDDY_DB_BASE::*)())&_BUDDY_DB_BASE::ctor__BUDDY_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
