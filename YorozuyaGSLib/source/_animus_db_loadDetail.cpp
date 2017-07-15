#include <_animus_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_animus_db_loadctor__animus_db_load2_ptr _animus_db_loadctor__animus_db_load2_next(nullptr);
        Info::_animus_db_loadctor__animus_db_load2_clbk _animus_db_loadctor__animus_db_load2_user(nullptr);
        
        
        void _animus_db_loadctor__animus_db_load2_wrapper(struct _animus_db_load* _this)
        {
           _animus_db_loadctor__animus_db_load2_user(_this, _animus_db_loadctor__animus_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _animus_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010dd50L,
                (LPVOID *)&_animus_db_loadctor__animus_db_load2_user,
                (LPVOID *)&_animus_db_loadctor__animus_db_load2_next,
                (LPVOID)cast_pointer_function(_animus_db_loadctor__animus_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_animus_db_load::*)())&_animus_db_load::ctor__animus_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
