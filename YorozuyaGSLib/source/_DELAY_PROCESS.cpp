#include <_DELAY_PROCESS.hpp>


START_ATF_NAMESPACE
    void _DELAY_PROCESS::CheckOnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*);
        (org_ptr(0x14007de40L))(this);
    };
    void _DELAY_PROCESS::Delete(unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*, unsigned int, unsigned int);
        (org_ptr(0x1400d1730L))(this, dwIndex, dwSerial);
    };
    bool _DELAY_PROCESS::Init(unsigned int dwObjectNum, unsigned int dwTerm)
    {
        using org_ptr = bool (WINAPIV*)(struct _DELAY_PROCESS*, unsigned int, unsigned int);
        return (org_ptr(0x14007dcd0L))(this, dwObjectNum, dwTerm);
    };
    void _DELAY_PROCESS::Process(unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*, unsigned int, unsigned int);
        (org_ptr(0x14007f370L))(this, dwIndex, dwSerial);
    };
    bool _DELAY_PROCESS::Push(unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct _DELAY_PROCESS*, unsigned int, unsigned int);
        return (org_ptr(0x14007a640L))(this, dwIndex, dwSerial);
    };
    _DELAY_PROCESS::_DELAY_PROCESS(unsigned int dwObjectNum, unsigned int dwTerm)
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*, unsigned int, unsigned int);
        (org_ptr(0x14007f270L))(this, dwObjectNum, dwTerm);
    };
    void _DELAY_PROCESS::ctor__DELAY_PROCESS(unsigned int dwObjectNum, unsigned int dwTerm)
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*, unsigned int, unsigned int);
        (org_ptr(0x14007f270L))(this, dwObjectNum, dwTerm);
    };
    _DELAY_PROCESS::_DELAY_PROCESS()
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*);
        (org_ptr(0x14007f3f0L))(this);
    };
    void _DELAY_PROCESS::ctor__DELAY_PROCESS()
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*);
        (org_ptr(0x14007f3f0L))(this);
    };
    _DELAY_PROCESS::~_DELAY_PROCESS()
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*);
        (org_ptr(0x1400803b0L))(this);
    };
    void _DELAY_PROCESS::dtor__DELAY_PROCESS()
    {
        using org_ptr = void (WINAPIV*)(struct _DELAY_PROCESS*);
        (org_ptr(0x1400803b0L))(this);
    };
END_ATF_NAMESPACE
