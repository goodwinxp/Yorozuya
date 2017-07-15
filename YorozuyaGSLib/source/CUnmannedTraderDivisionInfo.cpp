#include <CUnmannedTraderDivisionInfo.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderDivisionInfo::CUnmannedTraderDivisionInfo(unsigned int dwID, char* szName)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, unsigned int, char*);
        (org_ptr(0x14036d240L))(this, dwID, szName);
    };
    void CUnmannedTraderDivisionInfo::ctor_CUnmannedTraderDivisionInfo(unsigned int dwID, char* szName)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, unsigned int, char*);
        (org_ptr(0x14036d240L))(this, dwID, szName);
    };
    void CUnmannedTraderDivisionInfo::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderDivisionInfo*);
        (org_ptr(0x14036e2a0L))(this);
    };
    struct CUnmannedTraderDivisionInfo* CUnmannedTraderDivisionInfo::Copy(struct CUnmannedTraderDivisionInfo* lhs)
    {
        using org_ptr = struct CUnmannedTraderDivisionInfo* (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, struct CUnmannedTraderDivisionInfo*);
        return (org_ptr(0x14036e470L))(this, lhs);
    };
    struct CUnmannedTraderSortType* CUnmannedTraderDivisionInfo::FindSortType(unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderSortType* (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, unsigned int);
        return (org_ptr(0x14036e9c0L))(this, dwID);
    };
    bool CUnmannedTraderDivisionInfo::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, char, uint16_t, char*, char*);
        return (org_ptr(0x14036da00L))(this, byTableCode, wItemTableIndex, byDivision, byClass);
    };
    bool CUnmannedTraderDivisionInfo::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass, char* bySubClass, unsigned int* dwListIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, char, uint16_t, char*, char*, char*, unsigned int*);
        return (org_ptr(0x14036dc20L))(this, byTableCode, wItemTableIndex, byDivision, byClass, bySubClass, dwListIndex);
    };
    unsigned int CUnmannedTraderDivisionInfo::GetID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderDivisionInfo*);
        return (org_ptr(0x140387880L))(this);
    };
    unsigned int CUnmannedTraderDivisionInfo::GetMaxClassCnt()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderDivisionInfo*);
        return (org_ptr(0x1403879b0L))(this);
    };
    unsigned int CUnmannedTraderDivisionInfo::GetSize()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderDivisionInfo*);
        return (org_ptr(0x140387960L))(this);
    };
    struct CUnmannedTraderSortType* CUnmannedTraderDivisionInfo::GetSortType(char bySortType)
    {
        using org_ptr = struct CUnmannedTraderSortType* (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, char);
        return (org_ptr(0x14036e0d0L))(this, bySortType);
    };
    bool CUnmannedTraderDivisionInfo::IsExistGroupID(char byDivision, char byClass, char bySubClass, char bySortType, unsigned int* dwListIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, char, char, char, char, unsigned int*);
        return (org_ptr(0x14036de80L))(this, byDivision, byClass, bySubClass, bySortType, dwListIndex);
    };
    bool CUnmannedTraderDivisionInfo::IsExistSortTypeID(unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, unsigned int);
        return (org_ptr(0x14036e810L))(this, dwID);
    };
    bool CUnmannedTraderDivisionInfo::IsValidID(unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, unsigned int);
        return (org_ptr(0x14036e660L))(this, dwID);
    };
    bool CUnmannedTraderDivisionInfo::LoadXML(struct TiXmlElement* pkElement, struct CLogFile* kLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderDivisionInfo*, struct TiXmlElement*, struct CLogFile*);
        return (org_ptr(0x14036d3f0L))(this, pkElement, kLogger);
    };
    CUnmannedTraderDivisionInfo::~CUnmannedTraderDivisionInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderDivisionInfo*);
        (org_ptr(0x14036d320L))(this);
    };
    void CUnmannedTraderDivisionInfo::dtor_CUnmannedTraderDivisionInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderDivisionInfo*);
        (org_ptr(0x14036d320L))(this);
    };
END_ATF_NAMESPACE
