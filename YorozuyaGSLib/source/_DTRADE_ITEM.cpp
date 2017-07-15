#include <_DTRADE_ITEM.hpp>


START_ATF_NAMESPACE
    void _DTRADE_ITEM::ReleaseData()
    {
        using org_ptr = void (WINAPIV*)(struct _DTRADE_ITEM*);
        (org_ptr(0x1400f79f0L))(this);
    };
    void _DTRADE_ITEM::SetData(char p_byStorageCode, unsigned int p_dwSerial, char p_byAmount)
    {
        using org_ptr = void (WINAPIV*)(struct _DTRADE_ITEM*, char, unsigned int, char);
        (org_ptr(0x1400f7a10L))(this, p_byStorageCode, p_dwSerial, p_byAmount);
    };
END_ATF_NAMESPACE
