#include <CUnmannedTraderClassInfoTableCodeType.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderClassInfoTableCodeType::CUnmannedTraderClassInfoTableCodeType(unsigned int dwID)
        : CUnmannedTraderClassInfoTableType(dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, unsigned int);
        (org_ptr(0x140377040L))(this, dwID);
    };
    void CUnmannedTraderClassInfoTableCodeType::ctor_CUnmannedTraderClassInfoTableCodeType(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, unsigned int);
        (org_ptr(0x140377040L))(this, dwID);
    };
    struct CUnmannedTraderClassInfo* CUnmannedTraderClassInfoTableCodeType::Create(unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderClassInfo* (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, unsigned int);
        return (org_ptr(0x140377980L))(this, dwID);
    };
    bool CUnmannedTraderClassInfoTableCodeType::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, char, uint16_t, char*);
        return (org_ptr(0x1403773a0L))(this, byTableCode, wItemTableIndex, byClass);
    };
    bool CUnmannedTraderClassInfoTableCodeType::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byClass, char* bySubClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, char, uint16_t, char*, char*);
        return (org_ptr(0x140377a50L))(this, byTableCode, wItemTableIndex, byClass, bySubClass);
    };
    bool CUnmannedTraderClassInfoTableCodeType::LoadXML(struct TiXmlElement* elemClass, struct CLogFile* kLogger, unsigned int dwDivisionID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, struct TiXmlElement*, struct CLogFile*, unsigned int);
        return (org_ptr(0x140377190L))(this, elemClass, kLogger, dwDivisionID);
    };
    CUnmannedTraderClassInfoTableCodeType::~CUnmannedTraderClassInfoTableCodeType()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*);
        (org_ptr(0x140377100L))(this);
    };
    void CUnmannedTraderClassInfoTableCodeType::dtor_CUnmannedTraderClassInfoTableCodeType()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*);
        (org_ptr(0x140377100L))(this);
    };
END_ATF_NAMESPACE
