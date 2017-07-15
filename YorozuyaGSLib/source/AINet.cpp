#include <AINet.hpp>


START_ATF_NAMESPACE
    AINet::AINet(char* pstrAgent, unsigned int dwAccessType, char* pstrProxyName, char* pstrProxyBypass, unsigned int dwFlags)
    {
        using org_ptr = void (WINAPIV*)(struct AINet*, char*, unsigned int, char*, char*, unsigned int);
        (org_ptr(0x140432290L))(this, pstrAgent, dwAccessType, pstrProxyName, pstrProxyBypass, dwFlags);
    };
    void AINet::ctor_AINet(char* pstrAgent, unsigned int dwAccessType, char* pstrProxyName, char* pstrProxyBypass, unsigned int dwFlags)
    {
        using org_ptr = void (WINAPIV*)(struct AINet*, char*, unsigned int, char*, char*, unsigned int);
        (org_ptr(0x140432290L))(this, pstrAgent, dwAccessType, pstrProxyName, pstrProxyBypass, dwFlags);
    };
    AINet::~AINet()
    {
        using org_ptr = void (WINAPIV*)(struct AINet*);
        (org_ptr(0x140432310L))(this);
    };
    void AINet::dtor_AINet()
    {
        using org_ptr = void (WINAPIV*)(struct AINet*);
        (org_ptr(0x140432310L))(this);
    };
END_ATF_NAMESPACE
