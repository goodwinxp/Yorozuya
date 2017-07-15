#include <_quest_dummy.hpp>


START_ATF_NAMESPACE
    bool _quest_dummy::SetDummy(struct _dummy_position* pDumPos)
    {
        using org_ptr = bool (WINAPIV*)(struct _quest_dummy*, struct _dummy_position*);
        return (org_ptr(0x140189b90L))(this, pDumPos);
    };
    _quest_dummy::_quest_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _quest_dummy*);
        (org_ptr(0x140189b70L))(this);
    };
    void _quest_dummy::ctor__quest_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _quest_dummy*);
        (org_ptr(0x140189b70L))(this);
    };
END_ATF_NAMESPACE
