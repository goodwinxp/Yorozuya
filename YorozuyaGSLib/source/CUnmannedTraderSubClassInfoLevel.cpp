#include <CUnmannedTraderSubClassInfoLevel.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderSubClassInfoLevel::CUnmannedTraderSubClassInfoLevel(unsigned int dwID)
        : CUnmannedTraderSubClassInfo(dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoLevel*, unsigned int);
        (org_ptr(0x140384070L))(this, dwID);
    };
    void CUnmannedTraderSubClassInfoLevel::ctor_CUnmannedTraderSubClassInfoLevel(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoLevel*, unsigned int);
        (org_ptr(0x140384070L))(this, dwID);
    };
    struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoLevel::Create(unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderSubClassInfo* (WINAPIV*)(struct CUnmannedTraderSubClassInfoLevel*, unsigned int);
        return (org_ptr(0x1403844f0L))(this, dwID);
    };
    bool CUnmannedTraderSubClassInfoLevel::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfoLevel*, char, uint16_t, char*);
        return (org_ptr(0x140384380L))(this, byTableCode, wItemTableIndex, bySubClass);
    };
    bool CUnmannedTraderSubClassInfoLevel::LoadXML(struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfoLevel*, struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int);
        return (org_ptr(0x1403841b0L))(this, elemSubClass, kLogger, dwDivisionID, dwClassID);
    };
    CUnmannedTraderSubClassInfoLevel::~CUnmannedTraderSubClassInfoLevel()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoLevel*);
        (org_ptr(0x1403840f0L))(this);
    };
    void CUnmannedTraderSubClassInfoLevel::dtor_CUnmannedTraderSubClassInfoLevel()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoLevel*);
        (org_ptr(0x1403840f0L))(this);
    };
END_ATF_NAMESPACE
