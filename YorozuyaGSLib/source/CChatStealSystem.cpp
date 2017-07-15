#include <CChatStealSystem.hpp>


START_ATF_NAMESPACE
    CChatStealSystem::CChatStealSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CChatStealSystem*);
        (org_ptr(0x1403f86a0L))(this);
    };
    void CChatStealSystem::ctor_CChatStealSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CChatStealSystem*);
        (org_ptr(0x1403f86a0L))(this);
    };
    struct CChatStealSystem* CChatStealSystem::Instance()
    {
        using org_ptr = struct CChatStealSystem* (WINAPIV*)();
        return (org_ptr(0x140094f00L))();
    };
    void CChatStealSystem::SendStealMsg(struct CPlayer* pPlayer, char byChatType, unsigned int dwSenderSerial, char* pwszSender, char byRaceCode, char* pwszMessage)
    {
        using org_ptr = void (WINAPIV*)(struct CChatStealSystem*, struct CPlayer*, char, unsigned int, char*, char, char*);
        (org_ptr(0x1403f8a30L))(this, pPlayer, byChatType, dwSenderSerial, pwszSender, byRaceCode, pwszMessage);
    };
    bool CChatStealSystem::SetGm(struct CPlayer* pGM)
    {
        using org_ptr = bool (WINAPIV*)(struct CChatStealSystem*, struct CPlayer*);
        return (org_ptr(0x1403f88b0L))(this, pGM);
    };
    bool CChatStealSystem::SetTargetInfoFromBoss(char byType, char byRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CChatStealSystem*, char, char);
        return (org_ptr(0x1403f8870L))(this, byType, byRaceCode);
    };
    bool CChatStealSystem::SetTargetInfoFromCharacter(char byType, char* szCharName)
    {
        using org_ptr = bool (WINAPIV*)(struct CChatStealSystem*, char, char*);
        return (org_ptr(0x1403f87c0L))(this, byType, szCharName);
    };
    bool CChatStealSystem::SetTargetInfoFromRace(char byType, char byRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CChatStealSystem*, char, char);
        return (org_ptr(0x1403f8830L))(this, byType, byRaceCode);
    };
    void CChatStealSystem::StealChatMsg(struct CPlayer* pPlayer, char byChatType, char* szChatMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CChatStealSystem*, struct CPlayer*, char, char*);
        (org_ptr(0x1403f8900L))(this, pPlayer, byChatType, szChatMsg);
    };
    CChatStealSystem::~CChatStealSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CChatStealSystem*);
        (org_ptr(0x1403f8700L))(this);
    };
    void CChatStealSystem::dtor_CChatStealSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CChatStealSystem*);
        (org_ptr(0x1403f8700L))(this);
    };
END_ATF_NAMESPACE
