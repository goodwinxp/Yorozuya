#include <CEventLootTable.hpp>


START_ATF_NAMESPACE
    void CEventLootTable::AddRecord(struct CEventLootTable::_event_drop* pEventDrop)
    {
        using org_ptr = void (WINAPIV*)(struct CEventLootTable*, struct CEventLootTable::_event_drop*);
        (org_ptr(0x140203e70L))(this, pEventDrop);
    };
    CEventLootTable::CEventLootTable()
    {
        using org_ptr = void (WINAPIV*)(struct CEventLootTable*);
        (org_ptr(0x140202640L))(this);
    };
    void CEventLootTable::ctor_CEventLootTable()
    {
        using org_ptr = void (WINAPIV*)(struct CEventLootTable*);
        (org_ptr(0x140202640L))(this);
    };
    struct CEventLootTable::_event_drop* CEventLootTable::GetRecord(char* szRecordCode)
    {
        using org_ptr = struct CEventLootTable::_event_drop* (WINAPIV*)(struct CEventLootTable*, char*);
        return (org_ptr(0x140136c80L))(this, szRecordCode);
    };
    bool CEventLootTable::ReadRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CEventLootTable*);
        return (org_ptr(0x140203ac0L))(this);
    };
    CEventLootTable::~CEventLootTable()
    {
        using org_ptr = void (WINAPIV*)(struct CEventLootTable*);
        (org_ptr(0x1402026f0L))(this);
    };
    void CEventLootTable::dtor_CEventLootTable()
    {
        using org_ptr = void (WINAPIV*)(struct CEventLootTable*);
        (org_ptr(0x1402026f0L))(this);
    };
    CEventLootTable::_event_drop::_event_drop()
    {
        using org_ptr = void (WINAPIV*)(struct CEventLootTable::_event_drop*);
        (org_ptr(0x140203e10L))(this);
    };
    void CEventLootTable::_event_drop::ctor__event_drop()
    {
        using org_ptr = void (WINAPIV*)(struct CEventLootTable::_event_drop*);
        (org_ptr(0x140203e10L))(this);
    };
END_ATF_NAMESPACE
