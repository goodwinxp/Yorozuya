#include <CMsgDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMsgDatactor_CMsgData2_ptr CMsgDatactor_CMsgData2_next(nullptr);
        Info::CMsgDatactor_CMsgData2_clbk CMsgDatactor_CMsgData2_user(nullptr);
        
        
        Info::CMsgDatactor_CMsgData4_ptr CMsgDatactor_CMsgData4_next(nullptr);
        Info::CMsgDatactor_CMsgData4_clbk CMsgDatactor_CMsgData4_user(nullptr);
        
        Info::CMsgDataInit6_ptr CMsgDataInit6_next(nullptr);
        Info::CMsgDataInit6_clbk CMsgDataInit6_user(nullptr);
        
        Info::CMsgDataPackingMsg8_ptr CMsgDataPackingMsg8_next(nullptr);
        Info::CMsgDataPackingMsg8_clbk CMsgDataPackingMsg8_user(nullptr);
        
        Info::CMsgDataPopEmptyBuf10_ptr CMsgDataPopEmptyBuf10_next(nullptr);
        Info::CMsgDataPopEmptyBuf10_clbk CMsgDataPopEmptyBuf10_user(nullptr);
        
        Info::CMsgDataPopMsg12_ptr CMsgDataPopMsg12_next(nullptr);
        Info::CMsgDataPopMsg12_clbk CMsgDataPopMsg12_user(nullptr);
        
        Info::CMsgDataProcessMessage14_ptr CMsgDataProcessMessage14_next(nullptr);
        Info::CMsgDataProcessMessage14_clbk CMsgDataProcessMessage14_user(nullptr);
        
        Info::CMsgDataPumpMsgList16_ptr CMsgDataPumpMsgList16_next(nullptr);
        Info::CMsgDataPumpMsgList16_clbk CMsgDataPumpMsgList16_user(nullptr);
        
        Info::CMsgDataPushEmptyBuf18_ptr CMsgDataPushEmptyBuf18_next(nullptr);
        Info::CMsgDataPushEmptyBuf18_clbk CMsgDataPushEmptyBuf18_user(nullptr);
        
        Info::CMsgDataPushMsg20_ptr CMsgDataPushMsg20_next(nullptr);
        Info::CMsgDataPushMsg20_clbk CMsgDataPushMsg20_user(nullptr);
        
        
        Info::CMsgDatadtor_CMsgData25_ptr CMsgDatadtor_CMsgData25_next(nullptr);
        Info::CMsgDatadtor_CMsgData25_clbk CMsgDatadtor_CMsgData25_user(nullptr);
        
        
        void CMsgDatactor_CMsgData2_wrapper(struct CMsgData* _this, int nObjNum)
        {
           CMsgDatactor_CMsgData2_user(_this, nObjNum, CMsgDatactor_CMsgData2_next);
        };
        
        void CMsgDatactor_CMsgData4_wrapper(struct CMsgData* _this)
        {
           CMsgDatactor_CMsgData4_user(_this, CMsgDatactor_CMsgData4_next);
        };
        void CMsgDataInit6_wrapper(struct CMsgData* _this, int nObjNum)
        {
           CMsgDataInit6_user(_this, nObjNum, CMsgDataInit6_next);
        };
        bool CMsgDataPackingMsg8_wrapper(struct CMsgData* _this, unsigned int dwMessage, unsigned int dwKey1, unsigned int dwKey2, unsigned int dwKey3)
        {
           return CMsgDataPackingMsg8_user(_this, dwMessage, dwKey1, dwKey2, dwKey3, CMsgDataPackingMsg8_next);
        };
        struct _message* CMsgDataPopEmptyBuf10_wrapper(struct CMsgData* _this)
        {
           return CMsgDataPopEmptyBuf10_user(_this, CMsgDataPopEmptyBuf10_next);
        };
        struct _message* CMsgDataPopMsg12_wrapper(struct CMsgData* _this)
        {
           return CMsgDataPopMsg12_user(_this, CMsgDataPopMsg12_next);
        };
        void CMsgDataProcessMessage14_wrapper(struct CMsgData* _this, struct _message* pMsg)
        {
           CMsgDataProcessMessage14_user(_this, pMsg, CMsgDataProcessMessage14_next);
        };
        void CMsgDataPumpMsgList16_wrapper(struct CMsgData* _this)
        {
           CMsgDataPumpMsgList16_user(_this, CMsgDataPumpMsgList16_next);
        };
        void CMsgDataPushEmptyBuf18_wrapper(struct CMsgData* _this, struct _message* pMsg)
        {
           CMsgDataPushEmptyBuf18_user(_this, pMsg, CMsgDataPushEmptyBuf18_next);
        };
        void CMsgDataPushMsg20_wrapper(struct CMsgData* _this, struct _message* pMsg)
        {
           CMsgDataPushMsg20_user(_this, pMsg, CMsgDataPushMsg20_next);
        };
        
        void CMsgDatadtor_CMsgData25_wrapper(struct CMsgData* _this)
        {
           CMsgDatadtor_CMsgData25_user(_this, CMsgDatadtor_CMsgData25_next);
        };
        
        ::std::array<hook_record, 11> CMsgData_functions = 
        {
            _hook_record {
                (LPVOID)0x1404377d0L,
                (LPVOID *)&CMsgDatactor_CMsgData2_user,
                (LPVOID *)&CMsgDatactor_CMsgData2_next,
                (LPVOID)cast_pointer_function(CMsgDatactor_CMsgData2_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgData::*)(int))&CMsgData::ctor_CMsgData)
            },
            _hook_record {
                (LPVOID)0x1404379c0L,
                (LPVOID *)&CMsgDatactor_CMsgData4_user,
                (LPVOID *)&CMsgDatactor_CMsgData4_next,
                (LPVOID)cast_pointer_function(CMsgDatactor_CMsgData4_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgData::*)())&CMsgData::ctor_CMsgData)
            },
            _hook_record {
                (LPVOID)0x140437b80L,
                (LPVOID *)&CMsgDataInit6_user,
                (LPVOID *)&CMsgDataInit6_next,
                (LPVOID)cast_pointer_function(CMsgDataInit6_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgData::*)(int))&CMsgData::Init)
            },
            _hook_record {
                (LPVOID)0x1404380f0L,
                (LPVOID *)&CMsgDataPackingMsg8_user,
                (LPVOID *)&CMsgDataPackingMsg8_next,
                (LPVOID)cast_pointer_function(CMsgDataPackingMsg8_wrapper),
                (LPVOID)cast_pointer_function((bool(CMsgData::*)(unsigned int, unsigned int, unsigned int, unsigned int))&CMsgData::PackingMsg)
            },
            _hook_record {
                (LPVOID)0x140438380L,
                (LPVOID *)&CMsgDataPopEmptyBuf10_user,
                (LPVOID *)&CMsgDataPopEmptyBuf10_next,
                (LPVOID)cast_pointer_function(CMsgDataPopEmptyBuf10_wrapper),
                (LPVOID)cast_pointer_function((struct _message*(CMsgData::*)())&CMsgData::PopEmptyBuf)
            },
            _hook_record {
                (LPVOID)0x140438220L,
                (LPVOID *)&CMsgDataPopMsg12_user,
                (LPVOID *)&CMsgDataPopMsg12_next,
                (LPVOID)cast_pointer_function(CMsgDataPopMsg12_wrapper),
                (LPVOID)cast_pointer_function((struct _message*(CMsgData::*)())&CMsgData::PopMsg)
            },
            _hook_record {
                (LPVOID)0x1404387d0L,
                (LPVOID *)&CMsgDataProcessMessage14_user,
                (LPVOID *)&CMsgDataProcessMessage14_next,
                (LPVOID)cast_pointer_function(CMsgDataProcessMessage14_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgData::*)(struct _message*))&CMsgData::ProcessMessage)
            },
            _hook_record {
                (LPVOID)0x140438040L,
                (LPVOID *)&CMsgDataPumpMsgList16_user,
                (LPVOID *)&CMsgDataPumpMsgList16_next,
                (LPVOID)cast_pointer_function(CMsgDataPumpMsgList16_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgData::*)())&CMsgData::PumpMsgList)
            },
            _hook_record {
                (LPVOID)0x1404382e0L,
                (LPVOID *)&CMsgDataPushEmptyBuf18_user,
                (LPVOID *)&CMsgDataPushEmptyBuf18_next,
                (LPVOID)cast_pointer_function(CMsgDataPushEmptyBuf18_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgData::*)(struct _message*))&CMsgData::PushEmptyBuf)
            },
            _hook_record {
                (LPVOID)0x140438180L,
                (LPVOID *)&CMsgDataPushMsg20_user,
                (LPVOID *)&CMsgDataPushMsg20_next,
                (LPVOID)cast_pointer_function(CMsgDataPushMsg20_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgData::*)(struct _message*))&CMsgData::PushMsg)
            },
            _hook_record {
                (LPVOID)0x140437e20L,
                (LPVOID *)&CMsgDatadtor_CMsgData25_user,
                (LPVOID *)&CMsgDatadtor_CMsgData25_next,
                (LPVOID)cast_pointer_function(CMsgDatadtor_CMsgData25_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgData::*)())&CMsgData::dtor_CMsgData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
