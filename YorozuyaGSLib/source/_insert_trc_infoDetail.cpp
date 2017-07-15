#include <_insert_trc_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_insert_trc_infosize2_ptr _insert_trc_infosize2_next(nullptr);
        Info::_insert_trc_infosize2_clbk _insert_trc_infosize2_user(nullptr);
        
        int _insert_trc_infosize2_wrapper(struct _insert_trc_info* _this)
        {
           return _insert_trc_infosize2_user(_this, _insert_trc_infosize2_next);
        };
        
        ::std::array<hook_record, 1> _insert_trc_info_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d9c00L,
                (LPVOID *)&_insert_trc_infosize2_user,
                (LPVOID *)&_insert_trc_infosize2_next,
                (LPVOID)cast_pointer_function(_insert_trc_infosize2_wrapper),
                (LPVOID)cast_pointer_function((int(_insert_trc_info::*)())&_insert_trc_info::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
