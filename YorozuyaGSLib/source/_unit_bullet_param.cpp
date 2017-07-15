#include <_unit_bullet_param.hpp>


START_ATF_NAMESPACE
    int _unit_bullet_param::IsFill()
    {
        using org_ptr = int (WINAPIV*)(struct _unit_bullet_param*);
        return (org_ptr(0x1401083b0L))(this);
    };
END_ATF_NAMESPACE
