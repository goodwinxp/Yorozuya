#include <_equip_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_equip_db_loadctor__equip_db_load2_ptr _equip_db_loadctor__equip_db_load2_next(nullptr);
        Info::_equip_db_loadctor__equip_db_load2_clbk _equip_db_loadctor__equip_db_load2_user(nullptr);
        
        
        void _equip_db_loadctor__equip_db_load2_wrapper(struct _equip_db_load* _this)
        {
           _equip_db_loadctor__equip_db_load2_user(_this, _equip_db_loadctor__equip_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _equip_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010db40L,
                (LPVOID *)&_equip_db_loadctor__equip_db_load2_user,
                (LPVOID *)&_equip_db_loadctor__equip_db_load2_next,
                (LPVOID)cast_pointer_function(_equip_db_loadctor__equip_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_equip_db_load::*)())&_equip_db_load::ctor__equip_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
