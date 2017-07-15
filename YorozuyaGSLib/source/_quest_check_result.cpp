#include <_quest_check_result.hpp>


START_ATF_NAMESPACE
    void _quest_check_result::init()
    {
        using org_ptr = void (WINAPIV*)(struct _quest_check_result*);
        (org_ptr(0x14028ca10L))(this);
    };
    
END_ATF_NAMESPACE
