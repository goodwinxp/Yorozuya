#include <_suggested_matter.hpp>


START_ATF_NAMESPACE
    void _suggested_matter::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct _suggested_matter*);
        (org_ptr(0x14025cfe0L))(this);
    };
    bool _suggested_matter::IsVotable(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct _suggested_matter*, unsigned int);
        return (org_ptr(0x1400ad200L))(this, dwSerial);
    };
    _suggested_matter::_suggested_matter()
    {
        using org_ptr = void (WINAPIV*)(struct _suggested_matter*);
        (org_ptr(0x14025cf90L))(this);
    };
    void _suggested_matter::ctor__suggested_matter()
    {
        using org_ptr = void (WINAPIV*)(struct _suggested_matter*);
        (org_ptr(0x14025cf90L))(this);
    };
END_ATF_NAMESPACE
