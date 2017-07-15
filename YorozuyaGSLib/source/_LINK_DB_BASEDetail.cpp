#include <_LINK_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_LINK_DB_BASEInit2_ptr _LINK_DB_BASEInit2_next(nullptr);
        Info::_LINK_DB_BASEInit2_clbk _LINK_DB_BASEInit2_user(nullptr);
        
        
        Info::_LINK_DB_BASEctor__LINK_DB_BASE4_ptr _LINK_DB_BASEctor__LINK_DB_BASE4_next(nullptr);
        Info::_LINK_DB_BASEctor__LINK_DB_BASE4_clbk _LINK_DB_BASEctor__LINK_DB_BASE4_user(nullptr);
        
        void _LINK_DB_BASEInit2_wrapper(struct _LINK_DB_BASE* _this)
        {
           _LINK_DB_BASEInit2_user(_this, _LINK_DB_BASEInit2_next);
        };
        
        void _LINK_DB_BASEctor__LINK_DB_BASE4_wrapper(struct _LINK_DB_BASE* _this)
        {
           _LINK_DB_BASEctor__LINK_DB_BASE4_user(_this, _LINK_DB_BASEctor__LINK_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _LINK_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140075990L,
                (LPVOID *)&_LINK_DB_BASEInit2_user,
                (LPVOID *)&_LINK_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_LINK_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_LINK_DB_BASE::*)())&_LINK_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140075870L,
                (LPVOID *)&_LINK_DB_BASEctor__LINK_DB_BASE4_user,
                (LPVOID *)&_LINK_DB_BASEctor__LINK_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_LINK_DB_BASEctor__LINK_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_LINK_DB_BASE::*)())&_LINK_DB_BASE::ctor__LINK_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
