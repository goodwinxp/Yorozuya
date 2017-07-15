#include <_other_shape_all_zocl.hpp>


START_ATF_NAMESPACE
    _other_shape_all_zocl::_other_shape_all_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _other_shape_all_zocl*);
        (org_ptr(0x140072b80L))(this);
    };
    void _other_shape_all_zocl::ctor__other_shape_all_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _other_shape_all_zocl*);
        (org_ptr(0x140072b80L))(this);
    };
    int _other_shape_all_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _other_shape_all_zocl*);
        return (org_ptr(0x1400ef050L))(this);
    };
    
END_ATF_NAMESPACE
