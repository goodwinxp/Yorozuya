#include <CCheckSumGuildDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCheckSumGuildDatactor_CCheckSumGuildData2_ptr CCheckSumGuildDatactor_CCheckSumGuildData2_next(nullptr);
        Info::CCheckSumGuildDatactor_CCheckSumGuildData2_clbk CCheckSumGuildDatactor_CCheckSumGuildData2_user(nullptr);
        
        Info::CCheckSumGuildDataCheckDiff4_ptr CCheckSumGuildDataCheckDiff4_next(nullptr);
        Info::CCheckSumGuildDataCheckDiff4_clbk CCheckSumGuildDataCheckDiff4_user(nullptr);
        
        Info::CCheckSumGuildDataDecode6_ptr CCheckSumGuildDataDecode6_next(nullptr);
        Info::CCheckSumGuildDataDecode6_clbk CCheckSumGuildDataDecode6_user(nullptr);
        
        Info::CCheckSumGuildDataEncode8_ptr CCheckSumGuildDataEncode8_next(nullptr);
        Info::CCheckSumGuildDataEncode8_clbk CCheckSumGuildDataEncode8_user(nullptr);
        
        Info::CCheckSumGuildDataGetDalant10_ptr CCheckSumGuildDataGetDalant10_next(nullptr);
        Info::CCheckSumGuildDataGetDalant10_clbk CCheckSumGuildDataGetDalant10_user(nullptr);
        
        Info::CCheckSumGuildDataGetGold12_ptr CCheckSumGuildDataGetGold12_next(nullptr);
        Info::CCheckSumGuildDataGetGold12_clbk CCheckSumGuildDataGetGold12_user(nullptr);
        
        Info::CCheckSumGuildDataInsert14_ptr CCheckSumGuildDataInsert14_next(nullptr);
        Info::CCheckSumGuildDataInsert14_clbk CCheckSumGuildDataInsert14_user(nullptr);
        
        Info::CCheckSumGuildDataLoad16_ptr CCheckSumGuildDataLoad16_next(nullptr);
        Info::CCheckSumGuildDataLoad16_clbk CCheckSumGuildDataLoad16_user(nullptr);
        
        Info::CCheckSumGuildDataSetValue18_ptr CCheckSumGuildDataSetValue18_next(nullptr);
        Info::CCheckSumGuildDataSetValue18_clbk CCheckSumGuildDataSetValue18_user(nullptr);
        
        Info::CCheckSumGuildDataUpdate20_ptr CCheckSumGuildDataUpdate20_next(nullptr);
        Info::CCheckSumGuildDataUpdate20_clbk CCheckSumGuildDataUpdate20_user(nullptr);
        
        
        Info::CCheckSumGuildDatadtor_CCheckSumGuildData22_ptr CCheckSumGuildDatadtor_CCheckSumGuildData22_next(nullptr);
        Info::CCheckSumGuildDatadtor_CCheckSumGuildData22_clbk CCheckSumGuildDatadtor_CCheckSumGuildData22_user(nullptr);
        
        
        void CCheckSumGuildDatactor_CCheckSumGuildData2_wrapper(struct CCheckSumGuildData* _this, unsigned int dwSerial)
        {
           CCheckSumGuildDatactor_CCheckSumGuildData2_user(_this, dwSerial, CCheckSumGuildDatactor_CCheckSumGuildData2_next);
        };
        int CCheckSumGuildDataCheckDiff4_wrapper(struct CCheckSumGuildData* _this, struct CRFWorldDatabase* pkDB, char* wszName, struct CCheckSumGuildData* kSrcValue)
        {
           return CCheckSumGuildDataCheckDiff4_user(_this, pkDB, wszName, kSrcValue, CCheckSumGuildDataCheckDiff4_next);
        };
        void CCheckSumGuildDataDecode6_wrapper(struct CCheckSumGuildData* _this, long double dDalant, long double dGold)
        {
           CCheckSumGuildDataDecode6_user(_this, dDalant, dGold, CCheckSumGuildDataDecode6_next);
        };
        void CCheckSumGuildDataEncode8_wrapper(struct CCheckSumGuildData* _this, long double dDalant, long double dGold)
        {
           CCheckSumGuildDataEncode8_user(_this, dDalant, dGold, CCheckSumGuildDataEncode8_next);
        };
        long double CCheckSumGuildDataGetDalant10_wrapper(struct CCheckSumGuildData* _this)
        {
           return CCheckSumGuildDataGetDalant10_user(_this, CCheckSumGuildDataGetDalant10_next);
        };
        long double CCheckSumGuildDataGetGold12_wrapper(struct CCheckSumGuildData* _this)
        {
           return CCheckSumGuildDataGetGold12_user(_this, CCheckSumGuildDataGetGold12_next);
        };
        bool CCheckSumGuildDataInsert14_wrapper(struct CCheckSumGuildData* _this, struct CRFWorldDatabase* pkDB)
        {
           return CCheckSumGuildDataInsert14_user(_this, pkDB, CCheckSumGuildDataInsert14_next);
        };
        int CCheckSumGuildDataLoad16_wrapper(struct CCheckSumGuildData* _this, struct CRFWorldDatabase* pkDB, struct CCheckSumGuildData* kSrcValue)
        {
           return CCheckSumGuildDataLoad16_user(_this, pkDB, kSrcValue, CCheckSumGuildDataLoad16_next);
        };
        void CCheckSumGuildDataSetValue18_wrapper(struct CCheckSumGuildData* _this, CCheckSumGuildData::COLUMN_D_TYPE eType, long double dValue)
        {
           CCheckSumGuildDataSetValue18_user(_this, eType, dValue, CCheckSumGuildDataSetValue18_next);
        };
        bool CCheckSumGuildDataUpdate20_wrapper(struct CCheckSumGuildData* _this, struct CRFWorldDatabase* pkDB)
        {
           return CCheckSumGuildDataUpdate20_user(_this, pkDB, CCheckSumGuildDataUpdate20_next);
        };
        
        void CCheckSumGuildDatadtor_CCheckSumGuildData22_wrapper(struct CCheckSumGuildData* _this)
        {
           CCheckSumGuildDatadtor_CCheckSumGuildData22_user(_this, CCheckSumGuildDatadtor_CCheckSumGuildData22_next);
        };
        
        ::std::array<hook_record, 11> CCheckSumGuildData_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf340L,
                (LPVOID *)&CCheckSumGuildDatactor_CCheckSumGuildData2_user,
                (LPVOID *)&CCheckSumGuildDatactor_CCheckSumGuildData2_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDatactor_CCheckSumGuildData2_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumGuildData::*)(unsigned int))&CCheckSumGuildData::ctor_CCheckSumGuildData)
            },
            _hook_record {
                (LPVOID)0x1402c0f70L,
                (LPVOID *)&CCheckSumGuildDataCheckDiff4_user,
                (LPVOID *)&CCheckSumGuildDataCheckDiff4_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataCheckDiff4_wrapper),
                (LPVOID)cast_pointer_function((int(CCheckSumGuildData::*)(struct CRFWorldDatabase*, char*, struct CCheckSumGuildData*))&CCheckSumGuildData::CheckDiff)
            },
            _hook_record {
                (LPVOID)0x1402c11d0L,
                (LPVOID *)&CCheckSumGuildDataDecode6_user,
                (LPVOID *)&CCheckSumGuildDataDecode6_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataDecode6_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumGuildData::*)(long double, long double))&CCheckSumGuildData::Decode)
            },
            _hook_record {
                (LPVOID)0x1402c1160L,
                (LPVOID *)&CCheckSumGuildDataEncode8_user,
                (LPVOID *)&CCheckSumGuildDataEncode8_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataEncode8_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumGuildData::*)(long double, long double))&CCheckSumGuildData::Encode)
            },
            _hook_record {
                (LPVOID)0x1402c1240L,
                (LPVOID *)&CCheckSumGuildDataGetDalant10_user,
                (LPVOID *)&CCheckSumGuildDataGetDalant10_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataGetDalant10_wrapper),
                (LPVOID)cast_pointer_function((long double(CCheckSumGuildData::*)())&CCheckSumGuildData::GetDalant)
            },
            _hook_record {
                (LPVOID)0x1402c12b0L,
                (LPVOID *)&CCheckSumGuildDataGetGold12_user,
                (LPVOID *)&CCheckSumGuildDataGetGold12_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataGetGold12_wrapper),
                (LPVOID)cast_pointer_function((long double(CCheckSumGuildData::*)())&CCheckSumGuildData::GetGold)
            },
            _hook_record {
                (LPVOID)0x1402c1320L,
                (LPVOID *)&CCheckSumGuildDataInsert14_user,
                (LPVOID *)&CCheckSumGuildDataInsert14_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataInsert14_wrapper),
                (LPVOID)cast_pointer_function((bool(CCheckSumGuildData::*)(struct CRFWorldDatabase*))&CCheckSumGuildData::Insert)
            },
            _hook_record {
                (LPVOID)0x1402c0ea0L,
                (LPVOID *)&CCheckSumGuildDataLoad16_user,
                (LPVOID *)&CCheckSumGuildDataLoad16_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataLoad16_wrapper),
                (LPVOID)cast_pointer_function((int(CCheckSumGuildData::*)(struct CRFWorldDatabase*, struct CCheckSumGuildData*))&CCheckSumGuildData::Load)
            },
            _hook_record {
                (LPVOID)0x1402c1380L,
                (LPVOID *)&CCheckSumGuildDataSetValue18_user,
                (LPVOID *)&CCheckSumGuildDataSetValue18_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataSetValue18_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumGuildData::*)(CCheckSumGuildData::COLUMN_D_TYPE, long double))&CCheckSumGuildData::SetValue)
            },
            _hook_record {
                (LPVOID)0x1402c10f0L,
                (LPVOID *)&CCheckSumGuildDataUpdate20_user,
                (LPVOID *)&CCheckSumGuildDataUpdate20_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDataUpdate20_wrapper),
                (LPVOID)cast_pointer_function((bool(CCheckSumGuildData::*)(struct CRFWorldDatabase*))&CCheckSumGuildData::Update)
            },
            _hook_record {
                (LPVOID)0x1401bf370L,
                (LPVOID *)&CCheckSumGuildDatadtor_CCheckSumGuildData22_user,
                (LPVOID *)&CCheckSumGuildDatadtor_CCheckSumGuildData22_next,
                (LPVOID)cast_pointer_function(CCheckSumGuildDatadtor_CCheckSumGuildData22_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumGuildData::*)())&CCheckSumGuildData::dtor_CCheckSumGuildData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
