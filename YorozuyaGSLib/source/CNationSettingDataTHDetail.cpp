#include <CNationSettingDataTHDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataTHctor_CNationSettingDataTH2_ptr CNationSettingDataTHctor_CNationSettingDataTH2_next(nullptr);
        Info::CNationSettingDataTHctor_CNationSettingDataTH2_clbk CNationSettingDataTHctor_CNationSettingDataTH2_user(nullptr);
        
        Info::CNationSettingDataTHCreateWorker4_ptr CNationSettingDataTHCreateWorker4_next(nullptr);
        Info::CNationSettingDataTHCreateWorker4_clbk CNationSettingDataTHCreateWorker4_user(nullptr);
        
        Info::CNationSettingDataTHGetCashItemPrice6_ptr CNationSettingDataTHGetCashItemPrice6_next(nullptr);
        Info::CNationSettingDataTHGetCashItemPrice6_clbk CNationSettingDataTHGetCashItemPrice6_user(nullptr);
        
        Info::CNationSettingDataTHGetItemName8_ptr CNationSettingDataTHGetItemName8_next(nullptr);
        Info::CNationSettingDataTHGetItemName8_clbk CNationSettingDataTHGetItemName8_user(nullptr);
        
        Info::CNationSettingDataTHInit10_ptr CNationSettingDataTHInit10_next(nullptr);
        Info::CNationSettingDataTHInit10_clbk CNationSettingDataTHInit10_user(nullptr);
        
        Info::CNationSettingDataTHLoop12_ptr CNationSettingDataTHLoop12_next(nullptr);
        Info::CNationSettingDataTHLoop12_clbk CNationSettingDataTHLoop12_user(nullptr);
        
        Info::CNationSettingDataTHReadSystemPass14_ptr CNationSettingDataTHReadSystemPass14_next(nullptr);
        Info::CNationSettingDataTHReadSystemPass14_clbk CNationSettingDataTHReadSystemPass14_user(nullptr);
        
        Info::CNationSettingDataTHSetUnitPassiveValue16_ptr CNationSettingDataTHSetUnitPassiveValue16_next(nullptr);
        Info::CNationSettingDataTHSetUnitPassiveValue16_clbk CNationSettingDataTHSetUnitPassiveValue16_user(nullptr);
        
        
        void CNationSettingDataTHctor_CNationSettingDataTH2_wrapper(struct CNationSettingDataTH* _this)
        {
           CNationSettingDataTHctor_CNationSettingDataTH2_user(_this, CNationSettingDataTHctor_CNationSettingDataTH2_next);
        };
        struct CashDbWorker* CNationSettingDataTHCreateWorker4_wrapper(struct CNationSettingDataTH* _this)
        {
           return CNationSettingDataTHCreateWorker4_user(_this, CNationSettingDataTHCreateWorker4_next);
        };
        int CNationSettingDataTHGetCashItemPrice6_wrapper(struct CNationSettingDataTH* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataTHGetCashItemPrice6_user(_this, pFld, CNationSettingDataTHGetCashItemPrice6_next);
        };
        char* CNationSettingDataTHGetItemName8_wrapper(struct CNationSettingDataTH* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataTHGetItemName8_user(_this, pFld, CNationSettingDataTHGetItemName8_next);
        };
        int CNationSettingDataTHInit10_wrapper(struct CNationSettingDataTH* _this)
        {
           return CNationSettingDataTHInit10_user(_this, CNationSettingDataTHInit10_next);
        };
        void CNationSettingDataTHLoop12_wrapper(struct CNationSettingDataTH* _this)
        {
           CNationSettingDataTHLoop12_user(_this, CNationSettingDataTHLoop12_next);
        };
        bool CNationSettingDataTHReadSystemPass14_wrapper(struct CNationSettingDataTH* _this)
        {
           return CNationSettingDataTHReadSystemPass14_user(_this, CNationSettingDataTHReadSystemPass14_next);
        };
        void CNationSettingDataTHSetUnitPassiveValue16_wrapper(struct CNationSettingDataTH* _this, float* fUnitPv_DefFc)
        {
           CNationSettingDataTHSetUnitPassiveValue16_user(_this, fUnitPv_DefFc, CNationSettingDataTHSetUnitPassiveValue16_next);
        };
        
        ::std::array<hook_record, 8> CNationSettingDataTH_functions = 
        {
            _hook_record {
                (LPVOID)0x140232000L,
                (LPVOID *)&CNationSettingDataTHctor_CNationSettingDataTH2_user,
                (LPVOID *)&CNationSettingDataTHctor_CNationSettingDataTH2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTHctor_CNationSettingDataTH2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataTH::*)())&CNationSettingDataTH::ctor_CNationSettingDataTH)
            },
            _hook_record {
                (LPVOID)0x1402321c0L,
                (LPVOID *)&CNationSettingDataTHCreateWorker4_user,
                (LPVOID *)&CNationSettingDataTHCreateWorker4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTHCreateWorker4_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataTH::*)())&CNationSettingDataTH::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x140232270L,
                (LPVOID *)&CNationSettingDataTHGetCashItemPrice6_user,
                (LPVOID *)&CNationSettingDataTHGetCashItemPrice6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTHGetCashItemPrice6_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataTH::*)(struct _CashShop_str_fld*))&CNationSettingDataTH::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x140232170L,
                (LPVOID *)&CNationSettingDataTHGetItemName8_user,
                (LPVOID *)&CNationSettingDataTHGetItemName8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTHGetItemName8_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataTH::*)(struct _NameTxt_fld*))&CNationSettingDataTH::GetItemName)
            },
            _hook_record {
                (LPVOID)0x140232060L,
                (LPVOID *)&CNationSettingDataTHInit10_user,
                (LPVOID *)&CNationSettingDataTHInit10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTHInit10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataTH::*)())&CNationSettingDataTH::Init)
            },
            _hook_record {
                (LPVOID)0x140232160L,
                (LPVOID *)&CNationSettingDataTHLoop12_user,
                (LPVOID *)&CNationSettingDataTHLoop12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTHLoop12_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataTH::*)())&CNationSettingDataTH::Loop)
            },
            _hook_record {
                (LPVOID)0x140232290L,
                (LPVOID *)&CNationSettingDataTHReadSystemPass14_user,
                (LPVOID *)&CNationSettingDataTHReadSystemPass14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTHReadSystemPass14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataTH::*)())&CNationSettingDataTH::ReadSystemPass)
            },
            _hook_record {
                (LPVOID)0x140232190L,
                (LPVOID *)&CNationSettingDataTHSetUnitPassiveValue16_user,
                (LPVOID *)&CNationSettingDataTHSetUnitPassiveValue16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTHSetUnitPassiveValue16_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataTH::*)(float*))&CNationSettingDataTH::SetUnitPassiveValue)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
