#include <_ccrfg_detect_alret.hpp>


START_ATF_NAMESPACE
    int _ccrfg_detect_alret::size()
    {
        using org_ptr = int (WINAPIV*)(struct _ccrfg_detect_alret*);
        return (org_ptr(0x1401e13e0L))(this);
    };
END_ATF_NAMESPACE
