#include <_sel_patriarch_elect_state.hpp>


START_ATF_NAMESPACE
    _sel_patriarch_elect_state::_sel_patriarch_elect_state()
    {
        using org_ptr = void (WINAPIV*)(struct _sel_patriarch_elect_state*);
        (org_ptr(0x1402bd610L))(this);
    };
    void _sel_patriarch_elect_state::ctor__sel_patriarch_elect_state()
    {
        using org_ptr = void (WINAPIV*)(struct _sel_patriarch_elect_state*);
        (org_ptr(0x1402bd610L))(this);
    };
END_ATF_NAMESPACE
