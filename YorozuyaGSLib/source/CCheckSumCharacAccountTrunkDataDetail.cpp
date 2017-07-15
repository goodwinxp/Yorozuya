#include <CCheckSumCharacAccountTrunkDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_ptr CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_clbk CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataCheckDiff4_ptr CCheckSumCharacAccountTrunkDataCheckDiff4_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataCheckDiff4_clbk CCheckSumCharacAccountTrunkDataCheckDiff4_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataDecode6_ptr CCheckSumCharacAccountTrunkDataDecode6_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataDecode6_clbk CCheckSumCharacAccountTrunkDataDecode6_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataEncode8_ptr CCheckSumCharacAccountTrunkDataEncode8_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataEncode8_clbk CCheckSumCharacAccountTrunkDataEncode8_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataInsertCharacData10_ptr CCheckSumCharacAccountTrunkDataInsertCharacData10_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataInsertCharacData10_clbk CCheckSumCharacAccountTrunkDataInsertCharacData10_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataInsertTrunkData12_ptr CCheckSumCharacAccountTrunkDataInsertTrunkData12_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataInsertTrunkData12_clbk CCheckSumCharacAccountTrunkDataInsertTrunkData12_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataLoad14_ptr CCheckSumCharacAccountTrunkDataLoad14_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataLoad14_clbk CCheckSumCharacAccountTrunkDataLoad14_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataSetValue16_ptr CCheckSumCharacAccountTrunkDataSetValue16_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataSetValue16_clbk CCheckSumCharacAccountTrunkDataSetValue16_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataSetValue18_ptr CCheckSumCharacAccountTrunkDataSetValue18_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataSetValue18_clbk CCheckSumCharacAccountTrunkDataSetValue18_user(nullptr);
        
        Info::CCheckSumCharacAccountTrunkDataUpdate20_ptr CCheckSumCharacAccountTrunkDataUpdate20_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDataUpdate20_clbk CCheckSumCharacAccountTrunkDataUpdate20_user(nullptr);
        
        
        Info::CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_ptr CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_next(nullptr);
        Info::CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_clbk CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_user(nullptr);
        
        
        void CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_wrapper(struct CCheckSumCharacAccountTrunkData* _this, unsigned int dwSerial, unsigned int dwAccountSerial, char byRace)
        {
           CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_user(_this, dwSerial, dwAccountSerial, byRace, CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_next);
        };
        int CCheckSumCharacAccountTrunkDataCheckDiff4_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB, char* wszName, struct CCheckSumCharacAccountTrunkData* kSrcValue)
        {
           return CCheckSumCharacAccountTrunkDataCheckDiff4_user(_this, pkDB, wszName, kSrcValue, CCheckSumCharacAccountTrunkDataCheckDiff4_next);
        };
        void CCheckSumCharacAccountTrunkDataDecode6_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct _AVATOR_DATA* pAvator)
        {
           CCheckSumCharacAccountTrunkDataDecode6_user(_this, pAvator, CCheckSumCharacAccountTrunkDataDecode6_next);
        };
        void CCheckSumCharacAccountTrunkDataEncode8_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct _AVATOR_DATA* pAvator)
        {
           CCheckSumCharacAccountTrunkDataEncode8_user(_this, pAvator, CCheckSumCharacAccountTrunkDataEncode8_next);
        };
        bool CCheckSumCharacAccountTrunkDataInsertCharacData10_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB)
        {
           return CCheckSumCharacAccountTrunkDataInsertCharacData10_user(_this, pkDB, CCheckSumCharacAccountTrunkDataInsertCharacData10_next);
        };
        bool CCheckSumCharacAccountTrunkDataInsertTrunkData12_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB)
        {
           return CCheckSumCharacAccountTrunkDataInsertTrunkData12_user(_this, pkDB, CCheckSumCharacAccountTrunkDataInsertTrunkData12_next);
        };
        int CCheckSumCharacAccountTrunkDataLoad14_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB, struct CCheckSumCharacAccountTrunkData* kSrcValue)
        {
           return CCheckSumCharacAccountTrunkDataLoad14_user(_this, pkDB, kSrcValue, CCheckSumCharacAccountTrunkDataLoad14_next);
        };
        void CCheckSumCharacAccountTrunkDataSetValue16_wrapper(struct CCheckSumCharacAccountTrunkData* _this, CCheckSumCharacAccountTrunkData::COLUMN_DW_TYPE eType, unsigned int dwValue)
        {
           CCheckSumCharacAccountTrunkDataSetValue16_user(_this, eType, dwValue, CCheckSumCharacAccountTrunkDataSetValue16_next);
        };
        void CCheckSumCharacAccountTrunkDataSetValue18_wrapper(struct CCheckSumCharacAccountTrunkData* _this, CCheckSumCharacAccountTrunkData::COLUMN_D_TYPE eType, long double dValue)
        {
           CCheckSumCharacAccountTrunkDataSetValue18_user(_this, eType, dValue, CCheckSumCharacAccountTrunkDataSetValue18_next);
        };
        bool CCheckSumCharacAccountTrunkDataUpdate20_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB)
        {
           return CCheckSumCharacAccountTrunkDataUpdate20_user(_this, pkDB, CCheckSumCharacAccountTrunkDataUpdate20_next);
        };
        
        void CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_wrapper(struct CCheckSumCharacAccountTrunkData* _this)
        {
           CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_user(_this, CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_next);
        };
        
        ::std::array<hook_record, 11> CCheckSumCharacAccountTrunkData_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c06a0L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(unsigned int, unsigned int, char))&CCheckSumCharacAccountTrunkData::ctor_CCheckSumCharacAccountTrunkData)
            },
            _hook_record {
                (LPVOID)0x1402c08e0L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataCheckDiff4_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataCheckDiff4_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataCheckDiff4_wrapper),
                (LPVOID)cast_pointer_function((int(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*, char*, struct CCheckSumCharacAccountTrunkData*))&CCheckSumCharacAccountTrunkData::CheckDiff)
            },
            _hook_record {
                (LPVOID)0x1402c0c60L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataDecode6_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataDecode6_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataDecode6_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(struct _AVATOR_DATA*))&CCheckSumCharacAccountTrunkData::Decode)
            },
            _hook_record {
                (LPVOID)0x1402c0c00L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataEncode8_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataEncode8_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataEncode8_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(struct _AVATOR_DATA*))&CCheckSumCharacAccountTrunkData::Encode)
            },
            _hook_record {
                (LPVOID)0x1402c0cc0L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataInsertCharacData10_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataInsertCharacData10_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataInsertCharacData10_wrapper),
                (LPVOID)cast_pointer_function((bool(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*))&CCheckSumCharacAccountTrunkData::InsertCharacData)
            },
            _hook_record {
                (LPVOID)0x1402c0d20L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataInsertTrunkData12_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataInsertTrunkData12_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataInsertTrunkData12_wrapper),
                (LPVOID)cast_pointer_function((bool(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*))&CCheckSumCharacAccountTrunkData::InsertTrunkData)
            },
            _hook_record {
                (LPVOID)0x1402c0750L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataLoad14_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataLoad14_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataLoad14_wrapper),
                (LPVOID)cast_pointer_function((int(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*, struct CCheckSumCharacAccountTrunkData*))&CCheckSumCharacAccountTrunkData::Load)
            },
            _hook_record {
                (LPVOID)0x1402c0e20L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataSetValue16_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataSetValue16_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataSetValue16_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(CCheckSumCharacAccountTrunkData::COLUMN_DW_TYPE, unsigned int))&CCheckSumCharacAccountTrunkData::SetValue)
            },
            _hook_record {
                (LPVOID)0x1402c0e60L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataSetValue18_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataSetValue18_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataSetValue18_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(CCheckSumCharacAccountTrunkData::COLUMN_D_TYPE, long double))&CCheckSumCharacAccountTrunkData::SetValue)
            },
            _hook_record {
                (LPVOID)0x1402c0b60L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataUpdate20_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDataUpdate20_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataUpdate20_wrapper),
                (LPVOID)cast_pointer_function((bool(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*))&CCheckSumCharacAccountTrunkData::Update)
            },
            _hook_record {
                (LPVOID)0x1402c0740L,
                (LPVOID *)&CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_user,
                (LPVOID *)&CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_next,
                (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_wrapper),
                (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)())&CCheckSumCharacAccountTrunkData::dtor_CCheckSumCharacAccountTrunkData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
