#include <_announ_message_receipt_udpDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_announ_message_receipt_udpctor__announ_message_receipt_udp2_ptr _announ_message_receipt_udpctor__announ_message_receipt_udp2_next(nullptr);
        Info::_announ_message_receipt_udpctor__announ_message_receipt_udp2_clbk _announ_message_receipt_udpctor__announ_message_receipt_udp2_user(nullptr);
        
        Info::_announ_message_receipt_udpsize4_ptr _announ_message_receipt_udpsize4_next(nullptr);
        Info::_announ_message_receipt_udpsize4_clbk _announ_message_receipt_udpsize4_user(nullptr);
        
        
        void _announ_message_receipt_udpctor__announ_message_receipt_udp2_wrapper(struct _announ_message_receipt_udp* _this)
        {
           _announ_message_receipt_udpctor__announ_message_receipt_udp2_user(_this, _announ_message_receipt_udpctor__announ_message_receipt_udp2_next);
        };
        int _announ_message_receipt_udpsize4_wrapper(struct _announ_message_receipt_udp* _this)
        {
           return _announ_message_receipt_udpsize4_user(_this, _announ_message_receipt_udpsize4_next);
        };
        
        ::std::array<hook_record, 2> _announ_message_receipt_udp_functions = 
        {
            _hook_record {
                (LPVOID)0x140094fe0L,
                (LPVOID *)&_announ_message_receipt_udpctor__announ_message_receipt_udp2_user,
                (LPVOID *)&_announ_message_receipt_udpctor__announ_message_receipt_udp2_next,
                (LPVOID)cast_pointer_function(_announ_message_receipt_udpctor__announ_message_receipt_udp2_wrapper),
                (LPVOID)cast_pointer_function((void(_announ_message_receipt_udp::*)())&_announ_message_receipt_udp::ctor__announ_message_receipt_udp)
            },
            _hook_record {
                (LPVOID)0x140095000L,
                (LPVOID *)&_announ_message_receipt_udpsize4_user,
                (LPVOID *)&_announ_message_receipt_udpsize4_next,
                (LPVOID)cast_pointer_function(_announ_message_receipt_udpsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_announ_message_receipt_udp::*)())&_announ_message_receipt_udp::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
