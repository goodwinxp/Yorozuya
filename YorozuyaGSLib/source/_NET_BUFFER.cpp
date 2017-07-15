#include <_NET_BUFFER.hpp>


START_ATF_NAMESPACE
    void _NET_BUFFER::AddPopPos(unsigned int dwAddSize)
    {
        using org_ptr = void (WINAPIV*)(struct _NET_BUFFER*, unsigned int);
        (org_ptr(0x14047d5c0L))(this, dwAddSize);
    };
    void _NET_BUFFER::AddPushPos(unsigned int dwAddSize)
    {
        using org_ptr = void (WINAPIV*)(struct _NET_BUFFER*, unsigned int);
        (org_ptr(0x14047d4f0L))(this, dwAddSize);
    };
    bool _NET_BUFFER::AllocBuffer(int nMaxSize, int nEtrSize, char* pTemp)
    {
        using org_ptr = bool (WINAPIV*)(struct _NET_BUFFER*, int, int, char*);
        return (org_ptr(0x14047d080L))(this, nMaxSize, nEtrSize, pTemp);
    };
    int _NET_BUFFER::GetLeftLoadSize()
    {
        using org_ptr = int (WINAPIV*)(struct _NET_BUFFER*);
        return (org_ptr(0x14047d420L))(this);
    };
    char* _NET_BUFFER::GetPopPoint(bool* pbMiss)
    {
        using org_ptr = char* (WINAPIV*)(struct _NET_BUFFER*, bool*);
        return (org_ptr(0x14047d690L))(this, pbMiss);
    };
    char* _NET_BUFFER::GetPushPos()
    {
        using org_ptr = char* (WINAPIV*)(struct _NET_BUFFER*);
        return (org_ptr(0x14047d400L))(this);
    };
    char* _NET_BUFFER::GetSendPoint(int* pnSendSize, bool* pMiss)
    {
        using org_ptr = char* (WINAPIV*)(struct _NET_BUFFER*, int*, bool*);
        return (org_ptr(0x14047d9b0L))(this, pnSendSize, pMiss);
    };
    void _NET_BUFFER::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _NET_BUFFER*);
        (org_ptr(0x14047d140L))(this);
    };
    _NET_BUFFER::_NET_BUFFER()
    {
        using org_ptr = void (WINAPIV*)(struct _NET_BUFFER*);
        (org_ptr(0x14047ce20L))(this);
    };
    void _NET_BUFFER::ctor__NET_BUFFER()
    {
        using org_ptr = void (WINAPIV*)(struct _NET_BUFFER*);
        (org_ptr(0x14047ce20L))(this);
    };
    _NET_BUFFER::~_NET_BUFFER()
    {
        using org_ptr = void (WINAPIV*)(struct _NET_BUFFER*);
        (org_ptr(0x14047cf60L))(this);
    };
    void _NET_BUFFER::dtor__NET_BUFFER()
    {
        using org_ptr = void (WINAPIV*)(struct _NET_BUFFER*);
        (org_ptr(0x14047cf60L))(this);
    };
END_ATF_NAMESPACE
