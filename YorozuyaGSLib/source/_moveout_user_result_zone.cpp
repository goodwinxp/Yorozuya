#include <_moveout_user_result_zone.hpp>


START_ATF_NAMESPACE
    int _moveout_user_result_zone::size()
    {
        using org_ptr = int (WINAPIV*)(struct _moveout_user_result_zone*);
        return (org_ptr(0x14011fbd0L))(this);
    };
END_ATF_NAMESPACE
