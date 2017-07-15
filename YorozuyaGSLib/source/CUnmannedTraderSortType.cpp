#include <CUnmannedTraderSortType.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderSortType::CUnmannedTraderSortType(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSortType*, unsigned int);
        (org_ptr(0x140376c90L))(this, dwID);
    };
    void CUnmannedTraderSortType::ctor_CUnmannedTraderSortType(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSortType*, unsigned int);
        (org_ptr(0x140376c90L))(this, dwID);
    };
    unsigned int CUnmannedTraderSortType::GetID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderSortType*);
        return (org_ptr(0x14036f280L))(this);
    };
    char* CUnmannedTraderSortType::GetQuery()
    {
        using org_ptr = char* (WINAPIV*)(struct CUnmannedTraderSortType*);
        return (org_ptr(0x14035f6f0L))(this);
    };
    bool CUnmannedTraderSortType::LoadXML(struct TiXmlElement* pkElemSortType, struct CLogFile* kLogger, unsigned int dwDivisionID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSortType*, struct TiXmlElement*, struct CLogFile*, unsigned int);
        return (org_ptr(0x140376d20L))(this, pkElemSortType, kLogger, dwDivisionID);
    };
    CUnmannedTraderSortType::~CUnmannedTraderSortType()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSortType*);
        (org_ptr(0x140376d10L))(this);
    };
    void CUnmannedTraderSortType::dtor_CUnmannedTraderSortType()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSortType*);
        (org_ptr(0x140376d10L))(this);
    };
END_ATF_NAMESPACE
