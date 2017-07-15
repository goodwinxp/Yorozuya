#include <_mon_blockDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_mon_blockSelectDummyIndex2_ptr _mon_blockSelectDummyIndex2_next(nullptr);
        Info::_mon_blockSelectDummyIndex2_clbk _mon_blockSelectDummyIndex2_user(nullptr);
        
        Info::_mon_blockSetBlock4_ptr _mon_blockSetBlock4_next(nullptr);
        Info::_mon_blockSetBlock4_clbk _mon_blockSetBlock4_user(nullptr);
        
        Info::_mon_blockSetRotateBlock6_ptr _mon_blockSetRotateBlock6_next(nullptr);
        Info::_mon_blockSetRotateBlock6_clbk _mon_blockSetRotateBlock6_user(nullptr);
        
        int _mon_blockSelectDummyIndex2_wrapper(struct _mon_block* _this)
        {
           return _mon_blockSelectDummyIndex2_user(_this, _mon_blockSelectDummyIndex2_next);
        };
        bool _mon_blockSetBlock4_wrapper(struct _mon_block* _this, struct _mon_block_fld* pBlkRec, struct CMapData* pMap, struct _dummy_position** ppDumPos)
        {
           return _mon_blockSetBlock4_user(_this, pBlkRec, pMap, ppDumPos, _mon_blockSetBlock4_next);
        };
        void _mon_blockSetRotateBlock6_wrapper(struct _mon_block* _this, bool rhs)
        {
           _mon_blockSetRotateBlock6_user(_this, rhs, _mon_blockSetRotateBlock6_next);
        };
        
        ::std::array<hook_record, 3> _mon_block_functions = 
        {
            _hook_record {
                (LPVOID)0x140189fc0L,
                (LPVOID *)&_mon_blockSelectDummyIndex2_user,
                (LPVOID *)&_mon_blockSelectDummyIndex2_next,
                (LPVOID)cast_pointer_function(_mon_blockSelectDummyIndex2_wrapper),
                (LPVOID)cast_pointer_function((int(_mon_block::*)())&_mon_block::SelectDummyIndex)
            },
            _hook_record {
                (LPVOID)0x140189e60L,
                (LPVOID *)&_mon_blockSetBlock4_user,
                (LPVOID *)&_mon_blockSetBlock4_next,
                (LPVOID)cast_pointer_function(_mon_blockSetBlock4_wrapper),
                (LPVOID)cast_pointer_function((bool(_mon_block::*)(struct _mon_block_fld*, struct CMapData*, struct _dummy_position**))&_mon_block::SetBlock)
            },
            _hook_record {
                (LPVOID)0x140189140L,
                (LPVOID *)&_mon_blockSetRotateBlock6_user,
                (LPVOID *)&_mon_blockSetRotateBlock6_next,
                (LPVOID)cast_pointer_function(_mon_blockSetRotateBlock6_wrapper),
                (LPVOID)cast_pointer_function((void(_mon_block::*)(bool))&_mon_block::SetRotateBlock)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
