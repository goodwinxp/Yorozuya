#include <_update_candidate_wincount_packingDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_update_candidate_wincount_packingctor__update_candidate_wincount_packing2_ptr _update_candidate_wincount_packingctor__update_candidate_wincount_packing2_next(nullptr);
        Info::_update_candidate_wincount_packingctor__update_candidate_wincount_packing2_clbk _update_candidate_wincount_packingctor__update_candidate_wincount_packing2_user(nullptr);
        
        
        void _update_candidate_wincount_packingctor__update_candidate_wincount_packing2_wrapper(struct _update_candidate_wincount_packing* _this)
        {
           _update_candidate_wincount_packingctor__update_candidate_wincount_packing2_user(_this, _update_candidate_wincount_packingctor__update_candidate_wincount_packing2_next);
        };
        
        ::std::array<hook_record, 1> _update_candidate_wincount_packing_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b65e0L,
                (LPVOID *)&_update_candidate_wincount_packingctor__update_candidate_wincount_packing2_user,
                (LPVOID *)&_update_candidate_wincount_packingctor__update_candidate_wincount_packing2_next,
                (LPVOID)cast_pointer_function(_update_candidate_wincount_packingctor__update_candidate_wincount_packing2_wrapper),
                (LPVOID)cast_pointer_function((void(_update_candidate_wincount_packing::*)())&_update_candidate_wincount_packing::ctor__update_candidate_wincount_packing)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
