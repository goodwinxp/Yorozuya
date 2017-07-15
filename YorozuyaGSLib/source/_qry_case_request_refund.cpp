#include <_qry_case_request_refund.hpp>


START_ATF_NAMESPACE
    _qry_case_request_refund::_qry_case_request_refund(char byR, uint16_t wIdx, unsigned int dwS, uint64_t dwRef)
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_request_refund*, char, uint16_t, unsigned int, uint64_t);
        (org_ptr(0x1402b6560L))(this, byR, wIdx, dwS, dwRef);
    };
    void _qry_case_request_refund::ctor__qry_case_request_refund(char byR, uint16_t wIdx, unsigned int dwS, uint64_t dwRef)
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_request_refund*, char, uint16_t, unsigned int, uint64_t);
        (org_ptr(0x1402b6560L))(this, byR, wIdx, dwS, dwRef);
    };
    int _qry_case_request_refund::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_request_refund*);
        return (org_ptr(0x1402b65d0L))(this);
    };
END_ATF_NAMESPACE
