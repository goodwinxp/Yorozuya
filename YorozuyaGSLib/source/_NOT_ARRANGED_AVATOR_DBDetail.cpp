#include <_NOT_ARRANGED_AVATOR_DBDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_NOT_ARRANGED_AVATOR_DBInit2_ptr _NOT_ARRANGED_AVATOR_DBInit2_next(nullptr);
        Info::_NOT_ARRANGED_AVATOR_DBInit2_clbk _NOT_ARRANGED_AVATOR_DBInit2_user(nullptr);
        
        
        Info::_NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_ptr _NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_next(nullptr);
        Info::_NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_clbk _NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_user(nullptr);
        
        void _NOT_ARRANGED_AVATOR_DBInit2_wrapper(struct _NOT_ARRANGED_AVATOR_DB* _this)
        {
           _NOT_ARRANGED_AVATOR_DBInit2_user(_this, _NOT_ARRANGED_AVATOR_DBInit2_next);
        };
        
        void _NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_wrapper(struct _NOT_ARRANGED_AVATOR_DB* _this)
        {
           _NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_user(_this, _NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_next);
        };
        
        ::std::array<hook_record, 2> _NOT_ARRANGED_AVATOR_DB_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f070L,
                (LPVOID *)&_NOT_ARRANGED_AVATOR_DBInit2_user,
                (LPVOID *)&_NOT_ARRANGED_AVATOR_DBInit2_next,
                (LPVOID)cast_pointer_function(_NOT_ARRANGED_AVATOR_DBInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_NOT_ARRANGED_AVATOR_DB::*)())&_NOT_ARRANGED_AVATOR_DB::Init)
            },
            _hook_record {
                (LPVOID)0x14011f020L,
                (LPVOID *)&_NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_user,
                (LPVOID *)&_NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_next,
                (LPVOID)cast_pointer_function(_NOT_ARRANGED_AVATOR_DBctor__NOT_ARRANGED_AVATOR_DB4_wrapper),
                (LPVOID)cast_pointer_function((void(_NOT_ARRANGED_AVATOR_DB::*)())&_NOT_ARRANGED_AVATOR_DB::ctor__NOT_ARRANGED_AVATOR_DB)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
