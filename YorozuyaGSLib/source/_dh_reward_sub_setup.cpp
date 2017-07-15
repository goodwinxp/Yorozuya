#include <_dh_reward_sub_setup.hpp>


START_ATF_NAMESPACE
    _dh_reward_sub_setup::_dh_reward_sub_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_reward_sub_setup*);
        (org_ptr(0x1402725a0L))(this);
    };
    void _dh_reward_sub_setup::ctor__dh_reward_sub_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_reward_sub_setup*);
        (org_ptr(0x1402725a0L))(this);
    };
    _dh_reward_sub_setup::~_dh_reward_sub_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_reward_sub_setup*);
        (org_ptr(0x140272690L))(this);
    };
    void _dh_reward_sub_setup::dtor__dh_reward_sub_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_reward_sub_setup*);
        (org_ptr(0x140272690L))(this);
    };
END_ATF_NAMESPACE
