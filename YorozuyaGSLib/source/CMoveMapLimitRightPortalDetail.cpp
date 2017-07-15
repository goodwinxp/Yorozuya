#include <CMoveMapLimitRightPortalDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_ptr CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_next(nullptr);
        Info::CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_clbk CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_user(nullptr);
        
        Info::CMoveMapLimitRightPortalCreateComplete4_ptr CMoveMapLimitRightPortalCreateComplete4_next(nullptr);
        Info::CMoveMapLimitRightPortalCreateComplete4_clbk CMoveMapLimitRightPortalCreateComplete4_user(nullptr);
        
        Info::CMoveMapLimitRightPortalIsHaveRight6_ptr CMoveMapLimitRightPortalIsHaveRight6_next(nullptr);
        Info::CMoveMapLimitRightPortalIsHaveRight6_clbk CMoveMapLimitRightPortalIsHaveRight6_user(nullptr);
        
        Info::CMoveMapLimitRightPortalLoad8_ptr CMoveMapLimitRightPortalLoad8_next(nullptr);
        Info::CMoveMapLimitRightPortalLoad8_clbk CMoveMapLimitRightPortalLoad8_user(nullptr);
        
        Info::CMoveMapLimitRightPortalLogOut10_ptr CMoveMapLimitRightPortalLogOut10_next(nullptr);
        Info::CMoveMapLimitRightPortalLogOut10_clbk CMoveMapLimitRightPortalLogOut10_user(nullptr);
        
        Info::CMoveMapLimitRightPortalSetFlag12_ptr CMoveMapLimitRightPortalSetFlag12_next(nullptr);
        Info::CMoveMapLimitRightPortalSetFlag12_clbk CMoveMapLimitRightPortalSetFlag12_user(nullptr);
        
        
        void CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_wrapper(struct CMoveMapLimitRightPortal* _this, int iType)
        {
           CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_user(_this, iType, CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_next);
        };
        void CMoveMapLimitRightPortalCreateComplete4_wrapper(struct CMoveMapLimitRightPortal* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightPortalCreateComplete4_user(_this, pkPlayer, CMoveMapLimitRightPortalCreateComplete4_next);
        };
        bool CMoveMapLimitRightPortalIsHaveRight6_wrapper(struct CMoveMapLimitRightPortal* _this)
        {
           return CMoveMapLimitRightPortalIsHaveRight6_user(_this, CMoveMapLimitRightPortalIsHaveRight6_next);
        };
        void CMoveMapLimitRightPortalLoad8_wrapper(struct CMoveMapLimitRightPortal* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightPortalLoad8_user(_this, pkPlayer, CMoveMapLimitRightPortalLoad8_next);
        };
        void CMoveMapLimitRightPortalLogOut10_wrapper(struct CMoveMapLimitRightPortal* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightPortalLogOut10_user(_this, pkPlayer, CMoveMapLimitRightPortalLogOut10_next);
        };
        void CMoveMapLimitRightPortalSetFlag12_wrapper(struct CMoveMapLimitRightPortal* _this, int iType, bool bFlag)
        {
           CMoveMapLimitRightPortalSetFlag12_user(_this, iType, bFlag, CMoveMapLimitRightPortalSetFlag12_next);
        };
        
        ::std::array<hook_record, 6> CMoveMapLimitRightPortal_functions = 
        {
            _hook_record {
                (LPVOID)0x1403ac7f0L,
                (LPVOID *)&CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_user,
                (LPVOID *)&CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightPortalctor_CMoveMapLimitRightPortal2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightPortal::*)(int))&CMoveMapLimitRightPortal::ctor_CMoveMapLimitRightPortal)
            },
            _hook_record {
                (LPVOID)0x1403ac890L,
                (LPVOID *)&CMoveMapLimitRightPortalCreateComplete4_user,
                (LPVOID *)&CMoveMapLimitRightPortalCreateComplete4_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightPortalCreateComplete4_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightPortal::*)(struct CPlayer*))&CMoveMapLimitRightPortal::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403ac6a0L,
                (LPVOID *)&CMoveMapLimitRightPortalIsHaveRight6_user,
                (LPVOID *)&CMoveMapLimitRightPortalIsHaveRight6_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightPortalIsHaveRight6_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitRightPortal::*)())&CMoveMapLimitRightPortal::IsHaveRight)
            },
            _hook_record {
                (LPVOID)0x1403ac860L,
                (LPVOID *)&CMoveMapLimitRightPortalLoad8_user,
                (LPVOID *)&CMoveMapLimitRightPortalLoad8_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightPortalLoad8_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightPortal::*)(struct CPlayer*))&CMoveMapLimitRightPortal::Load)
            },
            _hook_record {
                (LPVOID)0x1403ac940L,
                (LPVOID *)&CMoveMapLimitRightPortalLogOut10_user,
                (LPVOID *)&CMoveMapLimitRightPortalLogOut10_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightPortalLogOut10_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightPortal::*)(struct CPlayer*))&CMoveMapLimitRightPortal::LogOut)
            },
            _hook_record {
                (LPVOID)0x1403ac790L,
                (LPVOID *)&CMoveMapLimitRightPortalSetFlag12_user,
                (LPVOID *)&CMoveMapLimitRightPortalSetFlag12_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightPortalSetFlag12_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightPortal::*)(int, bool))&CMoveMapLimitRightPortal::SetFlag)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
