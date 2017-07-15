#include <CExtPotionBuf.hpp>


START_ATF_NAMESPACE
    CExtPotionBuf::CExtPotionBuf()
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*);
        (org_ptr(0x14039fba0L))(this);
    };
    void CExtPotionBuf::ctor_CExtPotionBuf()
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*);
        (org_ptr(0x14039fba0L))(this);
    };
    void CExtPotionBuf::CalcRemainTime(uint16_t wInx, bool bUse)
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, uint16_t, bool);
        (org_ptr(0x14039fdc0L))(this, wInx, bUse);
    };
    void CExtPotionBuf::CheckPotionTime(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, struct CPlayer*);
        (org_ptr(0x1403a0050L))(this, pOne);
    };
    bool CExtPotionBuf::IsExtPotionUse()
    {
        using org_ptr = bool (WINAPIV*)(struct CExtPotionBuf*);
        return (org_ptr(0x14007b9f0L))(this);
    };
    void CExtPotionBuf::SednMsg_RemovePotionContEffect(uint16_t wPotionInx, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, uint16_t, uint16_t);
        (org_ptr(0x14039fd30L))(this, wPotionInx, wIndex);
    };
    void CExtPotionBuf::SendMsg_RemainBufUseTime(bool bUse, uint16_t wIndex, int nEndDay, int nEndHour, int nEndMin)
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, bool, uint16_t, int, int, int);
        (org_ptr(0x14039fc70L))(this, bUse, wIndex, nEndDay, nEndHour, nEndMin);
    };
    void CExtPotionBuf::SetExtPotionBufUse(bool bUse)
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, bool);
        (org_ptr(0x1400790b0L))(this, bUse);
    };
    void CExtPotionBuf::SetExtPotionEndTime(unsigned int dwEndTime)
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, unsigned int);
        (org_ptr(0x1400790d0L))(this, dwEndTime);
    };
    void CExtPotionBuf::UseBuffPotion(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, struct CPlayer*);
        (org_ptr(0x14039fbd0L))(this, pOne);
    };
    CExtPotionBuf::~CExtPotionBuf()
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*);
        (org_ptr(0x140072b40L))(this);
    };
    void CExtPotionBuf::dtor_CExtPotionBuf()
    {
        using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*);
        (org_ptr(0x140072b40L))(this);
    };
END_ATF_NAMESPACE
