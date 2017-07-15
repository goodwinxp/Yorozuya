#include <CSyncCS.hpp>


START_ATF_NAMESPACE
    CSyncCS::CSyncCS()
    {
        using org_ptr = void (WINAPIV*)(struct CSyncCS*);
        (org_ptr(0x140439140L))(this);
    };
    void CSyncCS::ctor_CSyncCS()
    {
        using org_ptr = void (WINAPIV*)(struct CSyncCS*);
        (org_ptr(0x140439140L))(this);
    };
    bool CSyncCS::IsUse()
    {
        using org_ptr = bool (WINAPIV*)(struct CSyncCS*);
        return (org_ptr(0x14043abc0L))(this);
    };
    void CSyncCS::Lock()
    {
        using org_ptr = void (WINAPIV*)(struct CSyncCS*);
        (org_ptr(0x140439250L))(this);
    };
    void CSyncCS::SetUse(bool bUse)
    {
        using org_ptr = void (WINAPIV*)(struct CSyncCS*, bool);
        (org_ptr(0x1404391d0L))(this, bUse);
    };
    void CSyncCS::Unlock()
    {
        using org_ptr = void (WINAPIV*)(struct CSyncCS*);
        (org_ptr(0x1404392a0L))(this);
    };
    CSyncCS::~CSyncCS()
    {
        using org_ptr = void (WINAPIV*)(struct CSyncCS*);
        (org_ptr(0x140439170L))(this);
    };
    void CSyncCS::dtor_CSyncCS()
    {
        using org_ptr = void (WINAPIV*)(struct CSyncCS*);
        (org_ptr(0x140439170L))(this);
    };
END_ATF_NAMESPACE
