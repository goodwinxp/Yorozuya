#include <CMoveMapLimitInfoListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_ptr CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_next(nullptr);
        Info::CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_clbk CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_user(nullptr);
        
        Info::CMoveMapLimitInfoListCleanUp4_ptr CMoveMapLimitInfoListCleanUp4_next(nullptr);
        Info::CMoveMapLimitInfoListCleanUp4_clbk CMoveMapLimitInfoListCleanUp4_user(nullptr);
        
        Info::CMoveMapLimitInfoListGet6_ptr CMoveMapLimitInfoListGet6_next(nullptr);
        Info::CMoveMapLimitInfoListGet6_clbk CMoveMapLimitInfoListGet6_user(nullptr);
        
        Info::CMoveMapLimitInfoListInit8_ptr CMoveMapLimitInfoListInit8_next(nullptr);
        Info::CMoveMapLimitInfoListInit8_clbk CMoveMapLimitInfoListInit8_user(nullptr);
        
        Info::CMoveMapLimitInfoListLoad10_ptr CMoveMapLimitInfoListLoad10_next(nullptr);
        Info::CMoveMapLimitInfoListLoad10_clbk CMoveMapLimitInfoListLoad10_user(nullptr);
        
        Info::CMoveMapLimitInfoListLogIn12_ptr CMoveMapLimitInfoListLogIn12_next(nullptr);
        Info::CMoveMapLimitInfoListLogIn12_clbk CMoveMapLimitInfoListLogIn12_user(nullptr);
        
        Info::CMoveMapLimitInfoListLogOut14_ptr CMoveMapLimitInfoListLogOut14_next(nullptr);
        Info::CMoveMapLimitInfoListLogOut14_clbk CMoveMapLimitInfoListLogOut14_user(nullptr);
        
        Info::CMoveMapLimitInfoListLoop16_ptr CMoveMapLimitInfoListLoop16_next(nullptr);
        Info::CMoveMapLimitInfoListLoop16_clbk CMoveMapLimitInfoListLoop16_user(nullptr);
        
        Info::CMoveMapLimitInfoListRequest18_ptr CMoveMapLimitInfoListRequest18_next(nullptr);
        Info::CMoveMapLimitInfoListRequest18_clbk CMoveMapLimitInfoListRequest18_user(nullptr);
        
        
        Info::CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_ptr CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_next(nullptr);
        Info::CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_clbk CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_user(nullptr);
        
        
        void CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_wrapper(struct CMoveMapLimitInfoList* _this)
        {
           CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_user(_this, CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_next);
        };
        void CMoveMapLimitInfoListCleanUp4_wrapper(struct CMoveMapLimitInfoList* _this)
        {
           CMoveMapLimitInfoListCleanUp4_user(_this, CMoveMapLimitInfoListCleanUp4_next);
        };
        struct CMoveMapLimitInfo* CMoveMapLimitInfoListGet6_wrapper(struct CMoveMapLimitInfoList* _this, int iLimitType, int iMapInx, unsigned int dwStoreRecordIndex)
        {
           return CMoveMapLimitInfoListGet6_user(_this, iLimitType, iMapInx, dwStoreRecordIndex, CMoveMapLimitInfoListGet6_next);
        };
        bool CMoveMapLimitInfoListInit8_wrapper(struct CMoveMapLimitInfoList* _this, struct std::vector<int,std::allocator<int> >* vecRightTypeList)
        {
           return CMoveMapLimitInfoListInit8_user(_this, vecRightTypeList, CMoveMapLimitInfoListInit8_next);
        };
        void CMoveMapLimitInfoListLoad10_wrapper(struct CMoveMapLimitInfoList* _this, struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
        {
           CMoveMapLimitInfoListLoad10_user(_this, pkPlayer, pkRight, CMoveMapLimitInfoListLoad10_next);
        };
        void CMoveMapLimitInfoListLogIn12_wrapper(struct CMoveMapLimitInfoList* _this, struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
        {
           CMoveMapLimitInfoListLogIn12_user(_this, pkPlayer, pkRight, CMoveMapLimitInfoListLogIn12_next);
        };
        void CMoveMapLimitInfoListLogOut14_wrapper(struct CMoveMapLimitInfoList* _this, struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
        {
           CMoveMapLimitInfoListLogOut14_user(_this, pkPlayer, pkRight, CMoveMapLimitInfoListLogOut14_next);
        };
        void CMoveMapLimitInfoListLoop16_wrapper(struct CMoveMapLimitInfoList* _this)
        {
           CMoveMapLimitInfoListLoop16_user(_this, CMoveMapLimitInfoListLoop16_next);
        };
        char CMoveMapLimitInfoListRequest18_wrapper(struct CMoveMapLimitInfoList* _this, int iLimitType, int iRequetType, int iMapInx, unsigned int dwStoreRecordIndex, int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
        {
           return CMoveMapLimitInfoListRequest18_user(_this, iLimitType, iRequetType, iMapInx, dwStoreRecordIndex, iUserInx, pRequest, pkRight, CMoveMapLimitInfoListRequest18_next);
        };
        
        void CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_wrapper(struct CMoveMapLimitInfoList* _this)
        {
           CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_user(_this, CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_next);
        };
        
        ::std::array<hook_record, 10> CMoveMapLimitInfoList_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a1dc0L,
                (LPVOID *)&CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_user,
                (LPVOID *)&CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListctor_CMoveMapLimitInfoList2_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoList::*)())&CMoveMapLimitInfoList::ctor_CMoveMapLimitInfoList)
            },
            _hook_record {
                (LPVOID)0x1403a6290L,
                (LPVOID *)&CMoveMapLimitInfoListCleanUp4_user,
                (LPVOID *)&CMoveMapLimitInfoListCleanUp4_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListCleanUp4_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoList::*)())&CMoveMapLimitInfoList::CleanUp)
            },
            _hook_record {
                (LPVOID)0x1403a6020L,
                (LPVOID *)&CMoveMapLimitInfoListGet6_user,
                (LPVOID *)&CMoveMapLimitInfoListGet6_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListGet6_wrapper),
                (LPVOID)cast_pointer_function((struct CMoveMapLimitInfo*(CMoveMapLimitInfoList::*)(int, int, unsigned int))&CMoveMapLimitInfoList::Get)
            },
            _hook_record {
                (LPVOID)0x1403a4ff0L,
                (LPVOID *)&CMoveMapLimitInfoListInit8_user,
                (LPVOID *)&CMoveMapLimitInfoListInit8_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListInit8_wrapper),
                (LPVOID)cast_pointer_function((bool(CMoveMapLimitInfoList::*)(struct std::vector<int,std::allocator<int> >*))&CMoveMapLimitInfoList::Init)
            },
            _hook_record {
                (LPVOID)0x1403a58f0L,
                (LPVOID *)&CMoveMapLimitInfoListLoad10_user,
                (LPVOID *)&CMoveMapLimitInfoListLoad10_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListLoad10_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoList::*)(struct CPlayer*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoList::Load)
            },
            _hook_record {
                (LPVOID)0x1403a5b20L,
                (LPVOID *)&CMoveMapLimitInfoListLogIn12_user,
                (LPVOID *)&CMoveMapLimitInfoListLogIn12_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListLogIn12_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoList::*)(struct CPlayer*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoList::LogIn)
            },
            _hook_record {
                (LPVOID)0x1403a5d50L,
                (LPVOID *)&CMoveMapLimitInfoListLogOut14_user,
                (LPVOID *)&CMoveMapLimitInfoListLogOut14_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListLogOut14_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoList::*)(struct CPlayer*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoList::LogOut)
            },
            _hook_record {
                (LPVOID)0x1403a54d0L,
                (LPVOID *)&CMoveMapLimitInfoListLoop16_user,
                (LPVOID *)&CMoveMapLimitInfoListLoop16_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoList::*)())&CMoveMapLimitInfoList::Loop)
            },
            _hook_record {
                (LPVOID)0x1403a5f80L,
                (LPVOID *)&CMoveMapLimitInfoListRequest18_user,
                (LPVOID *)&CMoveMapLimitInfoListRequest18_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListRequest18_wrapper),
                (LPVOID)cast_pointer_function((char(CMoveMapLimitInfoList::*)(int, int, int, unsigned int, int, char*, struct CMoveMapLimitRightInfo*))&CMoveMapLimitInfoList::Request)
            },
            _hook_record {
                (LPVOID)0x1403a1fa0L,
                (LPVOID *)&CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_user,
                (LPVOID *)&CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_next,
                (LPVOID)cast_pointer_function(CMoveMapLimitInfoListdtor_CMoveMapLimitInfoList20_wrapper),
                (LPVOID)cast_pointer_function((void(CMoveMapLimitInfoList::*)())&CMoveMapLimitInfoList::dtor_CMoveMapLimitInfoList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
