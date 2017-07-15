#include <CMonsterSPGroupTable.hpp>


START_ATF_NAMESPACE
    CMonsterSPGroupTable::CMonsterSPGroupTable()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
        (org_ptr(0x140202470L))(this);
    };
    void CMonsterSPGroupTable::ctor_CMonsterSPGroupTable()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
        (org_ptr(0x140202470L))(this);
    };
    bool CMonsterSPGroupTable::Create(struct CRecordData* pMonsterRecordData, struct CRecordData* pMonsterSPRecordData, struct CRecordData* pSkillRecordData, struct CRecordData* pForceRecordData, struct CRecordData* pClassSkillRecordData)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterSPGroupTable*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*);
        return (org_ptr(0x14015eac0L))(this, pMonsterRecordData, pMonsterSPRecordData, pSkillRecordData, pForceRecordData, pClassSkillRecordData);
    };
    struct _monster_sp_group* CMonsterSPGroupTable::GetRecord(char* szCode)
    {
        using org_ptr = struct _monster_sp_group* (WINAPIV*)(struct CMonsterSPGroupTable*, char*);
        return (org_ptr(0x14015ee60L))(this, szCode);
    };
    struct _monster_sp_group* CMonsterSPGroupTable::GetRecord(unsigned int dwIndex)
    {
        using org_ptr = struct _monster_sp_group* (WINAPIV*)(struct CMonsterSPGroupTable*, unsigned int);
        return (org_ptr(0x14015ef00L))(this, dwIndex);
    };
    CMonsterSPGroupTable::~CMonsterSPGroupTable()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
        (org_ptr(0x14015ea60L))(this);
    };
    void CMonsterSPGroupTable::dtor_CMonsterSPGroupTable()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
        (org_ptr(0x14015ea60L))(this);
    };
END_ATF_NAMESPACE
