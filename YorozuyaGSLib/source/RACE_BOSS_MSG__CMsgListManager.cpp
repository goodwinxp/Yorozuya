#include <RACE_BOSS_MSG__CMsgListManager.hpp>


START_ATF_NAMESPACE
    RACE_BOSS_MSG::CMsgListManager::CMsgListManager()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        (org_ptr(0x14029f880L))(this);
    };
    void RACE_BOSS_MSG::CMsgListManager::ctor_CMsgListManager()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        (org_ptr(0x14029f880L))(this);
    };
    int RACE_BOSS_MSG::CMsgListManager::Cancel(char ucRace, unsigned int dwMsgID, struct RACE_BOSS_MSG::CMsg** pkMsg)
    {
        using org_ptr = int (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*, char, unsigned int, struct RACE_BOSS_MSG::CMsg**);
        return (org_ptr(0x14029fab0L))(this, ucRace, dwMsgID, pkMsg);
    };
    void RACE_BOSS_MSG::CMsgListManager::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        (org_ptr(0x1402a0190L))(this);
    };
    void RACE_BOSS_MSG::CMsgListManager::CleanUpCancel(char ucRace, struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*, char, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x14029fcc0L))(this, ucRace, pkMsg);
    };
    char RACE_BOSS_MSG::CMsgListManager::GetRemainCnt(char ucRace)
    {
        using org_ptr = char (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*, char);
        return (org_ptr(0x14029fb30L))(this, ucRace);
    };
    struct RACE_BOSS_MSG::CMsg* RACE_BOSS_MSG::CMsgListManager::GetSendMsg(char* ucRace)
    {
        using org_ptr = struct RACE_BOSS_MSG::CMsg* (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*, char*);
        return (org_ptr(0x14029fba0L))(this, ucRace);
    };
    bool RACE_BOSS_MSG::CMsgListManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        return (org_ptr(0x1402a0090L))(this);
    };
    bool RACE_BOSS_MSG::CMsgListManager::IsHaveBeenSave()
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        return (org_ptr(0x14029ff50L))(this);
    };
    bool RACE_BOSS_MSG::CMsgListManager::Load(unsigned int dwCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*, unsigned int);
        return (org_ptr(0x14029fec0L))(this, dwCurTime);
    };
    void RACE_BOSS_MSG::CMsgListManager::Refresh()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        (org_ptr(0x1402a0020L))(this);
    };
    void RACE_BOSS_MSG::CMsgListManager::Release(char ucRace, struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*, char, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x14029fc50L))(this, ucRace, pkMsg);
    };
    void RACE_BOSS_MSG::CMsgListManager::Save(char ucRace)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*, char);
        (org_ptr(0x14029fe30L))(this, ucRace);
    };
    void RACE_BOSS_MSG::CMsgListManager::Save()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        (org_ptr(0x14029fd80L))(this);
    };
    int RACE_BOSS_MSG::CMsgListManager::Send(char ucRace, unsigned int dwSerial, char* pwszName, char* pwszMsg, struct RACE_BOSS_MSG::CMsg** pkSend, unsigned int dbWebSendDBID)
    {
        using org_ptr = int (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*, char, unsigned int, char*, char*, struct RACE_BOSS_MSG::CMsg**, unsigned int);
        return (org_ptr(0x14029f930L))(this, ucRace, dwSerial, pwszName, pwszMsg, pkSend, dbWebSendDBID);
    };
    RACE_BOSS_MSG::CMsgListManager::~CMsgListManager()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        (org_ptr(0x14029f8f0L))(this);
    };
    void RACE_BOSS_MSG::CMsgListManager::dtor_CMsgListManager()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgListManager*);
        (org_ptr(0x14029f8f0L))(this);
    };
END_ATF_NAMESPACE
