#include <_dh_quest_setup.hpp>


START_ATF_NAMESPACE
    struct _dh_mission_setup* _dh_quest_setup::SearchMissionFromTitle(char* pszMissionTitle)
    {
        using org_ptr = struct _dh_mission_setup* (WINAPIV*)(struct _dh_quest_setup*, char*);
        return (org_ptr(0x140272c60L))(this, pszMissionTitle);
    };
    void _dh_quest_setup::SetRealBoss(bool isReal)
    {
        using org_ptr = void (WINAPIV*)(struct _dh_quest_setup*, bool);
        (org_ptr(0x14026ea30L))(this, isReal);
    };
    _dh_quest_setup::_dh_quest_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_quest_setup*);
        (org_ptr(0x1402723c0L))(this);
    };
    void _dh_quest_setup::ctor__dh_quest_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_quest_setup*);
        (org_ptr(0x1402723c0L))(this);
    };
    _dh_quest_setup::~_dh_quest_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_quest_setup*);
        (org_ptr(0x140272840L))(this);
    };
    void _dh_quest_setup::dtor__dh_quest_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_quest_setup*);
        (org_ptr(0x140272840L))(this);
    };
END_ATF_NAMESPACE
