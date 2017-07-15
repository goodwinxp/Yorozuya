#include <std__bad_alloc.hpp>


START_ATF_NAMESPACE
    std::bad_alloc::bad_alloc(char* _Message)
    {
        using org_ptr = void (WINAPIV*)(struct std::bad_alloc*, char*);
        (org_ptr(0x14007efb0L))(this, _Message);
    };
    void std::bad_alloc::ctor_bad_alloc(char* _Message)
    {
        using org_ptr = void (WINAPIV*)(struct std::bad_alloc*, char*);
        (org_ptr(0x14007efb0L))(this, _Message);
    };
    std::bad_alloc::bad_alloc(struct std::bad_alloc* __that)
    {
        using org_ptr = void (WINAPIV*)(struct std::bad_alloc*, struct std::bad_alloc*);
        (org_ptr(0x14007f0f0L))(this, __that);
    };
    void std::bad_alloc::ctor_bad_alloc(struct std::bad_alloc* __that)
    {
        using org_ptr = void (WINAPIV*)(struct std::bad_alloc*, struct std::bad_alloc*);
        (org_ptr(0x14007f0f0L))(this, __that);
    };
    std::bad_alloc::bad_alloc()
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::bad_alloc*);
        (org_ptr(0x14061f760L))(this);
    };
    int64_t std::bad_alloc::ctor_bad_alloc()
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::bad_alloc*);
        return (org_ptr(0x14061f760L))(this);
    };
    std::bad_alloc::~bad_alloc()
    {
        using org_ptr = void (WINAPIV*)(struct std::bad_alloc*);
        (org_ptr(0x14007f020L))(this);
    };
    void std::bad_alloc::dtor_bad_alloc()
    {
        using org_ptr = void (WINAPIV*)(struct std::bad_alloc*);
        (org_ptr(0x14007f020L))(this);
    };
END_ATF_NAMESPACE
