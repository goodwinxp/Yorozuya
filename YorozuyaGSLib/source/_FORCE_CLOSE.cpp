#include <_FORCE_CLOSE.hpp>


START_ATF_NAMESPACE
    bool _FORCE_CLOSE::Init(unsigned int dwNodeNum)
    {
        using org_ptr = bool (WINAPIV*)(struct _FORCE_CLOSE*, unsigned int);
        return (org_ptr(0x14047ccd0L))(this, dwNodeNum);
    };
    bool _FORCE_CLOSE::PushNode(unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct _FORCE_CLOSE*, unsigned int, unsigned int);
        return (org_ptr(0x140482340L))(this, dwIndex, dwSerial);
    };
    _FORCE_CLOSE::_FORCE_CLOSE()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_CLOSE*);
        (org_ptr(0x14047c9f0L))(this);
    };
    void _FORCE_CLOSE::ctor__FORCE_CLOSE()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_CLOSE*);
        (org_ptr(0x14047c9f0L))(this);
    };
    _FORCE_CLOSE::~_FORCE_CLOSE()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_CLOSE*);
        (org_ptr(0x14047cae0L))(this);
    };
    void _FORCE_CLOSE::dtor__FORCE_CLOSE()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_CLOSE*);
        (org_ptr(0x14047cae0L))(this);
    };
    
END_ATF_NAMESPACE
