#include <_mon_block.hpp>


START_ATF_NAMESPACE
    int _mon_block::SelectDummyIndex()
    {
        using org_ptr = int (WINAPIV*)(struct _mon_block*);
        return (org_ptr(0x140189fc0L))(this);
    };
    bool _mon_block::SetBlock(struct _mon_block_fld* pBlkRec, struct CMapData* pMap, struct _dummy_position** ppDumPos)
    {
        using org_ptr = bool (WINAPIV*)(struct _mon_block*, struct _mon_block_fld*, struct CMapData*, struct _dummy_position**);
        return (org_ptr(0x140189e60L))(this, pBlkRec, pMap, ppDumPos);
    };
    void _mon_block::SetRotateBlock(bool rhs)
    {
        using org_ptr = void (WINAPIV*)(struct _mon_block*, bool);
        (org_ptr(0x140189140L))(this, rhs);
    };
END_ATF_NAMESPACE
