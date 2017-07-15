#include <CBillingID.hpp>


START_ATF_NAMESPACE
    void CBillingID::Alive(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingID*, struct CUserDB*);
        (org_ptr(0x14028e1e0L))(this, pUserDB);
    };
    void CBillingID::BillingClose(char* szID)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingID*, char*);
        (org_ptr(0x14028e4a0L))(this, szID);
    };
    CBillingID::CBillingID()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingID*);
        (org_ptr(0x14022cdd0L))(this);
    };
    void CBillingID::ctor_CBillingID()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingID*);
        (org_ptr(0x14022cdd0L))(this);
    };
    void CBillingID::Login(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingID*, struct CUserDB*);
        (org_ptr(0x14028e0f0L))(this, pUserDB);
    };
    void CBillingID::Logout(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingID*, struct CUserDB*);
        (org_ptr(0x14028e350L))(this, pUserDB);
    };
    bool CBillingID::SendMsg_Login(char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CBillingID*, char*, char*, char*, int16_t, struct _SYSTEMTIME*, int);
        return (org_ptr(0x14028e600L))(this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime);
    };
    CBillingID::~CBillingID()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingID*);
        (org_ptr(0x14022cea0L))(this);
    };
    void CBillingID::dtor_CBillingID()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingID*);
        (org_ptr(0x14022cea0L))(this);
    };
END_ATF_NAMESPACE
