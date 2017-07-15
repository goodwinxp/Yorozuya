#include <_mastery_up_data.hpp>


START_ATF_NAMESPACE
    _mastery_up_data::_mastery_up_data()
    {
        using org_ptr = void (WINAPIV*)(struct _mastery_up_data*);
        (org_ptr(0x140074690L))(this);
    };
    void _mastery_up_data::ctor__mastery_up_data()
    {
        using org_ptr = void (WINAPIV*)(struct _mastery_up_data*);
        (org_ptr(0x140074690L))(this);
    };
    void _mastery_up_data::init()
    {
        using org_ptr = void (WINAPIV*)(struct _mastery_up_data*);
        (org_ptr(0x1400746e0L))(this);
    };
    void _mastery_up_data::set(char code, char index, char mastery)
    {
        using org_ptr = void (WINAPIV*)(struct _mastery_up_data*, char, char, char);
        (org_ptr(0x14007b7a0L))(this, code, index, mastery);
    };
END_ATF_NAMESPACE
