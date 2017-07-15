#include <CMoveMapLimitManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoveMapLimitManagerctor_CMoveMapLimitManager2_ptr CMoveMapLimitManagerctor_CMoveMapLimitManager2_next(nullptr);
        Info::CMoveMapLimitManagerctor_CMoveMapLimitManager2_clbk CMoveMapLimitManagerctor_CMoveMapLimitManager2_user(nullptr);
        
        Info::CMoveMapLimitManagerCreateComplete4_ptr CMoveMapLimitManagerCreateComplete4_next(nullptr);
        Info::CMoveMapLimitManagerCreateComplete4_clbk CMoveMapLimitManagerCreateComplete4_user(nullptr);
        
        Info::CMoveMapLimitManagerDestroy6_ptr CMoveMapLimitManagerDestroy6_next(nullptr);
        Info::CMoveMapLimitManagerDestroy6_clbk CMoveMapLimitManagerDestroy6_user(nullptr);
        
        Info::CMoveMapLimitManagerInit8_ptr CMoveMapLimitManagerInit8_next(nullptr);
        Info::CMoveMapLimitManagerInit8_clbk CMoveMapLimitManagerInit8_user(nullptr);
        
        Info::CMoveMapLimitManagerInstance10_ptr CMoveMapLimitManagerInstance10_next(nullptr);
        Info::CMoveMapLimitManagerInstance10_clbk CMoveMapLimitManagerInstance10_user(nullptr);
        
        Info::CMoveMapLimitManagerLoad12_ptr CMoveMapLimitManagerLoad12_next(nullptr);
        Info::CMoveMapLimitManagerLoad12_clbk CMoveMapLimitManagerLoad12_user(nullptr);
        
        Info::CMoveMapLimitManagerLogIn14_ptr CMoveMapLimitManagerLogIn14_next(nullptr);
        Info::CMoveMapLimitManagerLogIn14_clbk CMoveMapLimitManagerLogIn14_user(nullptr);
        
        Info::CMoveMapLimitManagerLogOut16_ptr CMoveMapLimitManagerLogOut16_next(nullptr);
        Info::CMoveMapLimitManagerLogOut16_clbk CMoveMapLimitManagerLogOut16_user(nullptr);
        
        Info::CMoveMapLimitManagerLoop18_ptr CMoveMapLimitManagerLoop18_next(nullptr);
        Info::CMoveMapLimitManagerLoop18_clbk CMoveMapLimitManagerLoop18_user(nullptr);
        
        Info::CMoveMapLimitManagerMoveLimitMapZoneRequest20_ptr CMoveMapLimitManagerMoveLimitMapZoneRequest20_next(nullptr);
        Info::CMoveMapLimitManagerMoveLimitMapZoneRequest20_clbk CMoveMapLimitManagerMoveLimitMapZoneRequest20_user(nullptr);
        
        Info::CMoveMapLimitManagerRequest22_ptr CMoveMapLimitManagerRequest22_next(nullptr);
        Info::CMoveMapLimitManagerRequest22_clbk CMoveMapLimitManagerRequest22_user(nullptr);
        
        Info::CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_ptr CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_next(nullptr);
        Info::CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_clbk CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_user(nullptr);
        
        
        Info::CMoveMapLimitManagerdtor_CMoveMapLimitManager28_ptr CMoveMapLimitManagerdtor_CMoveMapLimitManager28_next(nullptr);
        Info::CMoveMapLimitManagerdtor_CMoveMapLimitManager28_clbk CMoveMapLimitManagerdtor_CMoveMapLimitManager28_user(nullptr);
        
        
        void CMoveMapLimitManagerctor_CMoveMapLimitManager2_wrapper(struct CMoveMapLimitManager* _this)
        {
           CMoveMapLimitManagerctor_CMoveMapLimitManager2_user(_this, CMoveMapLimitManagerctor_CMoveMapLimitManager2_next);
        };
        void CMoveMapLimitManagerCreateComplete4_wrapper(struct CMoveMapLimitManager* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitManagerCreateComplete4_user(_this, pkPlayer, CMoveMapLimitManagerCreateComplete4_next);
        };
        void CMoveMapLimitManagerDestroy6_wrapper()
        {
           CMoveMapLimitManagerDestroy6_user(CMoveMapLimitManagerDestroy6_next);
        };
        bool CMoveMapLimitManagerInit8_wrapper(struct CMoveMapLimitManager* _this)
        {
           return CMoveMapLimitManagerInit8_user(_this, CMoveMapLimitManagerInit8_next);
        };
        struct CMoveMapLimitManager* CMoveMapLimitManagerInstance10_wrapper()
        {
           return CMoveMapLimitManagerInstance10_user(CMoveMapLimitManagerInstance10_next);
        };
        void CMoveMapLimitManagerLoad12_wrapper(struct CMoveMapLimitManager* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitManagerLoad12_user(_this, pkPlayer, CMoveMapLimitManagerLoad12_next);
        };
        void CMoveMapLimitManagerLogIn14_wrapper(struct CMoveMapLimitManager* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitManagerLogIn14_user(_this, pkPlayer, CMoveMapLimitManagerLogIn14_next);
        };
        void CMoveMapLimitManagerLogOut16_wrapper(struct CMoveMapLimitManager* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitManagerLogOut16_user(_this, pkPlayer, CMoveMapLimitManagerLogOut16_next);
        };
        void CMoveMapLimitManagerLoop18_wrapper(struct CMoveMapLimitManager* _this)
        {
           CMoveMapLimitManagerLoop18_user(_this, CMoveMapLimitManagerLoop18_next);
        };
        bool CMoveMapLimitManagerMoveLimitMapZoneRequest20_wrapper(struct CMoveMapLimitManager* _this, int iUserInx, char* pRequest)
        {
           return CMoveMapLimitManagerMoveLimitMapZoneRequest20_user(_this, iUserInx, pRequest, CMoveMapLimitManagerMoveLimitMapZoneRequest20_next);
        };
        char CMoveMapLimitManagerRequest22_wrapper(struct CMoveMapLimitManager* _this, int iLimitType, int iRequetType, int iMapInx, unsigned int dwStoreRecordIndex, int iUserInx, char* pRequest)
        {
           return CMoveMapLimitManagerRequest22_user(_this, iLimitType, iRequetType, iMapInx, dwStoreRecordIndex, iUserInx, pRequest, CMoveMapLimitManagerRequest22_next);
        };
        char CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_wrapper(struct CMoveMapLimitManager* _this)
        {
           return CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_user(_this, CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_next);
        };
        
        void CMoveMapLimitManagerdtor_CMoveMapLimitManager28_wrapper(struct CMoveMapLimitManager* _this)
        {
           CMoveMapLimitManagerdtor_CMoveMapLimitManager28_user(_this, CMoveMapLimitManagerdtor_CMoveMapLimitManager28_next);
        };
        
        ::std::array<hook_record, 13> CMoveMapLimitManager_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a1d10L,
                (LPVOID *)&CMoveMapLimitManagerctor_CMoveMapLimitManager2_user,
                (LPVOID *)&CMoveMapLimitManagerctor_CMoveMapLimitManager2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerctor_CMoveMapLimitManager2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitManager::*)())&CMoveMapLimitManager::ctor_CMoveMapLimitManager)
            },
            _hook_record {
                (LPVOID)0x1403a1910L,
                (LPVOID *)&CMoveMapLimitManagerCreateComplete4_user,
                (LPVOID *)&CMoveMapLimitManagerCreateComplete4_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerCreateComplete4_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitManager::*)(struct CPlayer*))&CMoveMapLimitManager::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403a16b0L,
                (LPVOID *)&CMoveMapLimitManagerDestroy6_user,
                (LPVOID *)&CMoveMapLimitManagerDestroy6_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CMoveMapLimitManager::Destroy)
            },
            _hook_record {
                (LPVOID)0x1403a1720L,
                (LPVOID *)&CMoveMapLimitManagerInit8_user,
                (LPVOID *)&CMoveMapLimitManagerInit8_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerInit8_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitManager::*)())&CMoveMapLimitManager::Init)
            },
            _hook_record {
                (LPVOID)0x1403a15f0L,
                (LPVOID *)&CMoveMapLimitManagerInstance10_user,
                (LPVOID *)&CMoveMapLimitManagerInstance10_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerInstance10_wrapper),
                (LPVOID)cast_pointer_function((struct CMoveMapLimitManager*(*)())&CMoveMapLimitManager::Instance)
            },
            _hook_record {
                (LPVOID)0x1403a1830L,
                (LPVOID *)&CMoveMapLimitManagerLoad12_user,
                (LPVOID *)&CMoveMapLimitManagerLoad12_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerLoad12_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitManager::*)(struct CPlayer*))&CMoveMapLimitManager::Load)
            },
            _hook_record {
                (LPVOID)0x1403a18a0L,
                (LPVOID *)&CMoveMapLimitManagerLogIn14_user,
                (LPVOID *)&CMoveMapLimitManagerLogIn14_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerLogIn14_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitManager::*)(struct CPlayer*))&CMoveMapLimitManager::LogIn)
            },
            _hook_record {
                (LPVOID)0x1403a1960L,
                (LPVOID *)&CMoveMapLimitManagerLogOut16_user,
                (LPVOID *)&CMoveMapLimitManagerLogOut16_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerLogOut16_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitManager::*)(struct CPlayer*))&CMoveMapLimitManager::LogOut)
            },
            _hook_record {
                (LPVOID)0x1403a1b40L,
                (LPVOID *)&CMoveMapLimitManagerLoop18_user,
                (LPVOID *)&CMoveMapLimitManagerLoop18_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerLoop18_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitManager::*)())&CMoveMapLimitManager::Loop)
            },
            _hook_record {
                (LPVOID)0x1403a1a60L,
                (LPVOID *)&CMoveMapLimitManagerMoveLimitMapZoneRequest20_user,
                (LPVOID *)&CMoveMapLimitManagerMoveLimitMapZoneRequest20_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerMoveLimitMapZoneRequest20_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitManager::*)(int, char*))&CMoveMapLimitManager::MoveLimitMapZoneRequest)
            },
            _hook_record {
                (LPVOID)0x1403a19d0L,
                (LPVOID *)&CMoveMapLimitManagerRequest22_user,
                (LPVOID *)&CMoveMapLimitManagerRequest22_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerRequest22_wrapper),
                (LPVOID)cast_pointer_function((char(CMoveMapLimitManager::*)(int, int, int, unsigned int, int, char*))&CMoveMapLimitManager::Request)
            },
            _hook_record {
                (LPVOID)0x140284700L,
                (LPVOID *)&CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_user,
                (LPVOID *)&CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_wrapper),
                (LPVOID)cast_pointer_function((char(CMoveMapLimitManager::*)())&CMoveMapLimitManager::RequestElanMapUserForceMoveHQ)
            },
            _hook_record {
                (LPVOID)0x1403a1f10L,
                (LPVOID *)&CMoveMapLimitManagerdtor_CMoveMapLimitManager28_user,
                (LPVOID *)&CMoveMapLimitManagerdtor_CMoveMapLimitManager28_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitManagerdtor_CMoveMapLimitManager28_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitManager::*)())&CMoveMapLimitManager::dtor_CMoveMapLimitManager)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
