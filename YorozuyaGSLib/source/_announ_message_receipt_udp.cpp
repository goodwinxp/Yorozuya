#include <_announ_message_receipt_udp.hpp>


START_ATF_NAMESPACE
    _announ_message_receipt_udp::_announ_message_receipt_udp()
    {
        using org_ptr = void (WINAPIV*)(struct _announ_message_receipt_udp*);
        (org_ptr(0x140094fe0L))(this);
    };
    void _announ_message_receipt_udp::ctor__announ_message_receipt_udp()
    {
        using org_ptr = void (WINAPIV*)(struct _announ_message_receipt_udp*);
        (org_ptr(0x140094fe0L))(this);
    };
    int _announ_message_receipt_udp::size()
    {
        using org_ptr = int (WINAPIV*)(struct _announ_message_receipt_udp*);
        return (org_ptr(0x140095000L))(this);
    };
END_ATF_NAMESPACE
