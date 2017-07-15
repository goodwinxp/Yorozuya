#include <CDummyPosTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CDummyPosTablector_CDummyPosTable2_ptr CDummyPosTablector_CDummyPosTable2_next(nullptr);
        Info::CDummyPosTablector_CDummyPosTable2_clbk CDummyPosTablector_CDummyPosTable2_user(nullptr);
        
        Info::CDummyPosTableCheckHeroesDummy4_ptr CDummyPosTableCheckHeroesDummy4_next(nullptr);
        Info::CDummyPosTableCheckHeroesDummy4_clbk CDummyPosTableCheckHeroesDummy4_user(nullptr);
        
        Info::CDummyPosTableFindDummy6_ptr CDummyPosTableFindDummy6_next(nullptr);
        Info::CDummyPosTableFindDummy6_clbk CDummyPosTableFindDummy6_user(nullptr);
        
        Info::CDummyPosTableGetRecord8_ptr CDummyPosTableGetRecord8_next(nullptr);
        Info::CDummyPosTableGetRecord8_clbk CDummyPosTableGetRecord8_user(nullptr);
        
        Info::CDummyPosTableGetRecord10_ptr CDummyPosTableGetRecord10_next(nullptr);
        Info::CDummyPosTableGetRecord10_clbk CDummyPosTableGetRecord10_user(nullptr);
        
        Info::CDummyPosTableGetRecordNum12_ptr CDummyPosTableGetRecordNum12_next(nullptr);
        Info::CDummyPosTableGetRecordNum12_clbk CDummyPosTableGetRecordNum12_user(nullptr);
        
        Info::CDummyPosTableLoadDummyPosition14_ptr CDummyPosTableLoadDummyPosition14_next(nullptr);
        Info::CDummyPosTableLoadDummyPosition14_clbk CDummyPosTableLoadDummyPosition14_user(nullptr);
        
        
        Info::CDummyPosTabledtor_CDummyPosTable19_ptr CDummyPosTabledtor_CDummyPosTable19_next(nullptr);
        Info::CDummyPosTabledtor_CDummyPosTable19_clbk CDummyPosTabledtor_CDummyPosTable19_user(nullptr);
        
        
        void CDummyPosTablector_CDummyPosTable2_wrapper(struct CDummyPosTable* _this)
        {
           CDummyPosTablector_CDummyPosTable2_user(_this, CDummyPosTablector_CDummyPosTable2_next);
        };
        bool CDummyPosTableCheckHeroesDummy4_wrapper(struct CGameObject* pObj, char byRaceCode)
        {
           return CDummyPosTableCheckHeroesDummy4_user(pObj, byRaceCode, CDummyPosTableCheckHeroesDummy4_next);
        };
        bool CDummyPosTableFindDummy6_wrapper(char* pszTextFileName, char* pszDummyCode, struct _dummy_position* pDummyPos)
        {
           return CDummyPosTableFindDummy6_user(pszTextFileName, pszDummyCode, pDummyPos, CDummyPosTableFindDummy6_next);
        };
        struct _dummy_position* CDummyPosTableGetRecord8_wrapper(struct CDummyPosTable* _this, char* szCode)
        {
           return CDummyPosTableGetRecord8_user(_this, szCode, CDummyPosTableGetRecord8_next);
        };
        struct _dummy_position* CDummyPosTableGetRecord10_wrapper(struct CDummyPosTable* _this, int i)
        {
           return CDummyPosTableGetRecord10_user(_this, i, CDummyPosTableGetRecord10_next);
        };
        int CDummyPosTableGetRecordNum12_wrapper(struct CDummyPosTable* _this)
        {
           return CDummyPosTableGetRecordNum12_user(_this, CDummyPosTableGetRecordNum12_next);
        };
        bool CDummyPosTableLoadDummyPosition14_wrapper(struct CDummyPosTable* _this, char* szTextFileName, char* szPrefix)
        {
           return CDummyPosTableLoadDummyPosition14_user(_this, szTextFileName, szPrefix, CDummyPosTableLoadDummyPosition14_next);
        };
        
        void CDummyPosTabledtor_CDummyPosTable19_wrapper(struct CDummyPosTable* _this)
        {
           CDummyPosTabledtor_CDummyPosTable19_user(_this, CDummyPosTabledtor_CDummyPosTable19_next);
        };
        
        ::std::array<hook_record, 8> CDummyPosTable_functions = 
        {
            _hook_record {
                (LPVOID)0x14018a0d0L,
                (LPVOID *)&CDummyPosTablector_CDummyPosTable2_user,
                (LPVOID *)&CDummyPosTablector_CDummyPosTable2_next,
                (LPVOID)cast_pointer_function(CDummyPosTablector_CDummyPosTable2_wrapper),
                (LPVOID)cast_pointer_function((void(CDummyPosTable::*)())&CDummyPosTable::ctor_CDummyPosTable)
            },
            _hook_record {
                (LPVOID)0x14018a010L,
                (LPVOID *)&CDummyPosTableCheckHeroesDummy4_user,
                (LPVOID *)&CDummyPosTableCheckHeroesDummy4_next,
                (LPVOID)cast_pointer_function(CDummyPosTableCheckHeroesDummy4_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(struct CGameObject*, char))&CDummyPosTable::CheckHeroesDummy)
            },
            _hook_record {
                (LPVOID)0x14018a780L,
                (LPVOID *)&CDummyPosTableFindDummy6_user,
                (LPVOID *)&CDummyPosTableFindDummy6_next,
                (LPVOID)cast_pointer_function(CDummyPosTableFindDummy6_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(char*, char*, struct _dummy_position*))&CDummyPosTable::FindDummy)
            },
            _hook_record {
                (LPVOID)0x14018a600L,
                (LPVOID *)&CDummyPosTableGetRecord8_user,
                (LPVOID *)&CDummyPosTableGetRecord8_next,
                (LPVOID)cast_pointer_function(CDummyPosTableGetRecord8_wrapper),
                (LPVOID)cast_pointer_function((struct _dummy_position*(CDummyPosTable::*)(char*))&CDummyPosTable::GetRecord)
            },
            _hook_record {
                (LPVOID)0x14018a740L,
                (LPVOID *)&CDummyPosTableGetRecord10_user,
                (LPVOID *)&CDummyPosTableGetRecord10_next,
                (LPVOID)cast_pointer_function(CDummyPosTableGetRecord10_wrapper),
                (LPVOID)cast_pointer_function((struct _dummy_position*(CDummyPosTable::*)(int))&CDummyPosTable::GetRecord)
            },
            _hook_record {
                (LPVOID)0x14018a5e0L,
                (LPVOID *)&CDummyPosTableGetRecordNum12_user,
                (LPVOID *)&CDummyPosTableGetRecordNum12_next,
                (LPVOID)cast_pointer_function(CDummyPosTableGetRecordNum12_wrapper),
                (LPVOID)cast_pointer_function((int(CDummyPosTable::*)())&CDummyPosTable::GetRecordNum)
            },
            _hook_record {
                (LPVOID)0x14018a180L,
                (LPVOID *)&CDummyPosTableLoadDummyPosition14_user,
                (LPVOID *)&CDummyPosTableLoadDummyPosition14_next,
                (LPVOID)cast_pointer_function(CDummyPosTableLoadDummyPosition14_wrapper),
                (LPVOID)cast_pointer_function((bool(CDummyPosTable::*)(char*, char*))&CDummyPosTable::LoadDummyPosition)
            },
            _hook_record {
                (LPVOID)0x14018a110L,
                (LPVOID *)&CDummyPosTabledtor_CDummyPosTable19_user,
                (LPVOID *)&CDummyPosTabledtor_CDummyPosTable19_next,
                (LPVOID)cast_pointer_function(CDummyPosTabledtor_CDummyPosTable19_wrapper),
                (LPVOID)cast_pointer_function((void(CDummyPosTable::*)())&CDummyPosTable::dtor_CDummyPosTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
