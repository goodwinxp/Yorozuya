#include <_sf_continous.hpp>


START_ATF_NAMESPACE
    unsigned int _sf_continous::GetSFContCurTime()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x140034970L))();
    };
    _sf_continous::_sf_continous()
    {
        using org_ptr = void (WINAPIV*)(struct _sf_continous*);
        (org_ptr(0x14017a3f0L))(this);
    };
    void _sf_continous::ctor__sf_continous()
    {
        using org_ptr = void (WINAPIV*)(struct _sf_continous*);
        (org_ptr(0x14017a3f0L))(this);
    };
END_ATF_NAMESPACE
