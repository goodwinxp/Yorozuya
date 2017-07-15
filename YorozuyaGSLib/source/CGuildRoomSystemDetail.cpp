#include <CGuildRoomSystemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CGuildRoomSystemctor_CGuildRoomSystem2_ptr CGuildRoomSystemctor_CGuildRoomSystem2_next(nullptr);
        Info::CGuildRoomSystemctor_CGuildRoomSystem2_clbk CGuildRoomSystemctor_CGuildRoomSystem2_user(nullptr);
        
        Info::CGuildRoomSystemGetInstance4_ptr CGuildRoomSystemGetInstance4_next(nullptr);
        Info::CGuildRoomSystemGetInstance4_clbk CGuildRoomSystemGetInstance4_user(nullptr);
        
        Info::CGuildRoomSystemGetMapData6_ptr CGuildRoomSystemGetMapData6_next(nullptr);
        Info::CGuildRoomSystemGetMapData6_clbk CGuildRoomSystemGetMapData6_user(nullptr);
        
        Info::CGuildRoomSystemGetMapPos8_ptr CGuildRoomSystemGetMapPos8_next(nullptr);
        Info::CGuildRoomSystemGetMapPos8_clbk CGuildRoomSystemGetMapPos8_user(nullptr);
        
        Info::CGuildRoomSystemGetRestTime10_ptr CGuildRoomSystemGetRestTime10_next(nullptr);
        Info::CGuildRoomSystemGetRestTime10_clbk CGuildRoomSystemGetRestTime10_user(nullptr);
        
        Info::CGuildRoomSystemGetRoomCountByType12_ptr CGuildRoomSystemGetRoomCountByType12_next(nullptr);
        Info::CGuildRoomSystemGetRoomCountByType12_clbk CGuildRoomSystemGetRoomCountByType12_user(nullptr);
        
        Info::CGuildRoomSystemGetRoomType14_ptr CGuildRoomSystemGetRoomType14_next(nullptr);
        Info::CGuildRoomSystemGetRoomType14_clbk CGuildRoomSystemGetRoomType14_user(nullptr);
        
        Info::CGuildRoomSystemInit16_ptr CGuildRoomSystemInit16_next(nullptr);
        Info::CGuildRoomSystemInit16_clbk CGuildRoomSystemInit16_user(nullptr);
        
        Info::CGuildRoomSystemIsGuildRoomMemberIn18_ptr CGuildRoomSystemIsGuildRoomMemberIn18_next(nullptr);
        Info::CGuildRoomSystemIsGuildRoomMemberIn18_clbk CGuildRoomSystemIsGuildRoomMemberIn18_user(nullptr);
        
        Info::CGuildRoomSystemIsRoomRented20_ptr CGuildRoomSystemIsRoomRented20_next(nullptr);
        Info::CGuildRoomSystemIsRoomRented20_clbk CGuildRoomSystemIsRoomRented20_user(nullptr);
        
        Info::CGuildRoomSystemLoad_db22_ptr CGuildRoomSystemLoad_db22_next(nullptr);
        Info::CGuildRoomSystemLoad_db22_clbk CGuildRoomSystemLoad_db22_user(nullptr);
        
        Info::CGuildRoomSystemRentRoom24_ptr CGuildRoomSystemRentRoom24_next(nullptr);
        Info::CGuildRoomSystemRentRoom24_clbk CGuildRoomSystemRentRoom24_user(nullptr);
        
        Info::CGuildRoomSystemRentRoomTimer26_ptr CGuildRoomSystemRentRoomTimer26_next(nullptr);
        Info::CGuildRoomSystemRentRoomTimer26_clbk CGuildRoomSystemRentRoomTimer26_user(nullptr);
        
        Info::CGuildRoomSystemRoomIn28_ptr CGuildRoomSystemRoomIn28_next(nullptr);
        Info::CGuildRoomSystemRoomIn28_clbk CGuildRoomSystemRoomIn28_user(nullptr);
        
        Info::CGuildRoomSystemRoomOut30_ptr CGuildRoomSystemRoomOut30_next(nullptr);
        Info::CGuildRoomSystemRoomOut30_clbk CGuildRoomSystemRoomOut30_user(nullptr);
        
        Info::CGuildRoomSystemSetPlayerOut32_ptr CGuildRoomSystemSetPlayerOut32_next(nullptr);
        Info::CGuildRoomSystemSetPlayerOut32_clbk CGuildRoomSystemSetPlayerOut32_user(nullptr);
        
        
        Info::CGuildRoomSystemdtor_CGuildRoomSystem34_ptr CGuildRoomSystemdtor_CGuildRoomSystem34_next(nullptr);
        Info::CGuildRoomSystemdtor_CGuildRoomSystem34_clbk CGuildRoomSystemdtor_CGuildRoomSystem34_user(nullptr);
        
        
        void CGuildRoomSystemctor_CGuildRoomSystem2_wrapper(struct CGuildRoomSystem* _this)
        {
           CGuildRoomSystemctor_CGuildRoomSystem2_user(_this, CGuildRoomSystemctor_CGuildRoomSystem2_next);
        };
        struct CGuildRoomSystem* CGuildRoomSystemGetInstance4_wrapper()
        {
           return CGuildRoomSystemGetInstance4_user(CGuildRoomSystemGetInstance4_next);
        };
        struct CMapData* CGuildRoomSystemGetMapData6_wrapper(struct CGuildRoomSystem* _this, char byRace, char byMapType)
        {
           return CGuildRoomSystemGetMapData6_user(_this, byRace, byMapType, CGuildRoomSystemGetMapData6_next);
        };
        bool CGuildRoomSystemGetMapPos8_wrapper(struct CGuildRoomSystem* _this, unsigned int dwGuildSerial, float* pPos, struct CMapData* pMap, uint16_t* wMapLayer, char* byRoomType)
        {
           return CGuildRoomSystemGetMapPos8_user(_this, dwGuildSerial, pPos, pMap, wMapLayer, byRoomType, CGuildRoomSystemGetMapPos8_next);
        };
        bool CGuildRoomSystemGetRestTime10_wrapper(struct CGuildRoomSystem* _this, unsigned int dwGuildSerial, int* tt)
        {
           return CGuildRoomSystemGetRestTime10_user(_this, dwGuildSerial, tt, CGuildRoomSystemGetRestTime10_next);
        };
        int CGuildRoomSystemGetRoomCountByType12_wrapper(struct CGuildRoomSystem* _this, char byRace, char byRoomType)
        {
           return CGuildRoomSystemGetRoomCountByType12_user(_this, byRace, byRoomType, CGuildRoomSystemGetRoomCountByType12_next);
        };
        char CGuildRoomSystemGetRoomType14_wrapper(struct CGuildRoomSystem* _this, unsigned int dwGuildSerial)
        {
           return CGuildRoomSystemGetRoomType14_user(_this, dwGuildSerial, CGuildRoomSystemGetRoomType14_next);
        };
        bool CGuildRoomSystemInit16_wrapper(struct CGuildRoomSystem* _this)
        {
           return CGuildRoomSystemInit16_user(_this, CGuildRoomSystemInit16_next);
        };
        bool CGuildRoomSystemIsGuildRoomMemberIn18_wrapper(struct CGuildRoomSystem* _this, unsigned int dwGuildSerial, int n, unsigned int dwCharSerial)
        {
           return CGuildRoomSystemIsGuildRoomMemberIn18_user(_this, dwGuildSerial, n, dwCharSerial, CGuildRoomSystemIsGuildRoomMemberIn18_next);
        };
        bool CGuildRoomSystemIsRoomRented20_wrapper(struct CGuildRoomSystem* _this, unsigned int dwGuildSerial)
        {
           return CGuildRoomSystemIsRoomRented20_user(_this, dwGuildSerial, CGuildRoomSystemIsRoomRented20_next);
        };
        bool CGuildRoomSystemLoad_db22_wrapper(struct CGuildRoomSystem* _this)
        {
           return CGuildRoomSystemLoad_db22_user(_this, CGuildRoomSystemLoad_db22_next);
        };
        char CGuildRoomSystemRentRoom24_wrapper(struct CGuildRoomSystem* _this, char byRace, char byRoomType, int iGuildInx, unsigned int dwGuildSerial, struct tagTIMESTAMP_STRUCT* ts, bool bRestore)
        {
           return CGuildRoomSystemRentRoom24_user(_this, byRace, byRoomType, iGuildInx, dwGuildSerial, ts, bRestore, CGuildRoomSystemRentRoom24_next);
        };
        void CGuildRoomSystemRentRoomTimer26_wrapper(struct CGuildRoomSystem* _this)
        {
           CGuildRoomSystemRentRoomTimer26_user(_this, CGuildRoomSystemRentRoomTimer26_next);
        };
        int CGuildRoomSystemRoomIn28_wrapper(struct CGuildRoomSystem* _this, unsigned int dwGuildSerial, int n, unsigned int dwCharSerial)
        {
           return CGuildRoomSystemRoomIn28_user(_this, dwGuildSerial, n, dwCharSerial, CGuildRoomSystemRoomIn28_next);
        };
        int CGuildRoomSystemRoomOut30_wrapper(struct CGuildRoomSystem* _this, unsigned int dwGuildSerial, int n, unsigned int dwCharSerial)
        {
           return CGuildRoomSystemRoomOut30_user(_this, dwGuildSerial, n, dwCharSerial, CGuildRoomSystemRoomOut30_next);
        };
        int CGuildRoomSystemSetPlayerOut32_wrapper(struct CGuildRoomSystem* _this, unsigned int dwGuildSerial, int n, unsigned int dwCharSerial)
        {
           return CGuildRoomSystemSetPlayerOut32_user(_this, dwGuildSerial, n, dwCharSerial, CGuildRoomSystemSetPlayerOut32_next);
        };
        
        void CGuildRoomSystemdtor_CGuildRoomSystem34_wrapper(struct CGuildRoomSystem* _this)
        {
           CGuildRoomSystemdtor_CGuildRoomSystem34_user(_this, CGuildRoomSystemdtor_CGuildRoomSystem34_next);
        };
        
        ::std::array<hook_record, 17> CGuildRoomSystem_functions = 
        {
            _hook_record {
                (LPVOID)0x1402e9610L,
                (LPVOID *)&CGuildRoomSystemctor_CGuildRoomSystem2_user,
                (LPVOID *)&CGuildRoomSystemctor_CGuildRoomSystem2_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemctor_CGuildRoomSystem2_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomSystem::*)())&CGuildRoomSystem::ctor_CGuildRoomSystem)
            },
            _hook_record {
                (LPVOID)0x14007a070L,
                (LPVOID *)&CGuildRoomSystemGetInstance4_user,
                (LPVOID *)&CGuildRoomSystemGetInstance4_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemGetInstance4_wrapper),
                (LPVOID)cast_pointer_function((struct CGuildRoomSystem*(*)())&CGuildRoomSystem::GetInstance)
            },
            _hook_record {
                (LPVOID)0x1402ea9c0L,
                (LPVOID *)&CGuildRoomSystemGetMapData6_user,
                (LPVOID *)&CGuildRoomSystemGetMapData6_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemGetMapData6_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CGuildRoomSystem::*)(char, char))&CGuildRoomSystem::GetMapData)
            },
            _hook_record {
                (LPVOID)0x1402ea790L,
                (LPVOID *)&CGuildRoomSystemGetMapPos8_user,
                (LPVOID *)&CGuildRoomSystemGetMapPos8_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemGetMapPos8_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomSystem::*)(unsigned int, float*, struct CMapData*, uint16_t*, char*))&CGuildRoomSystem::GetMapPos)
            },
            _hook_record {
                (LPVOID)0x1402eaa10L,
                (LPVOID *)&CGuildRoomSystemGetRestTime10_user,
                (LPVOID *)&CGuildRoomSystemGetRestTime10_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemGetRestTime10_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomSystem::*)(unsigned int, int*))&CGuildRoomSystem::GetRestTime)
            },
            _hook_record {
                (LPVOID)0x1402ea460L,
                (LPVOID *)&CGuildRoomSystemGetRoomCountByType12_user,
                (LPVOID *)&CGuildRoomSystemGetRoomCountByType12_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemGetRoomCountByType12_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildRoomSystem::*)(char, char))&CGuildRoomSystem::GetRoomCountByType)
            },
            _hook_record {
                (LPVOID)0x1402eaae0L,
                (LPVOID *)&CGuildRoomSystemGetRoomType14_user,
                (LPVOID *)&CGuildRoomSystemGetRoomType14_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemGetRoomType14_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRoomSystem::*)(unsigned int))&CGuildRoomSystem::GetRoomType)
            },
            _hook_record {
                (LPVOID)0x1402e9a00L,
                (LPVOID *)&CGuildRoomSystemInit16_user,
                (LPVOID *)&CGuildRoomSystemInit16_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemInit16_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomSystem::*)())&CGuildRoomSystem::Init)
            },
            _hook_record {
                (LPVOID)0x1402eaba0L,
                (LPVOID *)&CGuildRoomSystemIsGuildRoomMemberIn18_user,
                (LPVOID *)&CGuildRoomSystemIsGuildRoomMemberIn18_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemIsGuildRoomMemberIn18_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomSystem::*)(unsigned int, int, unsigned int))&CGuildRoomSystem::IsGuildRoomMemberIn)
            },
            _hook_record {
                (LPVOID)0x1402ea540L,
                (LPVOID *)&CGuildRoomSystemIsRoomRented20_user,
                (LPVOID *)&CGuildRoomSystemIsRoomRented20_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemIsRoomRented20_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomSystem::*)(unsigned int))&CGuildRoomSystem::IsRoomRented)
            },
            _hook_record {
                (LPVOID)0x1402e9690L,
                (LPVOID *)&CGuildRoomSystemLoad_db22_user,
                (LPVOID *)&CGuildRoomSystemLoad_db22_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemLoad_db22_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomSystem::*)())&CGuildRoomSystem::Load_db)
            },
            _hook_record {
                (LPVOID)0x1402ea230L,
                (LPVOID *)&CGuildRoomSystemRentRoom24_user,
                (LPVOID *)&CGuildRoomSystemRentRoom24_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemRentRoom24_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRoomSystem::*)(char, char, int, unsigned int, struct tagTIMESTAMP_STRUCT*, bool))&CGuildRoomSystem::RentRoom)
            },
            _hook_record {
                (LPVOID)0x1402ea1a0L,
                (LPVOID *)&CGuildRoomSystemRentRoomTimer26_user,
                (LPVOID *)&CGuildRoomSystemRentRoomTimer26_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemRentRoomTimer26_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomSystem::*)())&CGuildRoomSystem::RentRoomTimer)
            },
            _hook_record {
                (LPVOID)0x1402ea5f0L,
                (LPVOID *)&CGuildRoomSystemRoomIn28_user,
                (LPVOID *)&CGuildRoomSystemRoomIn28_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemRoomIn28_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildRoomSystem::*)(unsigned int, int, unsigned int))&CGuildRoomSystem::RoomIn)
            },
            _hook_record {
                (LPVOID)0x1402ea6c0L,
                (LPVOID *)&CGuildRoomSystemRoomOut30_user,
                (LPVOID *)&CGuildRoomSystemRoomOut30_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemRoomOut30_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildRoomSystem::*)(unsigned int, int, unsigned int))&CGuildRoomSystem::RoomOut)
            },
            _hook_record {
                (LPVOID)0x1402ea8d0L,
                (LPVOID *)&CGuildRoomSystemSetPlayerOut32_user,
                (LPVOID *)&CGuildRoomSystemSetPlayerOut32_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemSetPlayerOut32_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildRoomSystem::*)(unsigned int, int, unsigned int))&CGuildRoomSystem::SetPlayerOut)
            },
            _hook_record {
                (LPVOID)0x1402e9650L,
                (LPVOID *)&CGuildRoomSystemdtor_CGuildRoomSystem34_user,
                (LPVOID *)&CGuildRoomSystemdtor_CGuildRoomSystem34_next,
                (LPVOID)cast_pointer_function(CGuildRoomSystemdtor_CGuildRoomSystem34_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomSystem::*)())&CGuildRoomSystem::dtor_CGuildRoomSystem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
