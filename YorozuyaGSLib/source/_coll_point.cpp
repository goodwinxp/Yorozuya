#include <_coll_point.hpp>


START_ATF_NAMESPACE
    void _coll_point::InitPoint(struct CMapData* pMap, float* pPos, struct CRect* prcWnd)
    {
        using org_ptr = void (WINAPIV*)(struct _coll_point*, struct CMapData*, float*, struct CRect*);
        (org_ptr(0x14019c3b0L))(this, pMap, pPos, prcWnd);
    };
END_ATF_NAMESPACE
