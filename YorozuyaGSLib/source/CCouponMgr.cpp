#include <CCouponMgr.hpp>


START_ATF_NAMESPACE
    CCouponMgr::CCouponMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
        (org_ptr(0x140074790L))(this);
    };
    void CCouponMgr::ctor_CCouponMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
        (org_ptr(0x140074790L))(this);
    };
    struct CouponInfo* CCouponMgr::GetCouponInfo(char byCouponTime)
    {
        using org_ptr = struct CouponInfo* (WINAPIV*)(struct CCouponMgr*, char);
        return (org_ptr(0x1403fdf70L))(this, byCouponTime);
    };
    void CCouponMgr::Init(uint16_t wIdx)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t);
        (org_ptr(0x1403fd6c0L))(this, wIdx);
    };
    void CCouponMgr::InitCuponInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
        (org_ptr(0x1403fd620L))(this);
    };
    bool CCouponMgr::IsEnableGetCoupon()
    {
        using org_ptr = bool (WINAPIV*)(struct CCouponMgr*);
        return (org_ptr(0x1403fd7e0L))(this);
    };
    void CCouponMgr::LoadData(unsigned int dwAccSerial, struct _PCBANG_PLAY_TIME* pkInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, unsigned int, struct _PCBANG_PLAY_TIME*);
        (org_ptr(0x1403fd340L))(this, dwAccSerial, pkInfo);
    };
    void CCouponMgr::LogOut(bool bForceClose)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, bool);
        (org_ptr(0x1403fd820L))(this, bForceClose);
    };
    void CCouponMgr::Loop(uint16_t wIdx)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t);
        (org_ptr(0x1403fd8e0L))(this, wIdx);
    };
    void CCouponMgr::ReceivePrimiumCoupon(uint16_t wIdx)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t);
        (org_ptr(0x1403fdbb0L))(this, wIdx);
    };
    void CCouponMgr::SendMsg_CouponEnsure(uint16_t wIdx, char byCouponTime)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t, char);
        (org_ptr(0x1403fdfb0L))(this, wIdx, byCouponTime);
    };
    void CCouponMgr::SendMsg_CouponError(uint16_t wIdx, char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t, char);
        (org_ptr(0x1403fe110L))(this, wIdx, byRet);
    };
    void CCouponMgr::SendMsg_CouponLendResult(uint16_t wIndx, struct _STORAGE_LIST::_db_con* pCoupon)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1403fe230L))(this, wIndx, pCoupon);
    };
    void CCouponMgr::SendMsg_InPcBangTime(uint16_t wIdx)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t);
        (org_ptr(0x1403fe040L))(this, wIdx);
    };
    void CCouponMgr::SendMsg_RemainCouponInform(uint16_t wIdx, char byRemainCoupon)
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t, char);
        (org_ptr(0x1403fe1a0L))(this, wIdx, byRemainCoupon);
    };
    bool CCouponMgr::SetCheetContTime(uint16_t wIdx, int nMin)
    {
        using org_ptr = bool (WINAPIV*)(struct CCouponMgr*, uint16_t, int);
        return (org_ptr(0x1403fe330L))(this, wIdx, nMin);
    };
    CCouponMgr::~CCouponMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
        (org_ptr(0x140074840L))(this);
    };
    void CCouponMgr::dtor_CCouponMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
        (org_ptr(0x140074840L))(this);
    };
END_ATF_NAMESPACE
