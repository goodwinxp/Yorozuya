#include <CNationSettingDataJPDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataJPctor_CNationSettingDataJP2_ptr CNationSettingDataJPctor_CNationSettingDataJP2_next(nullptr);
        Info::CNationSettingDataJPctor_CNationSettingDataJP2_clbk CNationSettingDataJPctor_CNationSettingDataJP2_user(nullptr);
        
        Info::CNationSettingDataJPCreateBilling4_ptr CNationSettingDataJPCreateBilling4_next(nullptr);
        Info::CNationSettingDataJPCreateBilling4_clbk CNationSettingDataJPCreateBilling4_user(nullptr);
        
        Info::CNationSettingDataJPCreateWorker6_ptr CNationSettingDataJPCreateWorker6_next(nullptr);
        Info::CNationSettingDataJPCreateWorker6_clbk CNationSettingDataJPCreateWorker6_user(nullptr);
        
        Info::CNationSettingDataJPGetCashItemPrice8_ptr CNationSettingDataJPGetCashItemPrice8_next(nullptr);
        Info::CNationSettingDataJPGetCashItemPrice8_clbk CNationSettingDataJPGetCashItemPrice8_user(nullptr);
        
        Info::CNationSettingDataJPGetItemName10_ptr CNationSettingDataJPGetItemName10_next(nullptr);
        Info::CNationSettingDataJPGetItemName10_clbk CNationSettingDataJPGetItemName10_user(nullptr);
        
        Info::CNationSettingDataJPInit12_ptr CNationSettingDataJPInit12_next(nullptr);
        Info::CNationSettingDataJPInit12_clbk CNationSettingDataJPInit12_user(nullptr);
        
        Info::CNationSettingDataJPLoop14_ptr CNationSettingDataJPLoop14_next(nullptr);
        Info::CNationSettingDataJPLoop14_clbk CNationSettingDataJPLoop14_user(nullptr);
        
        Info::CNationSettingDataJPReadSystemPass16_ptr CNationSettingDataJPReadSystemPass16_next(nullptr);
        Info::CNationSettingDataJPReadSystemPass16_clbk CNationSettingDataJPReadSystemPass16_user(nullptr);
        
        Info::CNationSettingDataJPSetUnitPassiveValue18_ptr CNationSettingDataJPSetUnitPassiveValue18_next(nullptr);
        Info::CNationSettingDataJPSetUnitPassiveValue18_clbk CNationSettingDataJPSetUnitPassiveValue18_user(nullptr);
        
        
        void CNationSettingDataJPctor_CNationSettingDataJP2_wrapper(struct CNationSettingDataJP* _this)
        {
           CNationSettingDataJPctor_CNationSettingDataJP2_user(_this, CNationSettingDataJPctor_CNationSettingDataJP2_next);
        };
        struct CBilling* CNationSettingDataJPCreateBilling4_wrapper(struct CNationSettingDataJP* _this)
        {
           return CNationSettingDataJPCreateBilling4_user(_this, CNationSettingDataJPCreateBilling4_next);
        };
        struct CashDbWorker* CNationSettingDataJPCreateWorker6_wrapper(struct CNationSettingDataJP* _this)
        {
           return CNationSettingDataJPCreateWorker6_user(_this, CNationSettingDataJPCreateWorker6_next);
        };
        int CNationSettingDataJPGetCashItemPrice8_wrapper(struct CNationSettingDataJP* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataJPGetCashItemPrice8_user(_this, pFld, CNationSettingDataJPGetCashItemPrice8_next);
        };
        char* CNationSettingDataJPGetItemName10_wrapper(struct CNationSettingDataJP* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataJPGetItemName10_user(_this, pFld, CNationSettingDataJPGetItemName10_next);
        };
        int CNationSettingDataJPInit12_wrapper(struct CNationSettingDataJP* _this)
        {
           return CNationSettingDataJPInit12_user(_this, CNationSettingDataJPInit12_next);
        };
        void CNationSettingDataJPLoop14_wrapper(struct CNationSettingDataJP* _this)
        {
           CNationSettingDataJPLoop14_user(_this, CNationSettingDataJPLoop14_next);
        };
        bool CNationSettingDataJPReadSystemPass16_wrapper(struct CNationSettingDataJP* _this)
        {
           return CNationSettingDataJPReadSystemPass16_user(_this, CNationSettingDataJPReadSystemPass16_next);
        };
        void CNationSettingDataJPSetUnitPassiveValue18_wrapper(struct CNationSettingDataJP* _this, float* fUnitPv_DefFc)
        {
           CNationSettingDataJPSetUnitPassiveValue18_user(_this, fUnitPv_DefFc, CNationSettingDataJPSetUnitPassiveValue18_next);
        };
        
        ::std::array<hook_record, 9> CNationSettingDataJP_functions = 
        {
            _hook_record {
                (LPVOID)0x14022d0c0L,
                (LPVOID *)&CNationSettingDataJPctor_CNationSettingDataJP2_user,
                (LPVOID *)&CNationSettingDataJPctor_CNationSettingDataJP2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPctor_CNationSettingDataJP2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataJP::*)())&CNationSettingDataJP::ctor_CNationSettingDataJP)
            },
            _hook_record {
                (LPVOID)0x14022d330L,
                (LPVOID *)&CNationSettingDataJPCreateBilling4_user,
                (LPVOID *)&CNationSettingDataJPCreateBilling4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPCreateBilling4_wrapper),
                (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataJP::*)())&CNationSettingDataJP::CreateBilling)
            },
            _hook_record {
                (LPVOID)0x14022d280L,
                (LPVOID *)&CNationSettingDataJPCreateWorker6_user,
                (LPVOID *)&CNationSettingDataJPCreateWorker6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPCreateWorker6_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataJP::*)())&CNationSettingDataJP::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x14022d3e0L,
                (LPVOID *)&CNationSettingDataJPGetCashItemPrice8_user,
                (LPVOID *)&CNationSettingDataJPGetCashItemPrice8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPGetCashItemPrice8_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataJP::*)(struct _CashShop_str_fld*))&CNationSettingDataJP::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x14022d230L,
                (LPVOID *)&CNationSettingDataJPGetItemName10_user,
                (LPVOID *)&CNationSettingDataJPGetItemName10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPGetItemName10_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataJP::*)(struct _NameTxt_fld*))&CNationSettingDataJP::GetItemName)
            },
            _hook_record {
                (LPVOID)0x14022d120L,
                (LPVOID *)&CNationSettingDataJPInit12_user,
                (LPVOID *)&CNationSettingDataJPInit12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPInit12_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataJP::*)())&CNationSettingDataJP::Init)
            },
            _hook_record {
                (LPVOID)0x14022d220L,
                (LPVOID *)&CNationSettingDataJPLoop14_user,
                (LPVOID *)&CNationSettingDataJPLoop14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPLoop14_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataJP::*)())&CNationSettingDataJP::Loop)
            },
            _hook_record {
                (LPVOID)0x14022d400L,
                (LPVOID *)&CNationSettingDataJPReadSystemPass16_user,
                (LPVOID *)&CNationSettingDataJPReadSystemPass16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPReadSystemPass16_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataJP::*)())&CNationSettingDataJP::ReadSystemPass)
            },
            _hook_record {
                (LPVOID)0x14022d250L,
                (LPVOID *)&CNationSettingDataJPSetUnitPassiveValue18_user,
                (LPVOID *)&CNationSettingDataJPSetUnitPassiveValue18_next,
                (LPVOID)cast_pointer_function(CNationSettingDataJPSetUnitPassiveValue18_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataJP::*)(float*))&CNationSettingDataJP::SetUnitPassiveValue)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
