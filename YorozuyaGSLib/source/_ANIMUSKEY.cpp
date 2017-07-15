#include <_ANIMUSKEY.hpp>


START_ATF_NAMESPACE
    char _ANIMUSKEY::CovDBKey()
    {
        using org_ptr = char (WINAPIV*)(struct _ANIMUSKEY*);
        return (org_ptr(0x1401bf2e0L))(this);
    };
    bool _ANIMUSKEY::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _ANIMUSKEY*);
        return (org_ptr(0x14010e3a0L))(this);
    };
    void _ANIMUSKEY::LoadDBKey(char pl_byKey)
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUSKEY*, char);
        (org_ptr(0x140120520L))(this, pl_byKey);
    };
    void _ANIMUSKEY::SetRelease()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUSKEY*);
        (org_ptr(0x140076350L))(this);
    };
END_ATF_NAMESPACE
