#include <_CUTTING_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_CUTTING_DB_BASEInit2_ptr _CUTTING_DB_BASEInit2_next(nullptr);
        Info::_CUTTING_DB_BASEInit2_clbk _CUTTING_DB_BASEInit2_user(nullptr);
        
        Info::_CUTTING_DB_BASEReSetOldDataLoad4_ptr _CUTTING_DB_BASEReSetOldDataLoad4_next(nullptr);
        Info::_CUTTING_DB_BASEReSetOldDataLoad4_clbk _CUTTING_DB_BASEReSetOldDataLoad4_user(nullptr);
        
        
        Info::_CUTTING_DB_BASEctor__CUTTING_DB_BASE6_ptr _CUTTING_DB_BASEctor__CUTTING_DB_BASE6_next(nullptr);
        Info::_CUTTING_DB_BASEctor__CUTTING_DB_BASE6_clbk _CUTTING_DB_BASEctor__CUTTING_DB_BASE6_user(nullptr);
        
        void _CUTTING_DB_BASEInit2_wrapper(struct _CUTTING_DB_BASE* _this)
        {
           _CUTTING_DB_BASEInit2_user(_this, _CUTTING_DB_BASEInit2_next);
        };
        void _CUTTING_DB_BASEReSetOldDataLoad4_wrapper(struct _CUTTING_DB_BASE* _this)
        {
           _CUTTING_DB_BASEReSetOldDataLoad4_user(_this, _CUTTING_DB_BASEReSetOldDataLoad4_next);
        };
        
        void _CUTTING_DB_BASEctor__CUTTING_DB_BASE6_wrapper(struct _CUTTING_DB_BASE* _this)
        {
           _CUTTING_DB_BASEctor__CUTTING_DB_BASE6_user(_this, _CUTTING_DB_BASEctor__CUTTING_DB_BASE6_next);
        };
        
        ::std::array<hook_record, 3> _CUTTING_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140076780L,
                (LPVOID *)&_CUTTING_DB_BASEInit2_user,
                (LPVOID *)&_CUTTING_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_CUTTING_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_CUTTING_DB_BASE::*)())&_CUTTING_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140077c80L,
                (LPVOID *)&_CUTTING_DB_BASEReSetOldDataLoad4_user,
                (LPVOID *)&_CUTTING_DB_BASEReSetOldDataLoad4_next,
                (LPVOID)cast_pointer_function(_CUTTING_DB_BASEReSetOldDataLoad4_wrapper),
                (LPVOID)cast_pointer_function((void(_CUTTING_DB_BASE::*)())&_CUTTING_DB_BASE::ReSetOldDataLoad)
            },
            _hook_record {
                (LPVOID)0x140076650L,
                (LPVOID *)&_CUTTING_DB_BASEctor__CUTTING_DB_BASE6_user,
                (LPVOID *)&_CUTTING_DB_BASEctor__CUTTING_DB_BASE6_next,
                (LPVOID)cast_pointer_function(_CUTTING_DB_BASEctor__CUTTING_DB_BASE6_wrapper),
                (LPVOID)cast_pointer_function((void(_CUTTING_DB_BASE::*)())&_CUTTING_DB_BASE::ctor__CUTTING_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
