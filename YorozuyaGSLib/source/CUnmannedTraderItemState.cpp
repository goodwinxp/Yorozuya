#include <CUnmannedTraderItemState.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderItemState::CUnmannedTraderItemState()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemState*);
        (org_ptr(0x140352d90L))(this);
    };
    void CUnmannedTraderItemState::ctor_CUnmannedTraderItemState()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemState*);
        (org_ptr(0x140352d90L))(this);
    };
    void CUnmannedTraderItemState::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemState*);
        (org_ptr(0x140352e30L))(this);
    };
    unsigned int CUnmannedTraderItemState::GetMaxStateCnt()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x140351b70L))();
    };
    CUnmannedTraderItemState::STATE CUnmannedTraderItemState::GetState()
    {
        using org_ptr = CUnmannedTraderItemState::STATE (WINAPIV*)(struct CUnmannedTraderItemState*);
        return (org_ptr(0x140243cb0L))(this);
    };
    wchar_t** CUnmannedTraderItemState::GetStateStrList()
    {
        using org_ptr = wchar_t** (WINAPIV*)();
        return (org_ptr(0x140351b80L))();
    };
    wchar_t* CUnmannedTraderItemState::GetStateStrW(unsigned int uiInx)
    {
        using org_ptr = wchar_t* (WINAPIV*)(unsigned int);
        return (org_ptr(0x140351b90L))(uiInx);
    };
    bool CUnmannedTraderItemState::PushUpdateState(char byType, unsigned int dwRegistSerial, char byState, unsigned int dwOwnerSerial, uint16_t wItemSerial, char byItemTableCode, uint16_t wItemTableIndex)
    {
        using org_ptr = bool (WINAPIV*)(char, unsigned int, char, unsigned int, uint16_t, char, uint16_t);
        return (org_ptr(0x140351c70L))(byType, dwRegistSerial, byState, dwOwnerSerial, wItemSerial, byItemTableCode, wItemTableIndex);
    };
    bool CUnmannedTraderItemState::Set(char byState)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderItemState*, char);
        return (org_ptr(0x140352f80L))(this, byState);
    };
    CUnmannedTraderItemState::~CUnmannedTraderItemState()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemState*);
        (org_ptr(0x140352df0L))(this);
    };
    void CUnmannedTraderItemState::dtor_CUnmannedTraderItemState()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderItemState*);
        (org_ptr(0x140352df0L))(this);
    };
    
    
END_ATF_NAMESPACE
