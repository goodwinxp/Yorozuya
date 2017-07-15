#include <_QUEST_CASH_OTHER.hpp>


START_ATF_NAMESPACE
    _QUEST_CASH_OTHER::_QUEST_CASH_OTHER()
    {
        using org_ptr = void (WINAPIV*)(struct _QUEST_CASH_OTHER*);
        (org_ptr(0x140284280L))(this);
    };
    void _QUEST_CASH_OTHER::ctor__QUEST_CASH_OTHER()
    {
        using org_ptr = void (WINAPIV*)(struct _QUEST_CASH_OTHER*);
        (org_ptr(0x140284280L))(this);
    };
    void _QUEST_CASH_OTHER::init()
    {
        using org_ptr = void (WINAPIV*)(struct _QUEST_CASH_OTHER*);
        (org_ptr(0x1402842d0L))(this);
    };
    bool _QUEST_CASH_OTHER::isLoaded()
    {
        using org_ptr = bool (WINAPIV*)(struct _QUEST_CASH_OTHER*);
        return (org_ptr(0x140284da0L))(this);
    };
END_ATF_NAMESPACE
