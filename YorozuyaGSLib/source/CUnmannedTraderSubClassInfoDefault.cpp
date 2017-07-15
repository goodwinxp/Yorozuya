#include <CUnmannedTraderSubClassInfoDefault.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderSubClassInfoDefault::CUnmannedTraderSubClassInfoDefault(unsigned int dwID)
        : CUnmannedTraderSubClassInfo(dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoDefault*, unsigned int);
        (org_ptr(0x140383920L))(this, dwID);
    };
    void CUnmannedTraderSubClassInfoDefault::ctor_CUnmannedTraderSubClassInfoDefault(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoDefault*, unsigned int);
        (org_ptr(0x140383920L))(this, dwID);
    };
    struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoDefault::Create(unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderSubClassInfo* (WINAPIV*)(struct CUnmannedTraderSubClassInfoDefault*, unsigned int);
        return (org_ptr(0x140383a10L))(this, dwID);
    };
    bool CUnmannedTraderSubClassInfoDefault::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfoDefault*, char, uint16_t, char*);
        return (org_ptr(0x140383ae0L))(this, byTableCode, wItemTableIndex, bySubClass);
    };
    bool CUnmannedTraderSubClassInfoDefault::LoadXML(struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfoDefault*, struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int);
        return (org_ptr(0x1403839a0L))(this, elemSubClass, kLogger, dwDivisionID, dwClassID);
    };
END_ATF_NAMESPACE
