#include <_force_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_force_db_loadctor__force_db_load2_ptr _force_db_loadctor__force_db_load2_next(nullptr);
        Info::_force_db_loadctor__force_db_load2_clbk _force_db_loadctor__force_db_load2_user(nullptr);
        
        
        void _force_db_loadctor__force_db_load2_wrapper(struct _force_db_load* _this)
        {
           _force_db_loadctor__force_db_load2_user(_this, _force_db_loadctor__force_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _force_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010dca0L,
                (LPVOID *)&_force_db_loadctor__force_db_load2_user,
                (LPVOID *)&_force_db_loadctor__force_db_load2_next,
                (LPVOID)cast_pointer_function(_force_db_loadctor__force_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_force_db_load::*)())&_force_db_load::ctor__force_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
