#include <_talik_recvr_list.hpp>


START_ATF_NAMESPACE
    _talik_recvr_list::_talik_recvr_list()
    {
        using org_ptr = void (WINAPIV*)(struct _talik_recvr_list*);
        (org_ptr(0x1403f6ed0L))(this);
    };
    void _talik_recvr_list::ctor__talik_recvr_list()
    {
        using org_ptr = void (WINAPIV*)(struct _talik_recvr_list*);
        (org_ptr(0x1403f6ed0L))(this);
    };
    int _talik_recvr_list::size()
    {
        using org_ptr = int (WINAPIV*)(struct _talik_recvr_list*);
        return (org_ptr(0x1403f6f30L))(this);
    };
    
END_ATF_NAMESPACE
