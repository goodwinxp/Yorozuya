#include <CGuildRoomInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CGuildRoomInfoctor_CGuildRoomInfo2_ptr CGuildRoomInfoctor_CGuildRoomInfo2_next(nullptr);
        Info::CGuildRoomInfoctor_CGuildRoomInfo2_clbk CGuildRoomInfoctor_CGuildRoomInfo2_user(nullptr);
        
        
        Info::CGuildRoomInfoctor_CGuildRoomInfo4_ptr CGuildRoomInfoctor_CGuildRoomInfo4_next(nullptr);
        Info::CGuildRoomInfoctor_CGuildRoomInfo4_clbk CGuildRoomInfoctor_CGuildRoomInfo4_user(nullptr);
        
        Info::CGuildRoomInfoGetGuildSerial6_ptr CGuildRoomInfoGetGuildSerial6_next(nullptr);
        Info::CGuildRoomInfoGetGuildSerial6_clbk CGuildRoomInfoGetGuildSerial6_user(nullptr);
        
        Info::CGuildRoomInfoGetMapData8_ptr CGuildRoomInfoGetMapData8_next(nullptr);
        Info::CGuildRoomInfoGetMapData8_clbk CGuildRoomInfoGetMapData8_user(nullptr);
        
        Info::CGuildRoomInfoGetMapLayer10_ptr CGuildRoomInfoGetMapLayer10_next(nullptr);
        Info::CGuildRoomInfoGetMapLayer10_clbk CGuildRoomInfoGetMapLayer10_user(nullptr);
        
        Info::CGuildRoomInfoGetMapPos12_ptr CGuildRoomInfoGetMapPos12_next(nullptr);
        Info::CGuildRoomInfoGetMapPos12_clbk CGuildRoomInfoGetMapPos12_user(nullptr);
        
        Info::CGuildRoomInfoGetRestTime14_ptr CGuildRoomInfoGetRestTime14_next(nullptr);
        Info::CGuildRoomInfoGetRestTime14_clbk CGuildRoomInfoGetRestTime14_user(nullptr);
        
        Info::CGuildRoomInfoGetRoomType16_ptr CGuildRoomInfoGetRoomType16_next(nullptr);
        Info::CGuildRoomInfoGetRoomType16_clbk CGuildRoomInfoGetRoomType16_user(nullptr);
        
        Info::CGuildRoomInfoIsMemberIn18_ptr CGuildRoomInfoIsMemberIn18_next(nullptr);
        Info::CGuildRoomInfoIsMemberIn18_clbk CGuildRoomInfoIsMemberIn18_user(nullptr);
        
        Info::CGuildRoomInfoIsRent20_ptr CGuildRoomInfoIsRent20_next(nullptr);
        Info::CGuildRoomInfoIsRent20_clbk CGuildRoomInfoIsRent20_user(nullptr);
        
        Info::CGuildRoomInfoOutAllRoomMember22_ptr CGuildRoomInfoOutAllRoomMember22_next(nullptr);
        Info::CGuildRoomInfoOutAllRoomMember22_clbk CGuildRoomInfoOutAllRoomMember22_user(nullptr);
        
        Info::CGuildRoomInfoRoomIn24_ptr CGuildRoomInfoRoomIn24_next(nullptr);
        Info::CGuildRoomInfoRoomIn24_clbk CGuildRoomInfoRoomIn24_user(nullptr);
        
        Info::CGuildRoomInfoRoomOut26_ptr CGuildRoomInfoRoomOut26_next(nullptr);
        Info::CGuildRoomInfoRoomOut26_clbk CGuildRoomInfoRoomOut26_user(nullptr);
        
        Info::CGuildRoomInfoRoomTimer28_ptr CGuildRoomInfoRoomTimer28_next(nullptr);
        Info::CGuildRoomInfoRoomTimer28_clbk CGuildRoomInfoRoomTimer28_user(nullptr);
        
        Info::CGuildRoomInfoRoom_Initialize30_ptr CGuildRoomInfoRoom_Initialize30_next(nullptr);
        Info::CGuildRoomInfoRoom_Initialize30_clbk CGuildRoomInfoRoom_Initialize30_user(nullptr);
        
        Info::CGuildRoomInfoSendDQS_RoomInsert32_ptr CGuildRoomInfoSendDQS_RoomInsert32_next(nullptr);
        Info::CGuildRoomInfoSendDQS_RoomInsert32_clbk CGuildRoomInfoSendDQS_RoomInsert32_user(nullptr);
        
        Info::CGuildRoomInfoSendDQS_RoomUpdate34_ptr CGuildRoomInfoSendDQS_RoomUpdate34_next(nullptr);
        Info::CGuildRoomInfoSendDQS_RoomUpdate34_clbk CGuildRoomInfoSendDQS_RoomUpdate34_user(nullptr);
        
        Info::CGuildRoomInfoSendMsg_RoomTimeOver36_ptr CGuildRoomInfoSendMsg_RoomTimeOver36_next(nullptr);
        Info::CGuildRoomInfoSendMsg_RoomTimeOver36_clbk CGuildRoomInfoSendMsg_RoomTimeOver36_user(nullptr);
        
        Info::CGuildRoomInfoSetPlayerOut38_ptr CGuildRoomInfoSetPlayerOut38_next(nullptr);
        Info::CGuildRoomInfoSetPlayerOut38_clbk CGuildRoomInfoSetPlayerOut38_user(nullptr);
        
        Info::CGuildRoomInfoSetRoom40_ptr CGuildRoomInfoSetRoom40_next(nullptr);
        Info::CGuildRoomInfoSetRoom40_clbk CGuildRoomInfoSetRoom40_user(nullptr);
        
        Info::CGuildRoomInfoSetRoomMapInfo42_ptr CGuildRoomInfoSetRoomMapInfo42_next(nullptr);
        Info::CGuildRoomInfoSetRoomMapInfo42_clbk CGuildRoomInfoSetRoomMapInfo42_user(nullptr);
        
        Info::CGuildRoomInfoSetRoomTime44_ptr CGuildRoomInfoSetRoomTime44_next(nullptr);
        Info::CGuildRoomInfoSetRoomTime44_clbk CGuildRoomInfoSetRoomTime44_user(nullptr);
        
        Info::CGuildRoomInfoSetRoomTime_Restore46_ptr CGuildRoomInfoSetRoomTime_Restore46_next(nullptr);
        Info::CGuildRoomInfoSetRoomTime_Restore46_clbk CGuildRoomInfoSetRoomTime_Restore46_user(nullptr);
        
        Info::CGuildRoomInfoSetRoom_Restore48_ptr CGuildRoomInfoSetRoom_Restore48_next(nullptr);
        Info::CGuildRoomInfoSetRoom_Restore48_clbk CGuildRoomInfoSetRoom_Restore48_user(nullptr);
        
        Info::CGuildRoomInfoTimeOver50_ptr CGuildRoomInfoTimeOver50_next(nullptr);
        Info::CGuildRoomInfoTimeOver50_clbk CGuildRoomInfoTimeOver50_user(nullptr);
        
        
        Info::CGuildRoomInfodtor_CGuildRoomInfo56_ptr CGuildRoomInfodtor_CGuildRoomInfo56_next(nullptr);
        Info::CGuildRoomInfodtor_CGuildRoomInfo56_clbk CGuildRoomInfodtor_CGuildRoomInfo56_user(nullptr);
        
        
        void CGuildRoomInfoctor_CGuildRoomInfo2_wrapper(struct CGuildRoomInfo* _this, struct CGuildRoomInfo* __that)
        {
           CGuildRoomInfoctor_CGuildRoomInfo2_user(_this, __that, CGuildRoomInfoctor_CGuildRoomInfo2_next);
        };
        
        void CGuildRoomInfoctor_CGuildRoomInfo4_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoctor_CGuildRoomInfo4_user(_this, CGuildRoomInfoctor_CGuildRoomInfo4_next);
        };
        unsigned int CGuildRoomInfoGetGuildSerial6_wrapper(struct CGuildRoomInfo* _this)
        {
           return CGuildRoomInfoGetGuildSerial6_user(_this, CGuildRoomInfoGetGuildSerial6_next);
        };
        struct CMapData* CGuildRoomInfoGetMapData8_wrapper(struct CGuildRoomInfo* _this)
        {
           return CGuildRoomInfoGetMapData8_user(_this, CGuildRoomInfoGetMapData8_next);
        };
        uint16_t CGuildRoomInfoGetMapLayer10_wrapper(struct CGuildRoomInfo* _this)
        {
           return CGuildRoomInfoGetMapLayer10_user(_this, CGuildRoomInfoGetMapLayer10_next);
        };
        bool CGuildRoomInfoGetMapPos12_wrapper(struct CGuildRoomInfo* _this, float* pPos)
        {
           return CGuildRoomInfoGetMapPos12_user(_this, pPos, CGuildRoomInfoGetMapPos12_next);
        };
        int CGuildRoomInfoGetRestTime14_wrapper(struct CGuildRoomInfo* _this)
        {
           return CGuildRoomInfoGetRestTime14_user(_this, CGuildRoomInfoGetRestTime14_next);
        };
        char CGuildRoomInfoGetRoomType16_wrapper(struct CGuildRoomInfo* _this)
        {
           return CGuildRoomInfoGetRoomType16_user(_this, CGuildRoomInfoGetRoomType16_next);
        };
        bool CGuildRoomInfoIsMemberIn18_wrapper(struct CGuildRoomInfo* _this, int n, unsigned int dwCharSerial)
        {
           return CGuildRoomInfoIsMemberIn18_user(_this, n, dwCharSerial, CGuildRoomInfoIsMemberIn18_next);
        };
        bool CGuildRoomInfoIsRent20_wrapper(struct CGuildRoomInfo* _this)
        {
           return CGuildRoomInfoIsRent20_user(_this, CGuildRoomInfoIsRent20_next);
        };
        void CGuildRoomInfoOutAllRoomMember22_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoOutAllRoomMember22_user(_this, CGuildRoomInfoOutAllRoomMember22_next);
        };
        int CGuildRoomInfoRoomIn24_wrapper(struct CGuildRoomInfo* _this, int n, unsigned int dwCharSerial)
        {
           return CGuildRoomInfoRoomIn24_user(_this, n, dwCharSerial, CGuildRoomInfoRoomIn24_next);
        };
        int CGuildRoomInfoRoomOut26_wrapper(struct CGuildRoomInfo* _this, int n, unsigned int dwCharSerial)
        {
           return CGuildRoomInfoRoomOut26_user(_this, n, dwCharSerial, CGuildRoomInfoRoomOut26_next);
        };
        void CGuildRoomInfoRoomTimer28_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoRoomTimer28_user(_this, CGuildRoomInfoRoomTimer28_next);
        };
        void CGuildRoomInfoRoom_Initialize30_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoRoom_Initialize30_user(_this, CGuildRoomInfoRoom_Initialize30_next);
        };
        void CGuildRoomInfoSendDQS_RoomInsert32_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoSendDQS_RoomInsert32_user(_this, CGuildRoomInfoSendDQS_RoomInsert32_next);
        };
        void CGuildRoomInfoSendDQS_RoomUpdate34_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoSendDQS_RoomUpdate34_user(_this, CGuildRoomInfoSendDQS_RoomUpdate34_next);
        };
        void CGuildRoomInfoSendMsg_RoomTimeOver36_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoSendMsg_RoomTimeOver36_user(_this, CGuildRoomInfoSendMsg_RoomTimeOver36_next);
        };
        bool CGuildRoomInfoSetPlayerOut38_wrapper(struct CGuildRoomInfo* _this, int n, unsigned int dwCharSerial, int iMemberIdx)
        {
           return CGuildRoomInfoSetPlayerOut38_user(_this, n, dwCharSerial, iMemberIdx, CGuildRoomInfoSetPlayerOut38_next);
        };
        bool CGuildRoomInfoSetRoom40_wrapper(struct CGuildRoomInfo* _this, int iGuildInx, unsigned int dwGuildSerial)
        {
           return CGuildRoomInfoSetRoom40_user(_this, iGuildInx, dwGuildSerial, CGuildRoomInfoSetRoom40_next);
        };
        void CGuildRoomInfoSetRoomMapInfo42_wrapper(struct CGuildRoomInfo* _this, struct CMapData* pMap, uint16_t wMapLayer, char byRoomType, char byRace)
        {
           CGuildRoomInfoSetRoomMapInfo42_user(_this, pMap, wMapLayer, byRoomType, byRace, CGuildRoomInfoSetRoomMapInfo42_next);
        };
        void CGuildRoomInfoSetRoomTime44_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoSetRoomTime44_user(_this, CGuildRoomInfoSetRoomTime44_next);
        };
        void CGuildRoomInfoSetRoomTime_Restore46_wrapper(struct CGuildRoomInfo* _this, struct tagTIMESTAMP_STRUCT ts)
        {
           CGuildRoomInfoSetRoomTime_Restore46_user(_this, ts, CGuildRoomInfoSetRoomTime_Restore46_next);
        };
        bool CGuildRoomInfoSetRoom_Restore48_wrapper(struct CGuildRoomInfo* _this, int iGuildInx, unsigned int dwGuildSerial, struct tagTIMESTAMP_STRUCT ts)
        {
           return CGuildRoomInfoSetRoom_Restore48_user(_this, iGuildInx, dwGuildSerial, ts, CGuildRoomInfoSetRoom_Restore48_next);
        };
        void CGuildRoomInfoTimeOver50_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfoTimeOver50_user(_this, CGuildRoomInfoTimeOver50_next);
        };
        
        void CGuildRoomInfodtor_CGuildRoomInfo56_wrapper(struct CGuildRoomInfo* _this)
        {
           CGuildRoomInfodtor_CGuildRoomInfo56_user(_this, CGuildRoomInfodtor_CGuildRoomInfo56_next);
        };
        
        ::std::array<hook_record, 26> CGuildRoomInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1402eb8f0L,
                (LPVOID *)&CGuildRoomInfoctor_CGuildRoomInfo2_user,
                (LPVOID *)&CGuildRoomInfoctor_CGuildRoomInfo2_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoctor_CGuildRoomInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)(struct CGuildRoomInfo*))&CGuildRoomInfo::ctor_CGuildRoomInfo)
            },
            _hook_record {
                (LPVOID)0x1402e5920L,
                (LPVOID *)&CGuildRoomInfoctor_CGuildRoomInfo4_user,
                (LPVOID *)&CGuildRoomInfoctor_CGuildRoomInfo4_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoctor_CGuildRoomInfo4_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::ctor_CGuildRoomInfo)
            },
            _hook_record {
                (LPVOID)0x1402eb230L,
                (LPVOID *)&CGuildRoomInfoGetGuildSerial6_user,
                (LPVOID *)&CGuildRoomInfoGetGuildSerial6_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoGetGuildSerial6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CGuildRoomInfo::*)())&CGuildRoomInfo::GetGuildSerial)
            },
            _hook_record {
                (LPVOID)0x1402eb250L,
                (LPVOID *)&CGuildRoomInfoGetMapData8_user,
                (LPVOID *)&CGuildRoomInfoGetMapData8_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoGetMapData8_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CGuildRoomInfo::*)())&CGuildRoomInfo::GetMapData)
            },
            _hook_record {
                (LPVOID)0x1402eb270L,
                (LPVOID *)&CGuildRoomInfoGetMapLayer10_user,
                (LPVOID *)&CGuildRoomInfoGetMapLayer10_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoGetMapLayer10_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CGuildRoomInfo::*)())&CGuildRoomInfo::GetMapLayer)
            },
            _hook_record {
                (LPVOID)0x1402e6690L,
                (LPVOID *)&CGuildRoomInfoGetMapPos12_user,
                (LPVOID *)&CGuildRoomInfoGetMapPos12_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoGetMapPos12_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomInfo::*)(float*))&CGuildRoomInfo::GetMapPos)
            },
            _hook_record {
                (LPVOID)0x1402e6820L,
                (LPVOID *)&CGuildRoomInfoGetRestTime14_user,
                (LPVOID *)&CGuildRoomInfoGetRestTime14_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoGetRestTime14_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildRoomInfo::*)())&CGuildRoomInfo::GetRestTime)
            },
            _hook_record {
                (LPVOID)0x1402eb210L,
                (LPVOID *)&CGuildRoomInfoGetRoomType16_user,
                (LPVOID *)&CGuildRoomInfoGetRoomType16_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoGetRoomType16_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRoomInfo::*)())&CGuildRoomInfo::GetRoomType)
            },
            _hook_record {
                (LPVOID)0x1402e65b0L,
                (LPVOID *)&CGuildRoomInfoIsMemberIn18_user,
                (LPVOID *)&CGuildRoomInfoIsMemberIn18_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoIsMemberIn18_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomInfo::*)(int, unsigned int))&CGuildRoomInfo::IsMemberIn)
            },
            _hook_record {
                (LPVOID)0x1402e6d10L,
                (LPVOID *)&CGuildRoomInfoIsRent20_user,
                (LPVOID *)&CGuildRoomInfoIsRent20_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoIsRent20_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomInfo::*)())&CGuildRoomInfo::IsRent)
            },
            _hook_record {
                (LPVOID)0x1402e6000L,
                (LPVOID *)&CGuildRoomInfoOutAllRoomMember22_user,
                (LPVOID *)&CGuildRoomInfoOutAllRoomMember22_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoOutAllRoomMember22_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::OutAllRoomMember)
            },
            _hook_record {
                (LPVOID)0x1402e60f0L,
                (LPVOID *)&CGuildRoomInfoRoomIn24_user,
                (LPVOID *)&CGuildRoomInfoRoomIn24_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoRoomIn24_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildRoomInfo::*)(int, unsigned int))&CGuildRoomInfo::RoomIn)
            },
            _hook_record {
                (LPVOID)0x1402e6210L,
                (LPVOID *)&CGuildRoomInfoRoomOut26_user,
                (LPVOID *)&CGuildRoomInfoRoomOut26_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoRoomOut26_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildRoomInfo::*)(int, unsigned int))&CGuildRoomInfo::RoomOut)
            },
            _hook_record {
                (LPVOID)0x1402e5f20L,
                (LPVOID *)&CGuildRoomInfoRoomTimer28_user,
                (LPVOID *)&CGuildRoomInfoRoomTimer28_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoRoomTimer28_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::RoomTimer)
            },
            _hook_record {
                (LPVOID)0x1402e59f0L,
                (LPVOID *)&CGuildRoomInfoRoom_Initialize30_user,
                (LPVOID *)&CGuildRoomInfoRoom_Initialize30_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoRoom_Initialize30_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::Room_Initialize)
            },
            _hook_record {
                (LPVOID)0x1402e66f0L,
                (LPVOID *)&CGuildRoomInfoSendDQS_RoomInsert32_user,
                (LPVOID *)&CGuildRoomInfoSendDQS_RoomInsert32_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSendDQS_RoomInsert32_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::SendDQS_RoomInsert)
            },
            _hook_record {
                (LPVOID)0x1402e6790L,
                (LPVOID *)&CGuildRoomInfoSendDQS_RoomUpdate34_user,
                (LPVOID *)&CGuildRoomInfoSendDQS_RoomUpdate34_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSendDQS_RoomUpdate34_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::SendDQS_RoomUpdate)
            },
            _hook_record {
                (LPVOID)0x1402e6890L,
                (LPVOID *)&CGuildRoomInfoSendMsg_RoomTimeOver36_user,
                (LPVOID *)&CGuildRoomInfoSendMsg_RoomTimeOver36_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSendMsg_RoomTimeOver36_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::SendMsg_RoomTimeOver)
            },
            _hook_record {
                (LPVOID)0x1402e6310L,
                (LPVOID *)&CGuildRoomInfoSetPlayerOut38_user,
                (LPVOID *)&CGuildRoomInfoSetPlayerOut38_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSetPlayerOut38_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomInfo::*)(int, unsigned int, int))&CGuildRoomInfo::SetPlayerOut)
            },
            _hook_record {
                (LPVOID)0x1402e5b20L,
                (LPVOID *)&CGuildRoomInfoSetRoom40_user,
                (LPVOID *)&CGuildRoomInfoSetRoom40_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSetRoom40_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomInfo::*)(int, unsigned int))&CGuildRoomInfo::SetRoom)
            },
            _hook_record {
                (LPVOID)0x1402e5a80L,
                (LPVOID *)&CGuildRoomInfoSetRoomMapInfo42_user,
                (LPVOID *)&CGuildRoomInfoSetRoomMapInfo42_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSetRoomMapInfo42_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)(struct CMapData*, uint16_t, char, char))&CGuildRoomInfo::SetRoomMapInfo)
            },
            _hook_record {
                (LPVOID)0x1402e5da0L,
                (LPVOID *)&CGuildRoomInfoSetRoomTime44_user,
                (LPVOID *)&CGuildRoomInfoSetRoomTime44_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSetRoomTime44_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::SetRoomTime)
            },
            _hook_record {
                (LPVOID)0x1402e5e10L,
                (LPVOID *)&CGuildRoomInfoSetRoomTime_Restore46_user,
                (LPVOID *)&CGuildRoomInfoSetRoomTime_Restore46_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSetRoomTime_Restore46_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)(struct tagTIMESTAMP_STRUCT))&CGuildRoomInfo::SetRoomTime_Restore)
            },
            _hook_record {
                (LPVOID)0x1402e5c80L,
                (LPVOID *)&CGuildRoomInfoSetRoom_Restore48_user,
                (LPVOID *)&CGuildRoomInfoSetRoom_Restore48_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoSetRoom_Restore48_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRoomInfo::*)(int, unsigned int, struct tagTIMESTAMP_STRUCT))&CGuildRoomInfo::SetRoom_Restore)
            },
            _hook_record {
                (LPVOID)0x1402e5f90L,
                (LPVOID *)&CGuildRoomInfoTimeOver50_user,
                (LPVOID *)&CGuildRoomInfoTimeOver50_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfoTimeOver50_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::TimeOver)
            },
            _hook_record {
                (LPVOID)0x1402e59b0L,
                (LPVOID *)&CGuildRoomInfodtor_CGuildRoomInfo56_user,
                (LPVOID *)&CGuildRoomInfodtor_CGuildRoomInfo56_next,
                (LPVOID)cast_pointer_function(CGuildRoomInfodtor_CGuildRoomInfo56_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRoomInfo::*)())&CGuildRoomInfo::dtor_CGuildRoomInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
