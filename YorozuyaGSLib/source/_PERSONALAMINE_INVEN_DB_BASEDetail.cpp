#include <_PERSONALAMINE_INVEN_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_PERSONALAMINE_INVEN_DB_BASEInit2_ptr _PERSONALAMINE_INVEN_DB_BASEInit2_next(nullptr);
        Info::_PERSONALAMINE_INVEN_DB_BASEInit2_clbk _PERSONALAMINE_INVEN_DB_BASEInit2_user(nullptr);
        
        
        Info::_PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_ptr _PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_next(nullptr);
        Info::_PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_clbk _PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_user(nullptr);
        
        void _PERSONALAMINE_INVEN_DB_BASEInit2_wrapper(struct _PERSONALAMINE_INVEN_DB_BASE* _this)
        {
           _PERSONALAMINE_INVEN_DB_BASEInit2_user(_this, _PERSONALAMINE_INVEN_DB_BASEInit2_next);
        };
        
        void _PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_wrapper(struct _PERSONALAMINE_INVEN_DB_BASE* _this)
        {
           _PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_user(_this, _PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _PERSONALAMINE_INVEN_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140075f70L,
                (LPVOID *)&_PERSONALAMINE_INVEN_DB_BASEInit2_user,
                (LPVOID *)&_PERSONALAMINE_INVEN_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_PERSONALAMINE_INVEN_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_PERSONALAMINE_INVEN_DB_BASE::*)())&_PERSONALAMINE_INVEN_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140075e40L,
                (LPVOID *)&_PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_user,
                (LPVOID *)&_PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_PERSONALAMINE_INVEN_DB_BASEctor__PERSONALAMINE_INVEN_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_PERSONALAMINE_INVEN_DB_BASE::*)())&_PERSONALAMINE_INVEN_DB_BASE::ctor__PERSONALAMINE_INVEN_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
