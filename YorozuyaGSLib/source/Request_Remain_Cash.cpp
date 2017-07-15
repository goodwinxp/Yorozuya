#include <Request_Remain_Cash.hpp>


START_ATF_NAMESPACE
    Request_Remain_Cash::Request_Remain_Cash()
    {
        using org_ptr = void (WINAPIV*)(struct Request_Remain_Cash*);
        (org_ptr(0x14031d3a0L))(this);
    };
    void Request_Remain_Cash::ctor_Request_Remain_Cash()
    {
        using org_ptr = void (WINAPIV*)(struct Request_Remain_Cash*);
        (org_ptr(0x14031d3a0L))(this);
    };
END_ATF_NAMESPACE
