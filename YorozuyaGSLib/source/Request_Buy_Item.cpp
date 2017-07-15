#include <Request_Buy_Item.hpp>


START_ATF_NAMESPACE
    Request_Buy_Item::Request_Buy_Item()
    {
        using org_ptr = void (WINAPIV*)(struct Request_Buy_Item*);
        (org_ptr(0x14031d420L))(this);
    };
    void Request_Buy_Item::ctor_Request_Buy_Item()
    {
        using org_ptr = void (WINAPIV*)(struct Request_Buy_Item*);
        (org_ptr(0x14031d420L))(this);
    };
END_ATF_NAMESPACE
