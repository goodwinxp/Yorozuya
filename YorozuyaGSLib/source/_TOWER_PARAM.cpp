#include <_TOWER_PARAM.hpp>


START_ATF_NAMESPACE
    void _TOWER_PARAM::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _TOWER_PARAM*);
        (org_ptr(0x140078110L))(this);
    };
    bool _TOWER_PARAM::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct _TOWER_PARAM*);
        return (org_ptr(0x1400a69a0L))(this);
    };
    void _TOWER_PARAM::NotifyOwnerAttackInform(struct CCharacter* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct _TOWER_PARAM*, struct CCharacter*);
        (org_ptr(0x14010e960L))(this, pDst);
    };
    bool _TOWER_PARAM::PushList(struct _STORAGE_LIST::_db_con* pTowerItem, struct CGuardTower* pTowerObj)
    {
        using org_ptr = bool (WINAPIV*)(struct _TOWER_PARAM*, struct _STORAGE_LIST::_db_con*, struct CGuardTower*);
        return (org_ptr(0x140079110L))(this, pTowerItem, pTowerObj);
    };
    void _TOWER_PARAM::_list::init()
    {
        using org_ptr = void (WINAPIV*)(struct _TOWER_PARAM::_list*);
        (org_ptr(0x1400781a0L))(this);
    };
END_ATF_NAMESPACE
