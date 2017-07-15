#include <_Exttrunk_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_Exttrunk_db_loadctor__Exttrunk_db_load2_ptr _Exttrunk_db_loadctor__Exttrunk_db_load2_next(nullptr);
        Info::_Exttrunk_db_loadctor__Exttrunk_db_load2_clbk _Exttrunk_db_loadctor__Exttrunk_db_load2_user(nullptr);
        
        
        void _Exttrunk_db_loadctor__Exttrunk_db_load2_wrapper(struct _Exttrunk_db_load* _this)
        {
           _Exttrunk_db_loadctor__Exttrunk_db_load2_user(_this, _Exttrunk_db_loadctor__Exttrunk_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _Exttrunk_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010df60L,
                (LPVOID *)&_Exttrunk_db_loadctor__Exttrunk_db_load2_user,
                (LPVOID *)&_Exttrunk_db_loadctor__Exttrunk_db_load2_next,
                (LPVOID)cast_pointer_function(_Exttrunk_db_loadctor__Exttrunk_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_Exttrunk_db_load::*)())&_Exttrunk_db_load::ctor__Exttrunk_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
