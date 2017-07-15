#include <CNationSettingDataNULLDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataNULLctor_CNationSettingDataNULL2_ptr CNationSettingDataNULLctor_CNationSettingDataNULL2_next(nullptr);
        Info::CNationSettingDataNULLctor_CNationSettingDataNULL2_clbk CNationSettingDataNULLctor_CNationSettingDataNULL2_user(nullptr);
        
        Info::CNationSettingDataNULLCheckEnterWorldRequest4_ptr CNationSettingDataNULLCheckEnterWorldRequest4_next(nullptr);
        Info::CNationSettingDataNULLCheckEnterWorldRequest4_clbk CNationSettingDataNULLCheckEnterWorldRequest4_user(nullptr);
        
        Info::CNationSettingDataNULLCreateBilling6_ptr CNationSettingDataNULLCreateBilling6_next(nullptr);
        Info::CNationSettingDataNULLCreateBilling6_clbk CNationSettingDataNULLCreateBilling6_user(nullptr);
        
        Info::CNationSettingDataNULLCreateComplete8_ptr CNationSettingDataNULLCreateComplete8_next(nullptr);
        Info::CNationSettingDataNULLCreateComplete8_clbk CNationSettingDataNULLCreateComplete8_user(nullptr);
        
        Info::CNationSettingDataNULLCreateWorker10_ptr CNationSettingDataNULLCreateWorker10_next(nullptr);
        Info::CNationSettingDataNULLCreateWorker10_clbk CNationSettingDataNULLCreateWorker10_user(nullptr);
        
        Info::CNationSettingDataNULLGetCashItemPrice12_ptr CNationSettingDataNULLGetCashItemPrice12_next(nullptr);
        Info::CNationSettingDataNULLGetCashItemPrice12_clbk CNationSettingDataNULLGetCashItemPrice12_user(nullptr);
        
        Info::CNationSettingDataNULLGetItemName14_ptr CNationSettingDataNULLGetItemName14_next(nullptr);
        Info::CNationSettingDataNULLGetItemName14_clbk CNationSettingDataNULLGetItemName14_user(nullptr);
        
        Info::CNationSettingDataNULLInit16_ptr CNationSettingDataNULLInit16_next(nullptr);
        Info::CNationSettingDataNULLInit16_clbk CNationSettingDataNULLInit16_user(nullptr);
        
        Info::CNationSettingDataNULLIsApplyPcbangPrimium18_ptr CNationSettingDataNULLIsApplyPcbangPrimium18_next(nullptr);
        Info::CNationSettingDataNULLIsApplyPcbangPrimium18_clbk CNationSettingDataNULLIsApplyPcbangPrimium18_user(nullptr);
        
        Info::CNationSettingDataNULLIsNormalChar20_ptr CNationSettingDataNULLIsNormalChar20_next(nullptr);
        Info::CNationSettingDataNULLIsNormalChar20_clbk CNationSettingDataNULLIsNormalChar20_user(nullptr);
        
        Info::CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_ptr CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_next(nullptr);
        Info::CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_clbk CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_user(nullptr);
        
        Info::CNationSettingDataNULLLoop24_ptr CNationSettingDataNULLLoop24_next(nullptr);
        Info::CNationSettingDataNULLLoop24_clbk CNationSettingDataNULLLoop24_user(nullptr);
        
        Info::CNationSettingDataNULLNetClose26_ptr CNationSettingDataNULLNetClose26_next(nullptr);
        Info::CNationSettingDataNULLNetClose26_clbk CNationSettingDataNULLNetClose26_user(nullptr);
        
        Info::CNationSettingDataNULLSendCashDBDSNRequest28_ptr CNationSettingDataNULLSendCashDBDSNRequest28_next(nullptr);
        Info::CNationSettingDataNULLSendCashDBDSNRequest28_clbk CNationSettingDataNULLSendCashDBDSNRequest28_user(nullptr);
        
        Info::CNationSettingDataNULLSetUnitPassiveValue30_ptr CNationSettingDataNULLSetUnitPassiveValue30_next(nullptr);
        Info::CNationSettingDataNULLSetUnitPassiveValue30_clbk CNationSettingDataNULLSetUnitPassiveValue30_user(nullptr);
        
        Info::CNationSettingDataNULLValidMacAddress32_ptr CNationSettingDataNULLValidMacAddress32_next(nullptr);
        Info::CNationSettingDataNULLValidMacAddress32_clbk CNationSettingDataNULLValidMacAddress32_user(nullptr);
        
        
        Info::CNationSettingDataNULLdtor_CNationSettingDataNULL34_ptr CNationSettingDataNULLdtor_CNationSettingDataNULL34_next(nullptr);
        Info::CNationSettingDataNULLdtor_CNationSettingDataNULL34_clbk CNationSettingDataNULLdtor_CNationSettingDataNULL34_user(nullptr);
        
        
        void CNationSettingDataNULLctor_CNationSettingDataNULL2_wrapper(struct CNationSettingDataNULL* _this)
        {
           CNationSettingDataNULLctor_CNationSettingDataNULL2_user(_this, CNationSettingDataNULLctor_CNationSettingDataNULL2_next);
        };
        bool CNationSettingDataNULLCheckEnterWorldRequest4_wrapper(struct CNationSettingDataNULL* _this, int n, char* pBuf)
        {
           return CNationSettingDataNULLCheckEnterWorldRequest4_user(_this, n, pBuf, CNationSettingDataNULLCheckEnterWorldRequest4_next);
        };
        struct CBilling* CNationSettingDataNULLCreateBilling6_wrapper(struct CNationSettingDataNULL* _this)
        {
           return CNationSettingDataNULLCreateBilling6_user(_this, CNationSettingDataNULLCreateBilling6_next);
        };
        void CNationSettingDataNULLCreateComplete8_wrapper(struct CNationSettingDataNULL* _this, struct CPlayer* pOne)
        {
           CNationSettingDataNULLCreateComplete8_user(_this, pOne, CNationSettingDataNULLCreateComplete8_next);
        };
        struct CashDbWorker* CNationSettingDataNULLCreateWorker10_wrapper(struct CNationSettingDataNULL* _this)
        {
           return CNationSettingDataNULLCreateWorker10_user(_this, CNationSettingDataNULLCreateWorker10_next);
        };
        int CNationSettingDataNULLGetCashItemPrice12_wrapper(struct CNationSettingDataNULL* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataNULLGetCashItemPrice12_user(_this, pFld, CNationSettingDataNULLGetCashItemPrice12_next);
        };
        char* CNationSettingDataNULLGetItemName14_wrapper(struct CNationSettingDataNULL* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataNULLGetItemName14_user(_this, pFld, CNationSettingDataNULLGetItemName14_next);
        };
        int CNationSettingDataNULLInit16_wrapper(struct CNationSettingDataNULL* _this)
        {
           return CNationSettingDataNULLInit16_user(_this, CNationSettingDataNULLInit16_next);
        };
        bool CNationSettingDataNULLIsApplyPcbangPrimium18_wrapper(struct CNationSettingDataNULL* _this, struct CPlayer* pUser)
        {
           return CNationSettingDataNULLIsApplyPcbangPrimium18_user(_this, pUser, CNationSettingDataNULLIsApplyPcbangPrimium18_next);
        };
        bool CNationSettingDataNULLIsNormalChar20_wrapper(struct CNationSettingDataNULL* _this, wchar_t wcChar)
        {
           return CNationSettingDataNULLIsNormalChar20_user(_this, wcChar, CNationSettingDataNULLIsNormalChar20_next);
        };
        bool CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_wrapper(struct CNationSettingDataNULL* _this, int16_t* pDest1, int16_t* pDest2)
        {
           return CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_user(_this, pDest1, pDest2, CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_next);
        };
        void CNationSettingDataNULLLoop24_wrapper(struct CNationSettingDataNULL* _this)
        {
           CNationSettingDataNULLLoop24_user(_this, CNationSettingDataNULLLoop24_next);
        };
        void CNationSettingDataNULLNetClose26_wrapper(struct CNationSettingDataNULL* _this, struct CPlayer* pOne)
        {
           CNationSettingDataNULLNetClose26_user(_this, pOne, CNationSettingDataNULLNetClose26_next);
        };
        void CNationSettingDataNULLSendCashDBDSNRequest28_wrapper(struct CNationSettingDataNULL* _this)
        {
           CNationSettingDataNULLSendCashDBDSNRequest28_user(_this, CNationSettingDataNULLSendCashDBDSNRequest28_next);
        };
        void CNationSettingDataNULLSetUnitPassiveValue30_wrapper(struct CNationSettingDataNULL* _this, float* fUnitPv_DefFc)
        {
           CNationSettingDataNULLSetUnitPassiveValue30_user(_this, fUnitPv_DefFc, CNationSettingDataNULLSetUnitPassiveValue30_next);
        };
        bool CNationSettingDataNULLValidMacAddress32_wrapper(struct CNationSettingDataNULL* _this)
        {
           return CNationSettingDataNULLValidMacAddress32_user(_this, CNationSettingDataNULLValidMacAddress32_next);
        };
        
        void CNationSettingDataNULLdtor_CNationSettingDataNULL34_wrapper(struct CNationSettingDataNULL* _this)
        {
           CNationSettingDataNULLdtor_CNationSettingDataNULL34_user(_this, CNationSettingDataNULLdtor_CNationSettingDataNULL34_next);
        };
        
        ::std::array<hook_record, 17> CNationSettingDataNULL_functions = 
        {
            _hook_record {
                (LPVOID)0x140212f50L,
                (LPVOID *)&CNationSettingDataNULLctor_CNationSettingDataNULL2_user,
                (LPVOID *)&CNationSettingDataNULLctor_CNationSettingDataNULL2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLctor_CNationSettingDataNULL2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataNULL::*)())&CNationSettingDataNULL::ctor_CNationSettingDataNULL)
            },
            _hook_record {
                (LPVOID)0x140213070L,
                (LPVOID *)&CNationSettingDataNULLCheckEnterWorldRequest4_user,
                (LPVOID *)&CNationSettingDataNULLCheckEnterWorldRequest4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLCheckEnterWorldRequest4_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataNULL::*)(int, char*))&CNationSettingDataNULL::CheckEnterWorldRequest)
            },
            _hook_record {
                (LPVOID)0x140212fe0L,
                (LPVOID *)&CNationSettingDataNULLCreateBilling6_user,
                (LPVOID *)&CNationSettingDataNULLCreateBilling6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLCreateBilling6_wrapper),
                (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataNULL::*)())&CNationSettingDataNULL::CreateBilling)
            },
            _hook_record {
                (LPVOID)0x140213090L,
                (LPVOID *)&CNationSettingDataNULLCreateComplete8_user,
                (LPVOID *)&CNationSettingDataNULLCreateComplete8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLCreateComplete8_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataNULL::*)(struct CPlayer*))&CNationSettingDataNULL::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x140212fd0L,
                (LPVOID *)&CNationSettingDataNULLCreateWorker10_user,
                (LPVOID *)&CNationSettingDataNULLCreateWorker10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLCreateWorker10_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataNULL::*)())&CNationSettingDataNULL::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x1402130b0L,
                (LPVOID *)&CNationSettingDataNULLGetCashItemPrice12_user,
                (LPVOID *)&CNationSettingDataNULLGetCashItemPrice12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLGetCashItemPrice12_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataNULL::*)(struct _CashShop_str_fld*))&CNationSettingDataNULL::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x140212ff0L,
                (LPVOID *)&CNationSettingDataNULLGetItemName14_user,
                (LPVOID *)&CNationSettingDataNULLGetItemName14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLGetItemName14_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataNULL::*)(struct _NameTxt_fld*))&CNationSettingDataNULL::GetItemName)
            },
            _hook_record {
                (LPVOID)0x140212fb0L,
                (LPVOID *)&CNationSettingDataNULLInit16_user,
                (LPVOID *)&CNationSettingDataNULLInit16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLInit16_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataNULL::*)())&CNationSettingDataNULL::Init)
            },
            _hook_record {
                (LPVOID)0x1402130d0L,
                (LPVOID *)&CNationSettingDataNULLIsApplyPcbangPrimium18_user,
                (LPVOID *)&CNationSettingDataNULLIsApplyPcbangPrimium18_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLIsApplyPcbangPrimium18_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataNULL::*)(struct CPlayer*))&CNationSettingDataNULL::IsApplyPcbangPrimium)
            },
            _hook_record {
                (LPVOID)0x140213020L,
                (LPVOID *)&CNationSettingDataNULLIsNormalChar20_user,
                (LPVOID *)&CNationSettingDataNULLIsNormalChar20_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLIsNormalChar20_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataNULL::*)(wchar_t))&CNationSettingDataNULL::IsNormalChar)
            },
            _hook_record {
                (LPVOID)0x140213050L,
                (LPVOID *)&CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_user,
                (LPVOID *)&CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLIsPersonalFreeFixedAmountBillingType22_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataNULL::*)(int16_t*, int16_t*))&CNationSettingDataNULL::IsPersonalFreeFixedAmountBillingType)
            },
            _hook_record {
                (LPVOID)0x140212fc0L,
                (LPVOID *)&CNationSettingDataNULLLoop24_user,
                (LPVOID *)&CNationSettingDataNULLLoop24_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLLoop24_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataNULL::*)())&CNationSettingDataNULL::Loop)
            },
            _hook_record {
                (LPVOID)0x1402130a0L,
                (LPVOID *)&CNationSettingDataNULLNetClose26_user,
                (LPVOID *)&CNationSettingDataNULLNetClose26_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLNetClose26_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataNULL::*)(struct CPlayer*))&CNationSettingDataNULL::NetClose)
            },
            _hook_record {
                (LPVOID)0x1402130f0L,
                (LPVOID *)&CNationSettingDataNULLSendCashDBDSNRequest28_user,
                (LPVOID *)&CNationSettingDataNULLSendCashDBDSNRequest28_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLSendCashDBDSNRequest28_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataNULL::*)())&CNationSettingDataNULL::SendCashDBDSNRequest)
            },
            _hook_record {
                (LPVOID)0x140213040L,
                (LPVOID *)&CNationSettingDataNULLSetUnitPassiveValue30_user,
                (LPVOID *)&CNationSettingDataNULLSetUnitPassiveValue30_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLSetUnitPassiveValue30_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataNULL::*)(float*))&CNationSettingDataNULL::SetUnitPassiveValue)
            },
            _hook_record {
                (LPVOID)0x140213010L,
                (LPVOID *)&CNationSettingDataNULLValidMacAddress32_user,
                (LPVOID *)&CNationSettingDataNULLValidMacAddress32_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLValidMacAddress32_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataNULL::*)())&CNationSettingDataNULL::ValidMacAddress)
            },
            _hook_record {
                (LPVOID)0x140213100L,
                (LPVOID *)&CNationSettingDataNULLdtor_CNationSettingDataNULL34_user,
                (LPVOID *)&CNationSettingDataNULLdtor_CNationSettingDataNULL34_next,
                (LPVOID)cast_pointer_function(CNationSettingDataNULLdtor_CNationSettingDataNULL34_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataNULL::*)())&CNationSettingDataNULL::dtor_CNationSettingDataNULL)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
