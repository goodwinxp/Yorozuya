#include <CCheckSumBaseConverter.hpp>


START_ATF_NAMESPACE
    long double CCheckSumBaseConverter::ProcCode(char byIndex, unsigned int dwSerial, long double dValue)
    {
        using org_ptr = long double (WINAPIV*)(struct CCheckSumBaseConverter*, char, unsigned int, long double);
        return (org_ptr(0x1402c1440L))(this, byIndex, dwSerial, dValue);
    };
    unsigned int CCheckSumBaseConverter::ProcCode(char byIndex, unsigned int dwSerial, unsigned int dwValue)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CCheckSumBaseConverter*, char, unsigned int, unsigned int);
        return (org_ptr(0x1402c13c0L))(this, byIndex, dwSerial, dwValue);
    };
END_ATF_NAMESPACE
