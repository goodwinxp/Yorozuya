#include <RACE_BOSS_MSG__CMsgList.hpp>


START_ATF_NAMESPACE
    void RACE_BOSS_MSG::CMsgList::AddEmpty(struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x14029eb20L))(this, pkMsg);
    };
    void RACE_BOSS_MSG::CMsgList::AddUse(struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x14029e9d0L))(this, pkMsg);
    };
    RACE_BOSS_MSG::CMsgList::CMsgList(char ucRace, unsigned int uiSize)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, char, unsigned int);
        (org_ptr(0x14029e460L))(this, ucRace, uiSize);
    };
    void RACE_BOSS_MSG::CMsgList::ctor_CMsgList(char ucRace, unsigned int uiSize)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, char, unsigned int);
        (org_ptr(0x14029e460L))(this, ucRace, uiSize);
    };
    int RACE_BOSS_MSG::CMsgList::Cancel(unsigned int dwMsgID, struct RACE_BOSS_MSG::CMsg** pkMsg)
    {
        using org_ptr = int (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, unsigned int, struct RACE_BOSS_MSG::CMsg**);
        return (org_ptr(0x14029ec50L))(this, dwMsgID, pkMsg);
    };
    void RACE_BOSS_MSG::CMsgList::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        (org_ptr(0x14029f050L))(this);
    };
    struct RACE_BOSS_MSG::CMsg* RACE_BOSS_MSG::CMsgList::GetEmpty()
    {
        using org_ptr = struct RACE_BOSS_MSG::CMsg* (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        return (org_ptr(0x14029e880L))(this);
    };
    char RACE_BOSS_MSG::CMsgList::GetRemainCnt()
    {
        using org_ptr = char (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        return (org_ptr(0x1402a2ae0L))(this);
    };
    struct RACE_BOSS_MSG::CMsg* RACE_BOSS_MSG::CMsgList::GetSendMsg()
    {
        using org_ptr = struct RACE_BOSS_MSG::CMsg* (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        return (org_ptr(0x14029e920L))(this);
    };
    bool RACE_BOSS_MSG::CMsgList::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        return (org_ptr(0x14029ee60L))(this);
    };
    bool RACE_BOSS_MSG::CMsgList::Load(unsigned int dwCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, unsigned int);
        return (org_ptr(0x14029e790L))(this, dwCurTime);
    };
    bool RACE_BOSS_MSG::CMsgList::LoadIndexList(int iType, struct CNetIndexList* kInxList)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, int, struct CNetIndexList*);
        return (org_ptr(0x14029f450L))(this, iType, kInxList);
    };
    bool RACE_BOSS_MSG::CMsgList::LoadMsgList(struct CNetIndexList* kInxList, unsigned int dwCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, struct CNetIndexList*, unsigned int);
        return (org_ptr(0x14029f780L))(this, kInxList, dwCurTime);
    };
    void RACE_BOSS_MSG::CMsgList::Refresh()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        (org_ptr(0x14029ed00L))(this);
    };
    void RACE_BOSS_MSG::CMsgList::Release(struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x14029eba0L))(this, pkMsg);
    };
    void RACE_BOSS_MSG::CMsgList::RollBack()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        (org_ptr(0x14029ea60L))(this);
    };
    bool RACE_BOSS_MSG::CMsgList::Save()
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        return (org_ptr(0x14029e6b0L))(this);
    };
    bool RACE_BOSS_MSG::CMsgList::SaveIndexList(int iType, struct CNetIndexList* kInxList)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, int, struct CNetIndexList*);
        return (org_ptr(0x14029f120L))(this, iType, kInxList);
    };
    bool RACE_BOSS_MSG::CMsgList::SaveMsgList(struct CNetIndexList* kInxList)
    {
        using org_ptr = bool (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*, struct CNetIndexList*);
        return (org_ptr(0x14029f690L))(this, kInxList);
    };
    RACE_BOSS_MSG::CMsgList::~CMsgList()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        (org_ptr(0x14029e5a0L))(this);
    };
    void RACE_BOSS_MSG::CMsgList::dtor_CMsgList()
    {
        using org_ptr = void (WINAPIV*)(struct RACE_BOSS_MSG::CMsgList*);
        (org_ptr(0x14029e5a0L))(this);
    };
    
END_ATF_NAMESPACE
