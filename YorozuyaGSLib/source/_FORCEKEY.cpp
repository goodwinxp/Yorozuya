#include <_FORCEKEY.hpp>


START_ATF_NAMESPACE
    int _FORCEKEY::CovDBKey()
    {
        using org_ptr = int (WINAPIV*)(struct _FORCEKEY*);
        return (org_ptr(0x1401bf2c0L))(this);
    };
    char _FORCEKEY::GetIndex()
    {
        using org_ptr = char (WINAPIV*)(struct _FORCEKEY*);
        return (org_ptr(0x14010e340L))(this);
    };
    unsigned int _FORCEKEY::GetStat()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _FORCEKEY*);
        return (org_ptr(0x14010e360L))(this);
    };
    bool _FORCEKEY::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _FORCEKEY*);
        return (org_ptr(0x14010e380L))(this);
    };
    void _FORCEKEY::LoadDBKey(int pl_nKey)
    {
        using org_ptr = void (WINAPIV*)(struct _FORCEKEY*, int);
        (org_ptr(0x1401bf0f0L))(this, pl_nKey);
    };
    void _FORCEKEY::SetKey(char pl_byItemIndex, unsigned int pl_dwStat)
    {
        using org_ptr = void (WINAPIV*)(struct _FORCEKEY*, char, unsigned int);
        (org_ptr(0x1401203c0L))(this, pl_byItemIndex, pl_dwStat);
    };
    void _FORCEKEY::SetRelease()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCEKEY*);
        (org_ptr(0x140076140L))(this);
    };
    void _FORCEKEY::SetStat(unsigned int pl_dwStat)
    {
        using org_ptr = void (WINAPIV*)(struct _FORCEKEY*, unsigned int);
        (org_ptr(0x140120a60L))(this, pl_dwStat);
    };
END_ATF_NAMESPACE
