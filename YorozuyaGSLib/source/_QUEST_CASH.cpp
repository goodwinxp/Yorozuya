#include <_QUEST_CASH.hpp>


START_ATF_NAMESPACE
    _QUEST_CASH::_QUEST_CASH()
    {
        using org_ptr = void (WINAPIV*)(struct _QUEST_CASH*);
        (org_ptr(0x140284230L))(this);
    };
    void _QUEST_CASH::ctor__QUEST_CASH()
    {
        using org_ptr = void (WINAPIV*)(struct _QUEST_CASH*);
        (org_ptr(0x140284230L))(this);
    };
    void _QUEST_CASH::init()
    {
        using org_ptr = void (WINAPIV*)(struct _QUEST_CASH*);
        (org_ptr(0x140079710L))(this);
    };
    bool _QUEST_CASH::isload()
    {
        using org_ptr = bool (WINAPIV*)(struct _QUEST_CASH*);
        return (org_ptr(0x140284cd0L))(this);
    };
END_ATF_NAMESPACE
