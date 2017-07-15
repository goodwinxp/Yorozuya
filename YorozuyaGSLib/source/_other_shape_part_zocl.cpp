#include <_other_shape_part_zocl.hpp>


START_ATF_NAMESPACE
    _other_shape_part_zocl::_other_shape_part_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _other_shape_part_zocl*);
        (org_ptr(0x140072ba0L))(this);
    };
    void _other_shape_part_zocl::ctor__other_shape_part_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _other_shape_part_zocl*);
        (org_ptr(0x140072ba0L))(this);
    };
    int _other_shape_part_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _other_shape_part_zocl*);
        return (org_ptr(0x1400ef080L))(this);
    };
    
END_ATF_NAMESPACE
