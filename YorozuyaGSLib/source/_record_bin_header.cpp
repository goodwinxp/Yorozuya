#include <_record_bin_header.hpp>


START_ATF_NAMESPACE
    _record_bin_header::_record_bin_header()
    {
        using org_ptr = void (WINAPIV*)(struct _record_bin_header*);
        (org_ptr(0x140044720L))(this);
    };
    void _record_bin_header::ctor__record_bin_header()
    {
        using org_ptr = void (WINAPIV*)(struct _record_bin_header*);
        (org_ptr(0x140044720L))(this);
    };
END_ATF_NAMESPACE
