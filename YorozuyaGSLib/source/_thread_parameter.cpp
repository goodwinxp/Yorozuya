#include <_thread_parameter.hpp>


START_ATF_NAMESPACE
    void _thread_parameter::EndThread()
    {
        using org_ptr = void (WINAPIV*)(struct _thread_parameter*);
        (org_ptr(0x14047d3e0L))(this);
    };
    void _thread_parameter::SetParameter(int bStart, void* pParam, int nIndex)
    {
        using org_ptr = void (WINAPIV*)(struct _thread_parameter*, int, void*, int);
        (org_ptr(0x14047cc80L))(this, bStart, pParam, nIndex);
    };
    _thread_parameter::_thread_parameter()
    {
        using org_ptr = void (WINAPIV*)(struct _thread_parameter*);
        (org_ptr(0x14047c9b0L))(this);
    };
    void _thread_parameter::ctor__thread_parameter()
    {
        using org_ptr = void (WINAPIV*)(struct _thread_parameter*);
        (org_ptr(0x14047c9b0L))(this);
    };
END_ATF_NAMESPACE
