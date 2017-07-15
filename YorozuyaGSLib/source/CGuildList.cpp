#include <CGuildList.hpp>


START_ATF_NAMESPACE
    void CGuildList::AddList(char byRace, char byGrade, char* pwszGuildName, char* pwszMasterName)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildList*, char, char, char*, char*);
        (org_ptr(0x14025d900L))(this, byRace, byGrade, pwszGuildName, pwszMasterName);
    };
    CGuildList::CGuildList()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildList*);
        (org_ptr(0x14025d6b0L))(this);
    };
    void CGuildList::ctor_CGuildList()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildList*);
        (org_ptr(0x14025d6b0L))(this);
    };
    bool CGuildList::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildList*);
        return (org_ptr(0x14025d7d0L))(this);
    };
    void CGuildList::SendList(uint16_t wIndex, char byRace, char byPage)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildList*, uint16_t, char, char);
        (org_ptr(0x14025db20L))(this, wIndex, byRace, byPage);
    };
    void CGuildList::SetGrade(char byRace, char* pwszGuildName, char byGrade)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildList*, char, char*, char);
        (org_ptr(0x14025de20L))(this, byRace, pwszGuildName, byGrade);
    };
    void CGuildList::SetGuildMaster(char byRace, char* pwszGuildName, char* pwszMasterName)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildList*, char, char*, char*);
        (org_ptr(0x14025dcf0L))(this, byRace, pwszGuildName, pwszMasterName);
    };
    CGuildList::~CGuildList()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildList*);
        (org_ptr(0x14025d740L))(this);
    };
    void CGuildList::dtor_CGuildList()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildList*);
        (org_ptr(0x14025d740L))(this);
    };
END_ATF_NAMESPACE
