#include <_qry_case_insert_candidate.hpp>


START_ATF_NAMESPACE
    _qry_case_insert_candidate::_qry_case_insert_candidate(char byR, uint16_t wIdx, unsigned int dwE, unsigned int dwS)
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_insert_candidate*, char, uint16_t, unsigned int, unsigned int);
        (org_ptr(0x1402b6400L))(this, byR, wIdx, dwE, dwS);
    };
    void _qry_case_insert_candidate::ctor__qry_case_insert_candidate(char byR, uint16_t wIdx, unsigned int dwE, unsigned int dwS)
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_insert_candidate*, char, uint16_t, unsigned int, unsigned int);
        (org_ptr(0x1402b6400L))(this, byR, wIdx, dwE, dwS);
    };
    int _qry_case_insert_candidate::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_insert_candidate*);
        return (org_ptr(0x1402b6470L))(this);
    };
END_ATF_NAMESPACE
