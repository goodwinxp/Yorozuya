#include <_qry_case_update_player_vote_info.hpp>


START_ATF_NAMESPACE
    int _qry_case_update_player_vote_info::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_update_player_vote_info*);
        return (org_ptr(0x14007e140L))(this);
    };
END_ATF_NAMESPACE
