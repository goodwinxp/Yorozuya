#include <_trans_gm_msg_inform_zocl.hpp>


START_ATF_NAMESPACE
    _trans_gm_msg_inform_zocl::_trans_gm_msg_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _trans_gm_msg_inform_zocl*);
        (org_ptr(0x1400efcb0L))(this);
    };
    void _trans_gm_msg_inform_zocl::ctor__trans_gm_msg_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _trans_gm_msg_inform_zocl*);
        (org_ptr(0x1400efcb0L))(this);
    };
    int _trans_gm_msg_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _trans_gm_msg_inform_zocl*);
        return (org_ptr(0x1400efcd0L))(this);
    };
END_ATF_NAMESPACE
