#include <_qry_case_request_refundDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_request_refundctor__qry_case_request_refund2_ptr _qry_case_request_refundctor__qry_case_request_refund2_next(nullptr);
        Info::_qry_case_request_refundctor__qry_case_request_refund2_clbk _qry_case_request_refundctor__qry_case_request_refund2_user(nullptr);
        
        Info::_qry_case_request_refundsize4_ptr _qry_case_request_refundsize4_next(nullptr);
        Info::_qry_case_request_refundsize4_clbk _qry_case_request_refundsize4_user(nullptr);
        
        
        void _qry_case_request_refundctor__qry_case_request_refund2_wrapper(struct _qry_case_request_refund* _this, char byR, uint16_t wIdx, unsigned int dwS, uint64_t dwRef)
        {
           _qry_case_request_refundctor__qry_case_request_refund2_user(_this, byR, wIdx, dwS, dwRef, _qry_case_request_refundctor__qry_case_request_refund2_next);
        };
        int _qry_case_request_refundsize4_wrapper(struct _qry_case_request_refund* _this)
        {
           return _qry_case_request_refundsize4_user(_this, _qry_case_request_refundsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_request_refund_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b6560L,
                (LPVOID *)&_qry_case_request_refundctor__qry_case_request_refund2_user,
                (LPVOID *)&_qry_case_request_refundctor__qry_case_request_refund2_next,
                (LPVOID)cast_pointer_function(_qry_case_request_refundctor__qry_case_request_refund2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_request_refund::*)(char, uint16_t, unsigned int, uint64_t))&_qry_case_request_refund::ctor__qry_case_request_refund)
            },
            _hook_record {
                (LPVOID)0x1402b65d0L,
                (LPVOID *)&_qry_case_request_refundsize4_user,
                (LPVOID *)&_qry_case_request_refundsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_request_refundsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_request_refund::*)())&_qry_case_request_refund::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
