#include <_qry_case_post_sendDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_post_sendctor__qry_case_post_send2_ptr _qry_case_post_sendctor__qry_case_post_send2_next(nullptr);
        Info::_qry_case_post_sendctor__qry_case_post_send2_clbk _qry_case_post_sendctor__qry_case_post_send2_user(nullptr);
        
        Info::_qry_case_post_sendpushdata4_ptr _qry_case_post_sendpushdata4_next(nullptr);
        Info::_qry_case_post_sendpushdata4_clbk _qry_case_post_sendpushdata4_user(nullptr);
        
        Info::_qry_case_post_sendsize6_ptr _qry_case_post_sendsize6_next(nullptr);
        Info::_qry_case_post_sendsize6_clbk _qry_case_post_sendsize6_user(nullptr);
        
        
        void _qry_case_post_sendctor__qry_case_post_send2_wrapper(struct _qry_case_post_send* _this)
        {
           _qry_case_post_sendctor__qry_case_post_send2_user(_this, _qry_case_post_sendctor__qry_case_post_send2_next);
        };
        bool _qry_case_post_sendpushdata4_wrapper(struct _qry_case_post_send* _this, unsigned int dwIndex, char byErr, unsigned int dwReceiverSerial, unsigned int dwSenderSerial, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, struct _INVENKEY key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
        {
           return _qry_case_post_sendpushdata4_user(_this, dwIndex, byErr, dwReceiverSerial, dwSenderSerial, wszSendName, wszRecvName, wszTitle, wszContent, key, dwDur, dwUpt, dwGold, lnUID, _qry_case_post_sendpushdata4_next);
        };
        int _qry_case_post_sendsize6_wrapper(struct _qry_case_post_send* _this)
        {
           return _qry_case_post_sendsize6_user(_this, _qry_case_post_sendsize6_next);
        };
        
        ::std::array<hook_record, 3> _qry_case_post_send_functions = 
        {
            _hook_record {
                (LPVOID)0x1403282a0L,
                (LPVOID *)&_qry_case_post_sendctor__qry_case_post_send2_user,
                (LPVOID *)&_qry_case_post_sendctor__qry_case_post_send2_next,
                (LPVOID)cast_pointer_function(_qry_case_post_sendctor__qry_case_post_send2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_post_send::*)())&_qry_case_post_send::ctor__qry_case_post_send)
            },
            _hook_record {
                (LPVOID)0x140328330L,
                (LPVOID *)&_qry_case_post_sendpushdata4_user,
                (LPVOID *)&_qry_case_post_sendpushdata4_next,
                (LPVOID)cast_pointer_function(_qry_case_post_sendpushdata4_wrapper),
                (LPVOID)cast_pointer_function((bool(_qry_case_post_send::*)(unsigned int, char, unsigned int, unsigned int, char*, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t))&_qry_case_post_send::pushdata)
            },
            _hook_record {
                (LPVOID)0x140328320L,
                (LPVOID *)&_qry_case_post_sendsize6_user,
                (LPVOID *)&_qry_case_post_sendsize6_next,
                (LPVOID)cast_pointer_function(_qry_case_post_sendsize6_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_post_send::*)())&_qry_case_post_send::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
