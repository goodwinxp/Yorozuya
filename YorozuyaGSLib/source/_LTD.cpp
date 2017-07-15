#include <_LTD.hpp>


START_ATF_NAMESPACE
    void _LTD::set(char byMainLogType, char bySubLogType)
    {
        using org_ptr = void (WINAPIV*)(struct _LTD*, char, char);
        (org_ptr(0x14024bfc0L))(this, byMainLogType, bySubLogType);
    };
END_ATF_NAMESPACE
