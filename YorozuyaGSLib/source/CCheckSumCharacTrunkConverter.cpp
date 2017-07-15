#include <CCheckSumCharacTrunkConverter.hpp>


START_ATF_NAMESPACE
    void CCheckSumCharacTrunkConverter::Convert(struct _AVATOR_DATA* pAvator, struct CCheckSumCharacAccountTrunkData* pkCheckSum)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacTrunkConverter*, struct _AVATOR_DATA*, struct CCheckSumCharacAccountTrunkData*);
        (org_ptr(0x1402c14d0L))(this, pAvator, pkCheckSum);
    };
    void CCheckSumCharacTrunkConverter::ConvertTrunk(unsigned int dwSerial, long double* pVal)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacTrunkConverter*, unsigned int, long double*);
        (org_ptr(0x1402c16c0L))(this, dwSerial, pVal);
    };
END_ATF_NAMESPACE
