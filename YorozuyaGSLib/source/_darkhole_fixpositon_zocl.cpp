#include <_darkhole_fixpositon_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_fixpositon_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_fixpositon_zocl*);
        return (org_ptr(0x140164900L))(this);
    };
END_ATF_NAMESPACE
