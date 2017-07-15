#include <_AVATOR_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_AVATOR_DB_BASEInit2_ptr _AVATOR_DB_BASEInit2_next(nullptr);
        Info::_AVATOR_DB_BASEInit2_clbk _AVATOR_DB_BASEInit2_user(nullptr);
        
        
        Info::_AVATOR_DB_BASEctor__AVATOR_DB_BASE4_ptr _AVATOR_DB_BASEctor__AVATOR_DB_BASE4_next(nullptr);
        Info::_AVATOR_DB_BASEctor__AVATOR_DB_BASE4_clbk _AVATOR_DB_BASEctor__AVATOR_DB_BASE4_user(nullptr);
        
        void _AVATOR_DB_BASEInit2_wrapper(struct _AVATOR_DB_BASE* _this)
        {
           _AVATOR_DB_BASEInit2_user(_this, _AVATOR_DB_BASEInit2_next);
        };
        
        void _AVATOR_DB_BASEctor__AVATOR_DB_BASE4_wrapper(struct _AVATOR_DB_BASE* _this)
        {
           _AVATOR_DB_BASEctor__AVATOR_DB_BASE4_user(_this, _AVATOR_DB_BASEctor__AVATOR_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _AVATOR_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x1400756a0L,
                (LPVOID *)&_AVATOR_DB_BASEInit2_user,
                (LPVOID *)&_AVATOR_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_AVATOR_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_AVATOR_DB_BASE::*)())&_AVATOR_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x1400753c0L,
                (LPVOID *)&_AVATOR_DB_BASEctor__AVATOR_DB_BASE4_user,
                (LPVOID *)&_AVATOR_DB_BASEctor__AVATOR_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_AVATOR_DB_BASEctor__AVATOR_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_AVATOR_DB_BASE::*)())&_AVATOR_DB_BASE::ctor__AVATOR_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
