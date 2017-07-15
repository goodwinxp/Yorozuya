#include <_check_query.hpp>


START_ATF_NAMESPACE
    int _check_query::size()
    {
        using org_ptr = int (WINAPIV*)(struct _check_query*);
        return (org_ptr(0x14047db10L))(this);
    };
END_ATF_NAMESPACE
