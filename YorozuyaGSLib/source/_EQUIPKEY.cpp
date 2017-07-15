#include <_EQUIPKEY.hpp>


START_ATF_NAMESPACE
    int16_t _EQUIPKEY::CovDBKey()
    {
        using org_ptr = int16_t (WINAPIV*)(struct _EQUIPKEY*);
        return (org_ptr(0x1401bf280L))(this);
    };
    bool _EQUIPKEY::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _EQUIPKEY*);
        return (org_ptr(0x14010e2f0L))(this);
    };
    void _EQUIPKEY::LoadDBKey(int16_t pl_zKey)
    {
        using org_ptr = void (WINAPIV*)(struct _EQUIPKEY*, int16_t);
        (org_ptr(0x1401bf020L))(this, pl_zKey);
    };
    void _EQUIPKEY::SetRelease()
    {
        using org_ptr = void (WINAPIV*)(struct _EQUIPKEY*);
        (org_ptr(0x140075580L))(this);
    };
END_ATF_NAMESPACE
