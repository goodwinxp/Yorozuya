#include <_conditional_event_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _conditional_event_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _conditional_event_inform_zocl*);
        return (org_ptr(0x14030d770L))(this);
    };
END_ATF_NAMESPACE
