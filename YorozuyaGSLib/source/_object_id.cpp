#include <_object_id.hpp>


START_ATF_NAMESPACE
    _object_id::_object_id(char byKind, char byID, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct _object_id*, char, char, uint16_t);
        (org_ptr(0x14012e460L))(this, byKind, byID, wIndex);
    };
    void _object_id::ctor__object_id(char byKind, char byID, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct _object_id*, char, char, uint16_t);
        (org_ptr(0x14012e460L))(this, byKind, byID, wIndex);
    };
    _object_id::_object_id()
    {
        using org_ptr = void (WINAPIV*)(struct _object_id*);
        (org_ptr(0x14002fa30L))(this);
    };
    void _object_id::ctor__object_id()
    {
        using org_ptr = void (WINAPIV*)(struct _object_id*);
        (org_ptr(0x14002fa30L))(this);
    };
END_ATF_NAMESPACE
