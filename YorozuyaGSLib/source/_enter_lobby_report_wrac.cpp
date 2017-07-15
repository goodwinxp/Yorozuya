#include <_enter_lobby_report_wrac.hpp>


START_ATF_NAMESPACE
    int _enter_lobby_report_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _enter_lobby_report_wrac*);
        return (org_ptr(0x14011fbc0L))(this);
    };
END_ATF_NAMESPACE
