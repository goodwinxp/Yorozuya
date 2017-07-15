#include <std__out_of_range.hpp>


START_ATF_NAMESPACE
    std::out_of_range::out_of_range(std::basic_string<char>* _Message)
        : std::logic_error(_Message)
    {
        using org_ptr = void (WINAPIV*)(struct std::out_of_range*, std::basic_string<char>*);
        (org_ptr(0x140195740L))(this, _Message);
    };
    void std::out_of_range::ctor_out_of_range(std::basic_string<char>* _Message)
    {
        using org_ptr = void (WINAPIV*)(struct std::out_of_range*, std::basic_string<char>*);
        (org_ptr(0x140195740L))(this, _Message);
    };
    std::out_of_range::out_of_range(struct std::out_of_range* __that)
        : std::logic_error(__that)
    {
        using org_ptr = void (WINAPIV*)(struct std::out_of_range*, struct std::out_of_range*);
        (org_ptr(0x140195880L))(this, __that);
    };
    void std::out_of_range::ctor_out_of_range(struct std::out_of_range* __that)
    {
        using org_ptr = void (WINAPIV*)(struct std::out_of_range*, struct std::out_of_range*);
        (org_ptr(0x140195880L))(this, __that);
    };
    std::out_of_range::~out_of_range()
    {
        using org_ptr = void (WINAPIV*)(struct std::out_of_range*);
        (org_ptr(0x1401957b0L))(this);
    };
    void std::out_of_range::dtor_out_of_range()
    {
        using org_ptr = void (WINAPIV*)(struct std::out_of_range*);
        (org_ptr(0x1401957b0L))(this);
    };
END_ATF_NAMESPACE
