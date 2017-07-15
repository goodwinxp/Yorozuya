#include <CBillingJP.hpp>


START_ATF_NAMESPACE
    void CBillingJP::Alive(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingJP*, struct CUserDB*);
        (org_ptr(0x14028ea00L))(this, pUserDB);
    };
    CBillingJP::CBillingJP()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingJP*);
        (org_ptr(0x14022d760L))(this);
    };
    void CBillingJP::ctor_CBillingJP()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingJP*);
        (org_ptr(0x14022d760L))(this);
    };
    void CBillingJP::Login(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingJP*, struct CUserDB*);
        (org_ptr(0x14028e910L))(this, pUserDB);
    };
    void CBillingJP::Logout(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingJP*, struct CUserDB*);
        (org_ptr(0x14028eb70L))(this, pUserDB);
    };
    bool CBillingJP::SendMsg_Login(char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CBillingJP*, char*, char*, char*, int16_t, struct _SYSTEMTIME*, int);
        return (org_ptr(0x14028ecc0L))(this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime);
    };
    CBillingJP::~CBillingJP()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingJP*);
        (org_ptr(0x14022d830L))(this);
    };
    void CBillingJP::dtor_CBillingJP()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingJP*);
        (org_ptr(0x14022d830L))(this);
    };
END_ATF_NAMESPACE
