#include <_coll_pointDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_coll_pointInitPoint2_ptr _coll_pointInitPoint2_next(nullptr);
        Info::_coll_pointInitPoint2_clbk _coll_pointInitPoint2_user(nullptr);
        
        void _coll_pointInitPoint2_wrapper(struct _coll_point* _this, struct CMapData* pMap, float* pPos, struct CRect* prcWnd)
        {
           _coll_pointInitPoint2_user(_this, pMap, pPos, prcWnd, _coll_pointInitPoint2_next);
        };
        
        ::std::array<hook_record, 1> _coll_point_functions = 
        {
            _hook_record {
                (LPVOID)0x14019c3b0L,
                (LPVOID *)&_coll_pointInitPoint2_user,
                (LPVOID *)&_coll_pointInitPoint2_next,
                (LPVOID)cast_pointer_function(_coll_pointInitPoint2_wrapper),
                (LPVOID)cast_pointer_function((void(_coll_point::*)(struct CMapData*, float*, struct CRect*))&_coll_point::InitPoint)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
