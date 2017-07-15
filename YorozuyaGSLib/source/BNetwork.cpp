#include <BNetwork.hpp>


START_ATF_NAMESPACE
    BNetwork::BNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct BNetwork*);
        (org_ptr(0x14031d270L))(this);
    };
    void BNetwork::ctor_BNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct BNetwork*);
        (org_ptr(0x14031d270L))(this);
    };
    void BNetwork::FreeDLL()
    {
        using org_ptr = void (WINAPIV*)(struct BNetwork*);
        (org_ptr(0x140318ba0L))(this);
    };
    void BNetwork::InitNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct BNetwork*);
        (org_ptr(0x140318bf0L))(this);
    };
    bool BNetwork::LoadDll(char* dll_name)
    {
        using org_ptr = bool (WINAPIV*)(struct BNetwork*, char*);
        return (org_ptr(0x140318950L))(this, dll_name);
    };
    BNetwork::~BNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct BNetwork*);
        (org_ptr(0x14031d2a0L))(this);
    };
    void BNetwork::dtor_BNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct BNetwork*);
        (org_ptr(0x14031d2a0L))(this);
    };
END_ATF_NAMESPACE
