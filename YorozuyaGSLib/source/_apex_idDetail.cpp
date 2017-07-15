#include <_apex_idDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_apex_idctor__apex_id2_ptr _apex_idctor__apex_id2_next(nullptr);
        Info::_apex_idctor__apex_id2_clbk _apex_idctor__apex_id2_user(nullptr);
        
        
        void _apex_idctor__apex_id2_wrapper(struct _apex_id* _this, char byID)
        {
           _apex_idctor__apex_id2_user(_this, byID, _apex_idctor__apex_id2_next);
        };
        
        ::std::array<hook_record, 1> _apex_id_functions = 
        {
            _hook_record {
                (LPVOID)0x140410bb0L,
                (LPVOID *)&_apex_idctor__apex_id2_user,
                (LPVOID *)&_apex_idctor__apex_id2_next,
                (LPVOID)cast_pointer_function(_apex_idctor__apex_id2_wrapper),
                (LPVOID)cast_pointer_function((void(_apex_id::*)(char))&_apex_id::ctor__apex_id)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
