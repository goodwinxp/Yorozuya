#include <_REGED_AVATOR_DBDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_REGED_AVATOR_DBInit2_ptr _REGED_AVATOR_DBInit2_next(nullptr);
        Info::_REGED_AVATOR_DBInit2_clbk _REGED_AVATOR_DBInit2_user(nullptr);
        
        
        Info::_REGED_AVATOR_DBctor__REGED_AVATOR_DB4_ptr _REGED_AVATOR_DBctor__REGED_AVATOR_DB4_next(nullptr);
        Info::_REGED_AVATOR_DBctor__REGED_AVATOR_DB4_clbk _REGED_AVATOR_DBctor__REGED_AVATOR_DB4_user(nullptr);
        
        void _REGED_AVATOR_DBInit2_wrapper(struct _REGED_AVATOR_DB* _this)
        {
           _REGED_AVATOR_DBInit2_user(_this, _REGED_AVATOR_DBInit2_next);
        };
        
        void _REGED_AVATOR_DBctor__REGED_AVATOR_DB4_wrapper(struct _REGED_AVATOR_DB* _this)
        {
           _REGED_AVATOR_DBctor__REGED_AVATOR_DB4_user(_this, _REGED_AVATOR_DBctor__REGED_AVATOR_DB4_next);
        };
        
        ::std::array<hook_record, 2> _REGED_AVATOR_DB_functions = 
        {
            _hook_record {
                (LPVOID)0x1400754d0L,
                (LPVOID *)&_REGED_AVATOR_DBInit2_user,
                (LPVOID *)&_REGED_AVATOR_DBInit2_next,
                (LPVOID)cast_pointer_function(_REGED_AVATOR_DBInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_REGED_AVATOR_DB::*)())&_REGED_AVATOR_DB::Init)
            },
            _hook_record {
                (LPVOID)0x140075480L,
                (LPVOID *)&_REGED_AVATOR_DBctor__REGED_AVATOR_DB4_user,
                (LPVOID *)&_REGED_AVATOR_DBctor__REGED_AVATOR_DB4_next,
                (LPVOID)cast_pointer_function(_REGED_AVATOR_DBctor__REGED_AVATOR_DB4_wrapper),
                (LPVOID)cast_pointer_function((void(_REGED_AVATOR_DB::*)())&_REGED_AVATOR_DB::ctor__REGED_AVATOR_DB)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
