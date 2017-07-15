#include <_log_change_class_after_init_class.hpp>


START_ATF_NAMESPACE
    int _log_change_class_after_init_class::size()
    {
        using org_ptr = int (WINAPIV*)(struct _log_change_class_after_init_class*);
        return (org_ptr(0x140120e20L))(this);
    };
END_ATF_NAMESPACE
