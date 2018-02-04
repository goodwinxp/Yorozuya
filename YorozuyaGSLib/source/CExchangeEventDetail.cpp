#include <CExchangeEventDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CExchangeEventctor_CExchangeEvent2_ptr CExchangeEventctor_CExchangeEvent2_next(nullptr);
        Info::CExchangeEventctor_CExchangeEvent2_clbk CExchangeEventctor_CExchangeEvent2_user(nullptr);
        
        Info::CExchangeEventChangeData4_ptr CExchangeEventChangeData4_next(nullptr);
        Info::CExchangeEventChangeData4_clbk CExchangeEventChangeData4_user(nullptr);
        
        Info::CExchangeEventCheckBuddhaEventData6_ptr CExchangeEventCheckBuddhaEventData6_next(nullptr);
        Info::CExchangeEventCheckBuddhaEventData6_clbk CExchangeEventCheckBuddhaEventData6_user(nullptr);
        
        Info::CExchangeEventDeleteExchangeEventItem8_ptr CExchangeEventDeleteExchangeEventItem8_next(nullptr);
        Info::CExchangeEventDeleteExchangeEventItem8_clbk CExchangeEventDeleteExchangeEventItem8_user(nullptr);
        
        Info::CExchangeEventDestroy10_ptr CExchangeEventDestroy10_next(nullptr);
        Info::CExchangeEventDestroy10_clbk CExchangeEventDestroy10_user(nullptr);
        
        Info::CExchangeEventGetEventItemInfo12_ptr CExchangeEventGetEventItemInfo12_next(nullptr);
        Info::CExchangeEventGetEventItemInfo12_clbk CExchangeEventGetEventItemInfo12_user(nullptr);
        
        Info::CExchangeEventGiveEventItem14_ptr CExchangeEventGiveEventItem14_next(nullptr);
        Info::CExchangeEventGiveEventItem14_clbk CExchangeEventGiveEventItem14_user(nullptr);
        
        Info::CExchangeEventInitialzie16_ptr CExchangeEventInitialzie16_next(nullptr);
        Info::CExchangeEventInitialzie16_clbk CExchangeEventInitialzie16_user(nullptr);
        
        Info::CExchangeEventInstance18_ptr CExchangeEventInstance18_next(nullptr);
        Info::CExchangeEventInstance18_clbk CExchangeEventInstance18_user(nullptr);
        
        Info::CExchangeEventIsDelete20_ptr CExchangeEventIsDelete20_next(nullptr);
        Info::CExchangeEventIsDelete20_clbk CExchangeEventIsDelete20_user(nullptr);
        
        Info::CExchangeEventIsEnable22_ptr CExchangeEventIsEnable22_next(nullptr);
        Info::CExchangeEventIsEnable22_clbk CExchangeEventIsEnable22_user(nullptr);
        
        Info::CExchangeEventIsWait24_ptr CExchangeEventIsWait24_next(nullptr);
        Info::CExchangeEventIsWait24_clbk CExchangeEventIsWait24_user(nullptr);
        
        Info::CExchangeEventLoop26_ptr CExchangeEventLoop26_next(nullptr);
        Info::CExchangeEventLoop26_clbk CExchangeEventLoop26_user(nullptr);
        
        Info::CExchangeEventReadBuddhaEventInfo28_ptr CExchangeEventReadBuddhaEventInfo28_next(nullptr);
        Info::CExchangeEventReadBuddhaEventInfo28_clbk CExchangeEventReadBuddhaEventInfo28_user(nullptr);
        
        
        Info::CExchangeEventdtor_CExchangeEvent33_ptr CExchangeEventdtor_CExchangeEvent33_next(nullptr);
        Info::CExchangeEventdtor_CExchangeEvent33_clbk CExchangeEventdtor_CExchangeEvent33_user(nullptr);
        
        
        void CExchangeEventctor_CExchangeEvent2_wrapper(struct CExchangeEvent* _this)
        {
           CExchangeEventctor_CExchangeEvent2_user(_this, CExchangeEventctor_CExchangeEvent2_next);
        };
        void CExchangeEventChangeData4_wrapper(struct CExchangeEvent* _this)
        {
           CExchangeEventChangeData4_user(_this, CExchangeEventChangeData4_next);
        };
        bool CExchangeEventCheckBuddhaEventData6_wrapper(struct CExchangeEvent* _this, bool* pbDelete)
        {
           return CExchangeEventCheckBuddhaEventData6_user(_this, pbDelete, CExchangeEventCheckBuddhaEventData6_next);
        };
        void CExchangeEventDeleteExchangeEventItem8_wrapper(struct CExchangeEvent* _this, struct CPlayer* pOne)
        {
           CExchangeEventDeleteExchangeEventItem8_user(_this, pOne, CExchangeEventDeleteExchangeEventItem8_next);
        };
        void CExchangeEventDestroy10_wrapper()
        {
           CExchangeEventDestroy10_user(CExchangeEventDestroy10_next);
        };
        struct EventItemInfo* CExchangeEventGetEventItemInfo12_wrapper(struct CExchangeEvent* _this, int nInfoType)
        {
           return CExchangeEventGetEventItemInfo12_user(_this, nInfoType, CExchangeEventGetEventItemInfo12_next);
        };
        void CExchangeEventGiveEventItem14_wrapper(struct CExchangeEvent* _this, struct CPlayer* pOne)
        {
           CExchangeEventGiveEventItem14_user(_this, pOne, CExchangeEventGiveEventItem14_next);
        };
        bool CExchangeEventInitialzie16_wrapper(struct CExchangeEvent* _this)
        {
           return CExchangeEventInitialzie16_user(_this, CExchangeEventInitialzie16_next);
        };
        struct CExchangeEvent* CExchangeEventInstance18_wrapper()
        {
           return CExchangeEventInstance18_user(CExchangeEventInstance18_next);
        };
        bool CExchangeEventIsDelete20_wrapper(struct CExchangeEvent* _this)
        {
           return CExchangeEventIsDelete20_user(_this, CExchangeEventIsDelete20_next);
        };
        bool CExchangeEventIsEnable22_wrapper(struct CExchangeEvent* _this)
        {
           return CExchangeEventIsEnable22_user(_this, CExchangeEventIsEnable22_next);
        };
        bool CExchangeEventIsWait24_wrapper(struct CExchangeEvent* _this)
        {
           return CExchangeEventIsWait24_user(_this, CExchangeEventIsWait24_next);
        };
        void CExchangeEventLoop26_wrapper(struct CExchangeEvent* _this)
        {
           CExchangeEventLoop26_user(_this, CExchangeEventLoop26_next);
        };
        void CExchangeEventReadBuddhaEventInfo28_wrapper(struct CExchangeEvent* _this)
        {
           CExchangeEventReadBuddhaEventInfo28_user(_this, CExchangeEventReadBuddhaEventInfo28_next);
        };
        
        void CExchangeEventdtor_CExchangeEvent33_wrapper(struct CExchangeEvent* _this)
        {
           CExchangeEventdtor_CExchangeEvent33_user(_this, CExchangeEventdtor_CExchangeEvent33_next);
        };
        
        ::std::array<hook_record, 16> CExchangeEvent_functions = 
        {
            _hook_record {
                (LPVOID)0x140329780L,
                (LPVOID *)&CExchangeEventctor_CExchangeEvent2_user,
                (LPVOID *)&CExchangeEventctor_CExchangeEvent2_next,
                (LPVOID)cast_pointer_function(CExchangeEventctor_CExchangeEvent2_wrapper),
                (LPVOID)cast_pointer_function((void(CExchangeEvent::*)())&CExchangeEvent::ctor_CExchangeEvent)
            },
            _hook_record {
                (LPVOID)0x140329ef0L,
                (LPVOID *)&CExchangeEventChangeData4_user,
                (LPVOID *)&CExchangeEventChangeData4_next,
                (LPVOID)cast_pointer_function(CExchangeEventChangeData4_wrapper),
                (LPVOID)cast_pointer_function((void(CExchangeEvent::*)())&CExchangeEvent::ChangeData)
            },
            _hook_record {
                (LPVOID)0x14032a340L,
                (LPVOID *)&CExchangeEventCheckBuddhaEventData6_user,
                (LPVOID *)&CExchangeEventCheckBuddhaEventData6_next,
                (LPVOID)cast_pointer_function(CExchangeEventCheckBuddhaEventData6_wrapper),
                (LPVOID)cast_pointer_function((bool(CExchangeEvent::*)(bool*))&CExchangeEvent::CheckBuddhaEventData)
            },
            _hook_record {
                (LPVOID)0x140329cb0L,
                (LPVOID *)&CExchangeEventDeleteExchangeEventItem8_user,
                (LPVOID *)&CExchangeEventDeleteExchangeEventItem8_next,
                (LPVOID)cast_pointer_function(CExchangeEventDeleteExchangeEventItem8_wrapper),
                (LPVOID)cast_pointer_function((void(CExchangeEvent::*)(struct CPlayer*))&CExchangeEvent::DeleteExchangeEventItem)
            },
            _hook_record {
                (LPVOID)0x140329a40L,
                (LPVOID *)&CExchangeEventDestroy10_user,
                (LPVOID *)&CExchangeEventDestroy10_next,
                (LPVOID)cast_pointer_function(CExchangeEventDestroy10_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CExchangeEvent::Destroy)
            },
            _hook_record {
                (LPVOID)0x140329c70L,
                (LPVOID *)&CExchangeEventGetEventItemInfo12_user,
                (LPVOID *)&CExchangeEventGetEventItemInfo12_next,
                (LPVOID)cast_pointer_function(CExchangeEventGetEventItemInfo12_wrapper),
                (LPVOID)cast_pointer_function((struct EventItemInfo*(CExchangeEvent::*)(int))&CExchangeEvent::GetEventItemInfo)
            },
            _hook_record {
                (LPVOID)0x14032a630L,
                (LPVOID *)&CExchangeEventGiveEventItem14_user,
                (LPVOID *)&CExchangeEventGiveEventItem14_next,
                (LPVOID)cast_pointer_function(CExchangeEventGiveEventItem14_wrapper),
                (LPVOID)cast_pointer_function((void(CExchangeEvent::*)(struct CPlayer*))&CExchangeEvent::GiveEventItem)
            },
            _hook_record {
                (LPVOID)0x140329ac0L,
                (LPVOID *)&CExchangeEventInitialzie16_user,
                (LPVOID *)&CExchangeEventInitialzie16_next,
                (LPVOID)cast_pointer_function(CExchangeEventInitialzie16_wrapper),
                (LPVOID)cast_pointer_function((bool(CExchangeEvent::*)())&CExchangeEvent::Initialzie)
            },
            _hook_record {
                (LPVOID)0x140329980L,
                (LPVOID *)&CExchangeEventInstance18_user,
                (LPVOID *)&CExchangeEventInstance18_next,
                (LPVOID)cast_pointer_function(CExchangeEventInstance18_wrapper),
                (LPVOID)cast_pointer_function((struct CExchangeEvent*(*)())&CExchangeEvent::Instance)
            },
            _hook_record {
                (LPVOID)0x140329eb0L,
                (LPVOID *)&CExchangeEventIsDelete20_user,
                (LPVOID *)&CExchangeEventIsDelete20_next,
                (LPVOID)cast_pointer_function(CExchangeEventIsDelete20_wrapper),
                (LPVOID)cast_pointer_function((bool(CExchangeEvent::*)())&CExchangeEvent::IsDelete)
            },
            _hook_record {
                (LPVOID)0x140329e90L,
                (LPVOID *)&CExchangeEventIsEnable22_user,
                (LPVOID *)&CExchangeEventIsEnable22_next,
                (LPVOID)cast_pointer_function(CExchangeEventIsEnable22_wrapper),
                (LPVOID)cast_pointer_function((bool(CExchangeEvent::*)())&CExchangeEvent::IsEnable)
            },
            _hook_record {
                (LPVOID)0x140329ed0L,
                (LPVOID *)&CExchangeEventIsWait24_user,
                (LPVOID *)&CExchangeEventIsWait24_next,
                (LPVOID)cast_pointer_function(CExchangeEventIsWait24_wrapper),
                (LPVOID)cast_pointer_function((bool(CExchangeEvent::*)())&CExchangeEvent::IsWait)
            },
            _hook_record {
                (LPVOID)0x14032a060L,
                (LPVOID *)&CExchangeEventLoop26_user,
                (LPVOID *)&CExchangeEventLoop26_next,
                (LPVOID)cast_pointer_function(CExchangeEventLoop26_wrapper),
                (LPVOID)cast_pointer_function((void(CExchangeEvent::*)())&CExchangeEvent::Loop)
            },
            _hook_record {
                (LPVOID)0x14032a7c0L,
                (LPVOID *)&CExchangeEventReadBuddhaEventInfo28_user,
                (LPVOID *)&CExchangeEventReadBuddhaEventInfo28_next,
                (LPVOID)cast_pointer_function(CExchangeEventReadBuddhaEventInfo28_wrapper),
                (LPVOID)cast_pointer_function((void(CExchangeEvent::*)())&CExchangeEvent::ReadBuddhaEventInfo)
            },
            _hook_record {
                (LPVOID)0x1403298f0L,
                (LPVOID *)&CExchangeEventdtor_CExchangeEvent33_user,
                (LPVOID *)&CExchangeEventdtor_CExchangeEvent33_next,
                (LPVOID)cast_pointer_function(CExchangeEventdtor_CExchangeEvent33_wrapper),
                (LPVOID)cast_pointer_function((void(CExchangeEvent::*)())&CExchangeEvent::dtor_CExchangeEvent)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
