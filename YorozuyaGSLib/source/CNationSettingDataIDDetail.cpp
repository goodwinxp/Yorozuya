#include <CNationSettingDataIDDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataIDctor_CNationSettingDataID2_ptr CNationSettingDataIDctor_CNationSettingDataID2_next(nullptr);
        Info::CNationSettingDataIDctor_CNationSettingDataID2_clbk CNationSettingDataIDctor_CNationSettingDataID2_user(nullptr);
        
        Info::CNationSettingDataIDCheckEnterWorldRequest4_ptr CNationSettingDataIDCheckEnterWorldRequest4_next(nullptr);
        Info::CNationSettingDataIDCheckEnterWorldRequest4_clbk CNationSettingDataIDCheckEnterWorldRequest4_user(nullptr);
        
        Info::CNationSettingDataIDCreateBilling6_ptr CNationSettingDataIDCreateBilling6_next(nullptr);
        Info::CNationSettingDataIDCreateBilling6_clbk CNationSettingDataIDCreateBilling6_user(nullptr);
        
        Info::CNationSettingDataIDCreateWorker8_ptr CNationSettingDataIDCreateWorker8_next(nullptr);
        Info::CNationSettingDataIDCreateWorker8_clbk CNationSettingDataIDCreateWorker8_user(nullptr);
        
        Info::CNationSettingDataIDGetCashItemPrice10_ptr CNationSettingDataIDGetCashItemPrice10_next(nullptr);
        Info::CNationSettingDataIDGetCashItemPrice10_clbk CNationSettingDataIDGetCashItemPrice10_user(nullptr);
        
        Info::CNationSettingDataIDGetItemName12_ptr CNationSettingDataIDGetItemName12_next(nullptr);
        Info::CNationSettingDataIDGetItemName12_clbk CNationSettingDataIDGetItemName12_user(nullptr);
        
        Info::CNationSettingDataIDInit14_ptr CNationSettingDataIDInit14_next(nullptr);
        Info::CNationSettingDataIDInit14_clbk CNationSettingDataIDInit14_user(nullptr);
        
        Info::CNationSettingDataIDLoop16_ptr CNationSettingDataIDLoop16_next(nullptr);
        Info::CNationSettingDataIDLoop16_clbk CNationSettingDataIDLoop16_user(nullptr);
        
        Info::CNationSettingDataIDReadSystemPass18_ptr CNationSettingDataIDReadSystemPass18_next(nullptr);
        Info::CNationSettingDataIDReadSystemPass18_clbk CNationSettingDataIDReadSystemPass18_user(nullptr);
        
        
        void CNationSettingDataIDctor_CNationSettingDataID2_wrapper(struct CNationSettingDataID* _this)
        {
           CNationSettingDataIDctor_CNationSettingDataID2_user(_this, CNationSettingDataIDctor_CNationSettingDataID2_next);
        };
        bool CNationSettingDataIDCheckEnterWorldRequest4_wrapper(struct CNationSettingDataID* _this, int n, char* pBuf)
        {
           return CNationSettingDataIDCheckEnterWorldRequest4_user(_this, n, pBuf, CNationSettingDataIDCheckEnterWorldRequest4_next);
        };
        struct CBilling* CNationSettingDataIDCreateBilling6_wrapper(struct CNationSettingDataID* _this)
        {
           return CNationSettingDataIDCreateBilling6_user(_this, CNationSettingDataIDCreateBilling6_next);
        };
        struct CashDbWorker* CNationSettingDataIDCreateWorker8_wrapper(struct CNationSettingDataID* _this)
        {
           return CNationSettingDataIDCreateWorker8_user(_this, CNationSettingDataIDCreateWorker8_next);
        };
        int CNationSettingDataIDGetCashItemPrice10_wrapper(struct CNationSettingDataID* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataIDGetCashItemPrice10_user(_this, pFld, CNationSettingDataIDGetCashItemPrice10_next);
        };
        char* CNationSettingDataIDGetItemName12_wrapper(struct CNationSettingDataID* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataIDGetItemName12_user(_this, pFld, CNationSettingDataIDGetItemName12_next);
        };
        int CNationSettingDataIDInit14_wrapper(struct CNationSettingDataID* _this)
        {
           return CNationSettingDataIDInit14_user(_this, CNationSettingDataIDInit14_next);
        };
        void CNationSettingDataIDLoop16_wrapper(struct CNationSettingDataID* _this)
        {
           CNationSettingDataIDLoop16_user(_this, CNationSettingDataIDLoop16_next);
        };
        bool CNationSettingDataIDReadSystemPass18_wrapper(struct CNationSettingDataID* _this)
        {
           return CNationSettingDataIDReadSystemPass18_user(_this, CNationSettingDataIDReadSystemPass18_next);
        };
        
        ::std::array<hook_record, 9> CNationSettingDataID_functions = 
        {
            _hook_record {
                (LPVOID)0x14022c760L,
                (LPVOID *)&CNationSettingDataIDctor_CNationSettingDataID2_user,
                (LPVOID *)&CNationSettingDataIDctor_CNationSettingDataID2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDctor_CNationSettingDataID2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataID::*)())&CNationSettingDataID::ctor_CNationSettingDataID)
            },
            _hook_record {
                (LPVOID)0x14022ca40L,
                (LPVOID *)&CNationSettingDataIDCheckEnterWorldRequest4_user,
                (LPVOID *)&CNationSettingDataIDCheckEnterWorldRequest4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDCheckEnterWorldRequest4_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataID::*)(int, char*))&CNationSettingDataID::CheckEnterWorldRequest)
            },
            _hook_record {
                (LPVOID)0x14022c990L,
                (LPVOID *)&CNationSettingDataIDCreateBilling6_user,
                (LPVOID *)&CNationSettingDataIDCreateBilling6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDCreateBilling6_wrapper),
                (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataID::*)())&CNationSettingDataID::CreateBilling)
            },
            _hook_record {
                (LPVOID)0x14022c8e0L,
                (LPVOID *)&CNationSettingDataIDCreateWorker8_user,
                (LPVOID *)&CNationSettingDataIDCreateWorker8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDCreateWorker8_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataID::*)())&CNationSettingDataID::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x14022ca60L,
                (LPVOID *)&CNationSettingDataIDGetCashItemPrice10_user,
                (LPVOID *)&CNationSettingDataIDGetCashItemPrice10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDGetCashItemPrice10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataID::*)(struct _CashShop_str_fld*))&CNationSettingDataID::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x14022c8c0L,
                (LPVOID *)&CNationSettingDataIDGetItemName12_user,
                (LPVOID *)&CNationSettingDataIDGetItemName12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDGetItemName12_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataID::*)(struct _NameTxt_fld*))&CNationSettingDataID::GetItemName)
            },
            _hook_record {
                (LPVOID)0x14022c7c0L,
                (LPVOID *)&CNationSettingDataIDInit14_user,
                (LPVOID *)&CNationSettingDataIDInit14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDInit14_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataID::*)())&CNationSettingDataID::Init)
            },
            _hook_record {
                (LPVOID)0x14022c8b0L,
                (LPVOID *)&CNationSettingDataIDLoop16_user,
                (LPVOID *)&CNationSettingDataIDLoop16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataID::*)())&CNationSettingDataID::Loop)
            },
            _hook_record {
                (LPVOID)0x14022ca80L,
                (LPVOID *)&CNationSettingDataIDReadSystemPass18_user,
                (LPVOID *)&CNationSettingDataIDReadSystemPass18_next,
                (LPVOID)cast_pointer_function(CNationSettingDataIDReadSystemPass18_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataID::*)())&CNationSettingDataID::ReadSystemPass)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
