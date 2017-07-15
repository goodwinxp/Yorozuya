#include <US__CriticalSection.hpp>


START_ATF_NAMESPACE
    US::CriticalSection::CriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct US::CriticalSection*);
        (org_ptr(0x14041e0d0L))(this);
    };
    void US::CriticalSection::ctor_CriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct US::CriticalSection*);
        (org_ptr(0x14041e0d0L))(this);
    };
    void US::CriticalSection::Lock()
    {
        using org_ptr = void (WINAPIV*)(struct US::CriticalSection*);
        (org_ptr(0x14041e530L))(this);
    };
    void US::CriticalSection::UnLock()
    {
        using org_ptr = void (WINAPIV*)(struct US::CriticalSection*);
        (org_ptr(0x14041e630L))(this);
    };
    US::CriticalSection::~CriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct US::CriticalSection*);
        (org_ptr(0x14041e120L))(this);
    };
    void US::CriticalSection::dtor_CriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct US::CriticalSection*);
        (org_ptr(0x14041e120L))(this);
    };
END_ATF_NAMESPACE
