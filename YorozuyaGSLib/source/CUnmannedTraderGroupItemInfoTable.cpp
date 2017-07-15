#include <CUnmannedTraderGroupItemInfoTable.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderGroupItemInfoTable::CUnmannedTraderGroupItemInfoTable()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*);
        (org_ptr(0x14036afc0L))(this);
    };
    void CUnmannedTraderGroupItemInfoTable::ctor_CUnmannedTraderGroupItemInfoTable()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*);
        (org_ptr(0x14036afc0L))(this);
    };
    void CUnmannedTraderGroupItemInfoTable::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x14036b1b0L))();
    };
    bool CUnmannedTraderGroupItemInfoTable::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass, char* bySubClass, unsigned int* dwListIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, char, uint16_t, char*, char*, char*, unsigned int*);
        return (org_ptr(0x1403600c0L))(this, byTableCode, wItemTableIndex, byDivision, byClass, bySubClass, dwListIndex);
    };
    struct CUnmannedTraderSortType* CUnmannedTraderGroupItemInfoTable::GetSortType(char byDivision, char bySortType)
    {
        using org_ptr = struct CUnmannedTraderSortType* (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, char, char);
        return (org_ptr(0x14035f760L))(this, byDivision, bySortType);
    };
    bool CUnmannedTraderGroupItemInfoTable::GetVersion(char byDivision, char byClass, unsigned int* dwVer)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, char, char, unsigned int*);
        return (org_ptr(0x140360890L))(this, byDivision, byClass, dwVer);
    };
    bool CUnmannedTraderGroupItemInfoTable::IncreaseVersion(char byDivision, char byClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, char, char);
        return (org_ptr(0x14036b8f0L))(this, byDivision, byClass);
    };
    bool CUnmannedTraderGroupItemInfoTable::IncreaseVersion(char byTableCode, uint16_t wItemTableIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, char, uint16_t);
        return (org_ptr(0x14036b360L))(this, byTableCode, wItemTableIndex);
    };
    bool CUnmannedTraderGroupItemInfoTable::IncreaseVersion(char byTableCode, uint16_t wItemTableIndex, char byRegistDivision, char byRegistClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, char, uint16_t, char, char);
        return (org_ptr(0x14036b580L))(this, byTableCode, wItemTableIndex, byRegistDivision, byRegistClass);
    };
    bool CUnmannedTraderGroupItemInfoTable::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*);
        return (org_ptr(0x14036b230L))(this);
    };
    struct CUnmannedTraderGroupItemInfoTable* CUnmannedTraderGroupItemInfoTable::Instance()
    {
        using org_ptr = struct CUnmannedTraderGroupItemInfoTable* (WINAPIV*)();
        return (org_ptr(0x14036b0f0L))();
    };
    bool CUnmannedTraderGroupItemInfoTable::IsExistGroupID(char byDivision, char byClass, char bySubClass, char bySortType, unsigned int* dwListIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, char, char, char, char, unsigned int*);
        return (org_ptr(0x140360a40L))(this, byDivision, byClass, bySubClass, bySortType, dwListIndex);
    };
    void CUnmannedTraderGroupItemInfoTable::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, char*);
        (org_ptr(0x14036b980L))(this, fmt);
    };
    void CUnmannedTraderGroupItemInfoTable::SetLogger(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*, struct CLogFile*);
        (org_ptr(0x140351980L))(this, pkLogger);
    };
    CUnmannedTraderGroupItemInfoTable::~CUnmannedTraderGroupItemInfoTable()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*);
        (org_ptr(0x14036b060L))(this);
    };
    void CUnmannedTraderGroupItemInfoTable::dtor_CUnmannedTraderGroupItemInfoTable()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupItemInfoTable*);
        (org_ptr(0x14036b060L))(this);
    };
END_ATF_NAMESPACE
