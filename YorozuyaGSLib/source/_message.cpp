#include <_message.hpp>


START_ATF_NAMESPACE
    unsigned int _message::GetKey1()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _message*);
        return (org_ptr(0x1401c0320L))(this);
    };
    unsigned int _message::GetMessageA()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _message*);
        return (org_ptr(0x1401c0300L))(this);
    };
    void _message::SetMsg(unsigned int message, unsigned int key1, unsigned int key2, unsigned int key3)
    {
        using org_ptr = void (WINAPIV*)(struct _message*, unsigned int, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140438920L))(this, message, key1, key2, key3);
    };
    _message::_message()
    {
        using org_ptr = void (WINAPIV*)(struct _message*);
        (org_ptr(0x140438750L))(this);
    };
    void _message::ctor__message()
    {
        using org_ptr = void (WINAPIV*)(struct _message*);
        (org_ptr(0x140438750L))(this);
    };
    _message::~_message()
    {
        using org_ptr = void (WINAPIV*)(struct _message*);
        (org_ptr(0x140438780L))(this);
    };
    void _message::dtor__message()
    {
        using org_ptr = void (WINAPIV*)(struct _message*);
        (org_ptr(0x140438780L))(this);
    };
END_ATF_NAMESPACE
