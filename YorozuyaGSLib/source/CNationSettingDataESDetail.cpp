#include <CNationSettingDataESDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataESctor_CNationSettingDataES2_ptr CNationSettingDataESctor_CNationSettingDataES2_next(nullptr);
        Info::CNationSettingDataESctor_CNationSettingDataES2_clbk CNationSettingDataESctor_CNationSettingDataES2_user(nullptr);
        
        Info::CNationSettingDataESCreateWorker4_ptr CNationSettingDataESCreateWorker4_next(nullptr);
        Info::CNationSettingDataESCreateWorker4_clbk CNationSettingDataESCreateWorker4_user(nullptr);
        
        Info::CNationSettingDataESGetCashItemPrice6_ptr CNationSettingDataESGetCashItemPrice6_next(nullptr);
        Info::CNationSettingDataESGetCashItemPrice6_clbk CNationSettingDataESGetCashItemPrice6_user(nullptr);
        
        Info::CNationSettingDataESGetItemName8_ptr CNationSettingDataESGetItemName8_next(nullptr);
        Info::CNationSettingDataESGetItemName8_clbk CNationSettingDataESGetItemName8_user(nullptr);
        
        Info::CNationSettingDataESInit10_ptr CNationSettingDataESInit10_next(nullptr);
        Info::CNationSettingDataESInit10_clbk CNationSettingDataESInit10_user(nullptr);
        
        Info::CNationSettingDataESReadSystemPass12_ptr CNationSettingDataESReadSystemPass12_next(nullptr);
        Info::CNationSettingDataESReadSystemPass12_clbk CNationSettingDataESReadSystemPass12_user(nullptr);
        
        
        void CNationSettingDataESctor_CNationSettingDataES2_wrapper(struct CNationSettingDataES* _this)
        {
           CNationSettingDataESctor_CNationSettingDataES2_user(_this, CNationSettingDataESctor_CNationSettingDataES2_next);
        };
        struct CashDbWorker* CNationSettingDataESCreateWorker4_wrapper(struct CNationSettingDataES* _this)
        {
           return CNationSettingDataESCreateWorker4_user(_this, CNationSettingDataESCreateWorker4_next);
        };
        int CNationSettingDataESGetCashItemPrice6_wrapper(struct CNationSettingDataES* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataESGetCashItemPrice6_user(_this, pFld, CNationSettingDataESGetCashItemPrice6_next);
        };
        char* CNationSettingDataESGetItemName8_wrapper(struct CNationSettingDataES* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataESGetItemName8_user(_this, pFld, CNationSettingDataESGetItemName8_next);
        };
        int CNationSettingDataESInit10_wrapper(struct CNationSettingDataES* _this)
        {
           return CNationSettingDataESInit10_user(_this, CNationSettingDataESInit10_next);
        };
        bool CNationSettingDataESReadSystemPass12_wrapper(struct CNationSettingDataES* _this)
        {
           return CNationSettingDataESReadSystemPass12_user(_this, CNationSettingDataESReadSystemPass12_next);
        };
        
        ::std::array<hook_record, 6> CNationSettingDataES_functions = 
        {
            _hook_record {
                (LPVOID)0x140231de0L,
                (LPVOID *)&CNationSettingDataESctor_CNationSettingDataES2_user,
                (LPVOID *)&CNationSettingDataESctor_CNationSettingDataES2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataESctor_CNationSettingDataES2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataES::*)())&CNationSettingDataES::ctor_CNationSettingDataES)
            },
            _hook_record {
                (LPVOID)0x140231840L,
                (LPVOID *)&CNationSettingDataESCreateWorker4_user,
                (LPVOID *)&CNationSettingDataESCreateWorker4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataESCreateWorker4_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataES::*)())&CNationSettingDataES::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x1402318f0L,
                (LPVOID *)&CNationSettingDataESGetCashItemPrice6_user,
                (LPVOID *)&CNationSettingDataESGetCashItemPrice6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataESGetCashItemPrice6_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataES::*)(struct _CashShop_str_fld*))&CNationSettingDataES::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x140231820L,
                (LPVOID *)&CNationSettingDataESGetItemName8_user,
                (LPVOID *)&CNationSettingDataESGetItemName8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataESGetItemName8_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataES::*)(struct _NameTxt_fld*))&CNationSettingDataES::GetItemName)
            },
            _hook_record {
                (LPVOID)0x140231730L,
                (LPVOID *)&CNationSettingDataESInit10_user,
                (LPVOID *)&CNationSettingDataESInit10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataESInit10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataES::*)())&CNationSettingDataES::Init)
            },
            _hook_record {
                (LPVOID)0x140231910L,
                (LPVOID *)&CNationSettingDataESReadSystemPass12_user,
                (LPVOID *)&CNationSettingDataESReadSystemPass12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataESReadSystemPass12_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataES::*)())&CNationSettingDataES::ReadSystemPass)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
