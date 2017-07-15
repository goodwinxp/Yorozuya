#include <CUnmannedTraderGroupDivisionVersionInfo.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderGroupDivisionVersionInfo::CUnmannedTraderGroupDivisionVersionInfo(struct CUnmannedTraderGroupDivisionVersionInfo* lhs)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, struct CUnmannedTraderGroupDivisionVersionInfo*);
        (org_ptr(0x140399520L))(this, lhs);
    };
    void CUnmannedTraderGroupDivisionVersionInfo::ctor_CUnmannedTraderGroupDivisionVersionInfo(struct CUnmannedTraderGroupDivisionVersionInfo* lhs)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, struct CUnmannedTraderGroupDivisionVersionInfo*);
        (org_ptr(0x140399520L))(this, lhs);
    };
    CUnmannedTraderGroupDivisionVersionInfo::CUnmannedTraderGroupDivisionVersionInfo(int iType, unsigned int uiMaxCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, int, unsigned int);
        (org_ptr(0x140397da0L))(this, iType, uiMaxCnt);
    };
    void CUnmannedTraderGroupDivisionVersionInfo::ctor_CUnmannedTraderGroupDivisionVersionInfo(int iType, unsigned int uiMaxCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, int, unsigned int);
        (org_ptr(0x140397da0L))(this, iType, uiMaxCnt);
    };
    bool CUnmannedTraderGroupDivisionVersionInfo::GetVersion(char byClass, unsigned int* dwVer)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, char, unsigned int*);
        return (org_ptr(0x140360990L))(this, byClass, dwVer);
    };
    bool CUnmannedTraderGroupDivisionVersionInfo::IncreaseVersion(char byClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*, char);
        return (org_ptr(0x14036be20L))(this, byClass);
    };
    bool CUnmannedTraderGroupDivisionVersionInfo::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*);
        return (org_ptr(0x140397e20L))(this);
    };
    CUnmannedTraderGroupDivisionVersionInfo::~CUnmannedTraderGroupDivisionVersionInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*);
        (org_ptr(0x14036d070L))(this);
    };
    void CUnmannedTraderGroupDivisionVersionInfo::dtor_CUnmannedTraderGroupDivisionVersionInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupDivisionVersionInfo*);
        (org_ptr(0x14036d070L))(this);
    };
END_ATF_NAMESPACE
