#include <type_info.hpp>


START_ATF_NAMESPACE
    char* type_info::_name_internal_method(struct __type_info_node* arg_0)
    {
        using org_ptr = char* (WINAPIV*)(struct type_info*, struct __type_info_node*);
        return (org_ptr(0x1404de224L))(this, arg_0);
    };
    type_info::type_info(struct type_info* rhs)
    {
        using org_ptr = void (WINAPIV*)(struct type_info*, struct type_info*);
        (org_ptr(0x1404dc920L))(this, rhs);
    };
    void type_info::ctor_type_info(struct type_info* rhs)
    {
        using org_ptr = void (WINAPIV*)(struct type_info*, struct type_info*);
        (org_ptr(0x1404dc920L))(this, rhs);
    };
    type_info::~type_info()
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x1404decf4L))(this);
    };
    void type_info::dtor_type_info()
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x1404decf4L))(this);
    };
END_ATF_NAMESPACE
