#include <CBattleTournamentInfo.hpp>


START_ATF_NAMESPACE
    CBattleTournamentInfo::CBattleTournamentInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
        (org_ptr(0x1403fea40L))(this);
    };
    void CBattleTournamentInfo::ctor_CBattleTournamentInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
        (org_ptr(0x1403fea40L))(this);
    };
    char CBattleTournamentInfo::GetWinnerGrade(unsigned int dwSerial, char* pwszCharName)
    {
        using org_ptr = char (WINAPIV*)(struct CBattleTournamentInfo*, unsigned int, char*);
        return (org_ptr(0x1403fec30L))(this, dwSerial, pwszCharName);
    };
    void CBattleTournamentInfo::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
        (org_ptr(0x1403feac0L))(this);
    };
    void CBattleTournamentInfo::SetLoad(bool bLoad)
    {
        using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*, bool);
        (org_ptr(0x1403feb50L))(this, bLoad);
    };
    bool CBattleTournamentInfo::SetWinnerInfo(unsigned int dwSerial, char* pwszCharName, char byGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CBattleTournamentInfo*, unsigned int, char*, char);
        return (org_ptr(0x1403feb70L))(this, dwSerial, pwszCharName, byGrade);
    };
    CBattleTournamentInfo::~CBattleTournamentInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
        (org_ptr(0x1403feab0L))(this);
    };
    void CBattleTournamentInfo::dtor_CBattleTournamentInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
        (org_ptr(0x1403feab0L))(this);
    };
END_ATF_NAMESPACE
