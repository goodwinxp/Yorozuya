#include <_quest_fail_result.hpp>


START_ATF_NAMESPACE
    void _quest_fail_result::init()
    {
        using org_ptr = void (WINAPIV*)(struct _quest_fail_result*);
        (org_ptr(0x14028ca30L))(this);
    };
    
END_ATF_NAMESPACE
