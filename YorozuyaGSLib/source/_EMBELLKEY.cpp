#include <_EMBELLKEY.hpp>


START_ATF_NAMESPACE
    int _EMBELLKEY::CovDBKey()
    {
        using org_ptr = int (WINAPIV*)(struct _EMBELLKEY*);
        return (org_ptr(0x1401bf2a0L))(this);
    };
    bool _EMBELLKEY::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _EMBELLKEY*);
        return (org_ptr(0x14010e320L))(this);
    };
    void _EMBELLKEY::LoadDBKey(int pl_nKey)
    {
        using org_ptr = void (WINAPIV*)(struct _EMBELLKEY*, int);
        (org_ptr(0x1401bf0d0L))(this, pl_nKey);
    };
    void _EMBELLKEY::SetRelease()
    {
        using org_ptr = void (WINAPIV*)(struct _EMBELLKEY*);
        (org_ptr(0x140075b70L))(this);
    };
END_ATF_NAMESPACE
