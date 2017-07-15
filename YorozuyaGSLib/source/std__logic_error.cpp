#include <std__logic_error.hpp>


START_ATF_NAMESPACE
    std::logic_error::logic_error(std::basic_string<char>* _Message)
    {
        using org_ptr = void (WINAPIV*)(struct std::logic_error*, std::basic_string<char>*);
        (org_ptr(0x14007e7f0L))(this, _Message);
    };
    void std::logic_error::ctor_logic_error(std::basic_string<char>* _Message)
    {
        using org_ptr = void (WINAPIV*)(struct std::logic_error*, std::basic_string<char>*);
        (org_ptr(0x14007e7f0L))(this, _Message);
    };
    std::logic_error::logic_error(struct std::logic_error* __that)
    {
        using org_ptr = void (WINAPIV*)(struct std::logic_error*, struct std::logic_error*);
        (org_ptr(0x14007ebe0L))(this, __that);
    };
    void std::logic_error::ctor_logic_error(struct std::logic_error* __that)
    {
        using org_ptr = void (WINAPIV*)(struct std::logic_error*, struct std::logic_error*);
        (org_ptr(0x14007ebe0L))(this, __that);
    };
    char* std::logic_error::what()
    {
        using org_ptr = char* (WINAPIV*)(struct std::logic_error*);
        return (org_ptr(0x14007e8b0L))(this);
    };
    std::logic_error::~logic_error()
    {
        using org_ptr = void (WINAPIV*)(struct std::logic_error*);
        (org_ptr(0x14007e970L))(this);
    };
    void std::logic_error::dtor_logic_error()
    {
        using org_ptr = void (WINAPIV*)(struct std::logic_error*);
        (org_ptr(0x14007e970L))(this);
    };
END_ATF_NAMESPACE
