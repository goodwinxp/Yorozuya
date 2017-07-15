#include <CNationSettingDataGBDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataGBctor_CNationSettingDataGB2_ptr CNationSettingDataGBctor_CNationSettingDataGB2_next(nullptr);
        Info::CNationSettingDataGBctor_CNationSettingDataGB2_clbk CNationSettingDataGBctor_CNationSettingDataGB2_user(nullptr);
        
        Info::CNationSettingDataGBCreateWorker4_ptr CNationSettingDataGBCreateWorker4_next(nullptr);
        Info::CNationSettingDataGBCreateWorker4_clbk CNationSettingDataGBCreateWorker4_user(nullptr);
        
        Info::CNationSettingDataGBGetCashItemPrice6_ptr CNationSettingDataGBGetCashItemPrice6_next(nullptr);
        Info::CNationSettingDataGBGetCashItemPrice6_clbk CNationSettingDataGBGetCashItemPrice6_user(nullptr);
        
        Info::CNationSettingDataGBGetItemName8_ptr CNationSettingDataGBGetItemName8_next(nullptr);
        Info::CNationSettingDataGBGetItemName8_clbk CNationSettingDataGBGetItemName8_user(nullptr);
        
        Info::CNationSettingDataGBInit10_ptr CNationSettingDataGBInit10_next(nullptr);
        Info::CNationSettingDataGBInit10_clbk CNationSettingDataGBInit10_user(nullptr);
        
        Info::CNationSettingDataGBLoop12_ptr CNationSettingDataGBLoop12_next(nullptr);
        Info::CNationSettingDataGBLoop12_clbk CNationSettingDataGBLoop12_user(nullptr);
        
        Info::CNationSettingDataGBReadSystemPass14_ptr CNationSettingDataGBReadSystemPass14_next(nullptr);
        Info::CNationSettingDataGBReadSystemPass14_clbk CNationSettingDataGBReadSystemPass14_user(nullptr);
        
        Info::CNationSettingDataGBSendCashDBDSNRequest16_ptr CNationSettingDataGBSendCashDBDSNRequest16_next(nullptr);
        Info::CNationSettingDataGBSendCashDBDSNRequest16_clbk CNationSettingDataGBSendCashDBDSNRequest16_user(nullptr);
        
        
        void CNationSettingDataGBctor_CNationSettingDataGB2_wrapper(struct CNationSettingDataGB* _this)
        {
           CNationSettingDataGBctor_CNationSettingDataGB2_user(_this, CNationSettingDataGBctor_CNationSettingDataGB2_next);
        };
        struct CashDbWorker* CNationSettingDataGBCreateWorker4_wrapper(struct CNationSettingDataGB* _this)
        {
           return CNationSettingDataGBCreateWorker4_user(_this, CNationSettingDataGBCreateWorker4_next);
        };
        int CNationSettingDataGBGetCashItemPrice6_wrapper(struct CNationSettingDataGB* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataGBGetCashItemPrice6_user(_this, pFld, CNationSettingDataGBGetCashItemPrice6_next);
        };
        char* CNationSettingDataGBGetItemName8_wrapper(struct CNationSettingDataGB* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataGBGetItemName8_user(_this, pFld, CNationSettingDataGBGetItemName8_next);
        };
        int CNationSettingDataGBInit10_wrapper(struct CNationSettingDataGB* _this)
        {
           return CNationSettingDataGBInit10_user(_this, CNationSettingDataGBInit10_next);
        };
        void CNationSettingDataGBLoop12_wrapper(struct CNationSettingDataGB* _this)
        {
           CNationSettingDataGBLoop12_user(_this, CNationSettingDataGBLoop12_next);
        };
        bool CNationSettingDataGBReadSystemPass14_wrapper(struct CNationSettingDataGB* _this)
        {
           return CNationSettingDataGBReadSystemPass14_user(_this, CNationSettingDataGBReadSystemPass14_next);
        };
        void CNationSettingDataGBSendCashDBDSNRequest16_wrapper(struct CNationSettingDataGB* _this)
        {
           CNationSettingDataGBSendCashDBDSNRequest16_user(_this, CNationSettingDataGBSendCashDBDSNRequest16_next);
        };
        
        ::std::array<hook_record, 8> CNationSettingDataGB_functions = 
        {
            _hook_record {
                (LPVOID)0x14022be10L,
                (LPVOID *)&CNationSettingDataGBctor_CNationSettingDataGB2_user,
                (LPVOID *)&CNationSettingDataGBctor_CNationSettingDataGB2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataGBctor_CNationSettingDataGB2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataGB::*)())&CNationSettingDataGB::ctor_CNationSettingDataGB)
            },
            _hook_record {
                (LPVOID)0x14022c020L,
                (LPVOID *)&CNationSettingDataGBCreateWorker4_user,
                (LPVOID *)&CNationSettingDataGBCreateWorker4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataGBCreateWorker4_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataGB::*)())&CNationSettingDataGB::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x14022c0d0L,
                (LPVOID *)&CNationSettingDataGBGetCashItemPrice6_user,
                (LPVOID *)&CNationSettingDataGBGetCashItemPrice6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataGBGetCashItemPrice6_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataGB::*)(struct _CashShop_str_fld*))&CNationSettingDataGB::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x14022c000L,
                (LPVOID *)&CNationSettingDataGBGetItemName8_user,
                (LPVOID *)&CNationSettingDataGBGetItemName8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataGBGetItemName8_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataGB::*)(struct _NameTxt_fld*))&CNationSettingDataGB::GetItemName)
            },
            _hook_record {
                (LPVOID)0x14022be70L,
                (LPVOID *)&CNationSettingDataGBInit10_user,
                (LPVOID *)&CNationSettingDataGBInit10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataGBInit10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataGB::*)())&CNationSettingDataGB::Init)
            },
            _hook_record {
                (LPVOID)0x14022bfa0L,
                (LPVOID *)&CNationSettingDataGBLoop12_user,
                (LPVOID *)&CNationSettingDataGBLoop12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataGBLoop12_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataGB::*)())&CNationSettingDataGB::Loop)
            },
            _hook_record {
                (LPVOID)0x14022c100L,
                (LPVOID *)&CNationSettingDataGBReadSystemPass14_user,
                (LPVOID *)&CNationSettingDataGBReadSystemPass14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataGBReadSystemPass14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataGB::*)())&CNationSettingDataGB::ReadSystemPass)
            },
            _hook_record {
                (LPVOID)0x14022c0f0L,
                (LPVOID *)&CNationSettingDataGBSendCashDBDSNRequest16_user,
                (LPVOID *)&CNationSettingDataGBSendCashDBDSNRequest16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataGBSendCashDBDSNRequest16_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataGB::*)())&CNationSettingDataGB::SendCashDBDSNRequest)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
