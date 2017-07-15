#include <CRaceBossMsgController.hpp>


START_ATF_NAMESPACE
    CRaceBossMsgController::CRaceBossMsgController()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*);
        (org_ptr(0x1402a0250L))(this);
    };
    void CRaceBossMsgController::ctor_CRaceBossMsgController()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*);
        (org_ptr(0x1402a0250L))(this);
    };
    bool CRaceBossMsgController::Cancel(char ucRace, unsigned int dwMsgID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossMsgController*, char, unsigned int);
        return (org_ptr(0x1402a0930L))(this, ucRace, dwMsgID);
    };
    bool CRaceBossMsgController::Cancel(char ucRace, unsigned int dwMsgID, struct CPlayer* pkManager)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossMsgController*, char, unsigned int, struct CPlayer*);
        return (org_ptr(0x1402a0a00L))(this, ucRace, dwMsgID, pkManager);
    };
    void CRaceBossMsgController::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*);
        (org_ptr(0x1402a0bf0L))(this);
    };
    void CRaceBossMsgController::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402a03f0L))();
    };
    int CRaceBossMsgController::GetCurDay()
    {
        using org_ptr = int (WINAPIV*)(struct CRaceBossMsgController*);
        return (org_ptr(0x1402a0e00L))(this);
    };
    bool CRaceBossMsgController::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossMsgController*);
        return (org_ptr(0x1402a0470L))(this);
    };
    struct CRaceBossMsgController* CRaceBossMsgController::Instance()
    {
        using org_ptr = struct CRaceBossMsgController* (WINAPIV*)();
        return (org_ptr(0x1402a0330L))();
    };
    bool CRaceBossMsgController::IsDayChanged()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossMsgController*);
        return (org_ptr(0x1402a0d90L))(this);
    };
    bool CRaceBossMsgController::LoadCurTime(unsigned int* dwCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossMsgController*, unsigned int*);
        return (org_ptr(0x1402a0fe0L))(this, dwCurTime);
    };
    void CRaceBossMsgController::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*);
        (org_ptr(0x1402a0b50L))(this);
    };
    void CRaceBossMsgController::SaveCurTime()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*);
        (org_ptr(0x1402a0f00L))(this);
    };
    bool CRaceBossMsgController::Send(struct CPlayer* pkSender, char* pwszMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossMsgController*, struct CPlayer*, char*);
        return (org_ptr(0x1402a05e0L))(this, pkSender, pwszMsg);
    };
    bool CRaceBossMsgController::Send(char ucRace, unsigned int dwSerial, char* wszName, char* pwszMsg, unsigned int dwWebSendDBID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBossMsgController*, char, unsigned int, char*, char*, unsigned int);
        return (org_ptr(0x1402a07c0L))(this, ucRace, dwSerial, wszName, pwszMsg, dwWebSendDBID);
    };
    void CRaceBossMsgController::SendCancelWeb(char ucRace, struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, char, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x1402a17b0L))(this, ucRace, pkMsg);
    };
    void CRaceBossMsgController::SendCancleInfomManager(uint16_t usInx, char ucRet, unsigned int dwMsgID, char* pwszName)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, uint16_t, char, unsigned int, char*);
        (org_ptr(0x1402a16c0L))(this, usInx, ucRet, dwMsgID, pwszName);
    };
    void CRaceBossMsgController::SendCancleInfomSender(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, unsigned int);
        (org_ptr(0x1402a1610L))(this, dwSerial);
    };
    void CRaceBossMsgController::SendComfirmWeb(char ucRace, struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, char, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x1402a10f0L))(this, ucRace, pkMsg);
    };
    void CRaceBossMsgController::SendConfirmCtrl(char ucRace, struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, char, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x1402a1250L))(this, ucRace, pkMsg);
    };
    void CRaceBossMsgController::SendInfomSender(unsigned int dwSerial, char ucRemainCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, unsigned int, char);
        (org_ptr(0x1402a13b0L))(this, dwSerial, ucRemainCnt);
    };
    void CRaceBossMsgController::SendMsgRequestResult(uint16_t usInx, char ucRet)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, uint16_t, char);
        (org_ptr(0x1402a1060L))(this, usInx, ucRet);
    };
    void CRaceBossMsgController::SendRequestWeb(char ucRace, struct RACE_BOSS_MSG::CMsg* pkMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, char, struct RACE_BOSS_MSG::CMsg*);
        (org_ptr(0x1402a1480L))(this, ucRace, pkMsg);
    };
    void CRaceBossMsgController::SendWebRaceBossSMSErrorResult(int iRet, unsigned int dwWebDBID)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*, int, unsigned int);
        (org_ptr(0x1402a1890L))(this, iRet, dwWebDBID);
    };
    void CRaceBossMsgController::UpdateSend()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*);
        (org_ptr(0x1402a0c80L))(this);
    };
    CRaceBossMsgController::~CRaceBossMsgController()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*);
        (org_ptr(0x1402a02b0L))(this);
    };
    void CRaceBossMsgController::dtor_CRaceBossMsgController()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBossMsgController*);
        (org_ptr(0x1402a02b0L))(this);
    };
END_ATF_NAMESPACE
