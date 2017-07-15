#include <RACE_BOSS_MSG__CMsg.hpp>


START_ATF_NAMESPACE
    RACE_BOSS_MSG::CMsg::CMsg(char ucRace, unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*, char, unsigned int);
        (org_ptr(0x14029dbe0L))(this, ucRace, dwID);
    };
    void RACE_BOSS_MSG::CMsg::ctor_CMsg(char ucRace, unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*, char, unsigned int);
        (org_ptr(0x14029dbe0L))(this, ucRace, dwID);
    };
    void RACE_BOSS_MSG::CMsg::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x14029e3d0L))(this);
    };
    char* RACE_BOSS_MSG::CMsg::GetBossName()
    {
        using org_ptr = char* (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x1402a2cf0L))(this);
    };
    unsigned int RACE_BOSS_MSG::CMsg::GetID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x1402a2880L))(this);
    };
    char* RACE_BOSS_MSG::CMsg::GetMsg()
    {
        using org_ptr = char* (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x1402a2d70L))(this);
    };
    unsigned int RACE_BOSS_MSG::CMsg::GetSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x1402a2cd0L))(this);
    };
    unsigned int RACE_BOSS_MSG::CMsg::GetWebDBID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x1402a2d90L))(this);
    };
    bool RACE_BOSS_MSG::CMsg::IsDayChanged()
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x1402a2b90L))(this);
    };
    bool RACE_BOSS_MSG::CMsg::IsSendFromWeb()
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x1402a2d10L))(this);
    };
    bool RACE_BOSS_MSG::CMsg::IsSendTime()
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x14029dc50L))(this);
    };
    bool RACE_BOSS_MSG::CMsg::IsWait()
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        return (org_ptr(0x1402a2b30L))(this);
    };
    bool RACE_BOSS_MSG::CMsg::Load(char ucRace, unsigned int dwCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*, char, unsigned int);
        return (org_ptr(0x14029df40L))(this, ucRace, dwCurTime);
    };
    bool RACE_BOSS_MSG::CMsg::Save(char ucRace)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*, char);
        return (org_ptr(0x14029dcd0L))(this, ucRace);
    };
    bool RACE_BOSS_MSG::CMsg::Set(unsigned int dwSerial, char* pwszName, char* pwszMsg, unsigned int dbWebSendDBID)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*, unsigned int, char*, char*, unsigned int);
        return (org_ptr(0x14029e2b0L))(this, dwSerial, pwszName, pwszMsg, dbWebSendDBID);
    };
    void RACE_BOSS_MSG::CMsg::SetDayChanged()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x1402a2a50L))(this);
    };
    void RACE_BOSS_MSG::CMsg::SetDone()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x1402a2a30L))(this);
    };
    RACE_BOSS_MSG::CMsg::~CMsg()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x14029dc40L))(this);
    };
    void RACE_BOSS_MSG::CMsg::dtor_CMsg()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x14029dc40L))(this);
    };
    
END_ATF_NAMESPACE
