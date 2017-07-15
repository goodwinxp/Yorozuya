#include <_dh_job_setup.hpp>


START_ATF_NAMESPACE
    _dh_job_setup::_dh_job_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_job_setup*);
        (org_ptr(0x1402729f0L))(this);
    };
    void _dh_job_setup::ctor__dh_job_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_job_setup*);
        (org_ptr(0x1402729f0L))(this);
    };
    _dh_job_setup::~_dh_job_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_job_setup*);
        (org_ptr(0x140272ba0L))(this);
    };
    void _dh_job_setup::dtor__dh_job_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_job_setup*);
        (org_ptr(0x140272ba0L))(this);
    };
END_ATF_NAMESPACE
