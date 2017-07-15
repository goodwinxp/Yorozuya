#include <std__length_error.hpp>


START_ATF_NAMESPACE
    std::length_error::length_error(std::basic_string<char>* _Message)
        : std::logic_error(_Message)
    {
        using org_ptr = void (WINAPIV*)(struct std::length_error*, std::basic_string<char>*);
        (org_ptr(0x14007e780L))(this, _Message);
    };
    void std::length_error::ctor_length_error(std::basic_string<char>* _Message)
    {
        using org_ptr = void (WINAPIV*)(struct std::length_error*, std::basic_string<char>*);
        (org_ptr(0x14007e780L))(this, _Message);
    };
    std::length_error::length_error(struct std::length_error* __that)
        : std::logic_error(__that)
    {
        using org_ptr = void (WINAPIV*)(struct std::length_error*, struct std::length_error*);
        (org_ptr(0x14007eb70L))(this, __that);
    };
    void std::length_error::ctor_length_error(struct std::length_error* __that)
    {
        using org_ptr = void (WINAPIV*)(struct std::length_error*, struct std::length_error*);
        (org_ptr(0x14007eb70L))(this, __that);
    };
    std::length_error::~length_error()
    {
        using org_ptr = void (WINAPIV*)(struct std::length_error*);
        (org_ptr(0x14007e9e0L))(this);
    };
    void std::length_error::dtor_length_error()
    {
        using org_ptr = void (WINAPIV*)(struct std::length_error*);
        (org_ptr(0x14007e9e0L))(this);
    };
END_ATF_NAMESPACE
