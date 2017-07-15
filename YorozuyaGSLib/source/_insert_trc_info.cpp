#include <_insert_trc_info.hpp>


START_ATF_NAMESPACE
    int _insert_trc_info::size()
    {
        using org_ptr = int (WINAPIV*)(struct _insert_trc_info*);
        return (org_ptr(0x1402d9c00L))(this);
    };
END_ATF_NAMESPACE
