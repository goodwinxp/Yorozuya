#include <CNationSettingDataPHDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataPHctor_CNationSettingDataPH2_ptr CNationSettingDataPHctor_CNationSettingDataPH2_next(nullptr);
        Info::CNationSettingDataPHctor_CNationSettingDataPH2_clbk CNationSettingDataPHctor_CNationSettingDataPH2_user(nullptr);
        
        Info::CNationSettingDataPHCheckEnterWorldRequest4_ptr CNationSettingDataPHCheckEnterWorldRequest4_next(nullptr);
        Info::CNationSettingDataPHCheckEnterWorldRequest4_clbk CNationSettingDataPHCheckEnterWorldRequest4_user(nullptr);
        
        Info::CNationSettingDataPHCreateBilling6_ptr CNationSettingDataPHCreateBilling6_next(nullptr);
        Info::CNationSettingDataPHCreateBilling6_clbk CNationSettingDataPHCreateBilling6_user(nullptr);
        
        Info::CNationSettingDataPHCreateWorker8_ptr CNationSettingDataPHCreateWorker8_next(nullptr);
        Info::CNationSettingDataPHCreateWorker8_clbk CNationSettingDataPHCreateWorker8_user(nullptr);
        
        Info::CNationSettingDataPHGetCashItemPrice10_ptr CNationSettingDataPHGetCashItemPrice10_next(nullptr);
        Info::CNationSettingDataPHGetCashItemPrice10_clbk CNationSettingDataPHGetCashItemPrice10_user(nullptr);
        
        Info::CNationSettingDataPHGetItemName12_ptr CNationSettingDataPHGetItemName12_next(nullptr);
        Info::CNationSettingDataPHGetItemName12_clbk CNationSettingDataPHGetItemName12_user(nullptr);
        
        Info::CNationSettingDataPHInit14_ptr CNationSettingDataPHInit14_next(nullptr);
        Info::CNationSettingDataPHInit14_clbk CNationSettingDataPHInit14_user(nullptr);
        
        Info::CNationSettingDataPHIsNormalString16_ptr CNationSettingDataPHIsNormalString16_next(nullptr);
        Info::CNationSettingDataPHIsNormalString16_clbk CNationSettingDataPHIsNormalString16_user(nullptr);
        
        Info::CNationSettingDataPHIsNormalString18_ptr CNationSettingDataPHIsNormalString18_next(nullptr);
        Info::CNationSettingDataPHIsNormalString18_clbk CNationSettingDataPHIsNormalString18_user(nullptr);
        
        Info::CNationSettingDataPHLoop20_ptr CNationSettingDataPHLoop20_next(nullptr);
        Info::CNationSettingDataPHLoop20_clbk CNationSettingDataPHLoop20_user(nullptr);
        
        Info::CNationSettingDataPHReadSystemPass22_ptr CNationSettingDataPHReadSystemPass22_next(nullptr);
        Info::CNationSettingDataPHReadSystemPass22_clbk CNationSettingDataPHReadSystemPass22_user(nullptr);
        
        
        void CNationSettingDataPHctor_CNationSettingDataPH2_wrapper(struct CNationSettingDataPH* _this)
        {
           CNationSettingDataPHctor_CNationSettingDataPH2_user(_this, CNationSettingDataPHctor_CNationSettingDataPH2_next);
        };
        bool CNationSettingDataPHCheckEnterWorldRequest4_wrapper(struct CNationSettingDataPH* _this, int n, char* pBuf)
        {
           return CNationSettingDataPHCheckEnterWorldRequest4_user(_this, n, pBuf, CNationSettingDataPHCheckEnterWorldRequest4_next);
        };
        struct CBilling* CNationSettingDataPHCreateBilling6_wrapper(struct CNationSettingDataPH* _this)
        {
           return CNationSettingDataPHCreateBilling6_user(_this, CNationSettingDataPHCreateBilling6_next);
        };
        struct CashDbWorker* CNationSettingDataPHCreateWorker8_wrapper(struct CNationSettingDataPH* _this)
        {
           return CNationSettingDataPHCreateWorker8_user(_this, CNationSettingDataPHCreateWorker8_next);
        };
        int CNationSettingDataPHGetCashItemPrice10_wrapper(struct CNationSettingDataPH* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataPHGetCashItemPrice10_user(_this, pFld, CNationSettingDataPHGetCashItemPrice10_next);
        };
        char* CNationSettingDataPHGetItemName12_wrapper(struct CNationSettingDataPH* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataPHGetItemName12_user(_this, pFld, CNationSettingDataPHGetItemName12_next);
        };
        int CNationSettingDataPHInit14_wrapper(struct CNationSettingDataPH* _this)
        {
           return CNationSettingDataPHInit14_user(_this, CNationSettingDataPHInit14_next);
        };
        bool CNationSettingDataPHIsNormalString16_wrapper(struct CNationSettingDataPH* _this, char* szString)
        {
           return CNationSettingDataPHIsNormalString16_user(_this, szString, CNationSettingDataPHIsNormalString16_next);
        };
        bool CNationSettingDataPHIsNormalString18_wrapper(struct CNationSettingDataPH* _this, wchar_t* wszString)
        {
           return CNationSettingDataPHIsNormalString18_user(_this, wszString, CNationSettingDataPHIsNormalString18_next);
        };
        void CNationSettingDataPHLoop20_wrapper(struct CNationSettingDataPH* _this)
        {
           CNationSettingDataPHLoop20_user(_this, CNationSettingDataPHLoop20_next);
        };
        bool CNationSettingDataPHReadSystemPass22_wrapper(struct CNationSettingDataPH* _this)
        {
           return CNationSettingDataPHReadSystemPass22_user(_this, CNationSettingDataPHReadSystemPass22_next);
        };
        
        ::std::array<hook_record, 11> CNationSettingDataPH_functions = 
        {
            _hook_record {
                (LPVOID)0x14022da40L,
                (LPVOID *)&CNationSettingDataPHctor_CNationSettingDataPH2_user,
                (LPVOID *)&CNationSettingDataPHctor_CNationSettingDataPH2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHctor_CNationSettingDataPH2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataPH::*)())&CNationSettingDataPH::ctor_CNationSettingDataPH)
            },
            _hook_record {
                (LPVOID)0x14022de70L,
                (LPVOID *)&CNationSettingDataPHCheckEnterWorldRequest4_user,
                (LPVOID *)&CNationSettingDataPHCheckEnterWorldRequest4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHCheckEnterWorldRequest4_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataPH::*)(int, char*))&CNationSettingDataPH::CheckEnterWorldRequest)
            },
            _hook_record {
                (LPVOID)0x14022ddc0L,
                (LPVOID *)&CNationSettingDataPHCreateBilling6_user,
                (LPVOID *)&CNationSettingDataPHCreateBilling6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHCreateBilling6_wrapper),
                (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataPH::*)())&CNationSettingDataPH::CreateBilling)
            },
            _hook_record {
                (LPVOID)0x14022dd10L,
                (LPVOID *)&CNationSettingDataPHCreateWorker8_user,
                (LPVOID *)&CNationSettingDataPHCreateWorker8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHCreateWorker8_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataPH::*)())&CNationSettingDataPH::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x14022de90L,
                (LPVOID *)&CNationSettingDataPHGetCashItemPrice10_user,
                (LPVOID *)&CNationSettingDataPHGetCashItemPrice10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHGetCashItemPrice10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataPH::*)(struct _CashShop_str_fld*))&CNationSettingDataPH::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x14022dc50L,
                (LPVOID *)&CNationSettingDataPHGetItemName12_user,
                (LPVOID *)&CNationSettingDataPHGetItemName12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHGetItemName12_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataPH::*)(struct _NameTxt_fld*))&CNationSettingDataPH::GetItemName)
            },
            _hook_record {
                (LPVOID)0x14022daa0L,
                (LPVOID *)&CNationSettingDataPHInit14_user,
                (LPVOID *)&CNationSettingDataPHInit14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHInit14_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataPH::*)())&CNationSettingDataPH::Init)
            },
            _hook_record {
                (LPVOID)0x14022dc70L,
                (LPVOID *)&CNationSettingDataPHIsNormalString16_user,
                (LPVOID *)&CNationSettingDataPHIsNormalString16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHIsNormalString16_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataPH::*)(char*))&CNationSettingDataPH::IsNormalString)
            },
            _hook_record {
                (LPVOID)0x14022dcc0L,
                (LPVOID *)&CNationSettingDataPHIsNormalString18_user,
                (LPVOID *)&CNationSettingDataPHIsNormalString18_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHIsNormalString18_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataPH::*)(wchar_t*))&CNationSettingDataPH::IsNormalString)
            },
            _hook_record {
                (LPVOID)0x14022dc40L,
                (LPVOID *)&CNationSettingDataPHLoop20_user,
                (LPVOID *)&CNationSettingDataPHLoop20_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHLoop20_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataPH::*)())&CNationSettingDataPH::Loop)
            },
            _hook_record {
                (LPVOID)0x14022deb0L,
                (LPVOID *)&CNationSettingDataPHReadSystemPass22_user,
                (LPVOID *)&CNationSettingDataPHReadSystemPass22_next,
                (LPVOID)cast_pointer_function(CNationSettingDataPHReadSystemPass22_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataPH::*)())&CNationSettingDataPH::ReadSystemPass)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
