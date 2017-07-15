#include <CMoveMapLimitInfoPortalDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_ptr CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_next(nullptr);
        Info::CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_clbk CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalInit4_ptr CMoveMapLimitInfoPortalInit4_next(nullptr);
        Info::CMoveMapLimitInfoPortalInit4_clbk CMoveMapLimitInfoPortalInit4_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalLoad6_ptr CMoveMapLimitInfoPortalLoad6_next(nullptr);
        Info::CMoveMapLimitInfoPortalLoad6_clbk CMoveMapLimitInfoPortalLoad6_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalLoadINI8_ptr CMoveMapLimitInfoPortalLoadINI8_next(nullptr);
        Info::CMoveMapLimitInfoPortalLoadINI8_clbk CMoveMapLimitInfoPortalLoadINI8_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalLoop10_ptr CMoveMapLimitInfoPortalLoop10_next(nullptr);
        Info::CMoveMapLimitInfoPortalLoop10_clbk CMoveMapLimitInfoPortalLoop10_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalProcForceMoveHQ12_ptr CMoveMapLimitInfoPortalProcForceMoveHQ12_next(nullptr);
        Info::CMoveMapLimitInfoPortalProcForceMoveHQ12_clbk CMoveMapLimitInfoPortalProcForceMoveHQ12_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalProcGotoLimitZone14_ptr CMoveMapLimitInfoPortalProcGotoLimitZone14_next(nullptr);
        Info::CMoveMapLimitInfoPortalProcGotoLimitZone14_clbk CMoveMapLimitInfoPortalProcGotoLimitZone14_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalProcUseMoveScroll16_ptr CMoveMapLimitInfoPortalProcUseMoveScroll16_next(nullptr);
        Info::CMoveMapLimitInfoPortalProcUseMoveScroll16_clbk CMoveMapLimitInfoPortalProcUseMoveScroll16_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalRequest18_ptr CMoveMapLimitInfoPortalRequest18_next(nullptr);
        Info::CMoveMapLimitInfoPortalRequest18_clbk CMoveMapLimitInfoPortalRequest18_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalSubProcForceMoveHQ20_ptr CMoveMapLimitInfoPortalSubProcForceMoveHQ20_next(nullptr);
        Info::CMoveMapLimitInfoPortalSubProcForceMoveHQ20_clbk CMoveMapLimitInfoPortalSubProcForceMoveHQ20_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalSubProcGotoLimitZone22_ptr CMoveMapLimitInfoPortalSubProcGotoLimitZone22_next(nullptr);
        Info::CMoveMapLimitInfoPortalSubProcGotoLimitZone22_clbk CMoveMapLimitInfoPortalSubProcGotoLimitZone22_user(nullptr);
        
        Info::CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_ptr CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_next(nullptr);
        Info::CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_clbk CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_user(nullptr);
        
        
        Info::CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_ptr CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_next(nullptr);
        Info::CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_clbk CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_user(nullptr);
        
        
        void CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_wrapper(struct CMoveMapLimitInfoPortal* _this, unsigned int uiInx, int iType)
        {
           CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_user(_this, uiInx, iType, CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_next);
        };
        bool CMoveMapLimitInfoPortalInit4_wrapper(struct CMoveMapLimitInfoPortal* _this)
        {
           return CMoveMapLimitInfoPortalInit4_user(_this, CMoveMapLimitInfoPortalInit4_next);
        };
        void CMoveMapLimitInfoPortalLoad6_wrapper(struct CMoveMapLimitInfoPortal* _this, struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
        {
           CMoveMapLimitInfoPortalLoad6_user(_this, pkPlayer, pkRight, CMoveMapLimitInfoPortalLoad6_next);
        };
        bool CMoveMapLimitInfoPortalLoadINI8_wrapper(struct CMoveMapLimitInfoPortal* _this)
        {
           return CMoveMapLimitInfoPortalLoadINI8_user(_this, CMoveMapLimitInfoPortalLoadINI8_next);
        };
        void CMoveMapLimitInfoPortalLoop10_wrapper(struct CMoveMapLimitInfoPortal* _this)
        {
           CMoveMapLimitInfoPortalLoop10_user(_this, CMoveMapLimitInfoPortalLoop10_next);
        };
        char CMoveMapLimitInfoPortalProcForceMoveHQ12_wrapper(struct CMoveMapLimitInfoPortal* _this, int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
        {
           return CMoveMapLimitInfoPortalProcForceMoveHQ12_user(_this, iUserInx, pRequest, pkRight, CMoveMapLimitInfoPortalProcForceMoveHQ12_next);
        };
        char CMoveMapLimitInfoPortalProcGotoLimitZone14_wrapper(struct CMoveMapLimitInfoPortal* _this, int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
        {
           return CMoveMapLimitInfoPortalProcGotoLimitZone14_user(_this, iUserInx, pRequest, pkRight, CMoveMapLimitInfoPortalProcGotoLimitZone14_next);
        };
        char CMoveMapLimitInfoPortalProcUseMoveScroll16_wrapper(struct CMoveMapLimitInfoPortal* _this, int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
        {
           return CMoveMapLimitInfoPortalProcUseMoveScroll16_user(_this, iUserInx, pRequest, pkRight, CMoveMapLimitInfoPortalProcUseMoveScroll16_next);
        };
        char CMoveMapLimitInfoPortalRequest18_wrapper(struct CMoveMapLimitInfoPortal* _this, int iUserInx, int iRequetType, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
        {
           return CMoveMapLimitInfoPortalRequest18_user(_this, iUserInx, iRequetType, pRequest, pkRight, CMoveMapLimitInfoPortalRequest18_next);
        };
        void CMoveMapLimitInfoPortalSubProcForceMoveHQ20_wrapper(struct CMoveMapLimitInfoPortal* _this)
        {
           CMoveMapLimitInfoPortalSubProcForceMoveHQ20_user(_this, CMoveMapLimitInfoPortalSubProcForceMoveHQ20_next);
        };
        char CMoveMapLimitInfoPortalSubProcGotoLimitZone22_wrapper(struct CMoveMapLimitInfoPortal* _this, int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
        {
           return CMoveMapLimitInfoPortalSubProcGotoLimitZone22_user(_this, iUserInx, pRequest, pkRight, CMoveMapLimitInfoPortalSubProcGotoLimitZone22_next);
        };
        void CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_wrapper(struct CMoveMapLimitInfoPortal* _this)
        {
           CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_user(_this, CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_next);
        };
        
        void CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_wrapper(struct CMoveMapLimitInfoPortal* _this)
        {
           CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_user(_this, CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_next);
        };
        
        ::std::array<hook_record, 13> CMoveMapLimitInfoPortal_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a3ee0L,
                (LPVOID *)&CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_user,
                (LPVOID *)&CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalctor_CMoveMapLimitInfoPortal2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoPortal::*)(unsigned int, int))&CMoveMapLimitInfoPortal::ctor_CMoveMapLimitInfoPortal)
            },
            _hook_record {
                (LPVOID)0x1403a4120L,
                (LPVOID *)&CMoveMapLimitInfoPortalInit4_user,
                (LPVOID *)&CMoveMapLimitInfoPortalInit4_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalInit4_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitInfoPortal::*)())&CMoveMapLimitInfoPortal::Init)
            },
            _hook_record {
                (LPVOID)0x1403a42b0L,
                (LPVOID *)&CMoveMapLimitInfoPortalLoad6_user,
                (LPVOID *)&CMoveMapLimitInfoPortalLoad6_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalLoad6_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoPortal::*)(struct CPlayer*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoPortal::Load)
            },
            _hook_record {
                (LPVOID)0x1403a56f0L,
                (LPVOID *)&CMoveMapLimitInfoPortalLoadINI8_user,
                (LPVOID *)&CMoveMapLimitInfoPortalLoadINI8_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalLoadINI8_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitInfoPortal::*)())&CMoveMapLimitInfoPortal::LoadINI)
            },
            _hook_record {
                (LPVOID)0x1403a43d0L,
                (LPVOID *)&CMoveMapLimitInfoPortalLoop10_user,
                (LPVOID *)&CMoveMapLimitInfoPortalLoop10_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalLoop10_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoPortal::*)())&CMoveMapLimitInfoPortal::Loop)
            },
            _hook_record {
                (LPVOID)0x1403a44b0L,
                (LPVOID *)&CMoveMapLimitInfoPortalProcForceMoveHQ12_user,
                (LPVOID *)&CMoveMapLimitInfoPortalProcForceMoveHQ12_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalProcForceMoveHQ12_wrapper),
                (LPVOID)cast_pointer_function((char(CMoveMapLimitInfoPortal::*)(int, char*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoPortal::ProcForceMoveHQ)
            },
            _hook_record {
                (LPVOID)0x1403a47b0L,
                (LPVOID *)&CMoveMapLimitInfoPortalProcGotoLimitZone14_user,
                (LPVOID *)&CMoveMapLimitInfoPortalProcGotoLimitZone14_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalProcGotoLimitZone14_wrapper),
                (LPVOID)cast_pointer_function((char(CMoveMapLimitInfoPortal::*)(int, char*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoPortal::ProcGotoLimitZone)
            },
            _hook_record {
                (LPVOID)0x1403a4520L,
                (LPVOID *)&CMoveMapLimitInfoPortalProcUseMoveScroll16_user,
                (LPVOID *)&CMoveMapLimitInfoPortalProcUseMoveScroll16_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalProcUseMoveScroll16_wrapper),
                (LPVOID)cast_pointer_function((char(CMoveMapLimitInfoPortal::*)(int, char*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoPortal::ProcUseMoveScroll)
            },
            _hook_record {
                (LPVOID)0x1403a4200L,
                (LPVOID *)&CMoveMapLimitInfoPortalRequest18_user,
                (LPVOID *)&CMoveMapLimitInfoPortalRequest18_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalRequest18_wrapper),
                (LPVOID)cast_pointer_function((char(CMoveMapLimitInfoPortal::*)(int, int, char*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoPortal::Request)
            },
            _hook_record {
                (LPVOID)0x1403a4a50L,
                (LPVOID *)&CMoveMapLimitInfoPortalSubProcForceMoveHQ20_user,
                (LPVOID *)&CMoveMapLimitInfoPortalSubProcForceMoveHQ20_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalSubProcForceMoveHQ20_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoPortal::*)())&CMoveMapLimitInfoPortal::SubProcForceMoveHQ)
            },
            _hook_record {
                (LPVOID)0x1403a4d10L,
                (LPVOID *)&CMoveMapLimitInfoPortalSubProcGotoLimitZone22_user,
                (LPVOID *)&CMoveMapLimitInfoPortalSubProcGotoLimitZone22_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalSubProcGotoLimitZone22_wrapper),
                (LPVOID)cast_pointer_function((char(CMoveMapLimitInfoPortal::*)(int, char*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoPortal::SubProcGotoLimitZone)
            },
            _hook_record {
                (LPVOID)0x1403a4880L,
                (LPVOID *)&CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_user,
                (LPVOID *)&CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortalSubProcNotifyForceMoveHQ24_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoPortal::*)())&CMoveMapLimitInfoPortal::SubProcNotifyForceMoveHQ)
            },
            _hook_record {
                (LPVOID)0x1403a3fd0L,
                (LPVOID *)&CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_user,
                (LPVOID *)&CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoPortaldtor_CMoveMapLimitInfoPortal26_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoPortal::*)())&CMoveMapLimitInfoPortal::dtor_CMoveMapLimitInfoPortal)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
