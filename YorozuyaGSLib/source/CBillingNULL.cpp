#include <CBillingNULL.hpp>


START_ATF_NAMESPACE
    void CBillingNULL::Alive(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingNULL*, struct CUserDB*);
        (org_ptr(0x14028dbe0L))(this, pUserDB);
    };
    void CBillingNULL::BillingClose(char* szID)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingNULL*, char*);
        (org_ptr(0x14028dc00L))(this, szID);
    };
    CBillingNULL::CBillingNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingNULL*);
        (org_ptr(0x14028db70L))(this);
    };
    void CBillingNULL::ctor_CBillingNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingNULL*);
        (org_ptr(0x14028db70L))(this);
    };
    void CBillingNULL::Login(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingNULL*, struct CUserDB*);
        (org_ptr(0x14028dbd0L))(this, pUserDB);
    };
    void CBillingNULL::Logout(struct CUserDB* pUserDB)
    {
        using org_ptr = void (WINAPIV*)(struct CBillingNULL*, struct CUserDB*);
        (org_ptr(0x14028dbf0L))(this, pUserDB);
    };
    bool CBillingNULL::SendMsg_Login(char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CBillingNULL*, char*, char*, char*, int16_t, struct _SYSTEMTIME*, int);
        return (org_ptr(0x14028dc10L))(this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime);
    };
    CBillingNULL::~CBillingNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingNULL*);
        (org_ptr(0x14028dca0L))(this);
    };
    void CBillingNULL::dtor_CBillingNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingNULL*);
        (org_ptr(0x14028dca0L))(this);
    };
END_ATF_NAMESPACE
