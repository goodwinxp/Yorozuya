#include <CUnmannedTraderSubClassInfo.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderSubClassInfo::CUnmannedTraderSubClassInfo(struct CUnmannedTraderSubClassInfo* lhs)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfo*, struct CUnmannedTraderSubClassInfo*);
        (org_ptr(0x140384630L))(this, lhs);
    };
    void CUnmannedTraderSubClassInfo::ctor_CUnmannedTraderSubClassInfo(struct CUnmannedTraderSubClassInfo* lhs)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfo*, struct CUnmannedTraderSubClassInfo*);
        (org_ptr(0x140384630L))(this, lhs);
    };
    CUnmannedTraderSubClassInfo::CUnmannedTraderSubClassInfo(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfo*, unsigned int);
        (org_ptr(0x1403845c0L))(this, dwID);
    };
    void CUnmannedTraderSubClassInfo::ctor_CUnmannedTraderSubClassInfo(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfo*, unsigned int);
        (org_ptr(0x1403845c0L))(this, dwID);
    };
    struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassInfo::Copy(struct CUnmannedTraderSubClassInfo* lhs)
    {
        using org_ptr = struct CUnmannedTraderSubClassInfo* (WINAPIV*)(struct CUnmannedTraderSubClassInfo*, struct CUnmannedTraderSubClassInfo*);
        return (org_ptr(0x140384710L))(this, lhs);
    };
    bool CUnmannedTraderSubClassInfo::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* bySubClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfo*, char, uint16_t, char*);
        return (org_ptr(0x1403846e0L))(this, byTableCode, wItemTableIndex, bySubClass);
    };
    unsigned int CUnmannedTraderSubClassInfo::GetID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderSubClassInfo*);
        return (org_ptr(0x14037e0a0L))(this);
    };
    char* CUnmannedTraderSubClassInfo::GetTypeName()
    {
        using org_ptr = char* (WINAPIV*)(struct CUnmannedTraderSubClassInfo*);
        return (org_ptr(0x140385cb0L))(this);
    };
    bool CUnmannedTraderSubClassInfo::LoadXML(struct TiXmlElement* pkElement, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassInfo*, struct TiXmlElement*, struct CLogFile*, unsigned int, unsigned int);
        return (org_ptr(0x1403846c0L))(this, pkElement, kLogger, dwDivisionID, dwClassID);
    };
    CUnmannedTraderSubClassInfo::~CUnmannedTraderSubClassInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfo*);
        (org_ptr(0x1403846a0L))(this);
    };
    void CUnmannedTraderSubClassInfo::dtor_CUnmannedTraderSubClassInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassInfo*);
        (org_ptr(0x1403846a0L))(this);
    };
END_ATF_NAMESPACE
