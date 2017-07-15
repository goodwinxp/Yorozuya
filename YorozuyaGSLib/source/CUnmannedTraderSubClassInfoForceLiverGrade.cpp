#include <CUnmannedTraderSubClassInfoForceLiverGrade.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderSubClassInfoForceLiverGrade::CUnmannedTraderSubClassInfoForceLiverGrade(struct CUnmannedTraderSubClassInfoForceLiverGrade* lhs)
        : CUnmannedTraderSubClassInfo(lhs)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*, struct CUnmannedTraderSubClassInfoForceLiverGrade*);
        (org_ptr(0x140383bd0L))(this, lhs);
    };
    void CUnmannedTraderSubClassInfoForceLiverGrade::ctor_CUnmannedTraderSubClassInfoForceLiverGrade(struct CUnmannedTraderSubClassInfoForceLiverGrade* lhs)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*, struct CUnmannedTraderSubClassInfoForceLiverGrade*);
        (org_ptr(0x140383bd0L))(this, lhs);
    };
    CUnmannedTraderSubClassInfoForceLiverGrade::CUnmannedTraderSubClassInfoForceLiverGrade(unsigned int dwID)
        : CUnmannedTraderSubClassInfo(dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*, unsigned int);
        (org_ptr(0x140383b50L))(this, dwID);
    };
    void CUnmannedTraderSubClassInfoForceLiverGrade::ctor_CUnmannedTraderSubClassInfoForceLiverGrade(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*, unsigned int);
        (org_ptr(0x140383b50L))(this, dwID);
    };
    struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfoForceLiverGrade::Create(unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderSubClassInfo* (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*, unsigned int);
        return (org_ptr(0x140383fa0L))(this, dwID);
    };
    bool CUnmannedTraderSubClassInfoForceLiverGrade::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*, char, uint16_t, char*);
        return (org_ptr(0x140383e10L))(this, byTableCode, wItemTableIndex, bySubClass);
    };
    bool CUnmannedTraderSubClassInfoForceLiverGrade::LoadXML(struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*, struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int);
        return (org_ptr(0x140383d40L))(this, elemSubClass, kLogger, dwDivisionID, dwClassID);
    };
    CUnmannedTraderSubClassInfoForceLiverGrade::~CUnmannedTraderSubClassInfoForceLiverGrade()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*);
        (org_ptr(0x140383c90L))(this);
    };
    void CUnmannedTraderSubClassInfoForceLiverGrade::dtor_CUnmannedTraderSubClassInfoForceLiverGrade()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfoForceLiverGrade*);
        (org_ptr(0x140383c90L))(this);
    };
END_ATF_NAMESPACE
