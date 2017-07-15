#include <cStaticMember_Player.hpp>


START_ATF_NAMESPACE
    long double cStaticMember_Player::GetLimitExp(int lv)
    {
        using org_ptr = long double (WINAPIV*)(struct cStaticMember_Player*, int);
        return (org_ptr(0x14010e5e0L))(this, lv);
    };
    int cStaticMember_Player::GetMaxLv()
    {
        using org_ptr = int (WINAPIV*)(struct cStaticMember_Player*);
        return (org_ptr(0x14010e640L))(this);
    };
    bool cStaticMember_Player::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct cStaticMember_Player*);
        return (org_ptr(0x14010e590L))(this);
    };
    struct cStaticMember_Player* cStaticMember_Player::Instance()
    {
        using org_ptr = struct cStaticMember_Player* (WINAPIV*)();
        return (org_ptr(0x14010e450L))();
    };
    void cStaticMember_Player::Release()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x14010e510L))();
    };
    cStaticMember_Player::cStaticMember_Player()
    {
        using org_ptr = void (WINAPIV*)(struct cStaticMember_Player*);
        (org_ptr(0x14010e3d0L))(this);
    };
    void cStaticMember_Player::ctor_cStaticMember_Player()
    {
        using org_ptr = void (WINAPIV*)(struct cStaticMember_Player*);
        (org_ptr(0x14010e3d0L))(this);
    };
    bool cStaticMember_Player::loadLimitExpData()
    {
        using org_ptr = bool (WINAPIV*)(struct cStaticMember_Player*);
        return (org_ptr(0x14010e660L))(this);
    };
    cStaticMember_Player::~cStaticMember_Player()
    {
        using org_ptr = void (WINAPIV*)(struct cStaticMember_Player*);
        (org_ptr(0x14010e3f0L))(this);
    };
    void cStaticMember_Player::dtor_cStaticMember_Player()
    {
        using org_ptr = void (WINAPIV*)(struct cStaticMember_Player*);
        (org_ptr(0x14010e3f0L))(this);
    };
    
END_ATF_NAMESPACE
