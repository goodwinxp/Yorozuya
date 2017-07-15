#include <CMoveMapLimitRightInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_ptr CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_next(nullptr);
        Info::CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_clbk CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_user(nullptr);
        
        
        Info::CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_ptr CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_next(nullptr);
        Info::CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_clbk CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_user(nullptr);
        
        Info::CMoveMapLimitRightInfoCleanUp6_ptr CMoveMapLimitRightInfoCleanUp6_next(nullptr);
        Info::CMoveMapLimitRightInfoCleanUp6_clbk CMoveMapLimitRightInfoCleanUp6_user(nullptr);
        
        Info::CMoveMapLimitRightInfoCreateComplete8_ptr CMoveMapLimitRightInfoCreateComplete8_next(nullptr);
        Info::CMoveMapLimitRightInfoCreateComplete8_clbk CMoveMapLimitRightInfoCreateComplete8_user(nullptr);
        
        Info::CMoveMapLimitRightInfoIsHaveRight10_ptr CMoveMapLimitRightInfoIsHaveRight10_next(nullptr);
        Info::CMoveMapLimitRightInfoIsHaveRight10_clbk CMoveMapLimitRightInfoIsHaveRight10_user(nullptr);
        
        Info::CMoveMapLimitRightInfoLoad12_ptr CMoveMapLimitRightInfoLoad12_next(nullptr);
        Info::CMoveMapLimitRightInfoLoad12_clbk CMoveMapLimitRightInfoLoad12_user(nullptr);
        
        Info::CMoveMapLimitRightInfoLogIn14_ptr CMoveMapLimitRightInfoLogIn14_next(nullptr);
        Info::CMoveMapLimitRightInfoLogIn14_clbk CMoveMapLimitRightInfoLogIn14_user(nullptr);
        
        Info::CMoveMapLimitRightInfoLogOut16_ptr CMoveMapLimitRightInfoLogOut16_next(nullptr);
        Info::CMoveMapLimitRightInfoLogOut16_clbk CMoveMapLimitRightInfoLogOut16_user(nullptr);
        
        Info::CMoveMapLimitRightInfoRegist18_ptr CMoveMapLimitRightInfoRegist18_next(nullptr);
        Info::CMoveMapLimitRightInfoRegist18_clbk CMoveMapLimitRightInfoRegist18_user(nullptr);
        
        Info::CMoveMapLimitRightInfoSetFlag20_ptr CMoveMapLimitRightInfoSetFlag20_next(nullptr);
        Info::CMoveMapLimitRightInfoSetFlag20_clbk CMoveMapLimitRightInfoSetFlag20_user(nullptr);
        
        
        Info::CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_ptr CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_next(nullptr);
        Info::CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_clbk CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_user(nullptr);
        
        
        void CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_wrapper(struct CMoveMapLimitRightInfo* _this, struct CMoveMapLimitRightInfo* __that)
        {
           CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_user(_this, __that, CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_next);
        };
        
        void CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_wrapper(struct CMoveMapLimitRightInfo* _this)
        {
           CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_user(_this, CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_next);
        };
        void CMoveMapLimitRightInfoCleanUp6_wrapper(struct CMoveMapLimitRightInfo* _this)
        {
           CMoveMapLimitRightInfoCleanUp6_user(_this, CMoveMapLimitRightInfoCleanUp6_next);
        };
        void CMoveMapLimitRightInfoCreateComplete8_wrapper(struct CMoveMapLimitRightInfo* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightInfoCreateComplete8_user(_this, pkPlayer, CMoveMapLimitRightInfoCreateComplete8_next);
        };
        bool CMoveMapLimitRightInfoIsHaveRight10_wrapper(struct CMoveMapLimitRightInfo* _this, int iType)
        {
           return CMoveMapLimitRightInfoIsHaveRight10_user(_this, iType, CMoveMapLimitRightInfoIsHaveRight10_next);
        };
        void CMoveMapLimitRightInfoLoad12_wrapper(struct CMoveMapLimitRightInfo* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightInfoLoad12_user(_this, pkPlayer, CMoveMapLimitRightInfoLoad12_next);
        };
        void CMoveMapLimitRightInfoLogIn14_wrapper(struct CMoveMapLimitRightInfo* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightInfoLogIn14_user(_this, pkPlayer, CMoveMapLimitRightInfoLogIn14_next);
        };
        void CMoveMapLimitRightInfoLogOut16_wrapper(struct CMoveMapLimitRightInfo* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightInfoLogOut16_user(_this, pkPlayer, CMoveMapLimitRightInfoLogOut16_next);
        };
        bool CMoveMapLimitRightInfoRegist18_wrapper(struct CMoveMapLimitRightInfo* _this, int iType)
        {
           return CMoveMapLimitRightInfoRegist18_user(_this, iType, CMoveMapLimitRightInfoRegist18_next);
        };
        void CMoveMapLimitRightInfoSetFlag20_wrapper(struct CMoveMapLimitRightInfo* _this, int iType, int iSubType, bool bFlag)
        {
           CMoveMapLimitRightInfoSetFlag20_user(_this, iType, iSubType, bFlag, CMoveMapLimitRightInfoSetFlag20_next);
        };
        
        void CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_wrapper(struct CMoveMapLimitRightInfo* _this)
        {
           CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_user(_this, CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_next);
        };
        
        ::std::array<hook_record, 11> CMoveMapLimitRightInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1403af990L,
                (LPVOID *)&CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_user,
                (LPVOID *)&CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)(struct CMoveMapLimitRightInfo*))&CMoveMapLimitRightInfo::ctor_CMoveMapLimitRightInfo)
            },
            _hook_record {
                (LPVOID)0x1403ae760L,
                (LPVOID *)&CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_user,
                (LPVOID *)&CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoctor_CMoveMapLimitRightInfo4_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)())&CMoveMapLimitRightInfo::ctor_CMoveMapLimitRightInfo)
            },
            _hook_record {
                (LPVOID)0x1403ad710L,
                (LPVOID *)&CMoveMapLimitRightInfoCleanUp6_user,
                (LPVOID *)&CMoveMapLimitRightInfoCleanUp6_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoCleanUp6_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)())&CMoveMapLimitRightInfo::CleanUp)
            },
            _hook_record {
                (LPVOID)0x1403ad150L,
                (LPVOID *)&CMoveMapLimitRightInfoCreateComplete8_user,
                (LPVOID *)&CMoveMapLimitRightInfoCreateComplete8_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoCreateComplete8_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)(struct CPlayer*))&CMoveMapLimitRightInfo::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403acba0L,
                (LPVOID *)&CMoveMapLimitRightInfoIsHaveRight10_user,
                (LPVOID *)&CMoveMapLimitRightInfoIsHaveRight10_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoIsHaveRight10_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitRightInfo::*)(int))&CMoveMapLimitRightInfo::IsHaveRight)
            },
            _hook_record {
                (LPVOID)0x1403acd10L,
                (LPVOID *)&CMoveMapLimitRightInfoLoad12_user,
                (LPVOID *)&CMoveMapLimitRightInfoLoad12_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoLoad12_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)(struct CPlayer*))&CMoveMapLimitRightInfo::Load)
            },
            _hook_record {
                (LPVOID)0x1403acf30L,
                (LPVOID *)&CMoveMapLimitRightInfoLogIn14_user,
                (LPVOID *)&CMoveMapLimitRightInfoLogIn14_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoLogIn14_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)(struct CPlayer*))&CMoveMapLimitRightInfo::LogIn)
            },
            _hook_record {
                (LPVOID)0x1403ad370L,
                (LPVOID *)&CMoveMapLimitRightInfoLogOut16_user,
                (LPVOID *)&CMoveMapLimitRightInfoLogOut16_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoLogOut16_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)(struct CPlayer*))&CMoveMapLimitRightInfo::LogOut)
            },
            _hook_record {
                (LPVOID)0x1403ac960L,
                (LPVOID *)&CMoveMapLimitRightInfoRegist18_user,
                (LPVOID *)&CMoveMapLimitRightInfoRegist18_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoRegist18_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitRightInfo::*)(int))&CMoveMapLimitRightInfo::Regist)
            },
            _hook_record {
                (LPVOID)0x1403acc50L,
                (LPVOID *)&CMoveMapLimitRightInfoSetFlag20_user,
                (LPVOID *)&CMoveMapLimitRightInfoSetFlag20_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoSetFlag20_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)(int, int, bool))&CMoveMapLimitRightInfo::SetFlag)
            },
            _hook_record {
                (LPVOID)0x1403a3990L,
                (LPVOID *)&CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_user,
                (LPVOID *)&CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfodtor_CMoveMapLimitRightInfo26_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfo::*)())&CMoveMapLimitRightInfo::dtor_CMoveMapLimitRightInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
