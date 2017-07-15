#include <_trunk_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_trunk_db_loadctor__trunk_db_load2_ptr _trunk_db_loadctor__trunk_db_load2_next(nullptr);
        Info::_trunk_db_loadctor__trunk_db_load2_clbk _trunk_db_loadctor__trunk_db_load2_user(nullptr);
        
        
        void _trunk_db_loadctor__trunk_db_load2_wrapper(struct _trunk_db_load* _this)
        {
           _trunk_db_loadctor__trunk_db_load2_user(_this, _trunk_db_loadctor__trunk_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _trunk_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010de00L,
                (LPVOID *)&_trunk_db_loadctor__trunk_db_load2_user,
                (LPVOID *)&_trunk_db_loadctor__trunk_db_load2_next,
                (LPVOID)cast_pointer_function(_trunk_db_loadctor__trunk_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_trunk_db_load::*)())&_trunk_db_load::ctor__trunk_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
