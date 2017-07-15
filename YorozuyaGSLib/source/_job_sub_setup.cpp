#include <_job_sub_setup.hpp>


START_ATF_NAMESPACE
    _job_sub_setup::_job_sub_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _job_sub_setup*);
        (org_ptr(0x140272af0L))(this);
    };
    void _job_sub_setup::ctor__job_sub_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _job_sub_setup*);
        (org_ptr(0x140272af0L))(this);
    };
END_ATF_NAMESPACE
