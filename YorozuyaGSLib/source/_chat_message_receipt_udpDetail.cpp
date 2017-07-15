#include <_chat_message_receipt_udpDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_chat_message_receipt_udpctor__chat_message_receipt_udp2_ptr _chat_message_receipt_udpctor__chat_message_receipt_udp2_next(nullptr);
        Info::_chat_message_receipt_udpctor__chat_message_receipt_udp2_clbk _chat_message_receipt_udpctor__chat_message_receipt_udp2_user(nullptr);
        
        Info::_chat_message_receipt_udpsize4_ptr _chat_message_receipt_udpsize4_next(nullptr);
        Info::_chat_message_receipt_udpsize4_clbk _chat_message_receipt_udpsize4_user(nullptr);
        
        
        void _chat_message_receipt_udpctor__chat_message_receipt_udp2_wrapper(struct _chat_message_receipt_udp* _this)
        {
           _chat_message_receipt_udpctor__chat_message_receipt_udp2_user(_this, _chat_message_receipt_udpctor__chat_message_receipt_udp2_next);
        };
        int _chat_message_receipt_udpsize4_wrapper(struct _chat_message_receipt_udp* _this)
        {
           return _chat_message_receipt_udpsize4_user(_this, _chat_message_receipt_udpsize4_next);
        };
        
        ::std::array<hook_record, 2> _chat_message_receipt_udp_functions = 
        {
            _hook_record {
                (LPVOID)0x140094e90L,
                (LPVOID *)&_chat_message_receipt_udpctor__chat_message_receipt_udp2_user,
                (LPVOID *)&_chat_message_receipt_udpctor__chat_message_receipt_udp2_next,
                (LPVOID)cast_pointer_function(_chat_message_receipt_udpctor__chat_message_receipt_udp2_wrapper),
                (LPVOID)cast_pointer_function((void(_chat_message_receipt_udp::*)())&_chat_message_receipt_udp::ctor__chat_message_receipt_udp)
            },
            _hook_record {
                (LPVOID)0x140094eb0L,
                (LPVOID *)&_chat_message_receipt_udpsize4_user,
                (LPVOID *)&_chat_message_receipt_udpsize4_next,
                (LPVOID)cast_pointer_function(_chat_message_receipt_udpsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_chat_message_receipt_udp::*)())&_chat_message_receipt_udp::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
