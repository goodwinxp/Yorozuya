#include <_happen_event_cont.hpp>


START_ATF_NAMESPACE
    _happen_event_cont::_happen_event_cont()
    {
        using org_ptr = void (WINAPIV*)(struct _happen_event_cont*);
        (org_ptr(0x1400cfb70L))(this);
    };
    void _happen_event_cont::ctor__happen_event_cont()
    {
        using org_ptr = void (WINAPIV*)(struct _happen_event_cont*);
        (org_ptr(0x1400cfb70L))(this);
    };
    void _happen_event_cont::init()
    {
        using org_ptr = void (WINAPIV*)(struct _happen_event_cont*);
        (org_ptr(0x1400cfbc0L))(this);
    };
    bool _happen_event_cont::isset()
    {
        using org_ptr = bool (WINAPIV*)(struct _happen_event_cont*);
        return (org_ptr(0x1400cfc10L))(this);
    };
    void _happen_event_cont::set(struct _happen_event_node* pPoint, QUEST_HAPPEN QtHpType, int nIndexInType, int nRaceCode)
    {
        using org_ptr = void (WINAPIV*)(struct _happen_event_cont*, struct _happen_event_node*, QUEST_HAPPEN, int, int);
        (org_ptr(0x14028c8d0L))(this, pPoint, QtHpType, nIndexInType, nRaceCode);
    };
END_ATF_NAMESPACE
