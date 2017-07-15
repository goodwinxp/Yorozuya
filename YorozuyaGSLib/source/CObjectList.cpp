#include <CObjectList.hpp>


START_ATF_NAMESPACE
    CObjectList::CObjectList()
    {
        using org_ptr = void (WINAPIV*)(struct CObjectList*);
        (org_ptr(0x140188d20L))(this);
    };
    void CObjectList::ctor_CObjectList()
    {
        using org_ptr = void (WINAPIV*)(struct CObjectList*);
        (org_ptr(0x140188d20L))(this);
    };
    struct CGameObject* CObjectList::CopyItem(unsigned int dwIndex)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CObjectList*, unsigned int);
        return (org_ptr(0x14026f150L))(this, dwIndex);
    };
    bool CObjectList::DeleteItem(struct _object_list_point* pItem)
    {
        using org_ptr = bool (WINAPIV*)(struct CObjectList*, struct _object_list_point*);
        return (org_ptr(0x140189d20L))(this, pItem);
    };
    int CObjectList::GetSize()
    {
        using org_ptr = int (WINAPIV*)(struct CObjectList*);
        return (org_ptr(0x14026f1e0L))(this);
    };
    void CObjectList::InitList()
    {
        using org_ptr = void (WINAPIV*)(struct CObjectList*);
        (org_ptr(0x140188db0L))(this);
    };
    bool CObjectList::PushItem(struct _object_list_point* pItem)
    {
        using org_ptr = bool (WINAPIV*)(struct CObjectList*, struct _object_list_point*);
        return (org_ptr(0x140189c30L))(this, pItem);
    };
    CObjectList::~CObjectList()
    {
        using org_ptr = void (WINAPIV*)(struct CObjectList*);
        (org_ptr(0x140027b80L))(this);
    };
    void CObjectList::dtor_CObjectList()
    {
        using org_ptr = void (WINAPIV*)(struct CObjectList*);
        (org_ptr(0x140027b80L))(this);
    };
END_ATF_NAMESPACE
