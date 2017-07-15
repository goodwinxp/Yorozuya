#include <std__exception.hpp>


START_ATF_NAMESPACE
    std::exception::exception(char** arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::exception*, char**);
        (org_ptr(0x1404dcea2L))(this, arg_0);
    };
    int64_t std::exception::ctor_exception(char** arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::exception*, char**);
        return (org_ptr(0x1404dcea2L))(this, arg_0);
    };
    std::exception::exception(char** arg_0, int arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::exception*, char**, int);
        (org_ptr(0x140676d98L))(this, arg_0, arg_1);
    };
    int64_t std::exception::ctor_exception(char** arg_0, int arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::exception*, char**, int);
        return (org_ptr(0x140676d98L))(this, arg_0, arg_1);
    };
    std::exception::exception(struct std::exception* arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::exception*, struct std::exception*);
        (org_ptr(0x1404dce8aL))(this, arg_0);
    };
    int64_t std::exception::ctor_exception(struct std::exception* arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::exception*, struct std::exception*);
        return (org_ptr(0x1404dce8aL))(this, arg_0);
    };
    std::exception::exception()
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::exception*);
        (org_ptr(0x1404dce96L))(this);
    };
    int64_t std::exception::ctor_exception()
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::exception*);
        return (org_ptr(0x1404dce96L))(this);
    };
    char* std::exception::what()
    {
        using org_ptr = char* (WINAPIV*)(struct std::exception*);
        return (org_ptr(0x1404dcea8L))(this);
    };
END_ATF_NAMESPACE
