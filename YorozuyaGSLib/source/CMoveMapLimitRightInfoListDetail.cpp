#include <CMoveMapLimitRightInfoListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_ptr CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_next(nullptr);
        Info::CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_clbk CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_user(nullptr);
        
        Info::CMoveMapLimitRightInfoListCreateComplete4_ptr CMoveMapLimitRightInfoListCreateComplete4_next(nullptr);
        Info::CMoveMapLimitRightInfoListCreateComplete4_clbk CMoveMapLimitRightInfoListCreateComplete4_user(nullptr);
        
        Info::CMoveMapLimitRightInfoListGet6_ptr CMoveMapLimitRightInfoListGet6_next(nullptr);
        Info::CMoveMapLimitRightInfoListGet6_clbk CMoveMapLimitRightInfoListGet6_user(nullptr);
        
        Info::CMoveMapLimitRightInfoListInit8_ptr CMoveMapLimitRightInfoListInit8_next(nullptr);
        Info::CMoveMapLimitRightInfoListInit8_clbk CMoveMapLimitRightInfoListInit8_user(nullptr);
        
        Info::CMoveMapLimitRightInfoListLoad10_ptr CMoveMapLimitRightInfoListLoad10_next(nullptr);
        Info::CMoveMapLimitRightInfoListLoad10_clbk CMoveMapLimitRightInfoListLoad10_user(nullptr);
        
        Info::CMoveMapLimitRightInfoListLogIn12_ptr CMoveMapLimitRightInfoListLogIn12_next(nullptr);
        Info::CMoveMapLimitRightInfoListLogIn12_clbk CMoveMapLimitRightInfoListLogIn12_user(nullptr);
        
        Info::CMoveMapLimitRightInfoListLogOut14_ptr CMoveMapLimitRightInfoListLogOut14_next(nullptr);
        Info::CMoveMapLimitRightInfoListLogOut14_clbk CMoveMapLimitRightInfoListLogOut14_user(nullptr);
        
        
        Info::CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_ptr CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_next(nullptr);
        Info::CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_clbk CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_user(nullptr);
        
        
        void CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_wrapper(struct CMoveMapLimitRightInfoList* _this)
        {
           CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_user(_this, CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_next);
        };
        void CMoveMapLimitRightInfoListCreateComplete4_wrapper(struct CMoveMapLimitRightInfoList* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightInfoListCreateComplete4_user(_this, pkPlayer, CMoveMapLimitRightInfoListCreateComplete4_next);
        };
        struct CMoveMapLimitRightInfo* CMoveMapLimitRightInfoListGet6_wrapper(struct CMoveMapLimitRightInfoList* _this, int iInx)
        {
           return CMoveMapLimitRightInfoListGet6_user(_this, iInx, CMoveMapLimitRightInfoListGet6_next);
        };
        bool CMoveMapLimitRightInfoListInit8_wrapper(struct CMoveMapLimitRightInfoList* _this, struct std::vector<int,std::allocator<int> >* vecRightTypeList)
        {
           return CMoveMapLimitRightInfoListInit8_user(_this, vecRightTypeList, CMoveMapLimitRightInfoListInit8_next);
        };
        void CMoveMapLimitRightInfoListLoad10_wrapper(struct CMoveMapLimitRightInfoList* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightInfoListLoad10_user(_this, pkPlayer, CMoveMapLimitRightInfoListLoad10_next);
        };
        void CMoveMapLimitRightInfoListLogIn12_wrapper(struct CMoveMapLimitRightInfoList* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightInfoListLogIn12_user(_this, pkPlayer, CMoveMapLimitRightInfoListLogIn12_next);
        };
        void CMoveMapLimitRightInfoListLogOut14_wrapper(struct CMoveMapLimitRightInfoList* _this, struct CPlayer* pkPlayer)
        {
           CMoveMapLimitRightInfoListLogOut14_user(_this, pkPlayer, CMoveMapLimitRightInfoListLogOut14_next);
        };
        
        void CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_wrapper(struct CMoveMapLimitRightInfoList* _this)
        {
           CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_user(_this, CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_next);
        };
        
        ::std::array<hook_record, 8> CMoveMapLimitRightInfoList_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a1e10L,
                (LPVOID *)&CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_user,
                (LPVOID *)&CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoListctor_CMoveMapLimitRightInfoList2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfoList::*)())&CMoveMapLimitRightInfoList::ctor_CMoveMapLimitRightInfoList)
            },
            _hook_record {
                (LPVOID)0x1403add30L,
                (LPVOID *)&CMoveMapLimitRightInfoListCreateComplete4_user,
                (LPVOID *)&CMoveMapLimitRightInfoListCreateComplete4_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoListCreateComplete4_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfoList::*)(struct CPlayer*))&CMoveMapLimitRightInfoList::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403a1fe0L,
                (LPVOID *)&CMoveMapLimitRightInfoListGet6_user,
                (LPVOID *)&CMoveMapLimitRightInfoListGet6_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoListGet6_wrapper),
                (LPVOID)cast_pointer_function((struct CMoveMapLimitRightInfo*(CMoveMapLimitRightInfoList::*)(int))&CMoveMapLimitRightInfoList::Get)
            },
            _hook_record {
                (LPVOID)0x1403ad800L,
                (LPVOID *)&CMoveMapLimitRightInfoListInit8_user,
                (LPVOID *)&CMoveMapLimitRightInfoListInit8_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoListInit8_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitRightInfoList::*)(struct std::vector<int,std::allocator<int> >*))&CMoveMapLimitRightInfoList::Init)
            },
            _hook_record {
                (LPVOID)0x1403adc10L,
                (LPVOID *)&CMoveMapLimitRightInfoListLoad10_user,
                (LPVOID *)&CMoveMapLimitRightInfoListLoad10_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoListLoad10_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfoList::*)(struct CPlayer*))&CMoveMapLimitRightInfoList::Load)
            },
            _hook_record {
                (LPVOID)0x1403adca0L,
                (LPVOID *)&CMoveMapLimitRightInfoListLogIn12_user,
                (LPVOID *)&CMoveMapLimitRightInfoListLogIn12_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoListLogIn12_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfoList::*)(struct CPlayer*))&CMoveMapLimitRightInfoList::LogIn)
            },
            _hook_record {
                (LPVOID)0x1403addc0L,
                (LPVOID *)&CMoveMapLimitRightInfoListLogOut14_user,
                (LPVOID *)&CMoveMapLimitRightInfoListLogOut14_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoListLogOut14_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfoList::*)(struct CPlayer*))&CMoveMapLimitRightInfoList::LogOut)
            },
            _hook_record {
                (LPVOID)0x1403a1e60L,
                (LPVOID *)&CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_user,
                (LPVOID *)&CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitRightInfoListdtor_CMoveMapLimitRightInfoList16_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitRightInfoList::*)())&CMoveMapLimitRightInfoList::dtor_CMoveMapLimitRightInfoList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
