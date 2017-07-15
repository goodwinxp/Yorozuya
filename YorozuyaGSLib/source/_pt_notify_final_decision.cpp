#include <_pt_notify_final_decision.hpp>


START_ATF_NAMESPACE
    _pt_notify_final_decision::_pt_notify_final_decision()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_notify_final_decision*);
        (org_ptr(0x1402be420L))(this);
    };
    void _pt_notify_final_decision::ctor__pt_notify_final_decision()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_notify_final_decision*);
        (org_ptr(0x1402be420L))(this);
    };
    int _pt_notify_final_decision::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_notify_final_decision*);
        return (org_ptr(0x1402be520L))(this);
    };
END_ATF_NAMESPACE
