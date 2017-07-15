#include <_bag_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_bag_db_loadctor__bag_db_load2_ptr _bag_db_loadctor__bag_db_load2_next(nullptr);
        Info::_bag_db_loadctor__bag_db_load2_clbk _bag_db_loadctor__bag_db_load2_user(nullptr);
        
        
        void _bag_db_loadctor__bag_db_load2_wrapper(struct _bag_db_load* _this)
        {
           _bag_db_loadctor__bag_db_load2_user(_this, _bag_db_loadctor__bag_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _bag_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010da90L,
                (LPVOID *)&_bag_db_loadctor__bag_db_load2_user,
                (LPVOID *)&_bag_db_loadctor__bag_db_load2_next,
                (LPVOID)cast_pointer_function(_bag_db_loadctor__bag_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_bag_db_load::*)())&_bag_db_load::ctor__bag_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
