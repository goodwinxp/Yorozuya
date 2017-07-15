#include <_dh_mission_mgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_dh_mission_mgrGetLimMSecTime2_ptr _dh_mission_mgrGetLimMSecTime2_next(nullptr);
        Info::_dh_mission_mgrGetLimMSecTime2_clbk _dh_mission_mgrGetLimMSecTime2_user(nullptr);
        
        Info::_dh_mission_mgrGetMissionCont4_ptr _dh_mission_mgrGetMissionCont4_next(nullptr);
        Info::_dh_mission_mgrGetMissionCont4_clbk _dh_mission_mgrGetMissionCont4_user(nullptr);
        
        Info::_dh_mission_mgrInit6_ptr _dh_mission_mgrInit6_next(nullptr);
        Info::_dh_mission_mgrInit6_clbk _dh_mission_mgrInit6_user(nullptr);
        
        Info::_dh_mission_mgrIsOpenPortal8_ptr _dh_mission_mgrIsOpenPortal8_next(nullptr);
        Info::_dh_mission_mgrIsOpenPortal8_clbk _dh_mission_mgrIsOpenPortal8_user(nullptr);
        
        Info::_dh_mission_mgrNextMission10_ptr _dh_mission_mgrNextMission10_next(nullptr);
        Info::_dh_mission_mgrNextMission10_clbk _dh_mission_mgrNextMission10_user(nullptr);
        
        Info::_dh_mission_mgrOpenPortal12_ptr _dh_mission_mgrOpenPortal12_next(nullptr);
        Info::_dh_mission_mgrOpenPortal12_clbk _dh_mission_mgrOpenPortal12_user(nullptr);
        
        Info::_dh_mission_mgrSearchCurMissionCont14_ptr _dh_mission_mgrSearchCurMissionCont14_next(nullptr);
        Info::_dh_mission_mgrSearchCurMissionCont14_clbk _dh_mission_mgrSearchCurMissionCont14_user(nullptr);
        
        
        Info::_dh_mission_mgrctor__dh_mission_mgr16_ptr _dh_mission_mgrctor__dh_mission_mgr16_next(nullptr);
        Info::_dh_mission_mgrctor__dh_mission_mgr16_clbk _dh_mission_mgrctor__dh_mission_mgr16_user(nullptr);
        
        unsigned int _dh_mission_mgrGetLimMSecTime2_wrapper(struct _dh_mission_mgr* _this)
        {
           return _dh_mission_mgrGetLimMSecTime2_user(_this, _dh_mission_mgrGetLimMSecTime2_next);
        };
        struct _dh_mission_mgr::_if_change* _dh_mission_mgrGetMissionCont4_wrapper(struct _dh_mission_mgr* _this, struct _dh_mission_setup* pMsSetup)
        {
           return _dh_mission_mgrGetMissionCont4_user(_this, pMsSetup, _dh_mission_mgrGetMissionCont4_next);
        };
        void _dh_mission_mgrInit6_wrapper(struct _dh_mission_mgr* _this)
        {
           _dh_mission_mgrInit6_user(_this, _dh_mission_mgrInit6_next);
        };
        bool _dh_mission_mgrIsOpenPortal8_wrapper(struct _dh_mission_mgr* _this, int nIndex)
        {
           return _dh_mission_mgrIsOpenPortal8_user(_this, nIndex, _dh_mission_mgrIsOpenPortal8_next);
        };
        void _dh_mission_mgrNextMission10_wrapper(struct _dh_mission_mgr* _this, struct _dh_mission_setup* pNextMssionPtr)
        {
           _dh_mission_mgrNextMission10_user(_this, pNextMssionPtr, _dh_mission_mgrNextMission10_next);
        };
        void _dh_mission_mgrOpenPortal12_wrapper(struct _dh_mission_mgr* _this, int nIndex)
        {
           _dh_mission_mgrOpenPortal12_user(_this, nIndex, _dh_mission_mgrOpenPortal12_next);
        };
        struct _dh_mission_mgr::_if_change* _dh_mission_mgrSearchCurMissionCont14_wrapper(struct _dh_mission_mgr* _this)
        {
           return _dh_mission_mgrSearchCurMissionCont14_user(_this, _dh_mission_mgrSearchCurMissionCont14_next);
        };
        
        void _dh_mission_mgrctor__dh_mission_mgr16_wrapper(struct _dh_mission_mgr* _this)
        {
           _dh_mission_mgrctor__dh_mission_mgr16_user(_this, _dh_mission_mgrctor__dh_mission_mgr16_next);
        };
        
        ::std::array<hook_record, 8> _dh_mission_mgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14026ef40L,
                (LPVOID *)&_dh_mission_mgrGetLimMSecTime2_user,
                (LPVOID *)&_dh_mission_mgrGetLimMSecTime2_next,
                (LPVOID)cast_pointer_function(_dh_mission_mgrGetLimMSecTime2_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(_dh_mission_mgr::*)())&_dh_mission_mgr::GetLimMSecTime)
            },
            _hook_record {
                (LPVOID)0x14026f220L,
                (LPVOID *)&_dh_mission_mgrGetMissionCont4_user,
                (LPVOID *)&_dh_mission_mgrGetMissionCont4_next,
                (LPVOID)cast_pointer_function(_dh_mission_mgrGetMissionCont4_wrapper),
                (LPVOID)cast_pointer_function((struct _dh_mission_mgr::_if_change*(_dh_mission_mgr::*)(struct _dh_mission_setup*))&_dh_mission_mgr::GetMissionCont)
            },
            _hook_record {
                (LPVOID)0x14026ed50L,
                (LPVOID *)&_dh_mission_mgrInit6_user,
                (LPVOID *)&_dh_mission_mgrInit6_next,
                (LPVOID)cast_pointer_function(_dh_mission_mgrInit6_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_mission_mgr::*)())&_dh_mission_mgr::Init)
            },
            _hook_record {
                (LPVOID)0x14026f4a0L,
                (LPVOID *)&_dh_mission_mgrIsOpenPortal8_user,
                (LPVOID *)&_dh_mission_mgrIsOpenPortal8_next,
                (LPVOID)cast_pointer_function(_dh_mission_mgrIsOpenPortal8_wrapper),
                (LPVOID)cast_pointer_function((bool(_dh_mission_mgr::*)(int))&_dh_mission_mgr::IsOpenPortal)
            },
            _hook_record {
                (LPVOID)0x14026efc0L,
                (LPVOID *)&_dh_mission_mgrNextMission10_user,
                (LPVOID *)&_dh_mission_mgrNextMission10_next,
                (LPVOID)cast_pointer_function(_dh_mission_mgrNextMission10_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_mission_mgr::*)(struct _dh_mission_setup*))&_dh_mission_mgr::NextMission)
            },
            _hook_record {
                (LPVOID)0x1400c2d10L,
                (LPVOID *)&_dh_mission_mgrOpenPortal12_user,
                (LPVOID *)&_dh_mission_mgrOpenPortal12_next,
                (LPVOID)cast_pointer_function(_dh_mission_mgrOpenPortal12_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_mission_mgr::*)(int))&_dh_mission_mgr::OpenPortal)
            },
            _hook_record {
                (LPVOID)0x14026f580L,
                (LPVOID *)&_dh_mission_mgrSearchCurMissionCont14_user,
                (LPVOID *)&_dh_mission_mgrSearchCurMissionCont14_next,
                (LPVOID)cast_pointer_function(_dh_mission_mgrSearchCurMissionCont14_wrapper),
                (LPVOID)cast_pointer_function((struct _dh_mission_mgr::_if_change*(_dh_mission_mgr::*)())&_dh_mission_mgr::SearchCurMissionCont)
            },
            _hook_record {
                (LPVOID)0x14026eb70L,
                (LPVOID *)&_dh_mission_mgrctor__dh_mission_mgr16_user,
                (LPVOID *)&_dh_mission_mgrctor__dh_mission_mgr16_next,
                (LPVOID)cast_pointer_function(_dh_mission_mgrctor__dh_mission_mgr16_wrapper),
                (LPVOID)cast_pointer_function((void(_dh_mission_mgr::*)())&_dh_mission_mgr::ctor__dh_mission_mgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
