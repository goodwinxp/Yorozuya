#include <__inner_check.hpp>


START_ATF_NAMESPACE
    __inner_check::__inner_check()
    {
        using org_ptr = void (WINAPIV*)(struct __inner_check*);
        (org_ptr(0x14027a500L))(this);
    };
    void __inner_check::ctor___inner_check()
    {
        using org_ptr = void (WINAPIV*)(struct __inner_check*);
        (org_ptr(0x14027a500L))(this);
    };
    __inner_check::~__inner_check()
    {
        using org_ptr = void (WINAPIV*)(struct __inner_check*);
        (org_ptr(0x140272f60L))(this);
    };
    void __inner_check::dtor___inner_check()
    {
        using org_ptr = void (WINAPIV*)(struct __inner_check*);
        (org_ptr(0x140272f60L))(this);
    };
END_ATF_NAMESPACE
