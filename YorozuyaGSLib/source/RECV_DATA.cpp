#include <RECV_DATA.hpp>


START_ATF_NAMESPACE
    RECV_DATA::RECV_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct RECV_DATA*);
        (org_ptr(0x14031a490L))(this);
    };
    void RECV_DATA::ctor_RECV_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct RECV_DATA*);
        (org_ptr(0x14031a490L))(this);
    };
END_ATF_NAMESPACE
