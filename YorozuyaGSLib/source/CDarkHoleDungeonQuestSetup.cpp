#include <CDarkHoleDungeonQuestSetup.hpp>


START_ATF_NAMESPACE
    CDarkHoleDungeonQuestSetup::CDarkHoleDungeonQuestSetup()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*);
        (org_ptr(0x14026f930L))(this);
    };
    void CDarkHoleDungeonQuestSetup::ctor_CDarkHoleDungeonQuestSetup()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*);
        (org_ptr(0x14026f930L))(this);
    };
    char* CDarkHoleDungeonQuestSetup::GetErrorMsg()
    {
        using org_ptr = char* (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*);
        return (org_ptr(0x14026fa00L))(this);
    };
    struct _dh_quest_setup* CDarkHoleDungeonQuestSetup::GetQuestSetupPtr(unsigned int dwQuestIndex)
    {
        using org_ptr = struct _dh_quest_setup* (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, unsigned int);
        return (org_ptr(0x1400994d0L))(this, dwQuestIndex);
    };
    bool CDarkHoleDungeonQuestSetup::SetupQuest(char* pszQuestFileName)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, char*);
        return (org_ptr(0x14026fa80L))(this, pszQuestFileName);
    };
    bool CDarkHoleDungeonQuestSetup::_Analysis_Job_Condition(struct strFILE* fstr)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, struct strFILE*);
        return (org_ptr(0x1402708d0L))(this, fstr);
    };
    bool CDarkHoleDungeonQuestSetup::_Analysis_Job_Setting(struct strFILE* fstr)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, struct strFILE*);
        return (org_ptr(0x140270360L))(this, fstr);
    };
    bool CDarkHoleDungeonQuestSetup::_Analysis_Mission_Condition(struct strFILE* fstr)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, struct strFILE*);
        return (org_ptr(0x140270760L))(this, fstr);
    };
    bool CDarkHoleDungeonQuestSetup::_Analysis_Mission_Setting(struct strFILE* fstr)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, struct strFILE*);
        return (org_ptr(0x1402700d0L))(this, fstr);
    };
    bool CDarkHoleDungeonQuestSetup::_Analysis_Quest_Condition(struct strFILE* fstr)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, struct strFILE*);
        return (org_ptr(0x140270610L))(this, fstr);
    };
    bool CDarkHoleDungeonQuestSetup::_Analysis_Quest_Setting(struct strFILE* fstr)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, struct strFILE*);
        return (org_ptr(0x14026fea0L))(this, fstr);
    };
    bool CDarkHoleDungeonQuestSetup::_LastCheckScipt(char* pszQuestFileName)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*, char*);
        return (org_ptr(0x140270a20L))(this, pszQuestFileName);
    };
    CDarkHoleDungeonQuestSetup::~CDarkHoleDungeonQuestSetup()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*);
        (org_ptr(0x14026f9e0L))(this);
    };
    void CDarkHoleDungeonQuestSetup::dtor_CDarkHoleDungeonQuestSetup()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleDungeonQuestSetup*);
        (org_ptr(0x14026f9e0L))(this);
    };
END_ATF_NAMESPACE
