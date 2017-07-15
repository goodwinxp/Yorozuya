#include <CDarkHoleDungeonQuest.hpp>


START_ATF_NAMESPACE
    CDarkHoleDungeonQuest::CDarkHoleDungeonQuest()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuest*);
        (org_ptr(0x140265eb0L))(this);
    };
    void CDarkHoleDungeonQuest::ctor_CDarkHoleDungeonQuest()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuest*);
        (org_ptr(0x140265eb0L))(this);
    };
    struct CDarkHoleChannel* CDarkHoleDungeonQuest::CanOpenChannel(int nQuestIndex)
    {
        using org_ptr = struct CDarkHoleChannel* (WINAPIV*)(struct CDarkHoleDungeonQuest*, int);
        return (org_ptr(0x140266440L))(this, nQuestIndex);
    };
    void CDarkHoleDungeonQuest::CheckQuestOnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuest*);
        (org_ptr(0x1402664e0L))(this);
    };
    struct CDarkHoleChannel* CDarkHoleDungeonQuest::GetChannel(unsigned int dwChannelIndex)
    {
        using org_ptr = struct CDarkHoleChannel* (WINAPIV*)(struct CDarkHoleDungeonQuest*, unsigned int);
        return (org_ptr(0x140099510L))(this, dwChannelIndex);
    };
    bool CDarkHoleDungeonQuest::LoadDarkHoleQuest()
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuest*);
        return (org_ptr(0x140266170L))(this);
    };
    struct CDarkHoleChannel* CDarkHoleDungeonQuest::OpenChannel(int nQuestIndex, struct CPlayer* pOpener, struct CDarkHole* pHoleObj)
    {
        using org_ptr = struct CDarkHoleChannel* (WINAPIV*)(struct CDarkHoleDungeonQuest*, int, struct CPlayer*, struct CDarkHole*);
        return (org_ptr(0x140266330L))(this, nQuestIndex, pOpener, pHoleObj);
    };
    int CDarkHoleDungeonQuest::SearchEmptyDarkHoleChannel()
    {
        using org_ptr = int (WINAPIV*)(struct CDarkHoleDungeonQuest*);
        return (org_ptr(0x1402666d0L))(this);
    };
    int CDarkHoleDungeonQuest::SearchEmptyDarkHoleLayer(int nQuestIndex)
    {
        using org_ptr = int (WINAPIV*)(struct CDarkHoleDungeonQuest*, int);
        return (org_ptr(0x140266760L))(this, nQuestIndex);
    };
    struct CDarkHoleChannel* CDarkHoleDungeonQuest::SearchOncePlayedChannel(unsigned int dwMemberSerial)
    {
        using org_ptr = struct CDarkHoleChannel* (WINAPIV*)(struct CDarkHoleDungeonQuest*, unsigned int);
        return (org_ptr(0x1402665c0L))(this, dwMemberSerial);
    };
    CDarkHoleDungeonQuest::~CDarkHoleDungeonQuest()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuest*);
        (org_ptr(0x140265fe0L))(this);
    };
    void CDarkHoleDungeonQuest::dtor_CDarkHoleDungeonQuest()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuest*);
        (org_ptr(0x140265fe0L))(this);
    };
END_ATF_NAMESPACE
