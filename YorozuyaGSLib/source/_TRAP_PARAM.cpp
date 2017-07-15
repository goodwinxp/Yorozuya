#include <_TRAP_PARAM.hpp>


START_ATF_NAMESPACE
    int _TRAP_PARAM::GetNum()
    {
        using org_ptr = int (WINAPIV*)(struct _TRAP_PARAM*);
        return (org_ptr(0x1400a6a20L))(this);
    };
    void _TRAP_PARAM::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _TRAP_PARAM*);
        (org_ptr(0x140072cd0L))(this);
    };
    bool _TRAP_PARAM::PopItem(unsigned int dwTrapSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct _TRAP_PARAM*, unsigned int);
        return (org_ptr(0x1400a6aa0L))(this, dwTrapSerial);
    };
    bool _TRAP_PARAM::PushItem(struct CTrap* pTrap, unsigned int dwTrapSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct _TRAP_PARAM*, struct CTrap*, unsigned int);
        return (org_ptr(0x1400791f0L))(this, pTrap, dwTrapSerial);
    };
    _TRAP_PARAM::_TRAP_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _TRAP_PARAM*);
        (org_ptr(0x140072c40L))(this);
    };
    void _TRAP_PARAM::ctor__TRAP_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _TRAP_PARAM*);
        (org_ptr(0x140072c40L))(this);
    };
    _TRAP_PARAM::_param::_param()
    {
        using org_ptr = void (WINAPIV*)(struct _TRAP_PARAM::_param*);
        (org_ptr(0x140072cb0L))(this);
    };
    void _TRAP_PARAM::_param::ctor__param()
    {
        using org_ptr = void (WINAPIV*)(struct _TRAP_PARAM::_param*);
        (org_ptr(0x140072cb0L))(this);
    };
    void _TRAP_PARAM::_param::init()
    {
        using org_ptr = void (WINAPIV*)(struct _TRAP_PARAM::_param*);
        (org_ptr(0x140072d60L))(this);
    };
    bool _TRAP_PARAM::_param::isLoad()
    {
        using org_ptr = bool (WINAPIV*)(struct _TRAP_PARAM::_param*);
        return (org_ptr(0x1400792f0L))(this);
    };
END_ATF_NAMESPACE
