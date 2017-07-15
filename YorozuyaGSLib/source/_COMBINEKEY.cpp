#include <_COMBINEKEY.hpp>


START_ATF_NAMESPACE
    int _COMBINEKEY::CovDBKey()
    {
        using org_ptr = int (WINAPIV*)(struct _COMBINEKEY*);
        return (org_ptr(0x1401bf320L))(this);
    };
    bool _COMBINEKEY::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _COMBINEKEY*);
        return (org_ptr(0x1402af7d0L))(this);
    };
    void _COMBINEKEY::LoadDBKey(int pl_nKey)
    {
        using org_ptr = void (WINAPIV*)(struct _COMBINEKEY*, int);
        (org_ptr(0x1401bf260L))(this, pl_nKey);
    };
    void _COMBINEKEY::SetRelease()
    {
        using org_ptr = void (WINAPIV*)(struct _COMBINEKEY*);
        (org_ptr(0x1400772b0L))(this);
    };
END_ATF_NAMESPACE
