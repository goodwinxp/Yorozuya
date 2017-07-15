#include <_dh_player_mgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_dh_player_mgrInit2_ptr _dh_player_mgrInit2_next(nullptr);
        Info::_dh_player_mgrInit2_clbk _dh_player_mgrInit2_user(nullptr);
        
        Info::_dh_player_mgrIsFill4_ptr _dh_player_mgrIsFill4_next(nullptr);
        Info::_dh_player_mgrIsFill4_clbk _dh_player_mgrIsFill4_user(nullptr);
        
        
        Info::_dh_player_mgrctor__dh_player_mgr6_ptr _dh_player_mgrctor__dh_player_mgr6_next(nullptr);
        Info::_dh_player_mgrctor__dh_player_mgr6_clbk _dh_player_mgrctor__dh_player_mgr6_user(nullptr);
        
        void _dh_player_mgrInit2_wrapper(struct _dh_player_mgr* _this)
        {
           _dh_player_mgrInit2_user(_this, _dh_player_mgrInit2_next);
        };
        bool _dh_player_mgrIsFill4_wrapper(struct _dh_player_mgr* _this)
        {
           return _dh_player_mgrIsFill4_user(_this, _dh_player_mgrIsFill4_next);
        };
        
        void _dh_player_mgrctor__dh_player_mgr6_wrapper(struct _dh_player_mgr* _this)
        {
           _dh_player_mgrctor__dh_player_mgr6_user(_this, _dh_player_mgrctor__dh_player_mgr6_next);
        };
        
        ::std::array<hook_record, 3> _dh_player_mgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14026eae0L,
                (LPVOID *)&_dh_player_mgrInit2_user,
                (LPVOID *)&_dh_player_mgrInit2_next,
                (LPVOID)cast_pointer_function(_dh_player_mgrInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_player_mgr::*)())&_dh_player_mgr::Init)
            },
            _hook_record {
                (LPVOID)0x14026efa0L,
                (LPVOID *)&_dh_player_mgrIsFill4_user,
                (LPVOID *)&_dh_player_mgrIsFill4_next,
                (LPVOID)cast_pointer_function(_dh_player_mgrIsFill4_wrapper),
                (LPVOID)cast_pointer_function((bool(_dh_player_mgr::*)())&_dh_player_mgr::IsFill)
            },
            _hook_record {
                (LPVOID)0x14026ea90L,
                (LPVOID *)&_dh_player_mgrctor__dh_player_mgr6_user,
                (LPVOID *)&_dh_player_mgrctor__dh_player_mgr6_next,
                (LPVOID)cast_pointer_function(_dh_player_mgrctor__dh_player_mgr6_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_player_mgr::*)())&_dh_player_mgr::ctor__dh_player_mgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
