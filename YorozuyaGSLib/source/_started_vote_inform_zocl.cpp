#include <_started_vote_inform_zocl.hpp>


START_ATF_NAMESPACE
    _started_vote_inform_zocl::_started_vote_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _started_vote_inform_zocl*);
        (org_ptr(0x1402b0eb0L))(this);
    };
    void _started_vote_inform_zocl::ctor__started_vote_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _started_vote_inform_zocl*);
        (org_ptr(0x1402b0eb0L))(this);
    };
    int _started_vote_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _started_vote_inform_zocl*);
        return (org_ptr(0x1402b0f70L))(this);
    };
END_ATF_NAMESPACE
