#include <CCashDbWorkerRU.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerRU::CCashDbWorkerRU()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
        (org_ptr(0x14022ea70L))(this);
    };
    void CCashDbWorkerRU::ctor_CCashDbWorkerRU()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
        (org_ptr(0x14022ea70L))(this);
    };
    void CCashDbWorkerRU::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
        (org_ptr(0x1403208d0L))(this);
    };
    bool CCashDbWorkerRU::_init_database()
    {
        using org_ptr = bool (WINAPIV*)(struct CCashDbWorkerRU*);
        return (org_ptr(0x140320be0L))(this);
    };
    int CCashDbWorkerRU::_wait_tsk_cash_rollback(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerRU*, struct Task*);
        return (org_ptr(0x140320a80L))(this, pkTsk);
    };
    int CCashDbWorkerRU::_wait_tsk_cash_select(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerRU*, struct Task*);
        return (org_ptr(0x140320930L))(this, pkTsk);
    };
    int CCashDbWorkerRU::_wait_tsk_cash_update(struct Task* pkTsk)
    {
        using org_ptr = int (WINAPIV*)(struct CCashDbWorkerRU*, struct Task*);
        return (org_ptr(0x1403209a0L))(this, pkTsk);
    };
    CCashDbWorkerRU::~CCashDbWorkerRU()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
        (org_ptr(0x14022eb40L))(this);
    };
    void CCashDbWorkerRU::dtor_CCashDbWorkerRU()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
        (org_ptr(0x14022eb40L))(this);
    };
END_ATF_NAMESPACE
