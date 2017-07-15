#include <CNetCriticalSection.hpp>


START_ATF_NAMESPACE
    CNetCriticalSection::CNetCriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
        (org_ptr(0x140073230L))(this);
    };
    void CNetCriticalSection::ctor_CNetCriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
        (org_ptr(0x140073230L))(this);
    };
    void CNetCriticalSection::Lock()
    {
        using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
        (org_ptr(0x140073900L))(this);
    };
    void CNetCriticalSection::Unlock()
    {
        using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
        (org_ptr(0x140073950L))(this);
    };
    CNetCriticalSection::~CNetCriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
        (org_ptr(0x140073340L))(this);
    };
    void CNetCriticalSection::dtor_CNetCriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
        (org_ptr(0x140073340L))(this);
    };
END_ATF_NAMESPACE
