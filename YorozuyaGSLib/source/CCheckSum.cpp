#include <CCheckSum.hpp>


START_ATF_NAMESPACE
    CCheckSum::CCheckSum()
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSum*);
        (org_ptr(0x1402c0560L))(this);
    };
    void CCheckSum::ctor_CCheckSum()
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSum*);
        (org_ptr(0x1402c0560L))(this);
    };
    unsigned int CCheckSum::DecodeValue(char byIndex, unsigned int dwSerial, unsigned int dwValue)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CCheckSum*, char, unsigned int, unsigned int);
        return (org_ptr(0x1402c0620L))(this, byIndex, dwSerial, dwValue);
    };
    unsigned int CCheckSum::EncodeValue(char byIndex, unsigned int dwSerial, unsigned int dwValue)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CCheckSum*, char, unsigned int, unsigned int);
        return (org_ptr(0x1402c05a0L))(this, byIndex, dwSerial, dwValue);
    };
    bool CCheckSum::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CCheckSum*);
        return (org_ptr(0x1402c0590L))(this);
    };
    CCheckSum::~CCheckSum()
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSum*);
        (org_ptr(0x1402c0580L))(this);
    };
    void CCheckSum::dtor_CCheckSum()
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSum*);
        (org_ptr(0x1402c0580L))(this);
    };
END_ATF_NAMESPACE
