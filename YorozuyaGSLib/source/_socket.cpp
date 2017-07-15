#include <_socket.hpp>


START_ATF_NAMESPACE
    void _socket::InitParam()
    {
        using org_ptr = void (WINAPIV*)(struct _socket*);
        (org_ptr(0x14047f910L))(this);
    };
    _socket::_socket()
    {
        using org_ptr = void (WINAPIV*)(struct _socket*);
        (org_ptr(0x14047f8b0L))(this);
    };
    void _socket::ctor__socket()
    {
        using org_ptr = void (WINAPIV*)(struct _socket*);
        (org_ptr(0x14047f8b0L))(this);
    };
    _socket::~_socket()
    {
        using org_ptr = void (WINAPIV*)(struct _socket*);
        (org_ptr(0x14047f900L))(this);
    };
    void _socket::dtor__socket()
    {
        using org_ptr = void (WINAPIV*)(struct _socket*);
        (org_ptr(0x14047f900L))(this);
    };
END_ATF_NAMESPACE
