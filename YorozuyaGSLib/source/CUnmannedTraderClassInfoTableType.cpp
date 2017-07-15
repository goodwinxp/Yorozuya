#include <CUnmannedTraderClassInfoTableType.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderClassInfoTableType::CUnmannedTraderClassInfoTableType(unsigned int dwID)
        : CUnmannedTraderClassInfo(dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*, unsigned int);
        (org_ptr(0x14037cc10L))(this, dwID);
    };
    void CUnmannedTraderClassInfoTableType::ctor_CUnmannedTraderClassInfoTableType(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*, unsigned int);
        (org_ptr(0x14037cc10L))(this, dwID);
    };
    void CUnmannedTraderClassInfoTableType::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*);
        (org_ptr(0x14037d900L))(this);
    };
    struct CUnmannedTraderClassInfo* CUnmannedTraderClassInfoTableType::Create(unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderClassInfo* (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*, unsigned int);
        return (org_ptr(0x14037dfd0L))(this, dwID);
    };
    bool CUnmannedTraderClassInfoTableType::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*, char, uint16_t, char*);
        return (org_ptr(0x14037d2b0L))(this, byTableCode, wItemTableIndex, byClass);
    };
    bool CUnmannedTraderClassInfoTableType::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byClass, char* bySubClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*, char, uint16_t, char*, char*);
        return (org_ptr(0x14037d4d0L))(this, byTableCode, wItemTableIndex, byClass, bySubClass);
    };
    bool CUnmannedTraderClassInfoTableType::IsExistGroupID(char byClass, char bySubClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*, char, char);
        return (org_ptr(0x14037d300L))(this, byClass, bySubClass);
    };
    bool CUnmannedTraderClassInfoTableType::IsValidID(unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*, unsigned int);
        return (org_ptr(0x14037da00L))(this, dwID);
    };
    bool CUnmannedTraderClassInfoTableType::LoadXML(struct TiXmlElement* elemClass, struct CLogFile* kLogger, unsigned int dwDivisionID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*, struct TiXmlElement*, struct CLogFile*, unsigned int);
        return (org_ptr(0x14037cdb0L))(this, elemClass, kLogger, dwDivisionID);
    };
    CUnmannedTraderClassInfoTableType::~CUnmannedTraderClassInfoTableType()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*);
        (org_ptr(0x14037cce0L))(this);
    };
    void CUnmannedTraderClassInfoTableType::dtor_CUnmannedTraderClassInfoTableType()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableType*);
        (org_ptr(0x14037cce0L))(this);
    };
END_ATF_NAMESPACE
