#include <CUnmannedTraderGroupVersionInfo.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderGroupVersionInfo::CUnmannedTraderGroupVersionInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupVersionInfo*);
        (org_ptr(0x14036bc90L))(this);
    };
    void CUnmannedTraderGroupVersionInfo::ctor_CUnmannedTraderGroupVersionInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupVersionInfo*);
        (org_ptr(0x14036bc90L))(this);
    };
    bool CUnmannedTraderGroupVersionInfo::GetVersion(char byDivision, char byClass, unsigned int* dwVer)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupVersionInfo*, char, char, unsigned int*);
        return (org_ptr(0x140360900L))(this, byDivision, byClass, dwVer);
    };
    bool CUnmannedTraderGroupVersionInfo::IncreaseVersion(char byDivision, char byClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupVersionInfo*, char, char);
        return (org_ptr(0x14036bd90L))(this, byDivision, byClass);
    };
    bool CUnmannedTraderGroupVersionInfo::Init(std::vector<std::pair<unsigned long,unsigned long>>* vecInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupVersionInfo*, std::vector<std::pair<unsigned long,unsigned long>>*);
        return (org_ptr(0x140397a60L))(this, vecInfo);
    };
    CUnmannedTraderGroupVersionInfo::~CUnmannedTraderGroupVersionInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupVersionInfo*);
        (org_ptr(0x14036bce0L))(this);
    };
    void CUnmannedTraderGroupVersionInfo::dtor_CUnmannedTraderGroupVersionInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupVersionInfo*);
        (org_ptr(0x14036bce0L))(this);
    };
END_ATF_NAMESPACE
