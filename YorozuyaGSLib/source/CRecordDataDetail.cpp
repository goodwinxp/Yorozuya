#include <CRecordDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRecordDatactor_CRecordData2_ptr CRecordDatactor_CRecordData2_next(nullptr);
        Info::CRecordDatactor_CRecordData2_clbk CRecordDatactor_CRecordData2_user(nullptr);
        
        Info::CRecordDataFileSize4_ptr CRecordDataFileSize4_next(nullptr);
        Info::CRecordDataFileSize4_clbk CRecordDataFileSize4_user(nullptr);
        
        Info::CRecordDataGetRecord6_ptr CRecordDataGetRecord6_next(nullptr);
        Info::CRecordDataGetRecord6_clbk CRecordDataGetRecord6_user(nullptr);
        
        Info::CRecordDataGetRecord8_ptr CRecordDataGetRecord8_next(nullptr);
        Info::CRecordDataGetRecord8_clbk CRecordDataGetRecord8_user(nullptr);
        
        Info::CRecordDataGetRecord10_ptr CRecordDataGetRecord10_next(nullptr);
        Info::CRecordDataGetRecord10_clbk CRecordDataGetRecord10_user(nullptr);
        
        Info::CRecordDataGetRecordByHash12_ptr CRecordDataGetRecordByHash12_next(nullptr);
        Info::CRecordDataGetRecordByHash12_clbk CRecordDataGetRecordByHash12_user(nullptr);
        
        Info::CRecordDataGetRecordNum14_ptr CRecordDataGetRecordNum14_next(nullptr);
        Info::CRecordDataGetRecordNum14_clbk CRecordDataGetRecordNum14_user(nullptr);
        
        Info::CRecordDataIsTableOpen16_ptr CRecordDataIsTableOpen16_next(nullptr);
        Info::CRecordDataIsTableOpen16_clbk CRecordDataIsTableOpen16_user(nullptr);
        
        Info::CRecordDataLoadRecordData18_ptr CRecordDataLoadRecordData18_next(nullptr);
        Info::CRecordDataLoadRecordData18_clbk CRecordDataLoadRecordData18_user(nullptr);
        
        Info::CRecordDataLoadRecordHeader20_ptr CRecordDataLoadRecordHeader20_next(nullptr);
        Info::CRecordDataLoadRecordHeader20_clbk CRecordDataLoadRecordHeader20_user(nullptr);
        
        Info::CRecordDataMakeHash22_ptr CRecordDataMakeHash22_next(nullptr);
        Info::CRecordDataMakeHash22_clbk CRecordDataMakeHash22_user(nullptr);
        
        Info::CRecordDataMakeHashTable24_ptr CRecordDataMakeHashTable24_next(nullptr);
        Info::CRecordDataMakeHashTable24_clbk CRecordDataMakeHashTable24_user(nullptr);
        
        Info::CRecordDataReadRecord26_ptr CRecordDataReadRecord26_next(nullptr);
        Info::CRecordDataReadRecord26_clbk CRecordDataReadRecord26_user(nullptr);
        
        Info::CRecordDataReadRecord_Ex28_ptr CRecordDataReadRecord_Ex28_next(nullptr);
        Info::CRecordDataReadRecord_Ex28_clbk CRecordDataReadRecord_Ex28_user(nullptr);
        
        
        Info::CRecordDatadtor_CRecordData34_ptr CRecordDatadtor_CRecordData34_next(nullptr);
        Info::CRecordDatadtor_CRecordData34_clbk CRecordDatadtor_CRecordData34_user(nullptr);
        
        
        void CRecordDatactor_CRecordData2_wrapper(struct CRecordData* _this)
        {
           CRecordDatactor_CRecordData2_user(_this, CRecordDatactor_CRecordData2_next);
        };
        unsigned int CRecordDataFileSize4_wrapper(struct CRecordData* _this, char* szFile)
        {
           return CRecordDataFileSize4_user(_this, szFile, CRecordDataFileSize4_next);
        };
        struct _base_fld* CRecordDataGetRecord6_wrapper(struct CRecordData* _this, char* szRecordCode)
        {
           return CRecordDataGetRecord6_user(_this, szRecordCode, CRecordDataGetRecord6_next);
        };
        struct _base_fld* CRecordDataGetRecord8_wrapper(struct CRecordData* _this, char* szRecordCode, int nCompareLen)
        {
           return CRecordDataGetRecord8_user(_this, szRecordCode, nCompareLen, CRecordDataGetRecord8_next);
        };
        struct _base_fld* CRecordDataGetRecord10_wrapper(struct CRecordData* _this, int n)
        {
           return CRecordDataGetRecord10_user(_this, n, CRecordDataGetRecord10_next);
        };
        struct _base_fld* CRecordDataGetRecordByHash12_wrapper(struct CRecordData* _this, char* szRecordCode, int offset, int len)
        {
           return CRecordDataGetRecordByHash12_user(_this, szRecordCode, offset, len, CRecordDataGetRecordByHash12_next);
        };
        int CRecordDataGetRecordNum14_wrapper(struct CRecordData* _this)
        {
           return CRecordDataGetRecordNum14_user(_this, CRecordDataGetRecordNum14_next);
        };
        bool CRecordDataIsTableOpen16_wrapper(struct CRecordData* _this)
        {
           return CRecordDataIsTableOpen16_user(_this, CRecordDataIsTableOpen16_next);
        };
        bool CRecordDataLoadRecordData18_wrapper(struct CRecordData* _this, void* hFile, char* pszErrMsg)
        {
           return CRecordDataLoadRecordData18_user(_this, hFile, pszErrMsg, CRecordDataLoadRecordData18_next);
        };
        bool CRecordDataLoadRecordHeader20_wrapper(struct CRecordData* _this, void* hFile, char* pszErrMsg)
        {
           return CRecordDataLoadRecordHeader20_user(_this, hFile, pszErrMsg, CRecordDataLoadRecordHeader20_next);
        };
        unsigned int CRecordDataMakeHash22_wrapper(char* p, int len)
        {
           return CRecordDataMakeHash22_user(p, len, CRecordDataMakeHash22_next);
        };
        bool CRecordDataMakeHashTable24_wrapper(struct CRecordData* _this, int offset, int len, char* pszErrMsg)
        {
           return CRecordDataMakeHashTable24_user(_this, offset, len, pszErrMsg, CRecordDataMakeHashTable24_next);
        };
        bool CRecordDataReadRecord26_wrapper(struct CRecordData* _this, char* szFile, unsigned int dwStructSize, char* pszErrMsg)
        {
           return CRecordDataReadRecord26_user(_this, szFile, dwStructSize, pszErrMsg, CRecordDataReadRecord26_next);
        };
        bool CRecordDataReadRecord_Ex28_wrapper(struct CRecordData* _this, char* szFile1, char* szFile2, unsigned int dwStructSize, char* pszErrMsg)
        {
           return CRecordDataReadRecord_Ex28_user(_this, szFile1, szFile2, dwStructSize, pszErrMsg, CRecordDataReadRecord_Ex28_next);
        };
        
        void CRecordDatadtor_CRecordData34_wrapper(struct CRecordData* _this)
        {
           CRecordDatadtor_CRecordData34_user(_this, CRecordDatadtor_CRecordData34_next);
        };
        
        ::std::array<hook_record, 15> CRecordData_functions = 
        {
            _hook_record {
                (LPVOID)0x14007f490L,
                (LPVOID *)&CRecordDatactor_CRecordData2_user,
                (LPVOID *)&CRecordDatactor_CRecordData2_next,
                (LPVOID)cast_pointer_function(CRecordDatactor_CRecordData2_wrapper),
                (LPVOID)cast_pointer_function((void(CRecordData::*)())&CRecordData::ctor_CRecordData)
            },
            _hook_record {
                (LPVOID)0x1400441c0L,
                (LPVOID *)&CRecordDataFileSize4_user,
                (LPVOID *)&CRecordDataFileSize4_next,
                (LPVOID)cast_pointer_function(CRecordDataFileSize4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CRecordData::*)(char*))&CRecordData::FileSize)
            },
            _hook_record {
                (LPVOID)0x140044b60L,
                (LPVOID *)&CRecordDataGetRecord6_user,
                (LPVOID *)&CRecordDataGetRecord6_next,
                (LPVOID)cast_pointer_function(CRecordDataGetRecord6_wrapper),
                (LPVOID)cast_pointer_function((struct _base_fld*(CRecordData::*)(char*))&CRecordData::GetRecord)
            },
            _hook_record {
                (LPVOID)0x14008f410L,
                (LPVOID *)&CRecordDataGetRecord8_user,
                (LPVOID *)&CRecordDataGetRecord8_next,
                (LPVOID)cast_pointer_function(CRecordDataGetRecord8_wrapper),
                (LPVOID)cast_pointer_function((struct _base_fld*(CRecordData::*)(char*, int))&CRecordData::GetRecord)
            },
            _hook_record {
                (LPVOID)0x1400347c0L,
                (LPVOID *)&CRecordDataGetRecord10_user,
                (LPVOID *)&CRecordDataGetRecord10_next,
                (LPVOID)cast_pointer_function(CRecordDataGetRecord10_wrapper),
                (LPVOID)cast_pointer_function((struct _base_fld*(CRecordData::*)(int))&CRecordData::GetRecord)
            },
            _hook_record {
                (LPVOID)0x14008f2f0L,
                (LPVOID *)&CRecordDataGetRecordByHash12_user,
                (LPVOID *)&CRecordDataGetRecordByHash12_next,
                (LPVOID)cast_pointer_function(CRecordDataGetRecordByHash12_wrapper),
                (LPVOID)cast_pointer_function((struct _base_fld*(CRecordData::*)(char*, int, int))&CRecordData::GetRecordByHash)
            },
            _hook_record {
                (LPVOID)0x140044b00L,
                (LPVOID *)&CRecordDataGetRecordNum14_user,
                (LPVOID *)&CRecordDataGetRecordNum14_next,
                (LPVOID)cast_pointer_function(CRecordDataGetRecordNum14_wrapper),
                (LPVOID)cast_pointer_function((int(CRecordData::*)())&CRecordData::GetRecordNum)
            },
            _hook_record {
                (LPVOID)0x140204b60L,
                (LPVOID *)&CRecordDataIsTableOpen16_user,
                (LPVOID *)&CRecordDataIsTableOpen16_next,
                (LPVOID)cast_pointer_function(CRecordDataIsTableOpen16_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecordData::*)())&CRecordData::IsTableOpen)
            },
            _hook_record {
                (LPVOID)0x140044770L,
                (LPVOID *)&CRecordDataLoadRecordData18_user,
                (LPVOID *)&CRecordDataLoadRecordData18_next,
                (LPVOID)cast_pointer_function(CRecordDataLoadRecordData18_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecordData::*)(void*, char*))&CRecordData::LoadRecordData)
            },
            _hook_record {
                (LPVOID)0x140044450L,
                (LPVOID *)&CRecordDataLoadRecordHeader20_user,
                (LPVOID *)&CRecordDataLoadRecordHeader20_next,
                (LPVOID)cast_pointer_function(CRecordDataLoadRecordHeader20_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecordData::*)(void*, char*))&CRecordData::LoadRecordHeader)
            },
            _hook_record {
                (LPVOID)0x1400442b0L,
                (LPVOID *)&CRecordDataMakeHash22_user,
                (LPVOID *)&CRecordDataMakeHash22_next,
                (LPVOID)cast_pointer_function(CRecordDataMakeHash22_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)(char*, int))&CRecordData::MakeHash)
            },
            _hook_record {
                (LPVOID)0x140044020L,
                (LPVOID *)&CRecordDataMakeHashTable24_user,
                (LPVOID *)&CRecordDataMakeHashTable24_next,
                (LPVOID)cast_pointer_function(CRecordDataMakeHashTable24_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecordData::*)(int, int, char*))&CRecordData::MakeHashTable)
            },
            _hook_record {
                (LPVOID)0x140043d60L,
                (LPVOID *)&CRecordDataReadRecord26_user,
                (LPVOID *)&CRecordDataReadRecord26_next,
                (LPVOID)cast_pointer_function(CRecordDataReadRecord26_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecordData::*)(char*, unsigned int, char*))&CRecordData::ReadRecord)
            },
            _hook_record {
                (LPVOID)0x1402af040L,
                (LPVOID *)&CRecordDataReadRecord_Ex28_user,
                (LPVOID *)&CRecordDataReadRecord_Ex28_next,
                (LPVOID)cast_pointer_function(CRecordDataReadRecord_Ex28_wrapper),
                (LPVOID)cast_pointer_function((bool(CRecordData::*)(char*, char*, unsigned int, char*))&CRecordData::ReadRecord_Ex)
            },
            _hook_record {
                (LPVOID)0x14007f550L,
                (LPVOID *)&CRecordDatadtor_CRecordData34_user,
                (LPVOID *)&CRecordDatadtor_CRecordData34_next,
                (LPVOID)cast_pointer_function(CRecordDatadtor_CRecordData34_wrapper),
                (LPVOID)cast_pointer_function((void(CRecordData::*)())&CRecordData::dtor_CRecordData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
