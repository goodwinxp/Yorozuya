#include <_darkhole_answer_reenter_result_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_answer_reenter_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_answer_reenter_result_zocl*);
        return (org_ptr(0x1400efa10L))(this);
    };
END_ATF_NAMESPACE
