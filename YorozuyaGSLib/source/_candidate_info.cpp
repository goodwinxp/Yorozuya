#include <_candidate_info.hpp>


START_ATF_NAMESPACE
    void _candidate_info::_Init()
    {
        using org_ptr = void (WINAPIV*)(struct _candidate_info*);
        (org_ptr(0x1402b62b0L))(this);
    };
    _candidate_info::_candidate_info()
    {
        using org_ptr = void (WINAPIV*)(struct _candidate_info*);
        (org_ptr(0x1402b6260L))(this);
    };
    void _candidate_info::ctor__candidate_info()
    {
        using org_ptr = void (WINAPIV*)(struct _candidate_info*);
        (org_ptr(0x1402b6260L))(this);
    };
    
    
END_ATF_NAMESPACE
