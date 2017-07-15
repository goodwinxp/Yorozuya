#include <_MOVE_LOBBY_DELAY.hpp>


START_ATF_NAMESPACE
    void _MOVE_LOBBY_DELAY::Process(unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _MOVE_LOBBY_DELAY*, unsigned int, unsigned int);
        (org_ptr(0x14011b430L))(this, dwIndex, dwSerial);
    };
    _MOVE_LOBBY_DELAY::_MOVE_LOBBY_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _MOVE_LOBBY_DELAY*);
        (org_ptr(0x140120ee0L))(this);
    };
    void _MOVE_LOBBY_DELAY::ctor__MOVE_LOBBY_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _MOVE_LOBBY_DELAY*);
        (org_ptr(0x140120ee0L))(this);
    };
    _MOVE_LOBBY_DELAY::~_MOVE_LOBBY_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _MOVE_LOBBY_DELAY*);
        (org_ptr(0x140120f50L))(this);
    };
    void _MOVE_LOBBY_DELAY::dtor__MOVE_LOBBY_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _MOVE_LOBBY_DELAY*);
        (org_ptr(0x140120f50L))(this);
    };
END_ATF_NAMESPACE
