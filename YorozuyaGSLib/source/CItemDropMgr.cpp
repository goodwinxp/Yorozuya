#include <CItemDropMgr.hpp>


START_ATF_NAMESPACE
    bool CItemDropMgr::Drop(int nCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemDropMgr*, int);
        return (org_ptr(0x1402cfde0L))(this, nCnt);
    };
    bool CItemDropMgr::FrontDrop()
    {
        using org_ptr = bool (WINAPIV*)(struct CItemDropMgr*);
        return (org_ptr(0x1402cfe60L))(this);
    };
    struct _DropItemGroupInfo* CItemDropMgr::GetFrontPtr()
    {
        using org_ptr = struct _DropItemGroupInfo* (WINAPIV*)(struct CItemDropMgr*);
        return (org_ptr(0x1402d0290L))(this);
    };
    bool CItemDropMgr::PopFront()
    {
        using org_ptr = bool (WINAPIV*)(struct CItemDropMgr*);
        return (org_ptr(0x1402d01d0L))(this);
    };
END_ATF_NAMESPACE
