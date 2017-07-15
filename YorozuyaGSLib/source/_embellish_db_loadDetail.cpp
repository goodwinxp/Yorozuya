#include <_embellish_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_embellish_db_loadctor__embellish_db_load2_ptr _embellish_db_loadctor__embellish_db_load2_next(nullptr);
        Info::_embellish_db_loadctor__embellish_db_load2_clbk _embellish_db_loadctor__embellish_db_load2_user(nullptr);
        
        
        void _embellish_db_loadctor__embellish_db_load2_wrapper(struct _embellish_db_load* _this)
        {
           _embellish_db_loadctor__embellish_db_load2_user(_this, _embellish_db_loadctor__embellish_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _embellish_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010dbf0L,
                (LPVOID *)&_embellish_db_loadctor__embellish_db_load2_user,
                (LPVOID *)&_embellish_db_loadctor__embellish_db_load2_next,
                (LPVOID)cast_pointer_function(_embellish_db_loadctor__embellish_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_embellish_db_load::*)())&_embellish_db_load::ctor__embellish_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
