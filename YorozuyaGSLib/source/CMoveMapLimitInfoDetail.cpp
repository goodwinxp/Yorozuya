#include <CMoveMapLimitInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoveMapLimitInfoctor_CMoveMapLimitInfo2_ptr CMoveMapLimitInfoctor_CMoveMapLimitInfo2_next(nullptr);
        Info::CMoveMapLimitInfoctor_CMoveMapLimitInfo2_clbk CMoveMapLimitInfoctor_CMoveMapLimitInfo2_user(nullptr);
        
        Info::CMoveMapLimitInfoCreate4_ptr CMoveMapLimitInfoCreate4_next(nullptr);
        Info::CMoveMapLimitInfoCreate4_clbk CMoveMapLimitInfoCreate4_user(nullptr);
        
        Info::CMoveMapLimitInfoGetInx6_ptr CMoveMapLimitInfoGetInx6_next(nullptr);
        Info::CMoveMapLimitInfoGetInx6_clbk CMoveMapLimitInfoGetInx6_user(nullptr);
        
        Info::CMoveMapLimitInfoGetType8_ptr CMoveMapLimitInfoGetType8_next(nullptr);
        Info::CMoveMapLimitInfoGetType8_clbk CMoveMapLimitInfoGetType8_user(nullptr);
        
        Info::CMoveMapLimitInfoIsEqualLimit10_ptr CMoveMapLimitInfoIsEqualLimit10_next(nullptr);
        Info::CMoveMapLimitInfoIsEqualLimit10_clbk CMoveMapLimitInfoIsEqualLimit10_user(nullptr);
        
        Info::CMoveMapLimitInfoLoad12_ptr CMoveMapLimitInfoLoad12_next(nullptr);
        Info::CMoveMapLimitInfoLoad12_clbk CMoveMapLimitInfoLoad12_user(nullptr);
        
        Info::CMoveMapLimitInfoLogIn14_ptr CMoveMapLimitInfoLogIn14_next(nullptr);
        Info::CMoveMapLimitInfoLogIn14_clbk CMoveMapLimitInfoLogIn14_user(nullptr);
        
        Info::CMoveMapLimitInfoLogOut16_ptr CMoveMapLimitInfoLogOut16_next(nullptr);
        Info::CMoveMapLimitInfoLogOut16_clbk CMoveMapLimitInfoLogOut16_user(nullptr);
        
        Info::CMoveMapLimitInfoLoop18_ptr CMoveMapLimitInfoLoop18_next(nullptr);
        Info::CMoveMapLimitInfoLoop18_clbk CMoveMapLimitInfoLoop18_user(nullptr);
        
        
        Info::CMoveMapLimitInfodtor_CMoveMapLimitInfo22_ptr CMoveMapLimitInfodtor_CMoveMapLimitInfo22_next(nullptr);
        Info::CMoveMapLimitInfodtor_CMoveMapLimitInfo22_clbk CMoveMapLimitInfodtor_CMoveMapLimitInfo22_user(nullptr);
        
        
        void CMoveMapLimitInfoctor_CMoveMapLimitInfo2_wrapper(struct CMoveMapLimitInfo* _this, unsigned int uiInx, int iType)
        {
           CMoveMapLimitInfoctor_CMoveMapLimitInfo2_user(_this, uiInx, iType, CMoveMapLimitInfoctor_CMoveMapLimitInfo2_next);
        };
        struct CMoveMapLimitInfo* CMoveMapLimitInfoCreate4_wrapper(unsigned int uiInx, int iType)
        {
           return CMoveMapLimitInfoCreate4_user(uiInx, iType, CMoveMapLimitInfoCreate4_next);
        };
        unsigned int CMoveMapLimitInfoGetInx6_wrapper(struct CMoveMapLimitInfo* _this)
        {
           return CMoveMapLimitInfoGetInx6_user(_this, CMoveMapLimitInfoGetInx6_next);
        };
        int CMoveMapLimitInfoGetType8_wrapper(struct CMoveMapLimitInfo* _this)
        {
           return CMoveMapLimitInfoGetType8_user(_this, CMoveMapLimitInfoGetType8_next);
        };
        bool CMoveMapLimitInfoIsEqualLimit10_wrapper(struct CMoveMapLimitInfo* _this, int iType, int iMapInx, unsigned int dwStoreRecordIndex)
        {
           return CMoveMapLimitInfoIsEqualLimit10_user(_this, iType, iMapInx, dwStoreRecordIndex, CMoveMapLimitInfoIsEqualLimit10_next);
        };
        void CMoveMapLimitInfoLoad12_wrapper(struct CMoveMapLimitInfo* _this, struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
        {
           CMoveMapLimitInfoLoad12_user(_this, pkPlayer, pkRight, CMoveMapLimitInfoLoad12_next);
        };
        void CMoveMapLimitInfoLogIn14_wrapper(struct CMoveMapLimitInfo* _this, struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
        {
           CMoveMapLimitInfoLogIn14_user(_this, pkPlayer, pkRight, CMoveMapLimitInfoLogIn14_next);
        };
        void CMoveMapLimitInfoLogOut16_wrapper(struct CMoveMapLimitInfo* _this, struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
        {
           CMoveMapLimitInfoLogOut16_user(_this, pkPlayer, pkRight, CMoveMapLimitInfoLogOut16_next);
        };
        void CMoveMapLimitInfoLoop18_wrapper(struct CMoveMapLimitInfo* _this)
        {
           CMoveMapLimitInfoLoop18_user(_this, CMoveMapLimitInfoLoop18_next);
        };
        
        void CMoveMapLimitInfodtor_CMoveMapLimitInfo22_wrapper(struct CMoveMapLimitInfo* _this)
        {
           CMoveMapLimitInfodtor_CMoveMapLimitInfo22_user(_this, CMoveMapLimitInfodtor_CMoveMapLimitInfo22_next);
        };
        
        ::std::array<hook_record, 10> CMoveMapLimitInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a3d00L,
                (LPVOID *)&CMoveMapLimitInfoctor_CMoveMapLimitInfo2_user,
                (LPVOID *)&CMoveMapLimitInfoctor_CMoveMapLimitInfo2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoctor_CMoveMapLimitInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfo::*)(unsigned int, int))&CMoveMapLimitInfo::ctor_CMoveMapLimitInfo)
            },
            _hook_record {
                (LPVOID)0x1403a3db0L,
                (LPVOID *)&CMoveMapLimitInfoCreate4_user,
                (LPVOID *)&CMoveMapLimitInfoCreate4_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CMoveMapLimitInfo*(*)(unsigned int, int))&CMoveMapLimitInfo::Create)
            },
            _hook_record {
                (LPVOID)0x1403a74a0L,
                (LPVOID *)&CMoveMapLimitInfoGetInx6_user,
                (LPVOID *)&CMoveMapLimitInfoGetInx6_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoGetInx6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CMoveMapLimitInfo::*)())&CMoveMapLimitInfo::GetInx)
            },
            _hook_record {
                (LPVOID)0x1403a6f50L,
                (LPVOID *)&CMoveMapLimitInfoGetType8_user,
                (LPVOID *)&CMoveMapLimitInfoGetType8_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoGetType8_wrapper),
                (LPVOID)cast_pointer_function((int(CMoveMapLimitInfo::*)())&CMoveMapLimitInfo::GetType)
            },
            _hook_record {
                (LPVOID)0x1403a3e70L,
                (LPVOID *)&CMoveMapLimitInfoIsEqualLimit10_user,
                (LPVOID *)&CMoveMapLimitInfoIsEqualLimit10_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoIsEqualLimit10_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitInfo::*)(int, int, unsigned int))&CMoveMapLimitInfo::IsEqualLimit)
            },
            _hook_record {
                (LPVOID)0x1403a6ee0L,
                (LPVOID *)&CMoveMapLimitInfoLoad12_user,
                (LPVOID *)&CMoveMapLimitInfoLoad12_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoLoad12_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfo::*)(struct CPlayer*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfo::Load)
            },
            _hook_record {
                (LPVOID)0x1403a6f00L,
                (LPVOID *)&CMoveMapLimitInfoLogIn14_user,
                (LPVOID *)&CMoveMapLimitInfoLogIn14_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoLogIn14_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfo::*)(struct CPlayer*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfo::LogIn)
            },
            _hook_record {
                (LPVOID)0x1403a6f20L,
                (LPVOID *)&CMoveMapLimitInfoLogOut16_user,
                (LPVOID *)&CMoveMapLimitInfoLogOut16_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoLogOut16_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfo::*)(struct CPlayer*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfo::LogOut)
            },
            _hook_record {
                (LPVOID)0x1403a6f40L,
                (LPVOID *)&CMoveMapLimitInfoLoop18_user,
                (LPVOID *)&CMoveMapLimitInfoLoop18_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoLoop18_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfo::*)())&CMoveMapLimitInfo::Loop)
            },
            _hook_record {
                (LPVOID)0x1403a3d60L,
                (LPVOID *)&CMoveMapLimitInfodtor_CMoveMapLimitInfo22_user,
                (LPVOID *)&CMoveMapLimitInfodtor_CMoveMapLimitInfo22_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfodtor_CMoveMapLimitInfo22_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfo::*)())&CMoveMapLimitInfo::dtor_CMoveMapLimitInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
