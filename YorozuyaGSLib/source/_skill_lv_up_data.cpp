#include <_skill_lv_up_data.hpp>


START_ATF_NAMESPACE
    void _skill_lv_up_data::init()
    {
        using org_ptr = void (WINAPIV*)(struct _skill_lv_up_data*);
        (org_ptr(0x140078950L))(this);
    };
    void _skill_lv_up_data::set(uint16_t index, char lv)
    {
        using org_ptr = void (WINAPIV*)(struct _skill_lv_up_data*, uint16_t, char);
        (org_ptr(0x14007b800L))(this, index, lv);
    };
END_ATF_NAMESPACE
