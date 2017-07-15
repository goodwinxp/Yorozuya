#include <CMonsterEventSet.hpp>


START_ATF_NAMESPACE
    CMonsterEventSet::CMonsterEventSet()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventSet*);
        (org_ptr(0x1402a7920L))(this);
    };
    void CMonsterEventSet::ctor_CMonsterEventSet()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventSet*);
        (org_ptr(0x1402a7920L))(this);
    };
    void CMonsterEventSet::CheckEventSetRespawn()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventSet*);
        (org_ptr(0x1402a8a90L))(this);
    };
    struct _event_set* CMonsterEventSet::GetEmptyEventSet()
    {
        using org_ptr = struct _event_set* (WINAPIV*)(struct CMonsterEventSet*);
        return (org_ptr(0x1402a8fa0L))(this);
    };
    struct _event_set_looting* CMonsterEventSet::GetEvenSetLooting(char* pszCode)
    {
        using org_ptr = struct _event_set_looting* (WINAPIV*)(struct CMonsterEventSet*, char*);
        return (org_ptr(0x1402a90b0L))(this, pszCode);
    };
    struct _event_set::_monster_set* CMonsterEventSet::GetMonsterSet(struct _event_set* pEventSet)
    {
        using org_ptr = struct _event_set::_monster_set* (WINAPIV*)(struct CMonsterEventSet*, struct _event_set*);
        return (org_ptr(0x1402a9030L))(this, pEventSet);
    };
    bool CMonsterEventSet::IsINIFileChanged(char* pszFileName, struct _FILETIME ftCurr)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterEventSet*, char*, struct _FILETIME);
        return (org_ptr(0x1402a9150L))(this, pszFileName, ftCurr);
    };
    bool CMonsterEventSet::LoadEventSet(char* pwszErrCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterEventSet*, char*);
        return (org_ptr(0x1402a79e0L))(this, pwszErrCode);
    };
    bool CMonsterEventSet::LoadEventSetLooting()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterEventSet*);
        return (org_ptr(0x1402a91e0L))(this);
    };
    bool CMonsterEventSet::StartEventSet(char* pszEventCode, char* pwszErrCode, struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterEventSet*, char*, char*, struct CPlayer*);
        return (org_ptr(0x1402a8210L))(this, pszEventCode, pwszErrCode, pOne);
    };
    bool CMonsterEventSet::StopEventSet(char* pszEventCode, char* pwszErrCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterEventSet*, char*, char*);
        return (org_ptr(0x1402a8870L))(this, pszEventCode, pwszErrCode);
    };
    CMonsterEventSet::~CMonsterEventSet()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventSet*);
        (org_ptr(0x1402a79c0L))(this);
    };
    void CMonsterEventSet::dtor_CMonsterEventSet()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventSet*);
        (org_ptr(0x1402a79c0L))(this);
    };
END_ATF_NAMESPACE
