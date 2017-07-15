#include <_INVEN_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_INVEN_DB_BASEInit2_ptr _INVEN_DB_BASEInit2_next(nullptr);
        Info::_INVEN_DB_BASEInit2_clbk _INVEN_DB_BASEInit2_user(nullptr);
        
        
        Info::_INVEN_DB_BASEctor__INVEN_DB_BASE4_ptr _INVEN_DB_BASEctor__INVEN_DB_BASE4_next(nullptr);
        Info::_INVEN_DB_BASEctor__INVEN_DB_BASE4_clbk _INVEN_DB_BASEctor__INVEN_DB_BASE4_user(nullptr);
        
        void _INVEN_DB_BASEInit2_wrapper(struct _INVEN_DB_BASE* _this)
        {
           _INVEN_DB_BASEInit2_user(_this, _INVEN_DB_BASEInit2_next);
        };
        
        void _INVEN_DB_BASEctor__INVEN_DB_BASE4_wrapper(struct _INVEN_DB_BASE* _this)
        {
           _INVEN_DB_BASEctor__INVEN_DB_BASE4_user(_this, _INVEN_DB_BASEctor__INVEN_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _INVEN_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140075dc0L,
                (LPVOID *)&_INVEN_DB_BASEInit2_user,
                (LPVOID *)&_INVEN_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_INVEN_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_INVEN_DB_BASE::*)())&_INVEN_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140075c10L,
                (LPVOID *)&_INVEN_DB_BASEctor__INVEN_DB_BASE4_user,
                (LPVOID *)&_INVEN_DB_BASEctor__INVEN_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_INVEN_DB_BASEctor__INVEN_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_INVEN_DB_BASE::*)())&_INVEN_DB_BASE::ctor__INVEN_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
