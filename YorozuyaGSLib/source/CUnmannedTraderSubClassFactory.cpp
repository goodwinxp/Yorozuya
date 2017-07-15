#include <CUnmannedTraderSubClassFactory.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderSubClassFactory::CUnmannedTraderSubClassFactory()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassFactory*);
        (org_ptr(0x1403851a0L))(this);
    };
    void CUnmannedTraderSubClassFactory::ctor_CUnmannedTraderSubClassFactory()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassFactory*);
        (org_ptr(0x1403851a0L))(this);
    };
    struct CUnmannedTraderSubClassInfo* CUnmannedTraderSubClassFactory::Create(char* szType, unsigned int dwID)
    {
        using org_ptr = struct CUnmannedTraderSubClassInfo* (WINAPIV*)(struct CUnmannedTraderSubClassFactory*, char*, unsigned int);
        return (org_ptr(0x1403856f0L))(this, szType, dwID);
    };
    void CUnmannedTraderSubClassFactory::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassFactory*);
        (org_ptr(0x1403858e0L))(this);
    };
    bool CUnmannedTraderSubClassFactory::Regist(struct CUnmannedTraderSubClassInfo* pkType)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSubClassFactory*, struct CUnmannedTraderSubClassInfo*);
        return (org_ptr(0x1403854c0L))(this, pkType);
    };
    CUnmannedTraderSubClassFactory::~CUnmannedTraderSubClassFactory()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassFactory*);
        (org_ptr(0x140385440L))(this);
    };
    void CUnmannedTraderSubClassFactory::dtor_CUnmannedTraderSubClassFactory()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSubClassFactory*);
        (org_ptr(0x140385440L))(this);
    };
END_ATF_NAMESPACE
