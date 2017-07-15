#include <_post_result_zocl.hpp>


START_ATF_NAMESPACE
    _post_result_zocl::_post_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _post_result_zocl*);
        (org_ptr(0x1400f0470L))(this);
    };
    void _post_result_zocl::ctor__post_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _post_result_zocl*);
        (org_ptr(0x1400f0470L))(this);
    };
END_ATF_NAMESPACE
