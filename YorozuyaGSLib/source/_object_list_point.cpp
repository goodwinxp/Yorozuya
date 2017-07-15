#include <_object_list_point.hpp>


START_ATF_NAMESPACE
    void _object_list_point::InitLink()
    {
        using org_ptr = void (WINAPIV*)(struct _object_list_point*);
        (org_ptr(0x14017d5a0L))(this);
    };
    void _object_list_point::SetPoint(struct CGameObject* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct _object_list_point*, struct CGameObject*);
        (org_ptr(0x14017d640L))(this, pItem);
    };
    _object_list_point::_object_list_point()
    {
        using org_ptr = void (WINAPIV*)(struct _object_list_point*);
        (org_ptr(0x14017d540L))(this);
    };
    void _object_list_point::ctor__object_list_point()
    {
        using org_ptr = void (WINAPIV*)(struct _object_list_point*);
        (org_ptr(0x14017d540L))(this);
    };
END_ATF_NAMESPACE
