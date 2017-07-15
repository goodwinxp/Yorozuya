#include <_chat_message_receipt_udp.hpp>


START_ATF_NAMESPACE
    _chat_message_receipt_udp::_chat_message_receipt_udp()
    {
        using org_ptr = void (WINAPIV*)(struct _chat_message_receipt_udp*);
        (org_ptr(0x140094e90L))(this);
    };
    void _chat_message_receipt_udp::ctor__chat_message_receipt_udp()
    {
        using org_ptr = void (WINAPIV*)(struct _chat_message_receipt_udp*);
        (org_ptr(0x140094e90L))(this);
    };
    int _chat_message_receipt_udp::size()
    {
        using org_ptr = int (WINAPIV*)(struct _chat_message_receipt_udp*);
        return (org_ptr(0x140094eb0L))(this);
    };
END_ATF_NAMESPACE
