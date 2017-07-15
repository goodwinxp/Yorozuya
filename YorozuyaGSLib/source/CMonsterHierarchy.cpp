#include <CMonsterHierarchy.hpp>


START_ATF_NAMESPACE
    CMonsterHierarchy::CMonsterHierarchy()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*);
        (org_ptr(0x14014b660L))(this);
    };
    void CMonsterHierarchy::ctor_CMonsterHierarchy()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*);
        (org_ptr(0x14014b660L))(this);
    };
    char CMonsterHierarchy::ChildKindCount()
    {
        using org_ptr = char (WINAPIV*)(struct CMonsterHierarchy*);
        return (org_ptr(0x14014c320L))(this);
    };
    struct CMonster* CMonsterHierarchy::GetChild(int nKind, int nIndex)
    {
        using org_ptr = struct CMonster* (WINAPIV*)(struct CMonsterHierarchy*, int, int);
        return (org_ptr(0x140157da0L))(this, nKind, nIndex);
    };
    unsigned int CMonsterHierarchy::GetChildCount(int nKindIndex)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMonsterHierarchy*, int);
        return (org_ptr(0x140161530L))(this, nKindIndex);
    };
    struct CMonster* CMonsterHierarchy::GetParent()
    {
        using org_ptr = struct CMonster* (WINAPIV*)(struct CMonsterHierarchy*);
        return (org_ptr(0x14014c300L))(this);
    };
    void CMonsterHierarchy::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*);
        (org_ptr(0x140157370L))(this);
    };
    void CMonsterHierarchy::OnChildMonsterCreate(struct _monster_create_setdata* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*, struct _monster_create_setdata*);
        (org_ptr(0x140157450L))(this, pData);
    };
    void CMonsterHierarchy::OnChildMonsterDestroy()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*);
        (org_ptr(0x140157870L))(this);
    };
    void CMonsterHierarchy::OnChildRegenLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*);
        (org_ptr(0x140157590L))(this);
    };
    void CMonsterHierarchy::OnlyOnceInit(struct CMonster* pThis)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*, struct CMonster*);
        (org_ptr(0x140157300L))(this, pThis);
    };
    int CMonsterHierarchy::PopChildMon(struct CMonster* pMon)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterHierarchy*, struct CMonster*);
        return (org_ptr(0x140157aa0L))(this, pMon);
    };
    void CMonsterHierarchy::PopChildMonAll()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*);
        (org_ptr(0x140157be0L))(this);
    };
    int CMonsterHierarchy::PushChildMon(int nKind, struct CMonster* pMon)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterHierarchy*, int, struct CMonster*);
        return (org_ptr(0x140157990L))(this, nKind, pMon);
    };
    int CMonsterHierarchy::SearchChildMon(struct CMonster* pMon)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterHierarchy*, struct CMonster*);
        return (org_ptr(0x140157d00L))(this, pMon);
    };
    int CMonsterHierarchy::SetParent(struct CMonster* pMon)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterHierarchy*, struct CMonster*);
        return (org_ptr(0x140157960L))(this, pMon);
    };
    CMonsterHierarchy::~CMonsterHierarchy()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*);
        (org_ptr(0x140157350L))(this);
    };
    void CMonsterHierarchy::dtor_CMonsterHierarchy()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterHierarchy*);
        (org_ptr(0x140157350L))(this);
    };
END_ATF_NAMESPACE
