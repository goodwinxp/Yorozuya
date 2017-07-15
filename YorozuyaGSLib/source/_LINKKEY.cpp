#include <_LINKKEY.hpp>


START_ATF_NAMESPACE
    int16_t _LINKKEY::CovDBKey()
    {
        using org_ptr = int16_t (WINAPIV*)(struct _LINKKEY*);
        return (org_ptr(0x1401bf300L))(this);
    };
    uint16_t _LINKKEY::GetCode()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct _LINKKEY*);
        return (org_ptr(0x1400ef990L))(this);
    };
    uint16_t _LINKKEY::GetIndex()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct _LINKKEY*);
        return (org_ptr(0x1400ef9b0L))(this);
    };
    bool _LINKKEY::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _LINKKEY*);
        return (org_ptr(0x1400ef920L))(this);
    };
    void _LINKKEY::LoadDBKey(int16_t pl_zKey)
    {
        using org_ptr = void (WINAPIV*)(struct _LINKKEY*, int16_t);
        (org_ptr(0x1401bf110L))(this, pl_zKey);
    };
    void _LINKKEY::SetData(uint16_t wCode, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct _LINKKEY*, uint16_t, uint16_t);
        (org_ptr(0x1400ef950L))(this, wCode, wIndex);
    };
    void _LINKKEY::SetRelease()
    {
        using org_ptr = void (WINAPIV*)(struct _LINKKEY*);
        (org_ptr(0x140075970L))(this);
    };
END_ATF_NAMESPACE
