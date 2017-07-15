#include <_pt_notify_vote_score_zocl.hpp>


START_ATF_NAMESPACE
    _pt_notify_vote_score_zocl::_pt_notify_vote_score_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_notify_vote_score_zocl*);
        (org_ptr(0x1402c0040L))(this);
    };
    void _pt_notify_vote_score_zocl::ctor__pt_notify_vote_score_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_notify_vote_score_zocl*);
        (org_ptr(0x1402c0040L))(this);
    };
    int _pt_notify_vote_score_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_notify_vote_score_zocl*);
        return (org_ptr(0x1402c04d0L))(this);
    };
    
END_ATF_NAMESPACE
