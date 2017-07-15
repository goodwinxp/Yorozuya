#include <__respond_check.hpp>


START_ATF_NAMESPACE
    __respond_check::__respond_check()
    {
        using org_ptr = void (WINAPIV*)(struct __respond_check*);
        (org_ptr(0x14027a5a0L))(this);
    };
    void __respond_check::ctor___respond_check()
    {
        using org_ptr = void (WINAPIV*)(struct __respond_check*);
        (org_ptr(0x14027a5a0L))(this);
    };
    __respond_check::~__respond_check()
    {
        using org_ptr = void (WINAPIV*)(struct __respond_check*);
        (org_ptr(0x140273060L))(this);
    };
    void __respond_check::dtor___respond_check()
    {
        using org_ptr = void (WINAPIV*)(struct __respond_check*);
        (org_ptr(0x140273060L))(this);
    };
END_ATF_NAMESPACE
