#include <_UNIT_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_UNIT_DB_BASEInit2_ptr _UNIT_DB_BASEInit2_next(nullptr);
        Info::_UNIT_DB_BASEInit2_clbk _UNIT_DB_BASEInit2_user(nullptr);
        
        
        Info::_UNIT_DB_BASEctor__UNIT_DB_BASE4_ptr _UNIT_DB_BASEctor__UNIT_DB_BASE4_next(nullptr);
        Info::_UNIT_DB_BASEctor__UNIT_DB_BASE4_clbk _UNIT_DB_BASEctor__UNIT_DB_BASE4_user(nullptr);
        
        void _UNIT_DB_BASEInit2_wrapper(struct _UNIT_DB_BASE* _this)
        {
           _UNIT_DB_BASEInit2_user(_this, _UNIT_DB_BASEInit2_next);
        };
        
        void _UNIT_DB_BASEctor__UNIT_DB_BASE4_wrapper(struct _UNIT_DB_BASE* _this)
        {
           _UNIT_DB_BASEctor__UNIT_DB_BASE4_user(_this, _UNIT_DB_BASEctor__UNIT_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _UNIT_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x1400765c0L,
                (LPVOID *)&_UNIT_DB_BASEInit2_user,
                (LPVOID *)&_UNIT_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_UNIT_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_UNIT_DB_BASE::*)())&_UNIT_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x1400763f0L,
                (LPVOID *)&_UNIT_DB_BASEctor__UNIT_DB_BASE4_user,
                (LPVOID *)&_UNIT_DB_BASEctor__UNIT_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_UNIT_DB_BASEctor__UNIT_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_UNIT_DB_BASE::*)())&_UNIT_DB_BASE::ctor__UNIT_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
