#include <CUnmannedTraderClassInfo.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderClassInfo::CUnmannedTraderClassInfo(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfo*, unsigned int);
        (org_ptr(0x140376f10L))(this, dwID);
    };
    void CUnmannedTraderClassInfo::ctor_CUnmannedTraderClassInfo(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfo*, unsigned int);
        (org_ptr(0x140376f10L))(this, dwID);
    };
    struct CUnmannedTraderClassInfo* CUnmannedTraderClassInfo::Copy(struct CUnmannedTraderClassInfo* lhs)
    {
        using org_ptr = struct CUnmannedTraderClassInfo* (WINAPIV*)(struct CUnmannedTraderClassInfo*, struct CUnmannedTraderClassInfo*);
        return (org_ptr(0x140376fd0L))(this, lhs);
    };
    unsigned int CUnmannedTraderClassInfo::GetID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderClassInfo*);
        return (org_ptr(0x14036f440L))(this);
    };
    char* CUnmannedTraderClassInfo::GetTypeName()
    {
        using org_ptr = char* (WINAPIV*)(struct CUnmannedTraderClassInfo*);
        return (org_ptr(0x140385180L))(this);
    };
    CUnmannedTraderClassInfo::~CUnmannedTraderClassInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfo*);
        (org_ptr(0x140376fb0L))(this);
    };
    void CUnmannedTraderClassInfo::dtor_CUnmannedTraderClassInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfo*);
        (org_ptr(0x140376fb0L))(this);
    };
END_ATF_NAMESPACE
