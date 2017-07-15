#include <CItemUpgradeTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CItemUpgradeTablector_CItemUpgradeTable2_ptr CItemUpgradeTablector_CItemUpgradeTable2_next(nullptr);
        Info::CItemUpgradeTablector_CItemUpgradeTable2_clbk CItemUpgradeTablector_CItemUpgradeTable2_user(nullptr);
        
        Info::CItemUpgradeTableGetRecord4_ptr CItemUpgradeTableGetRecord4_next(nullptr);
        Info::CItemUpgradeTableGetRecord4_clbk CItemUpgradeTableGetRecord4_user(nullptr);
        
        Info::CItemUpgradeTableGetRecordFromRes6_ptr CItemUpgradeTableGetRecordFromRes6_next(nullptr);
        Info::CItemUpgradeTableGetRecordFromRes6_clbk CItemUpgradeTableGetRecordFromRes6_user(nullptr);
        
        Info::CItemUpgradeTableGetSize8_ptr CItemUpgradeTableGetSize8_next(nullptr);
        Info::CItemUpgradeTableGetSize8_clbk CItemUpgradeTableGetSize8_user(nullptr);
        
        Info::CItemUpgradeTableIndexing10_ptr CItemUpgradeTableIndexing10_next(nullptr);
        Info::CItemUpgradeTableIndexing10_clbk CItemUpgradeTableIndexing10_user(nullptr);
        
        Info::CItemUpgradeTableReadRecord12_ptr CItemUpgradeTableReadRecord12_next(nullptr);
        Info::CItemUpgradeTableReadRecord12_clbk CItemUpgradeTableReadRecord12_user(nullptr);
        
        
        Info::CItemUpgradeTabledtor_CItemUpgradeTable17_ptr CItemUpgradeTabledtor_CItemUpgradeTable17_next(nullptr);
        Info::CItemUpgradeTabledtor_CItemUpgradeTable17_clbk CItemUpgradeTabledtor_CItemUpgradeTable17_user(nullptr);
        
        
        void CItemUpgradeTablector_CItemUpgradeTable2_wrapper(struct CItemUpgradeTable* _this)
        {
           CItemUpgradeTablector_CItemUpgradeTable2_user(_this, CItemUpgradeTablector_CItemUpgradeTable2_next);
        };
        struct _ItemUpgrade_fld* CItemUpgradeTableGetRecord4_wrapper(struct CItemUpgradeTable* _this, unsigned int dwIndex)
        {
           return CItemUpgradeTableGetRecord4_user(_this, dwIndex, CItemUpgradeTableGetRecord4_next);
        };
        struct _ItemUpgrade_fld* CItemUpgradeTableGetRecordFromRes6_wrapper(struct CItemUpgradeTable* _this, unsigned int dwResIndex)
        {
           return CItemUpgradeTableGetRecordFromRes6_user(_this, dwResIndex, CItemUpgradeTableGetRecordFromRes6_next);
        };
        int CItemUpgradeTableGetSize8_wrapper(struct CItemUpgradeTable* _this)
        {
           return CItemUpgradeTableGetSize8_user(_this, CItemUpgradeTableGetSize8_next);
        };
        bool CItemUpgradeTableIndexing10_wrapper(struct CItemUpgradeTable* _this, struct CRecordData* pResRec, char* pszErrMsg)
        {
           return CItemUpgradeTableIndexing10_user(_this, pResRec, pszErrMsg, CItemUpgradeTableIndexing10_next);
        };
        bool CItemUpgradeTableReadRecord12_wrapper(struct CItemUpgradeTable* _this, char* szFile, struct CRecordData* pResRec, char* pszErrMsg)
        {
           return CItemUpgradeTableReadRecord12_user(_this, szFile, pResRec, pszErrMsg, CItemUpgradeTableReadRecord12_next);
        };
        
        void CItemUpgradeTabledtor_CItemUpgradeTable17_wrapper(struct CItemUpgradeTable* _this)
        {
           CItemUpgradeTabledtor_CItemUpgradeTable17_user(_this, CItemUpgradeTabledtor_CItemUpgradeTable17_next);
        };
        
        ::std::array<hook_record, 7> CItemUpgradeTable_functions = 
        {
            _hook_record {
                (LPVOID)0x140202bc0L,
                (LPVOID *)&CItemUpgradeTablector_CItemUpgradeTable2_user,
                (LPVOID *)&CItemUpgradeTablector_CItemUpgradeTable2_next,
                (LPVOID)cast_pointer_function(CItemUpgradeTablector_CItemUpgradeTable2_wrapper),
                (LPVOID)cast_pointer_function((void(CItemUpgradeTable::*)())&CItemUpgradeTable::ctor_CItemUpgradeTable)
            },
            _hook_record {
                (LPVOID)0x14007aee0L,
                (LPVOID *)&CItemUpgradeTableGetRecord4_user,
                (LPVOID *)&CItemUpgradeTableGetRecord4_next,
                (LPVOID)cast_pointer_function(CItemUpgradeTableGetRecord4_wrapper),
                (LPVOID)cast_pointer_function((struct _ItemUpgrade_fld*(CItemUpgradeTable::*)(unsigned int))&CItemUpgradeTable::GetRecord)
            },
            _hook_record {
                (LPVOID)0x1400b84e0L,
                (LPVOID *)&CItemUpgradeTableGetRecordFromRes6_user,
                (LPVOID *)&CItemUpgradeTableGetRecordFromRes6_next,
                (LPVOID)cast_pointer_function(CItemUpgradeTableGetRecordFromRes6_wrapper),
                (LPVOID)cast_pointer_function((struct _ItemUpgrade_fld*(CItemUpgradeTable::*)(unsigned int))&CItemUpgradeTable::GetRecordFromRes)
            },
            _hook_record {
                (LPVOID)0x14029d4b0L,
                (LPVOID *)&CItemUpgradeTableGetSize8_user,
                (LPVOID *)&CItemUpgradeTableGetSize8_next,
                (LPVOID)cast_pointer_function(CItemUpgradeTableGetSize8_wrapper),
                (LPVOID)cast_pointer_function((int(CItemUpgradeTable::*)())&CItemUpgradeTable::GetSize)
            },
            _hook_record {
                (LPVOID)0x1402049a0L,
                (LPVOID *)&CItemUpgradeTableIndexing10_user,
                (LPVOID *)&CItemUpgradeTableIndexing10_next,
                (LPVOID)cast_pointer_function(CItemUpgradeTableIndexing10_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemUpgradeTable::*)(struct CRecordData*, char*))&CItemUpgradeTable::Indexing)
            },
            _hook_record {
                (LPVOID)0x140204850L,
                (LPVOID *)&CItemUpgradeTableReadRecord12_user,
                (LPVOID *)&CItemUpgradeTableReadRecord12_next,
                (LPVOID)cast_pointer_function(CItemUpgradeTableReadRecord12_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemUpgradeTable::*)(char*, struct CRecordData*, char*))&CItemUpgradeTable::ReadRecord)
            },
            _hook_record {
                (LPVOID)0x140202c50L,
                (LPVOID *)&CItemUpgradeTabledtor_CItemUpgradeTable17_user,
                (LPVOID *)&CItemUpgradeTabledtor_CItemUpgradeTable17_next,
                (LPVOID)cast_pointer_function(CItemUpgradeTabledtor_CItemUpgradeTable17_wrapper),
                (LPVOID)cast_pointer_function((void(CItemUpgradeTable::*)())&CItemUpgradeTable::dtor_CItemUpgradeTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
