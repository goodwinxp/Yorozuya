#include <CDarkHoleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CDarkHolector_CDarkHole2_ptr CDarkHolector_CDarkHole2_next(nullptr);
        Info::CDarkHolector_CDarkHole2_clbk CDarkHolector_CDarkHole2_user(nullptr);
        
        Info::CDarkHoleCreate4_ptr CDarkHoleCreate4_next(nullptr);
        Info::CDarkHoleCreate4_clbk CDarkHoleCreate4_user(nullptr);
        
        Info::CDarkHoleDestroy6_ptr CDarkHoleDestroy6_next(nullptr);
        Info::CDarkHoleDestroy6_clbk CDarkHoleDestroy6_user(nullptr);
        
        Info::CDarkHoleEnterPlayer8_ptr CDarkHoleEnterPlayer8_next(nullptr);
        Info::CDarkHoleEnterPlayer8_clbk CDarkHoleEnterPlayer8_user(nullptr);
        
        Info::CDarkHoleGetEnterNewPos10_ptr CDarkHoleGetEnterNewPos10_next(nullptr);
        Info::CDarkHoleGetEnterNewPos10_clbk CDarkHoleGetEnterNewPos10_user(nullptr);
        
        Info::CDarkHoleInit12_ptr CDarkHoleInit12_next(nullptr);
        Info::CDarkHoleInit12_clbk CDarkHoleInit12_user(nullptr);
        
        Info::CDarkHoleIsNewEnterAbleNum14_ptr CDarkHoleIsNewEnterAbleNum14_next(nullptr);
        Info::CDarkHoleIsNewEnterAbleNum14_clbk CDarkHoleIsNewEnterAbleNum14_user(nullptr);
        
        Info::CDarkHoleIsNewEnterAblePlayer16_ptr CDarkHoleIsNewEnterAblePlayer16_next(nullptr);
        Info::CDarkHoleIsNewEnterAblePlayer16_clbk CDarkHoleIsNewEnterAblePlayer16_user(nullptr);
        
        Info::CDarkHoleIsOpenPartyMember18_ptr CDarkHoleIsOpenPartyMember18_next(nullptr);
        Info::CDarkHoleIsOpenPartyMember18_clbk CDarkHoleIsOpenPartyMember18_user(nullptr);
        
        Info::CDarkHoleLoop20_ptr CDarkHoleLoop20_next(nullptr);
        Info::CDarkHoleLoop20_clbk CDarkHoleLoop20_user(nullptr);
        
        Info::CDarkHoleSendMsg_Create22_ptr CDarkHoleSendMsg_Create22_next(nullptr);
        Info::CDarkHoleSendMsg_Create22_clbk CDarkHoleSendMsg_Create22_user(nullptr);
        
        Info::CDarkHoleSendMsg_Destroy24_ptr CDarkHoleSendMsg_Destroy24_next(nullptr);
        Info::CDarkHoleSendMsg_Destroy24_clbk CDarkHoleSendMsg_Destroy24_user(nullptr);
        
        Info::CDarkHoleSendMsg_FixPosition26_ptr CDarkHoleSendMsg_FixPosition26_next(nullptr);
        Info::CDarkHoleSendMsg_FixPosition26_clbk CDarkHoleSendMsg_FixPosition26_user(nullptr);
        
        Info::CDarkHoleSendMsg_StateChange28_ptr CDarkHoleSendMsg_StateChange28_next(nullptr);
        Info::CDarkHoleSendMsg_StateChange28_clbk CDarkHoleSendMsg_StateChange28_user(nullptr);
        
        
        Info::CDarkHoledtor_CDarkHole34_ptr CDarkHoledtor_CDarkHole34_next(nullptr);
        Info::CDarkHoledtor_CDarkHole34_clbk CDarkHoledtor_CDarkHole34_user(nullptr);
        
        
        void CDarkHolector_CDarkHole2_wrapper(struct CDarkHole* _this)
        {
           CDarkHolector_CDarkHole2_user(_this, CDarkHolector_CDarkHole2_next);
        };
        bool CDarkHoleCreate4_wrapper(struct CDarkHole* _this, struct _darkhole_create_setdata* pParam)
        {
           return CDarkHoleCreate4_user(_this, pParam, CDarkHoleCreate4_next);
        };
        bool CDarkHoleDestroy6_wrapper(struct CDarkHole* _this)
        {
           return CDarkHoleDestroy6_user(_this, CDarkHoleDestroy6_next);
        };
        bool CDarkHoleEnterPlayer8_wrapper(struct CDarkHole* _this, struct CPlayer* pEnter, struct CMapData* pOldMap, uint16_t wOldLayer, float* fOldPos, bool bReconnect)
        {
           return CDarkHoleEnterPlayer8_user(_this, pEnter, pOldMap, wOldLayer, fOldPos, bReconnect, CDarkHoleEnterPlayer8_next);
        };
        bool CDarkHoleGetEnterNewPos10_wrapper(struct CDarkHole* _this, struct _ENTER_DUNGEON_NEW_POS* pNewPos)
        {
           return CDarkHoleGetEnterNewPos10_user(_this, pNewPos, CDarkHoleGetEnterNewPos10_next);
        };
        void CDarkHoleInit12_wrapper(struct CDarkHole* _this, struct _object_id* pID)
        {
           CDarkHoleInit12_user(_this, pID, CDarkHoleInit12_next);
        };
        bool CDarkHoleIsNewEnterAbleNum14_wrapper(struct CDarkHole* _this)
        {
           return CDarkHoleIsNewEnterAbleNum14_user(_this, CDarkHoleIsNewEnterAbleNum14_next);
        };
        bool CDarkHoleIsNewEnterAblePlayer16_wrapper(struct CDarkHole* _this, struct CPlayer* pEnter)
        {
           return CDarkHoleIsNewEnterAblePlayer16_user(_this, pEnter, CDarkHoleIsNewEnterAblePlayer16_next);
        };
        bool CDarkHoleIsOpenPartyMember18_wrapper(struct CDarkHole* _this, struct CPlayer* pOpener)
        {
           return CDarkHoleIsOpenPartyMember18_user(_this, pOpener, CDarkHoleIsOpenPartyMember18_next);
        };
        void CDarkHoleLoop20_wrapper(struct CDarkHole* _this)
        {
           CDarkHoleLoop20_user(_this, CDarkHoleLoop20_next);
        };
        void CDarkHoleSendMsg_Create22_wrapper(struct CDarkHole* _this)
        {
           CDarkHoleSendMsg_Create22_user(_this, CDarkHoleSendMsg_Create22_next);
        };
        void CDarkHoleSendMsg_Destroy24_wrapper(struct CDarkHole* _this)
        {
           CDarkHoleSendMsg_Destroy24_user(_this, CDarkHoleSendMsg_Destroy24_next);
        };
        void CDarkHoleSendMsg_FixPosition26_wrapper(struct CDarkHole* _this, int n)
        {
           CDarkHoleSendMsg_FixPosition26_user(_this, n, CDarkHoleSendMsg_FixPosition26_next);
        };
        void CDarkHoleSendMsg_StateChange28_wrapper(struct CDarkHole* _this)
        {
           CDarkHoleSendMsg_StateChange28_user(_this, CDarkHoleSendMsg_StateChange28_next);
        };
        
        void CDarkHoledtor_CDarkHole34_wrapper(struct CDarkHole* _this)
        {
           CDarkHoledtor_CDarkHole34_user(_this, CDarkHoledtor_CDarkHole34_next);
        };
        
        ::std::array<hook_record, 15> CDarkHole_functions = 
        {
            _hook_record {
                (LPVOID)0x140163820L,
                (LPVOID *)&CDarkHolector_CDarkHole2_user,
                (LPVOID *)&CDarkHolector_CDarkHole2_next,
                (LPVOID)cast_pointer_function(CDarkHolector_CDarkHole2_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHole::*)())&CDarkHole::ctor_CDarkHole)
            },
            _hook_record {
                (LPVOID)0x1401639a0L,
                (LPVOID *)&CDarkHoleCreate4_user,
                (LPVOID *)&CDarkHoleCreate4_next,
                (LPVOID)cast_pointer_function(CDarkHoleCreate4_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHole::*)(struct _darkhole_create_setdata*))&CDarkHole::Create)
            },
            _hook_record {
                (LPVOID)0x140163b20L,
                (LPVOID *)&CDarkHoleDestroy6_user,
                (LPVOID *)&CDarkHoleDestroy6_next,
                (LPVOID)cast_pointer_function(CDarkHoleDestroy6_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHole::*)())&CDarkHole::Destroy)
            },
            _hook_record {
                (LPVOID)0x140163bc0L,
                (LPVOID *)&CDarkHoleEnterPlayer8_user,
                (LPVOID *)&CDarkHoleEnterPlayer8_next,
                (LPVOID)cast_pointer_function(CDarkHoleEnterPlayer8_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHole::*)(struct CPlayer*, struct CMapData*, uint16_t, float*, bool))&CDarkHole::EnterPlayer)
            },
            _hook_record {
                (LPVOID)0x140163d10L,
                (LPVOID *)&CDarkHoleGetEnterNewPos10_user,
                (LPVOID *)&CDarkHoleGetEnterNewPos10_next,
                (LPVOID)cast_pointer_function(CDarkHoleGetEnterNewPos10_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHole::*)(struct _ENTER_DUNGEON_NEW_POS*))&CDarkHole::GetEnterNewPos)
            },
            _hook_record {
                (LPVOID)0x140163910L,
                (LPVOID *)&CDarkHoleInit12_user,
                (LPVOID *)&CDarkHoleInit12_next,
                (LPVOID)cast_pointer_function(CDarkHoleInit12_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHole::*)(struct _object_id*))&CDarkHole::Init)
            },
            _hook_record {
                (LPVOID)0x140163d70L,
                (LPVOID *)&CDarkHoleIsNewEnterAbleNum14_user,
                (LPVOID *)&CDarkHoleIsNewEnterAbleNum14_next,
                (LPVOID)cast_pointer_function(CDarkHoleIsNewEnterAbleNum14_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHole::*)())&CDarkHole::IsNewEnterAbleNum)
            },
            _hook_record {
                (LPVOID)0x140163c50L,
                (LPVOID *)&CDarkHoleIsNewEnterAblePlayer16_user,
                (LPVOID *)&CDarkHoleIsNewEnterAblePlayer16_next,
                (LPVOID)cast_pointer_function(CDarkHoleIsNewEnterAblePlayer16_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHole::*)(struct CPlayer*))&CDarkHole::IsNewEnterAblePlayer)
            },
            _hook_record {
                (LPVOID)0x140163cb0L,
                (LPVOID *)&CDarkHoleIsOpenPartyMember18_user,
                (LPVOID *)&CDarkHoleIsOpenPartyMember18_next,
                (LPVOID)cast_pointer_function(CDarkHoleIsOpenPartyMember18_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHole::*)(struct CPlayer*))&CDarkHole::IsOpenPartyMember)
            },
            _hook_record {
                (LPVOID)0x140163e40L,
                (LPVOID *)&CDarkHoleLoop20_user,
                (LPVOID *)&CDarkHoleLoop20_next,
                (LPVOID)cast_pointer_function(CDarkHoleLoop20_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHole::*)())&CDarkHole::Loop)
            },
            _hook_record {
                (LPVOID)0x140163f10L,
                (LPVOID *)&CDarkHoleSendMsg_Create22_user,
                (LPVOID *)&CDarkHoleSendMsg_Create22_next,
                (LPVOID)cast_pointer_function(CDarkHoleSendMsg_Create22_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHole::*)())&CDarkHole::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x140164040L,
                (LPVOID *)&CDarkHoleSendMsg_Destroy24_user,
                (LPVOID *)&CDarkHoleSendMsg_Destroy24_next,
                (LPVOID)cast_pointer_function(CDarkHoleSendMsg_Destroy24_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHole::*)())&CDarkHole::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x1401642f0L,
                (LPVOID *)&CDarkHoleSendMsg_FixPosition26_user,
                (LPVOID *)&CDarkHoleSendMsg_FixPosition26_next,
                (LPVOID)cast_pointer_function(CDarkHoleSendMsg_FixPosition26_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHole::*)(int))&CDarkHole::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140164240L,
                (LPVOID *)&CDarkHoleSendMsg_StateChange28_user,
                (LPVOID *)&CDarkHoleSendMsg_StateChange28_next,
                (LPVOID)cast_pointer_function(CDarkHoleSendMsg_StateChange28_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHole::*)())&CDarkHole::SendMsg_StateChange)
            },
            _hook_record {
                (LPVOID)0x1401638c0L,
                (LPVOID *)&CDarkHoledtor_CDarkHole34_user,
                (LPVOID *)&CDarkHoledtor_CDarkHole34_next,
                (LPVOID)cast_pointer_function(CDarkHoledtor_CDarkHole34_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHole::*)())&CDarkHole::dtor_CDarkHole)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
