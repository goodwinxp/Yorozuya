#include <CMonsterSPGroupTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMonsterSPGroupTablector_CMonsterSPGroupTable2_ptr CMonsterSPGroupTablector_CMonsterSPGroupTable2_next(nullptr);
        Info::CMonsterSPGroupTablector_CMonsterSPGroupTable2_clbk CMonsterSPGroupTablector_CMonsterSPGroupTable2_user(nullptr);
        
        Info::CMonsterSPGroupTableCreate4_ptr CMonsterSPGroupTableCreate4_next(nullptr);
        Info::CMonsterSPGroupTableCreate4_clbk CMonsterSPGroupTableCreate4_user(nullptr);
        
        Info::CMonsterSPGroupTableGetRecord6_ptr CMonsterSPGroupTableGetRecord6_next(nullptr);
        Info::CMonsterSPGroupTableGetRecord6_clbk CMonsterSPGroupTableGetRecord6_user(nullptr);
        
        Info::CMonsterSPGroupTableGetRecord8_ptr CMonsterSPGroupTableGetRecord8_next(nullptr);
        Info::CMonsterSPGroupTableGetRecord8_clbk CMonsterSPGroupTableGetRecord8_user(nullptr);
        
        
        Info::CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_ptr CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_next(nullptr);
        Info::CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_clbk CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_user(nullptr);
        
        
        void CMonsterSPGroupTablector_CMonsterSPGroupTable2_wrapper(struct CMonsterSPGroupTable* _this)
        {
           CMonsterSPGroupTablector_CMonsterSPGroupTable2_user(_this, CMonsterSPGroupTablector_CMonsterSPGroupTable2_next);
        };
        bool CMonsterSPGroupTableCreate4_wrapper(struct CMonsterSPGroupTable* _this, struct CRecordData* pMonsterRecordData, struct CRecordData* pMonsterSPRecordData, struct CRecordData* pSkillRecordData, struct CRecordData* pForceRecordData, struct CRecordData* pClassSkillRecordData)
        {
           return CMonsterSPGroupTableCreate4_user(_this, pMonsterRecordData, pMonsterSPRecordData, pSkillRecordData, pForceRecordData, pClassSkillRecordData, CMonsterSPGroupTableCreate4_next);
        };
        struct _monster_sp_group* CMonsterSPGroupTableGetRecord6_wrapper(struct CMonsterSPGroupTable* _this, char* szCode)
        {
           return CMonsterSPGroupTableGetRecord6_user(_this, szCode, CMonsterSPGroupTableGetRecord6_next);
        };
        struct _monster_sp_group* CMonsterSPGroupTableGetRecord8_wrapper(struct CMonsterSPGroupTable* _this, unsigned int dwIndex)
        {
           return CMonsterSPGroupTableGetRecord8_user(_this, dwIndex, CMonsterSPGroupTableGetRecord8_next);
        };
        
        void CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_wrapper(struct CMonsterSPGroupTable* _this)
        {
           CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_user(_this, CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_next);
        };
        
        ::std::array<hook_record, 5> CMonsterSPGroupTable_functions = 
        {
            _hook_record {
                (LPVOID)0x140202470L,
                (LPVOID *)&CMonsterSPGroupTablector_CMonsterSPGroupTable2_user,
                (LPVOID *)&CMonsterSPGroupTablector_CMonsterSPGroupTable2_next,
                (LPVOID)cast_pointer_function(CMonsterSPGroupTablector_CMonsterSPGroupTable2_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterSPGroupTable::*)())&CMonsterSPGroupTable::ctor_CMonsterSPGroupTable)
            },
            _hook_record {
                (LPVOID)0x14015eac0L,
                (LPVOID *)&CMonsterSPGroupTableCreate4_user,
                (LPVOID *)&CMonsterSPGroupTableCreate4_next,
                (LPVOID)cast_pointer_function(CMonsterSPGroupTableCreate4_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterSPGroupTable::*)(struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*))&CMonsterSPGroupTable::Create)
            },
            _hook_record {
                (LPVOID)0x14015ee60L,
                (LPVOID *)&CMonsterSPGroupTableGetRecord6_user,
                (LPVOID *)&CMonsterSPGroupTableGetRecord6_next,
                (LPVOID)cast_pointer_function(CMonsterSPGroupTableGetRecord6_wrapper),
                (LPVOID)cast_pointer_function((struct _monster_sp_group*(CMonsterSPGroupTable::*)(char*))&CMonsterSPGroupTable::GetRecord)
            },
            _hook_record {
                (LPVOID)0x14015ef00L,
                (LPVOID *)&CMonsterSPGroupTableGetRecord8_user,
                (LPVOID *)&CMonsterSPGroupTableGetRecord8_next,
                (LPVOID)cast_pointer_function(CMonsterSPGroupTableGetRecord8_wrapper),
                (LPVOID)cast_pointer_function((struct _monster_sp_group*(CMonsterSPGroupTable::*)(unsigned int))&CMonsterSPGroupTable::GetRecord)
            },
            _hook_record {
                (LPVOID)0x14015ea60L,
                (LPVOID *)&CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_user,
                (LPVOID *)&CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_next,
                (LPVOID)cast_pointer_function(CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterSPGroupTable::*)())&CMonsterSPGroupTable::dtor_CMonsterSPGroupTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
