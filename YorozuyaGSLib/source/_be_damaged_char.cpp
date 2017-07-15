#include <_be_damaged_char.hpp>


START_ATF_NAMESPACE
    _be_damaged_char::_be_damaged_char()
    {
        using org_ptr = void (WINAPIV*)(struct _be_damaged_char*);
        (org_ptr(0x14013e400L))(this);
    };
    void _be_damaged_char::ctor__be_damaged_char()
    {
        using org_ptr = void (WINAPIV*)(struct _be_damaged_char*);
        (org_ptr(0x14013e400L))(this);
    };
END_ATF_NAMESPACE
