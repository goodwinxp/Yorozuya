#include <PatriarchElectProcessor.hpp>


START_ATF_NAMESPACE
    bool PatriarchElectProcessor::CheatClearPatriarch()
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x1402bc120L))(this);
    };
    bool PatriarchElectProcessor::CheatSetPatriarch(struct CPlayer* pOne, _candidate_info::ClassType eClass)
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*, struct CPlayer*, _candidate_info::ClassType);
        return (org_ptr(0x1402bc3c0L))(this, pOne, eClass);
    };
    void PatriarchElectProcessor::CompleteCheckInvalidChar(char byProc)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, char);
        (org_ptr(0x1402bc7d0L))(this, byProc);
    };
    void PatriarchElectProcessor::CompleteInsertElect()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402bb800L))(this);
    };
    void PatriarchElectProcessor::CompleteInsertPatriarch(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1402bbc40L))(this, pData);
    };
    void PatriarchElectProcessor::CompleteItemChargeRefund(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1402bbba0L))(this, pData);
    };
    void PatriarchElectProcessor::CompleteRequestRefund(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1402bb9a0L))(this, pData);
    };
    void PatriarchElectProcessor::CompleteSelectElect()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402bb860L))(this);
    };
    void PatriarchElectProcessor::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402ba5a0L))(this);
    };
    bool PatriarchElectProcessor::Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*, Cmd, struct CPlayer*, char*);
        return (org_ptr(0x1402badf0L))(this, eCmd, pOne, pdata);
    };
    bool PatriarchElectProcessor::ForceChangeProcessor(ElectProcessor::ProcessorType eProc)
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*, ElectProcessor::ProcessorType);
        return (org_ptr(0x1402ba830L))(this, eProc);
    };
    unsigned int PatriarchElectProcessor::GetCurrPatriarchElectSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x14007e0e0L))(this);
    };
    unsigned int PatriarchElectProcessor::GetElectSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x140208270L))(this);
    };
    ElectProcessor::ProcessorType PatriarchElectProcessor::GetProcessorType()
    {
        using org_ptr = ElectProcessor::ProcessorType (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x140208290L))(this);
    };
    bool PatriarchElectProcessor::GetTimeCheck()
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x1402c0510L))(this);
    };
    bool PatriarchElectProcessor::InitProcess()
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x1402ba630L))(this);
    };
    bool PatriarchElectProcessor::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x1402b9f10L))(this);
    };
    int PatriarchElectProcessor::Insert_Elect()
    {
        using org_ptr = int (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x1402bb430L))(this);
    };
    int PatriarchElectProcessor::Insert_PatrirchItemChargeRefund(char* pData)
    {
        using org_ptr = int (WINAPIV*)(struct PatriarchElectProcessor*, char*);
        return (org_ptr(0x1402bc040L))(this, pData);
    };
    struct PatriarchElectProcessor* PatriarchElectProcessor::Instance()
    {
        using org_ptr = struct PatriarchElectProcessor* (WINAPIV*)();
        return (org_ptr(0x1402ba4d0L))();
    };
    bool PatriarchElectProcessor::LoadDatabae()
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x1402bb290L))(this);
    };
    bool PatriarchElectProcessor::LoadElectState()
    {
        using org_ptr = bool (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x1402bb510L))(this);
    };
    void PatriarchElectProcessor::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402ba770L))(this);
    };
    PatriarchElectProcessor::PatriarchElectProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402b9cc0L))(this);
    };
    void PatriarchElectProcessor::ctor_PatriarchElectProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402b9cc0L))(this);
    };
    void PatriarchElectProcessor::PushDQSCheckInvalidChar()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402bc870L))(this);
    };
    int PatriarchElectProcessor::Request_Refund(char* pData)
    {
        using org_ptr = int (WINAPIV*)(struct PatriarchElectProcessor*, char*);
        return (org_ptr(0x1402bb8b0L))(this, pData);
    };
    void PatriarchElectProcessor::SendMsg_ConnectNewUser(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, struct CPlayer*);
        (org_ptr(0x1402bb050L))(this, pOne);
    };
    void PatriarchElectProcessor::SendMsg_ResultCode(unsigned int n, char byCode)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, unsigned int, char);
        (org_ptr(0x1402bafb0L))(this, n, byCode);
    };
    void PatriarchElectProcessor::SetCurrPatriarchElectSerial(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, unsigned int);
        (org_ptr(0x1404da440L))(this, dwSerial);
    };
    void PatriarchElectProcessor::SetTimeCheck(bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, bool);
        (org_ptr(0x14029d6d0L))(this, bFlag);
    };
    void PatriarchElectProcessor::TimeCheck(uint16_t wDayOfWeek, uint16_t wHour)
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*, uint16_t, uint16_t);
        (org_ptr(0x1402baab0L))(this, wDayOfWeek, wHour);
    };
    int PatriarchElectProcessor::Update_Elect()
    {
        using org_ptr = int (WINAPIV*)(struct PatriarchElectProcessor*);
        return (org_ptr(0x1402bb690L))(this);
    };
    PatriarchElectProcessor::~PatriarchElectProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402b9df0L))(this);
    };
    void PatriarchElectProcessor::dtor_PatriarchElectProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct PatriarchElectProcessor*);
        (org_ptr(0x1402b9df0L))(this);
    };
END_ATF_NAMESPACE
