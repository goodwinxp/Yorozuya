#include <_chat_steal_message_gm_zocl.hpp>


START_ATF_NAMESPACE
    _chat_steal_message_gm_zocl::_chat_steal_message_gm_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _chat_steal_message_gm_zocl*);
        (org_ptr(0x1403f8d30L))(this);
    };
    void _chat_steal_message_gm_zocl::ctor__chat_steal_message_gm_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _chat_steal_message_gm_zocl*);
        (org_ptr(0x1403f8d30L))(this);
    };
    int _chat_steal_message_gm_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _chat_steal_message_gm_zocl*);
        return (org_ptr(0x1403f8d50L))(this);
    };
END_ATF_NAMESPACE
