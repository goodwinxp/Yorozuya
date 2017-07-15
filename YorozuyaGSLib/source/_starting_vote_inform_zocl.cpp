#include <_starting_vote_inform_zocl.hpp>


START_ATF_NAMESPACE
    _starting_vote_inform_zocl::_starting_vote_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _starting_vote_inform_zocl*);
        (org_ptr(0x1402b0ed0L))(this);
    };
    void _starting_vote_inform_zocl::ctor__starting_vote_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _starting_vote_inform_zocl*);
        (org_ptr(0x1402b0ed0L))(this);
    };
    int _starting_vote_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _starting_vote_inform_zocl*);
        return (org_ptr(0x1402b0ef0L))(this);
    };
END_ATF_NAMESPACE
