#include <CVoteSystem.hpp>


START_ATF_NAMESPACE
    bool CVoteSystem::ActVote(unsigned int dwAvatorSerial, char byPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CVoteSystem*, unsigned int, char);
        return (org_ptr(0x1402b0580L))(this, dwAvatorSerial, byPoint);
    };
    CVoteSystem::CVoteSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CVoteSystem*);
        (org_ptr(0x1402af7f0L))(this);
    };
    void CVoteSystem::ctor_CVoteSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CVoteSystem*);
        (org_ptr(0x1402af7f0L))(this);
    };
    void CVoteSystem::CompleteSelectCharSerial(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CVoteSystem*, char*);
        (org_ptr(0x1402b02c0L))(this, pData);
    };
    void CVoteSystem::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CVoteSystem*);
        (org_ptr(0x1402b0620L))(this);
    };
    void CVoteSystem::ProcessPunishment()
    {
        using org_ptr = void (WINAPIV*)(struct CVoteSystem*);
        (org_ptr(0x1402affd0L))(this);
    };
    void CVoteSystem::SendMsg_StartedVoteInform(int n, unsigned int dwAvatorSerial, bool bPunish)
    {
        using org_ptr = void (WINAPIV*)(struct CVoteSystem*, int, unsigned int, bool);
        (org_ptr(0x1402b0890L))(this, n, dwAvatorSerial, bPunish);
    };
    bool CVoteSystem::StartVote(char* pwszContent, char byLimGrade, char byRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CVoteSystem*, char*, char, char);
        return (org_ptr(0x1402af8b0L))(this, pwszContent, byLimGrade, byRaceCode);
    };
    bool CVoteSystem::StartVote(char byRaceCode, char byPunishType, char* pwszContent, char* pwszName, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CVoteSystem*, char, char, char*, char*, unsigned int);
        return (org_ptr(0x1402afbc0L))(this, byRaceCode, byPunishType, pwszContent, pwszName, dwSerial);
    };
    bool CVoteSystem::StopVote()
    {
        using org_ptr = bool (WINAPIV*)(struct CVoteSystem*);
        return (org_ptr(0x1402b03b0L))(this);
    };
    CVoteSystem::~CVoteSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CVoteSystem*);
        (org_ptr(0x1402b0fd0L))(this);
    };
    void CVoteSystem::dtor_CVoteSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CVoteSystem*);
        (org_ptr(0x1402b0fd0L))(this);
    };
END_ATF_NAMESPACE
