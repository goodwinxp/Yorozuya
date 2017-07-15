#include <_qry_case_post_send.hpp>


START_ATF_NAMESPACE
    _qry_case_post_send::_qry_case_post_send()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_post_send*);
        (org_ptr(0x1403282a0L))(this);
    };
    void _qry_case_post_send::ctor__qry_case_post_send()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_post_send*);
        (org_ptr(0x1403282a0L))(this);
    };
    bool _qry_case_post_send::pushdata(unsigned int dwIndex, char byErr, unsigned int dwReceiverSerial, unsigned int dwSenderSerial, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, struct _INVENKEY key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
    {
        using org_ptr = bool (WINAPIV*)(struct _qry_case_post_send*, unsigned int, char, unsigned int, unsigned int, char*, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t);
        return (org_ptr(0x140328330L))(this, dwIndex, byErr, dwReceiverSerial, dwSenderSerial, wszSendName, wszRecvName, wszTitle, wszContent, key, dwDur, dwUpt, dwGold, lnUID);
    };
    int _qry_case_post_send::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_post_send*);
        return (org_ptr(0x140328320L))(this);
    };
    _qry_case_post_send::__list::__list()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_post_send::__list*);
        (org_ptr(0x1403285e0L))(this);
    };
    void _qry_case_post_send::__list::ctor___list()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_post_send::__list*);
        (org_ptr(0x1403285e0L))(this);
    };
END_ATF_NAMESPACE
