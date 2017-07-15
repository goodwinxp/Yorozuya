#include <CCheckSumGuildConverter.hpp>


START_ATF_NAMESPACE
    void CCheckSumGuildConverter::Convert(long double dDalant, long double dGold, struct CCheckSumGuildData* pkCheckSum)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumGuildConverter*, long double, long double, struct CCheckSumGuildData*);
        (org_ptr(0x1402c1760L))(this, dDalant, dGold, pkCheckSum);
    };
END_ATF_NAMESPACE
