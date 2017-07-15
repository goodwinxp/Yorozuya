#include <CBilling.hpp>


START_ATF_NAMESPACE
    void CBilling::Alive(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, struct CUserDB*);
        (org_ptr(0x14028cba0L))(this, pUserDB);
    };
    void CBilling::BillingClose(char* szID)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, char*);
        (org_ptr(0x14028cea0L))(this, szID);
    };
    CBilling::CBilling()
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*);
        (org_ptr(0x14022bad0L))(this);
    };
    void CBilling::ctor_CBilling()
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*);
        (org_ptr(0x14022bad0L))(this);
    };
    void CBilling::Change_BillingType(char* szID, char* szCMSCode, int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate, char byReason)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, char*, char*, int16_t, int, struct _SYSTEMTIME*, char);
        (org_ptr(0x14028d170L))(this, szID, szCMSCode, iType, lRemainTime, pstEndDate, byReason);
    };
    void CBilling::Change_Primium(char* szID, bool bResult)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, char*, bool);
        (org_ptr(0x1401c4370L))(this, szID, bResult);
    };
    void CBilling::Expire_IPOverflow(char* szID)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, char*);
        (org_ptr(0x1401c42b0L))(this, szID);
    };
    void CBilling::Expire_PCBang(char* szCMS)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, char*);
        (org_ptr(0x14028d2b0L))(this, szCMS);
    };
    void CBilling::Expire_Personal(char* szID)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, char*);
        (org_ptr(0x1401c41e0L))(this, szID);
    };
    void CBilling::Login(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, struct CUserDB*);
        (org_ptr(0x14028cac0L))(this, pUserDB);
    };
    void CBilling::Logout(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, struct CUserDB*);
        (org_ptr(0x14028cd20L))(this, pUserDB);
    };
    void CBilling::Remaintime_PCBang(char* szCMSCode, int16_t iType, int lRemaintime, struct _SYSTEMTIME* pstEndDate)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, char*, int16_t, int, struct _SYSTEMTIME*);
        (org_ptr(0x14028d040L))(this, szCMSCode, iType, lRemaintime, pstEndDate);
    };
    void CBilling::Remaintime_Personal(char* szID, int16_t iType, int lRemaintime, struct _SYSTEMTIME* pstEndDate)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, char*, int16_t, int, struct _SYSTEMTIME*);
        (org_ptr(0x14028cf50L))(this, szID, iType, lRemaintime, pstEndDate);
    };
    void CBilling::SendMsg_CurAllUserLogin()
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*);
        (org_ptr(0x14028d610L))(this);
    };
    bool CBilling::SendMsg_Login(char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CBilling*, char*, char*, char*, int16_t, struct _SYSTEMTIME*, int);
        return (org_ptr(0x14028d3c0L))(this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime);
    };
    void CBilling::SendMsg_StartBilling()
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*);
        (org_ptr(0x14028d550L))(this);
    };
    void CBilling::SendMsg_ZoneAliveCheck(unsigned int dwData)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, unsigned int);
        (org_ptr(0x14028d760L))(this, dwData);
    };
    void CBilling::SetOper(bool bOper)
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*, bool);
        (org_ptr(0x14028ca50L))(this, bOper);
    };
    void CBilling::Start()
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*);
        (org_ptr(0x14028ca70L))(this);
    };
    CBilling::~CBilling()
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*);
        (org_ptr(0x14022bb70L))(this);
    };
    void CBilling::dtor_CBilling()
    {
        using org_ptr = void (WINAPIV*)(struct CBilling*);
        (org_ptr(0x14022bb70L))(this);
    };
END_ATF_NAMESPACE
