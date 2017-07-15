#include <CUnmannedTraderSubClassInfoCode.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderSubClassInfoCode::CUnmannedTraderSubClassInfoCode(unsigned int dwID)
        : CUnmannedTraderSubClassInfo(dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoCode*, unsigned int);
        (org_ptr(0x140382e20L))(this, dwID);
    };
    void CUnmannedTraderSubClassInfoCode::ctor_CUnmannedTraderSubClassInfoCode(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoCode*, unsigned int);
        (org_ptr(0x140382e20L))(this, dwID);
    };
    struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoCode::Create(unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderSubClassInfo* (WINAPIV*)(struct CUnmannedTraderSubClassInfoCode*, unsigned int);
        return (org_ptr(0x140383850L))(this, dwID);
    };
    bool CUnmannedTraderSubClassInfoCode::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfoCode*, char, uint16_t, char*);
        return (org_ptr(0x140383430L))(this, byTableCode, wItemTableIndex, bySubClass);
    };
    bool CUnmannedTraderSubClassInfoCode::LoadXML(struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfoCode*, struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int);
        return (org_ptr(0x140383130L))(this, elemSubClass, kLogger, dwDivisionID, dwClassID);
    };
    CUnmannedTraderSubClassInfoCode::~CUnmannedTraderSubClassInfoCode()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoCode*);
        (org_ptr(0x140382ee0L))(this);
    };
    void CUnmannedTraderSubClassInfoCode::dtor_CUnmannedTraderSubClassInfoCode()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoCode*);
        (org_ptr(0x140382ee0L))(this);
    };
END_ATF_NAMESPACE
