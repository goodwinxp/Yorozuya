#include <CNetwork.hpp>


START_ATF_NAMESPACE
    CNetwork::CNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct CNetwork*);
        (org_ptr(0x140410a80L))(this);
    };
    void CNetwork::ctor_CNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct CNetwork*);
        (org_ptr(0x140410a80L))(this);
    };
    void CNetwork::FreeDLL()
    {
        using org_ptr = void (WINAPIV*)(struct CNetwork*);
        (org_ptr(0x140410eb0L))(this);
    };
    void CNetwork::InitNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct CNetwork*);
        (org_ptr(0x140410f00L))(this);
    };
    bool CNetwork::LoadDll(char* dll_name)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetwork*, char*);
        return (org_ptr(0x140410c60L))(this, dll_name);
    };
    CNetwork::~CNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct CNetwork*);
        (org_ptr(0x140410ab0L))(this);
    };
    void CNetwork::dtor_CNetwork()
    {
        using org_ptr = void (WINAPIV*)(struct CNetwork*);
        (org_ptr(0x140410ab0L))(this);
    };
END_ATF_NAMESPACE
