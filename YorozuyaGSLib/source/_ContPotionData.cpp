#include <_ContPotionData.hpp>


START_ATF_NAMESPACE
    unsigned int _ContPotionData::GetEffectIndex()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _ContPotionData*);
        return (org_ptr(0x1403a1010L))(this);
    };
    void _ContPotionData::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _ContPotionData*);
        (org_ptr(0x140072af0L))(this);
    };
    bool _ContPotionData::IsLive()
    {
        using org_ptr = bool (WINAPIV*)(struct _ContPotionData*);
        return (org_ptr(0x1403a0fb0L))(this);
    };
    void _ContPotionData::Set(unsigned int dwPotionIndex, unsigned int dwStartTime, unsigned int wDurCapSec)
    {
        using org_ptr = void (WINAPIV*)(struct _ContPotionData*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1403a10d0L))(this, dwPotionIndex, dwStartTime, wDurCapSec);
    };
    _ContPotionData::_ContPotionData()
    {
        using org_ptr = void (WINAPIV*)(struct _ContPotionData*);
        (org_ptr(0x140072a80L))(this);
    };
    void _ContPotionData::ctor__ContPotionData()
    {
        using org_ptr = void (WINAPIV*)(struct _ContPotionData*);
        (org_ptr(0x140072a80L))(this);
    };
END_ATF_NAMESPACE
