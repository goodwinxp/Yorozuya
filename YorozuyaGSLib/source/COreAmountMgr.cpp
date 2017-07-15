#include <COreAmountMgr.hpp>


START_ATF_NAMESPACE
    COreAmountMgr::COreAmountMgr()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f8da0L))(this);
    };
    void COreAmountMgr::ctor_COreAmountMgr()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f8da0L))(this);
    };
    bool COreAmountMgr::CheatOreAmount(unsigned int dwTot, unsigned int dwRemain)
    {
        using org_ptr = bool (WINAPIV*)(struct COreAmountMgr*, unsigned int, unsigned int);
        return (org_ptr(0x1403f9b90L))(this, dwTot, dwRemain);
    };
    void COreAmountMgr::DecreaseOre(unsigned int dwAlt)
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*, unsigned int);
        (org_ptr(0x1400d3ea0L))(this, dwAlt);
    };
    char COreAmountMgr::GetDepositRate()
    {
        using org_ptr = char (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x1400f06b0L))(this);
    };
    float* COreAmountMgr::GetMultipleRate()
    {
        using org_ptr = float* (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x14029d840L))(this);
    };
    unsigned int COreAmountMgr::GetOreTransferAmount()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x1402845d0L))(this);
    };
    char COreAmountMgr::GetOreTransferCount()
    {
        using org_ptr = char (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x1400f06d0L))(this);
    };
    unsigned int COreAmountMgr::GetRemainOre()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x140284590L))(this);
    };
    unsigned int COreAmountMgr::GetTotalOre()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x1402845b0L))(this);
    };
    void COreAmountMgr::IncreaseOreAmount()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x140284910L))(this);
    };
    void COreAmountMgr::IncreaseOreCount()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x140284880L))(this);
    };
    void COreAmountMgr::InitRemainOreAmount(unsigned int dwRemain, unsigned int dwTotal)
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*, unsigned int, unsigned int);
        (org_ptr(0x1403f93e0L))(this, dwRemain, dwTotal);
    };
    void COreAmountMgr::InitTransferOre(unsigned int dwTransAmount, char byTransCount)
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*, unsigned int, char);
        (org_ptr(0x1403f98b0L))(this, dwTransAmount, byTransCount);
    };
    void COreAmountMgr::InsertOreLog(char byType)
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*, char);
        (org_ptr(0x1403f9680L))(this, byType);
    };
    struct COreAmountMgr* COreAmountMgr::Instance()
    {
        using org_ptr = struct COreAmountMgr* (WINAPIV*)();
        return (org_ptr(0x1403f8ff0L))();
    };
    bool COreAmountMgr::IsINIFileChanged()
    {
        using org_ptr = bool (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x1403f9ca0L))(this);
    };
    int COreAmountMgr::IsOreRemain()
    {
        using org_ptr = int (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x1400d3df0L))(this);
    };
    int COreAmountMgr::LoadINI()
    {
        using org_ptr = int (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x1403f9130L))(this);
    };
    void COreAmountMgr::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f9a40L))(this);
    };
    void COreAmountMgr::LoopSubProcSendInform()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f9a90L))(this);
    };
    bool COreAmountMgr::ReLoad()
    {
        using org_ptr = bool (WINAPIV*)(struct COreAmountMgr*);
        return (org_ptr(0x1403f9c20L))(this);
    };
    void COreAmountMgr::Release()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f90b0L))(this);
    };
    void COreAmountMgr::SetOreTransferAmount()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1402849e0L))(this);
    };
    void COreAmountMgr::UpdateDepositeRate()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f9940L))(this);
    };
    void COreAmountMgr::UpdateForce()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f97d0L))(this);
    };
    COreAmountMgr::~COreAmountMgr()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f8f90L))(this);
    };
    void COreAmountMgr::dtor_COreAmountMgr()
    {
        using org_ptr = void (WINAPIV*)(struct COreAmountMgr*);
        (org_ptr(0x1403f8f90L))(this);
    };
END_ATF_NAMESPACE
