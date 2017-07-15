#include <CUnmannedTraderItemCodeInfo.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderItemCodeInfo::CUnmannedTraderItemCodeInfo(struct CUnmannedTraderItemCodeInfo* lhs)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemCodeInfo*, struct CUnmannedTraderItemCodeInfo*);
        (org_ptr(0x140379990L))(this, lhs);
    };
    void CUnmannedTraderItemCodeInfo::ctor_CUnmannedTraderItemCodeInfo(struct CUnmannedTraderItemCodeInfo* lhs)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemCodeInfo*, struct CUnmannedTraderItemCodeInfo*);
        (org_ptr(0x140379990L))(this, lhs);
    };
    CUnmannedTraderItemCodeInfo::CUnmannedTraderItemCodeInfo(char* szCode, unsigned int dwStartIndex, unsigned int dwEndIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemCodeInfo*, char*, unsigned int, unsigned int);
        (org_ptr(0x14038d760L))(this, szCode, dwStartIndex, dwEndIndex);
    };
    void CUnmannedTraderItemCodeInfo::ctor_CUnmannedTraderItemCodeInfo(char* szCode, unsigned int dwStartIndex, unsigned int dwEndIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemCodeInfo*, char*, unsigned int, unsigned int);
        (org_ptr(0x14038d760L))(this, szCode, dwStartIndex, dwEndIndex);
    };
    CUnmannedTraderItemCodeInfo::~CUnmannedTraderItemCodeInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemCodeInfo*);
        (org_ptr(0x14038d7f0L))(this);
    };
    void CUnmannedTraderItemCodeInfo::dtor_CUnmannedTraderItemCodeInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemCodeInfo*);
        (org_ptr(0x14038d7f0L))(this);
    };
END_ATF_NAMESPACE
