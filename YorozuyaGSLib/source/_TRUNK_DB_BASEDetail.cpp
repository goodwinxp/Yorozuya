#include <_TRUNK_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_TRUNK_DB_BASEInit2_ptr _TRUNK_DB_BASEInit2_next(nullptr);
        Info::_TRUNK_DB_BASEInit2_clbk _TRUNK_DB_BASEInit2_user(nullptr);
        
        
        Info::_TRUNK_DB_BASEctor__TRUNK_DB_BASE4_ptr _TRUNK_DB_BASEctor__TRUNK_DB_BASE4_next(nullptr);
        Info::_TRUNK_DB_BASEctor__TRUNK_DB_BASE4_clbk _TRUNK_DB_BASEctor__TRUNK_DB_BASE4_user(nullptr);
        
        void _TRUNK_DB_BASEInit2_wrapper(struct _TRUNK_DB_BASE* _this)
        {
           _TRUNK_DB_BASEInit2_user(_this, _TRUNK_DB_BASEInit2_next);
        };
        
        void _TRUNK_DB_BASEctor__TRUNK_DB_BASE4_wrapper(struct _TRUNK_DB_BASE* _this)
        {
           _TRUNK_DB_BASEctor__TRUNK_DB_BASE4_user(_this, _TRUNK_DB_BASEctor__TRUNK_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _TRUNK_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x1400770a0L,
                (LPVOID *)&_TRUNK_DB_BASEInit2_user,
                (LPVOID *)&_TRUNK_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_TRUNK_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_TRUNK_DB_BASE::*)())&_TRUNK_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140076ef0L,
                (LPVOID *)&_TRUNK_DB_BASEctor__TRUNK_DB_BASE4_user,
                (LPVOID *)&_TRUNK_DB_BASEctor__TRUNK_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_TRUNK_DB_BASEctor__TRUNK_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_TRUNK_DB_BASE::*)())&_TRUNK_DB_BASE::ctor__TRUNK_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
