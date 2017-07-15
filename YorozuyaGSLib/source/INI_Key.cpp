#include <INI_Key.hpp>


START_ATF_NAMESPACE
    INI_Key::INI_Key()
    {
        using org_ptr = void (WINAPIV*)(struct INI_Key*);
        (org_ptr(0x1404700b0L))(this);
    };
    void INI_Key::ctor_INI_Key()
    {
        using org_ptr = void (WINAPIV*)(struct INI_Key*);
        (org_ptr(0x1404700b0L))(this);
    };
END_ATF_NAMESPACE
