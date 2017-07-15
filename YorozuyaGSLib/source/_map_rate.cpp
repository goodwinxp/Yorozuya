#include <_map_rate.hpp>


START_ATF_NAMESPACE
    void _map_rate::Setting(int x, int y)
    {
        using org_ptr = void (WINAPIV*)(struct _map_rate*, int, int);
        (org_ptr(0x1401a2700L))(this, x, y);
    };
END_ATF_NAMESPACE
