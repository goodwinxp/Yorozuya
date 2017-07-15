#include <CNationSettingDataUSDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataUSctor_CNationSettingDataUS2_ptr CNationSettingDataUSctor_CNationSettingDataUS2_next(nullptr);
        Info::CNationSettingDataUSctor_CNationSettingDataUS2_clbk CNationSettingDataUSctor_CNationSettingDataUS2_user(nullptr);
        
        Info::CNationSettingDataUSCreateWorker4_ptr CNationSettingDataUSCreateWorker4_next(nullptr);
        Info::CNationSettingDataUSCreateWorker4_clbk CNationSettingDataUSCreateWorker4_user(nullptr);
        
        Info::CNationSettingDataUSGetCashItemPrice6_ptr CNationSettingDataUSGetCashItemPrice6_next(nullptr);
        Info::CNationSettingDataUSGetCashItemPrice6_clbk CNationSettingDataUSGetCashItemPrice6_user(nullptr);
        
        Info::CNationSettingDataUSGetItemName8_ptr CNationSettingDataUSGetItemName8_next(nullptr);
        Info::CNationSettingDataUSGetItemName8_clbk CNationSettingDataUSGetItemName8_user(nullptr);
        
        Info::CNationSettingDataUSInit10_ptr CNationSettingDataUSInit10_next(nullptr);
        Info::CNationSettingDataUSInit10_clbk CNationSettingDataUSInit10_user(nullptr);
        
        Info::CNationSettingDataUSReadSystemPass12_ptr CNationSettingDataUSReadSystemPass12_next(nullptr);
        Info::CNationSettingDataUSReadSystemPass12_clbk CNationSettingDataUSReadSystemPass12_user(nullptr);
        
        
        void CNationSettingDataUSctor_CNationSettingDataUS2_wrapper(struct CNationSettingDataUS* _this)
        {
           CNationSettingDataUSctor_CNationSettingDataUS2_user(_this, CNationSettingDataUSctor_CNationSettingDataUS2_next);
        };
        struct CashDbWorker* CNationSettingDataUSCreateWorker4_wrapper(struct CNationSettingDataUS* _this)
        {
           return CNationSettingDataUSCreateWorker4_user(_this, CNationSettingDataUSCreateWorker4_next);
        };
        int CNationSettingDataUSGetCashItemPrice6_wrapper(struct CNationSettingDataUS* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataUSGetCashItemPrice6_user(_this, pFld, CNationSettingDataUSGetCashItemPrice6_next);
        };
        char* CNationSettingDataUSGetItemName8_wrapper(struct CNationSettingDataUS* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataUSGetItemName8_user(_this, pFld, CNationSettingDataUSGetItemName8_next);
        };
        int CNationSettingDataUSInit10_wrapper(struct CNationSettingDataUS* _this)
        {
           return CNationSettingDataUSInit10_user(_this, CNationSettingDataUSInit10_next);
        };
        bool CNationSettingDataUSReadSystemPass12_wrapper(struct CNationSettingDataUS* _this)
        {
           return CNationSettingDataUSReadSystemPass12_user(_this, CNationSettingDataUSReadSystemPass12_next);
        };
        
        ::std::array<hook_record, 6> CNationSettingDataUS_functions = 
        {
            _hook_record {
                (LPVOID)0x1402311d0L,
                (LPVOID *)&CNationSettingDataUSctor_CNationSettingDataUS2_user,
                (LPVOID *)&CNationSettingDataUSctor_CNationSettingDataUS2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataUSctor_CNationSettingDataUS2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataUS::*)())&CNationSettingDataUS::ctor_CNationSettingDataUS)
            },
            _hook_record {
                (LPVOID)0x140231340L,
                (LPVOID *)&CNationSettingDataUSCreateWorker4_user,
                (LPVOID *)&CNationSettingDataUSCreateWorker4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataUSCreateWorker4_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataUS::*)())&CNationSettingDataUS::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x1402313f0L,
                (LPVOID *)&CNationSettingDataUSGetCashItemPrice6_user,
                (LPVOID *)&CNationSettingDataUSGetCashItemPrice6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataUSGetCashItemPrice6_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataUS::*)(struct _CashShop_str_fld*))&CNationSettingDataUS::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x140231320L,
                (LPVOID *)&CNationSettingDataUSGetItemName8_user,
                (LPVOID *)&CNationSettingDataUSGetItemName8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataUSGetItemName8_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataUS::*)(struct _NameTxt_fld*))&CNationSettingDataUS::GetItemName)
            },
            _hook_record {
                (LPVOID)0x140231230L,
                (LPVOID *)&CNationSettingDataUSInit10_user,
                (LPVOID *)&CNationSettingDataUSInit10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataUSInit10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataUS::*)())&CNationSettingDataUS::Init)
            },
            _hook_record {
                (LPVOID)0x140231410L,
                (LPVOID *)&CNationSettingDataUSReadSystemPass12_user,
                (LPVOID *)&CNationSettingDataUSReadSystemPass12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataUSReadSystemPass12_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataUS::*)())&CNationSettingDataUS::ReadSystemPass)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
