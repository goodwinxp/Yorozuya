#include <CMonsterEventRespawn.hpp>


START_ATF_NAMESPACE
    CMonsterEventRespawn::CMonsterEventRespawn()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventRespawn*);
        (org_ptr(0x1402a5d40L))(this);
    };
    void CMonsterEventRespawn::ctor_CMonsterEventRespawn()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventRespawn*);
        (org_ptr(0x1402a5d40L))(this);
    };
    void CMonsterEventRespawn::CheckRespawnEvent()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventRespawn*);
        (org_ptr(0x1402a6fe0L))(this);
    };
    bool CMonsterEventRespawn::SetEventRespawn()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterEventRespawn*);
        return (org_ptr(0x1402a5de0L))(this);
    };
    bool CMonsterEventRespawn::StartRespawnEvent(char* pszEventCode, char* pwszErrCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterEventRespawn*, char*, char*);
        return (org_ptr(0x1402a6b90L))(this, pszEventCode, pwszErrCode);
    };
    bool CMonsterEventRespawn::StopRespawnEvent(char* pszEventCode, char* pwszErrCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterEventRespawn*, char*, char*);
        return (org_ptr(0x1402a6e50L))(this, pszEventCode, pwszErrCode);
    };
    CMonsterEventRespawn::~CMonsterEventRespawn()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventRespawn*);
        (org_ptr(0x1402a5dc0L))(this);
    };
    void CMonsterEventRespawn::dtor_CMonsterEventRespawn()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterEventRespawn*);
        (org_ptr(0x1402a5dc0L))(this);
    };
END_ATF_NAMESPACE
