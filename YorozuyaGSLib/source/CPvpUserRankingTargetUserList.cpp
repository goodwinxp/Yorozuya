#include <CPvpUserRankingTargetUserList.hpp>


START_ATF_NAMESPACE
    void CPvpUserRankingTargetUserList::Add(unsigned int dwSerial, char byLv, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingTargetUserList*, unsigned int, char, char);
        (org_ptr(0x140336280L))(this, dwSerial, byLv, byRace);
    };
    CPvpUserRankingTargetUserList::CPvpUserRankingTargetUserList()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingTargetUserList*);
        (org_ptr(0x140344240L))(this);
    };
    void CPvpUserRankingTargetUserList::ctor_CPvpUserRankingTargetUserList()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingTargetUserList*);
        (org_ptr(0x140344240L))(this);
    };
    void CPvpUserRankingTargetUserList::ClearRankingStart()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingTargetUserList*);
        (org_ptr(0x140336050L))(this);
    };
    unsigned int CPvpUserRankingTargetUserList::GetAddedTotalCnt()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPvpUserRankingTargetUserList*);
        return (org_ptr(0x140344780L))(this);
    };
    void CPvpUserRankingTargetUserList::UpdateCharGrade()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingTargetUserList*);
        (org_ptr(0x140336540L))(this);
    };
    char CPvpUserRankingTargetUserList::UpdateRaceRankStep11(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingTargetUserList*, char*);
        return (org_ptr(0x140336390L))(this, szData);
    };
    bool CPvpUserRankingTargetUserList::assign()
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpUserRankingTargetUserList*);
        return (org_ptr(0x140335f70L))(this);
    };
    CPvpUserRankingTargetUserList::~CPvpUserRankingTargetUserList()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingTargetUserList*);
        (org_ptr(0x140335cf0L))(this);
    };
    void CPvpUserRankingTargetUserList::dtor_CPvpUserRankingTargetUserList()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingTargetUserList*);
        (org_ptr(0x140335cf0L))(this);
    };
END_ATF_NAMESPACE
