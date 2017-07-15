#include <_character_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_character_db_loadctor__character_db_load2_ptr _character_db_loadctor__character_db_load2_next(nullptr);
        Info::_character_db_loadctor__character_db_load2_clbk _character_db_loadctor__character_db_load2_user(nullptr);
        
        
        void _character_db_loadctor__character_db_load2_wrapper(struct _character_db_load* _this)
        {
           _character_db_loadctor__character_db_load2_user(_this, _character_db_loadctor__character_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _character_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010e010L,
                (LPVOID *)&_character_db_loadctor__character_db_load2_user,
                (LPVOID *)&_character_db_loadctor__character_db_load2_next,
                (LPVOID)cast_pointer_function(_character_db_loadctor__character_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_character_db_load::*)())&_character_db_load::ctor__character_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
