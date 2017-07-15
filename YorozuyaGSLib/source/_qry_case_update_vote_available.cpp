#include <_qry_case_update_vote_available.hpp>


START_ATF_NAMESPACE
    int _qry_case_update_vote_available::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_update_vote_available*);
        return (org_ptr(0x14007e130L))(this);
    };
END_ATF_NAMESPACE
