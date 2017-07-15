#include <_dh_mission_setupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_dh_mission_setupctor__dh_mission_setup2_ptr _dh_mission_setupctor__dh_mission_setup2_next(nullptr);
        Info::_dh_mission_setupctor__dh_mission_setup2_clbk _dh_mission_setupctor__dh_mission_setup2_user(nullptr);
        
        
        Info::_dh_mission_setupdtor__dh_mission_setup7_ptr _dh_mission_setupdtor__dh_mission_setup7_next(nullptr);
        Info::_dh_mission_setupdtor__dh_mission_setup7_clbk _dh_mission_setupdtor__dh_mission_setup7_user(nullptr);
        
        
        void _dh_mission_setupctor__dh_mission_setup2_wrapper(struct _dh_mission_setup* _this)
        {
           _dh_mission_setupctor__dh_mission_setup2_user(_this, _dh_mission_setupctor__dh_mission_setup2_next);
        };
        
        void _dh_mission_setupdtor__dh_mission_setup7_wrapper(struct _dh_mission_setup* _this)
        {
           _dh_mission_setupdtor__dh_mission_setup7_user(_this, _dh_mission_setupdtor__dh_mission_setup7_next);
        };
        
        ::std::array<hook_record, 2> _dh_mission_setup_functions = 
        {
            _hook_record {
                (LPVOID)0x140270dc0L,
                (LPVOID *)&_dh_mission_setupctor__dh_mission_setup2_user,
                (LPVOID *)&_dh_mission_setupctor__dh_mission_setup2_next,
                (LPVOID)cast_pointer_function(_dh_mission_setupctor__dh_mission_setup2_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_mission_setup::*)())&_dh_mission_setup::ctor__dh_mission_setup)
            },
            _hook_record {
                (LPVOID)0x1402710d0L,
                (LPVOID *)&_dh_mission_setupdtor__dh_mission_setup7_user,
                (LPVOID *)&_dh_mission_setupdtor__dh_mission_setup7_next,
                (LPVOID)cast_pointer_function(_dh_mission_setupdtor__dh_mission_setup7_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_mission_setup::*)())&_dh_mission_setup::dtor__dh_mission_setup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
