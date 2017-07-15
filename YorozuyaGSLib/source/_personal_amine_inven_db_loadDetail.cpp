#include <_personal_amine_inven_db_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_ptr _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_next(nullptr);
        Info::_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_clbk _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_user(nullptr);
        
        
        void _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_wrapper(struct _personal_amine_inven_db_load* _this)
        {
           _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_user(_this, _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_next);
        };
        
        ::std::array<hook_record, 1> _personal_amine_inven_db_load_functions = 
        {
            _hook_record {
                (LPVOID)0x14010deb0L,
                (LPVOID *)&_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_user,
                (LPVOID *)&_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_next,
                (LPVOID)cast_pointer_function(_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_wrapper),
                (LPVOID)cast_pointer_function((void(_personal_amine_inven_db_load::*)())&_personal_amine_inven_db_load::ctor__personal_amine_inven_db_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
