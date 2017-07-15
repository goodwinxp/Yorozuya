#include <ICsSendInterfaceDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::ICsSendInterfaceSendMsg_BuyCashItem2_ptr ICsSendInterfaceSendMsg_BuyCashItem2_next(nullptr);
        Info::ICsSendInterfaceSendMsg_BuyCashItem2_clbk ICsSendInterfaceSendMsg_BuyCashItem2_user(nullptr);
        
        Info::ICsSendInterfaceSendMsg_CashDiscountEventInform4_ptr ICsSendInterfaceSendMsg_CashDiscountEventInform4_next(nullptr);
        Info::ICsSendInterfaceSendMsg_CashDiscountEventInform4_clbk ICsSendInterfaceSendMsg_CashDiscountEventInform4_user(nullptr);
        
        Info::ICsSendInterfaceSendMsg_CashEventInform6_ptr ICsSendInterfaceSendMsg_CashEventInform6_next(nullptr);
        Info::ICsSendInterfaceSendMsg_CashEventInform6_clbk ICsSendInterfaceSendMsg_CashEventInform6_user(nullptr);
        
        Info::ICsSendInterfaceSendMsg_ConditionalEventInform8_ptr ICsSendInterfaceSendMsg_ConditionalEventInform8_next(nullptr);
        Info::ICsSendInterfaceSendMsg_ConditionalEventInform8_clbk ICsSendInterfaceSendMsg_ConditionalEventInform8_user(nullptr);
        
        Info::ICsSendInterfaceSendMsg_Error10_ptr ICsSendInterfaceSendMsg_Error10_next(nullptr);
        Info::ICsSendInterfaceSendMsg_Error10_clbk ICsSendInterfaceSendMsg_Error10_user(nullptr);
        
        Info::ICsSendInterfaceSendMsg_GoodsList12_ptr ICsSendInterfaceSendMsg_GoodsList12_next(nullptr);
        Info::ICsSendInterfaceSendMsg_GoodsList12_clbk ICsSendInterfaceSendMsg_GoodsList12_user(nullptr);
        
        Info::ICsSendInterfaceSendMsg_LimitedsaleEventInform14_ptr ICsSendInterfaceSendMsg_LimitedsaleEventInform14_next(nullptr);
        Info::ICsSendInterfaceSendMsg_LimitedsaleEventInform14_clbk ICsSendInterfaceSendMsg_LimitedsaleEventInform14_user(nullptr);
        
        void ICsSendInterfaceSendMsg_BuyCashItem2_wrapper(uint16_t wSock, struct _param_cash_update* psheet, struct _param_cash_update* sheetplus)
        {
           ICsSendInterfaceSendMsg_BuyCashItem2_user(wSock, psheet, sheetplus, ICsSendInterfaceSendMsg_BuyCashItem2_next);
        };
        void ICsSendInterfaceSendMsg_CashDiscountEventInform4_wrapper(uint16_t wSock, char byEventType, struct _cash_discount_ini_* pIni)
        {
           ICsSendInterfaceSendMsg_CashDiscountEventInform4_user(wSock, byEventType, pIni, ICsSendInterfaceSendMsg_CashDiscountEventInform4_next);
        };
        void ICsSendInterfaceSendMsg_CashEventInform6_wrapper(uint16_t wSock, char byEventType, char byStatus, struct _cash_event_ini* pIni, struct _cash_lim_sale* pLim)
        {
           ICsSendInterfaceSendMsg_CashEventInform6_user(wSock, byEventType, byStatus, pIni, pLim, ICsSendInterfaceSendMsg_CashEventInform6_next);
        };
        void ICsSendInterfaceSendMsg_ConditionalEventInform8_wrapper(uint16_t wSock, char byEventType, uint16_t wCsDiscount, char byStatus, char* pEMsg)
        {
           ICsSendInterfaceSendMsg_ConditionalEventInform8_user(wSock, byEventType, wCsDiscount, byStatus, pEMsg, ICsSendInterfaceSendMsg_ConditionalEventInform8_next);
        };
        void ICsSendInterfaceSendMsg_Error10_wrapper(uint16_t wSock, int eCode)
        {
           ICsSendInterfaceSendMsg_Error10_user(wSock, eCode, ICsSendInterfaceSendMsg_Error10_next);
        };
        void ICsSendInterfaceSendMsg_GoodsList12_wrapper(uint16_t wSock, struct _param_cash_select* psheet)
        {
           ICsSendInterfaceSendMsg_GoodsList12_user(wSock, psheet, ICsSendInterfaceSendMsg_GoodsList12_next);
        };
        void ICsSendInterfaceSendMsg_LimitedsaleEventInform14_wrapper(uint16_t wSock, char byTableCode, unsigned int dwIndex, uint16_t wNum)
        {
           ICsSendInterfaceSendMsg_LimitedsaleEventInform14_user(wSock, byTableCode, dwIndex, wNum, ICsSendInterfaceSendMsg_LimitedsaleEventInform14_next);
        };
        
        ::std::array<hook_record, 7> ICsSendInterface_functions = 
        {
            _hook_record {
                (LPVOID)0x14030c760L,
                (LPVOID *)&ICsSendInterfaceSendMsg_BuyCashItem2_user,
                (LPVOID *)&ICsSendInterfaceSendMsg_BuyCashItem2_next,
                (LPVOID)cast_pointer_function(ICsSendInterfaceSendMsg_BuyCashItem2_wrapper),
                (LPVOID)cast_pointer_function((void(*)(uint16_t, struct _param_cash_update*, struct _param_cash_update*))&ICsSendInterface::SendMsg_BuyCashItem)
            },
            _hook_record {
                (LPVOID)0x14030cc30L,
                (LPVOID *)&ICsSendInterfaceSendMsg_CashDiscountEventInform4_user,
                (LPVOID *)&ICsSendInterfaceSendMsg_CashDiscountEventInform4_next,
                (LPVOID)cast_pointer_function(ICsSendInterfaceSendMsg_CashDiscountEventInform4_wrapper),
                (LPVOID)cast_pointer_function((void(*)(uint16_t, char, struct _cash_discount_ini_*))&ICsSendInterface::SendMsg_CashDiscountEventInform)
            },
            _hook_record {
                (LPVOID)0x14030ce00L,
                (LPVOID *)&ICsSendInterfaceSendMsg_CashEventInform6_user,
                (LPVOID *)&ICsSendInterfaceSendMsg_CashEventInform6_next,
                (LPVOID)cast_pointer_function(ICsSendInterfaceSendMsg_CashEventInform6_wrapper),
                (LPVOID)cast_pointer_function((void(*)(uint16_t, char, char, struct _cash_event_ini*, struct _cash_lim_sale*))&ICsSendInterface::SendMsg_CashEventInform)
            },
            _hook_record {
                (LPVOID)0x14030d1a0L,
                (LPVOID *)&ICsSendInterfaceSendMsg_ConditionalEventInform8_user,
                (LPVOID *)&ICsSendInterfaceSendMsg_ConditionalEventInform8_next,
                (LPVOID)cast_pointer_function(ICsSendInterfaceSendMsg_ConditionalEventInform8_wrapper),
                (LPVOID)cast_pointer_function((void(*)(uint16_t, char, uint16_t, char, char*))&ICsSendInterface::SendMsg_ConditionalEventInform)
            },
            _hook_record {
                (LPVOID)0x14030c590L,
                (LPVOID *)&ICsSendInterfaceSendMsg_Error10_user,
                (LPVOID *)&ICsSendInterfaceSendMsg_Error10_next,
                (LPVOID)cast_pointer_function(ICsSendInterfaceSendMsg_Error10_wrapper),
                (LPVOID)cast_pointer_function((void(*)(uint16_t, int))&ICsSendInterface::SendMsg_Error)
            },
            _hook_record {
                (LPVOID)0x14030c620L,
                (LPVOID *)&ICsSendInterfaceSendMsg_GoodsList12_user,
                (LPVOID *)&ICsSendInterfaceSendMsg_GoodsList12_next,
                (LPVOID)cast_pointer_function(ICsSendInterfaceSendMsg_GoodsList12_wrapper),
                (LPVOID)cast_pointer_function((void(*)(uint16_t, struct _param_cash_select*))&ICsSendInterface::SendMsg_GoodsList)
            },
            _hook_record {
                (LPVOID)0x14030d2b0L,
                (LPVOID *)&ICsSendInterfaceSendMsg_LimitedsaleEventInform14_user,
                (LPVOID *)&ICsSendInterfaceSendMsg_LimitedsaleEventInform14_next,
                (LPVOID)cast_pointer_function(ICsSendInterfaceSendMsg_LimitedsaleEventInform14_wrapper),
                (LPVOID)cast_pointer_function((void(*)(uint16_t, char, unsigned int, uint16_t))&ICsSendInterface::SendMsg_LimitedsaleEventInform)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
