#include <CLootingMgr.hpp>


START_ATF_NAMESPACE
    CLootingMgr::CLootingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLootingMgr*);
        (org_ptr(0x14014b780L))(this);
    };
    void CLootingMgr::ctor_CLootingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLootingMgr*);
        (org_ptr(0x14014b780L))(this);
    };
    struct CPlayer* CLootingMgr::GetLooter(struct CMapData* pMap, float* pPos, struct CPlayer* pSkipObject)
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CLootingMgr*, struct CMapData*, float*, struct CPlayer*);
        return (org_ptr(0x14014c830L))(this, pMap, pPos, pSkipObject);
    };
    void CLootingMgr::Init(int nUserNode)
    {
        using org_ptr = void (WINAPIV*)(struct CLootingMgr*, int);
        (org_ptr(0x14014be90L))(this, nUserNode);
    };
    void CLootingMgr::PushDamage(struct CPlayer* pAtter, uint16_t wDamage)
    {
        using org_ptr = void (WINAPIV*)(struct CLootingMgr*, struct CPlayer*, uint16_t);
        (org_ptr(0x14014c470L))(this, pAtter, wDamage);
    };
    long double CLootingMgr::_list::GetScore(bool bBonus)
    {
        using org_ptr = long double (WINAPIV*)(struct CLootingMgr::_list*, bool);
        return (org_ptr(0x14014ca10L))(this, bBonus);
    };
    void CLootingMgr::_list::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CLootingMgr::_list*);
        (org_ptr(0x14014b850L))(this);
    };
    CLootingMgr::_list::_list()
    {
        using org_ptr = void (WINAPIV*)(struct CLootingMgr::_list*);
        (org_ptr(0x14014b800L))(this);
    };
    void CLootingMgr::_list::ctor__list()
    {
        using org_ptr = void (WINAPIV*)(struct CLootingMgr::_list*);
        (org_ptr(0x14014b800L))(this);
    };
END_ATF_NAMESPACE
