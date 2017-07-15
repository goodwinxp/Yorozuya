#include <_chat_lock_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _chat_lock_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _chat_lock_inform_zocl*);
        return (org_ptr(0x14011f1f0L))(this);
    };
END_ATF_NAMESPACE
