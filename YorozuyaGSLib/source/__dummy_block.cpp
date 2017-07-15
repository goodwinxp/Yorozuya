#include <__dummy_block.hpp>


START_ATF_NAMESPACE
    __dummy_block::__dummy_block()
    {
        using org_ptr = void (WINAPIV*)(struct __dummy_block*);
        (org_ptr(0x140279f80L))(this);
    };
    void __dummy_block::ctor___dummy_block()
    {
        using org_ptr = void (WINAPIV*)(struct __dummy_block*);
        (org_ptr(0x140279f80L))(this);
    };
END_ATF_NAMESPACE
