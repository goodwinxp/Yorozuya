#include <CMoveMapLimitRightDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoveMapLimitRightctor_CMoveMapLimitRight2_ptr CMoveMapLimitRightctor_CMoveMapLimitRight2_next(nullptr);
        Info::CMoveMapLimitRightctor_CMoveMapLimitRight2_clbk CMoveMapLimitRightctor_CMoveMapLimitRight2_user(nullptr);
        
        Info::CMoveMapLimitRightCleanUp4_ptr CMoveMapLimitRightCleanUp4_next(nullptr);
        Info::CMoveMapLimitRightCleanUp4_clbk CMoveMapLimitRightCleanUp4_user(nullptr);
        
        Info::CMoveMapLimitRightCreate6_ptr CMoveMapLimitRightCreate6_next(nullptr);
        Info::CMoveMapLimitRightCreate6_clbk CMoveMapLimitRightCreate6_user(nullptr);
        
        Info::CMoveMapLimitRightCreateComplete8_ptr CMoveMapLimitRightCreateComplete8_next(nullptr);
        Info::CMoveMapLimitRightCreateComplete8_clbk CMoveMapLimitRightCreateComplete8_user(nullptr);
        
        Info::CMoveMapLimitRightGetType10_ptr CMoveMapLimitRightGetType10_next(nullptr);
        Info::CMoveMapLimitRightGetType10_clbk CMoveMapLimitRightGetType10_user(nullptr);
        
        Info::CMoveMapLimitRightIsHaveRight12_ptr CMoveMapLimitRightIsHaveRight12_next(nullptr);
        Info::CMoveMapLimitRightIsHaveRight12_clbk CMoveMapLimitRightIsHaveRight12_user(nullptr);
        
        Info::CMoveMapLimitRightLoad14_ptr CMoveMapLimitRightLoad14_next(nullptr);
        Info::CMoveMapLimitRightLoad14_clbk CMoveMapLimitRightLoad14_user(nullptr);
        
        Info::CMoveMapLimitRightLogIn16_ptr CMoveMapLimitRightLogIn16_next(nullptr);
        Info::CMoveMapLimitRightLogIn16_clbk CMoveMapLimitRightLogIn16_user(nullptr);
        
        Info::CMoveMapLimitRightLogOut18_ptr CMoveMapLimitRightLogOut18_next(nullptr);
        Info::CMoveMapLimitRightLogOut18_clbk CMoveMapLimitRightLogOut18_user(nullptr);
        
        Info::CMoveMapLimitRightSetFlag20_ptr CMoveMapLimitRightSetFlag20_next(nullptr);
        Info::CMoveMapLimitRightSetFlag20_clbk CMoveMapLimitRightSetFlag20_user(nullptr);
        
        
        Info::CMoveMapLimitRightdtor_CMoveMapLimitRight24_ptr CMoveMapLimitRightdtor_CMoveMapLimitRight24_next(nullptr);
        Info::CMoveMapLimitRightdtor_CMoveMapLimitRight24_clbk CMoveMapLimitRightdtor_CMoveMapLimitRight24_user(nullptr);
        
        
        void CMoveMapLimitRightctor_CMoveMapLimitRight2_wrapper(struct CMoveMapLimitRight* _this, int iType)
        {
           CMoveMapLimitRightctor_CMoveMapLimitRight2_user(_this, iType, CMoveMapLimitRightctor_CMoveMapLimitRight2_next);
        };
        void CMoveMapLimitRightCleanUp4_wrapper(struct CMoveMapLimitRight* _this)
        {
           CMoveMapLimitRightCleanUp4_user(_this, CMoveMapLimitRightCleanUp4_next);
        };
        struct CMoveMapLimitRight* CMoveMapLimitRightCreate6_wrapper(int iType)
        {
           return CMoveMapLimitRightCreate6_user(iType, CMoveMapLimitRightCreate6_next);
        };
        void CMoveMapLimitRightCreateComplete8_wrapper(struct CMoveMapLimitRight* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightCreateComplete8_user(_this, pkPlayer, CMoveMapLimitRightCreateComplete8_next);
        };
        int CMoveMapLimitRightGetType10_wrapper(struct CMoveMapLimitRight* _this)
        {
           return CMoveMapLimitRightGetType10_user(_this, CMoveMapLimitRightGetType10_next);
        };
        bool CMoveMapLimitRightIsHaveRight12_wrapper(struct CMoveMapLimitRight* _this)
        {
           return CMoveMapLimitRightIsHaveRight12_user(_this, CMoveMapLimitRightIsHaveRight12_next);
        };
        void CMoveMapLimitRightLoad14_wrapper(struct CMoveMapLimitRight* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightLoad14_user(_this, pkPlayer, CMoveMapLimitRightLoad14_next);
        };
        void CMoveMapLimitRightLogIn16_wrapper(struct CMoveMapLimitRight* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightLogIn16_user(_this, pkPlayer, CMoveMapLimitRightLogIn16_next);
        };
        void CMoveMapLimitRightLogOut18_wrapper(struct CMoveMapLimitRight* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightLogOut18_user(_this, pkPlayer, CMoveMapLimitRightLogOut18_next);
        };
        void CMoveMapLimitRightSetFlag20_wrapper(struct CMoveMapLimitRight* _this, int iType, bool bFlag)
        {
           CMoveMapLimitRightSetFlag20_user(_this, iType, bFlag, CMoveMapLimitRightSetFlag20_next);
        };
        
        void CMoveMapLimitRightdtor_CMoveMapLimitRight24_wrapper(struct CMoveMapLimitRight* _this)
        {
           CMoveMapLimitRightdtor_CMoveMapLimitRight24_user(_this, CMoveMapLimitRightdtor_CMoveMapLimitRight24_next);
        };
        
        ::std::array<hook_record, 11> CMoveMapLimitRight_functions = 
        {
            _hook_record {
                (LPVOID)0x1403ae460L,
                (LPVOID *)&CMoveMapLimitRightctor_CMoveMapLimitRight2_user,
                (LPVOID *)&CMoveMapLimitRightctor_CMoveMapLimitRight2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightctor_CMoveMapLimitRight2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRight::*)(int))&CMoveMapLimitRight::ctor_CMoveMapLimitRight)
            },
            _hook_record {
                (LPVOID)0x1403ae4a0L,
                (LPVOID *)&CMoveMapLimitRightCleanUp4_user,
                (LPVOID *)&CMoveMapLimitRightCleanUp4_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightCleanUp4_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRight::*)())&CMoveMapLimitRight::CleanUp)
            },
            _hook_record {
                (LPVOID)0x1403ac5e0L,
                (LPVOID *)&CMoveMapLimitRightCreate6_user,
                (LPVOID *)&CMoveMapLimitRightCreate6_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightCreate6_wrapper),
                (LPVOID)cast_pointer_function((struct CMoveMapLimitRight*(*)(int))&CMoveMapLimitRight::Create)
            },
            _hook_record {
                (LPVOID)0x1403ae4d0L,
                (LPVOID *)&CMoveMapLimitRightCreateComplete8_user,
                (LPVOID *)&CMoveMapLimitRightCreateComplete8_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightCreateComplete8_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRight::*)(struct CPlayer*))&CMoveMapLimitRight::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403ae6b0L,
                (LPVOID *)&CMoveMapLimitRightGetType10_user,
                (LPVOID *)&CMoveMapLimitRightGetType10_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightGetType10_wrapper),
                (LPVOID)cast_pointer_function((int(CMoveMapLimitRight::*)())&CMoveMapLimitRight::GetType)
            },
            _hook_record {
                (LPVOID)0x1403ae4f0L,
                (LPVOID *)&CMoveMapLimitRightIsHaveRight12_user,
                (LPVOID *)&CMoveMapLimitRightIsHaveRight12_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightIsHaveRight12_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitRight::*)())&CMoveMapLimitRight::IsHaveRight)
            },
            _hook_record {
                (LPVOID)0x1403ae4b0L,
                (LPVOID *)&CMoveMapLimitRightLoad14_user,
                (LPVOID *)&CMoveMapLimitRightLoad14_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightLoad14_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRight::*)(struct CPlayer*))&CMoveMapLimitRight::Load)
            },
            _hook_record {
                (LPVOID)0x1403ae4c0L,
                (LPVOID *)&CMoveMapLimitRightLogIn16_user,
                (LPVOID *)&CMoveMapLimitRightLogIn16_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightLogIn16_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRight::*)(struct CPlayer*))&CMoveMapLimitRight::LogIn)
            },
            _hook_record {
                (LPVOID)0x1403ae4e0L,
                (LPVOID *)&CMoveMapLimitRightLogOut18_user,
                (LPVOID *)&CMoveMapLimitRightLogOut18_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightLogOut18_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRight::*)(struct CPlayer*))&CMoveMapLimitRight::LogOut)
            },
            _hook_record {
                (LPVOID)0x1403ae500L,
                (LPVOID *)&CMoveMapLimitRightSetFlag20_user,
                (LPVOID *)&CMoveMapLimitRightSetFlag20_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightSetFlag20_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRight::*)(int, bool))&CMoveMapLimitRight::SetFlag)
            },
            _hook_record {
                (LPVOID)0x1403ae740L,
                (LPVOID *)&CMoveMapLimitRightdtor_CMoveMapLimitRight24_user,
                (LPVOID *)&CMoveMapLimitRightdtor_CMoveMapLimitRight24_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightdtor_CMoveMapLimitRight24_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRight::*)())&CMoveMapLimitRight::dtor_CMoveMapLimitRight)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
