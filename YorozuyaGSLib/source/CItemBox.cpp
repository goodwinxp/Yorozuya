#include <CItemBox.hpp>


START_ATF_NAMESPACE
    CItemBox::CItemBox()
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*);
        (org_ptr(0x1401655f0L))(this);
    };
    void CItemBox::ctor_CItemBox()
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*);
        (org_ptr(0x1401655f0L))(this);
    };
    bool CItemBox::Create(struct _itembox_create_setdata* pParam, bool bHide)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemBox*, struct _itembox_create_setdata*, bool);
        return (org_ptr(0x140165930L))(this, pParam, bHide);
    };
    bool CItemBox::Destroy()
    {
        using org_ptr = bool (WINAPIV*)(struct CItemBox*);
        return (org_ptr(0x140165ea0L))(this);
    };
    void CItemBox::Init(struct _object_id* pID)
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*, struct _object_id*);
        (org_ptr(0x140165820L))(this, pID);
    };
    bool CItemBox::IsTakeRight(struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemBox*, struct CPlayer*);
        return (org_ptr(0x140166180L))(this, pOne);
    };
    void CItemBox::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*);
        (org_ptr(0x140166000L))(this);
    };
    void CItemBox::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*);
        (org_ptr(0x140166660L))(this);
    };
    void CItemBox::SendMsg_Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*);
        (org_ptr(0x140166830L))(this);
    };
    void CItemBox::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*, int);
        (org_ptr(0x1401668b0L))(this, n);
    };
    void CItemBox::SendMsg_StateChange()
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*);
        (org_ptr(0x140166a10L))(this);
    };
    CItemBox::~CItemBox()
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*);
        (org_ptr(0x140165790L))(this);
    };
    void CItemBox::dtor_CItemBox()
    {
        using org_ptr = void (WINAPIV*)(struct CItemBox*);
        (org_ptr(0x140165790L))(this);
    };
END_ATF_NAMESPACE
