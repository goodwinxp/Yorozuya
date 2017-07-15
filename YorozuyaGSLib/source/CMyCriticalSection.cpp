#include <CMyCriticalSection.hpp>


START_ATF_NAMESPACE
    CMyCriticalSection::CMyCriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct CMyCriticalSection*);
        (org_ptr(0x140438c30L))(this);
    };
    void CMyCriticalSection::ctor_CMyCriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct CMyCriticalSection*);
        (org_ptr(0x140438c30L))(this);
    };
    void CMyCriticalSection::Lock()
    {
        using org_ptr = void (WINAPIV*)(struct CMyCriticalSection*);
        (org_ptr(0x140438ce0L))(this);
    };
    void CMyCriticalSection::Unlock()
    {
        using org_ptr = void (WINAPIV*)(struct CMyCriticalSection*);
        (org_ptr(0x140438d30L))(this);
    };
    CMyCriticalSection::~CMyCriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct CMyCriticalSection*);
        (org_ptr(0x140438c90L))(this);
    };
    void CMyCriticalSection::dtor_CMyCriticalSection()
    {
        using org_ptr = void (WINAPIV*)(struct CMyCriticalSection*);
        (org_ptr(0x140438c90L))(this);
    };
END_ATF_NAMESPACE
