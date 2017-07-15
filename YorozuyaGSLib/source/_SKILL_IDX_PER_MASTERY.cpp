#include <_SKILL_IDX_PER_MASTERY.hpp>


START_ATF_NAMESPACE
    _SKILL_IDX_PER_MASTERY::_SKILL_IDX_PER_MASTERY()
    {
        using org_ptr = void (WINAPIV*)(struct _SKILL_IDX_PER_MASTERY*);
        (org_ptr(0x14007f1e0L))(this);
    };
    void _SKILL_IDX_PER_MASTERY::ctor__SKILL_IDX_PER_MASTERY()
    {
        using org_ptr = void (WINAPIV*)(struct _SKILL_IDX_PER_MASTERY*);
        (org_ptr(0x14007f1e0L))(this);
    };
END_ATF_NAMESPACE
