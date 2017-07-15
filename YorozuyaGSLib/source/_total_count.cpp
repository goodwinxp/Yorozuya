#include <_total_count.hpp>


START_ATF_NAMESPACE
    _total_count::_total_count()
    {
        using org_ptr = void (WINAPIV*)(struct _total_count*);
        (org_ptr(0x14047f7f0L))(this);
    };
    void _total_count::ctor__total_count()
    {
        using org_ptr = void (WINAPIV*)(struct _total_count*);
        (org_ptr(0x14047f7f0L))(this);
    };
END_ATF_NAMESPACE
