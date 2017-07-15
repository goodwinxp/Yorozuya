#include <_qry_case_updateweeklyguildpvppointsumDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_updateweeklyguildpvppointsumsize2_ptr _qry_case_updateweeklyguildpvppointsumsize2_next(nullptr);
        Info::_qry_case_updateweeklyguildpvppointsumsize2_clbk _qry_case_updateweeklyguildpvppointsumsize2_user(nullptr);
        
        int _qry_case_updateweeklyguildpvppointsumsize2_wrapper(struct _qry_case_updateweeklyguildpvppointsum* _this)
        {
           return _qry_case_updateweeklyguildpvppointsumsize2_user(_this, _qry_case_updateweeklyguildpvppointsumsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_updateweeklyguildpvppointsum_functions = 
        {
            _hook_record {
                (LPVOID)0x1402cfd50L,
                (LPVOID *)&_qry_case_updateweeklyguildpvppointsumsize2_user,
                (LPVOID *)&_qry_case_updateweeklyguildpvppointsumsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_updateweeklyguildpvppointsumsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_updateweeklyguildpvppointsum::*)())&_qry_case_updateweeklyguildpvppointsum::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
