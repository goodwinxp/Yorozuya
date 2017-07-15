#include <CUnmannedTraderClassInfoFactory.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderClassInfoFactory::CUnmannedTraderClassInfoFactory()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoFactory*);
        (org_ptr(0x1403847e0L))(this);
    };
    void CUnmannedTraderClassInfoFactory::ctor_CUnmannedTraderClassInfoFactory()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoFactory*);
        (org_ptr(0x1403847e0L))(this);
    };
    struct CUnmannedTraderClassInfo* CUnmannedTraderClassInfoFactory::Create(char* szType, unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderClassInfo* (WINAPIV*)(struct CUnmannedTraderClassInfoFactory*, char*, unsigned int);
        return (org_ptr(0x140384c10L))(this, szType, dwID);
    };
    void CUnmannedTraderClassInfoFactory::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoFactory*);
        (org_ptr(0x140384e00L))(this);
    };
    bool CUnmannedTraderClassInfoFactory::Regist(struct CUnmannedTraderClassInfo* pkType)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoFactory*, struct CUnmannedTraderClassInfo*);
        return (org_ptr(0x1403849e0L))(this, pkType);
    };
    CUnmannedTraderClassInfoFactory::~CUnmannedTraderClassInfoFactory()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoFactory*);
        (org_ptr(0x140384960L))(this);
    };
    void CUnmannedTraderClassInfoFactory::dtor_CUnmannedTraderClassInfoFactory()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoFactory*);
        (org_ptr(0x140384960L))(this);
    };
END_ATF_NAMESPACE
