#include <_100_per_random_table.hpp>


START_ATF_NAMESPACE
    uint16_t _100_per_random_table::GetRand()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct _100_per_random_table*);
        return (org_ptr(0x1400b81d0L))(this);
    };
    _100_per_random_table::_100_per_random_table()
    {
        using org_ptr = void (WINAPIV*)(struct _100_per_random_table*);
        (org_ptr(0x1400726c0L))(this);
    };
    void _100_per_random_table::ctor__100_per_random_table()
    {
        using org_ptr = void (WINAPIV*)(struct _100_per_random_table*);
        (org_ptr(0x1400726c0L))(this);
    };
    void _100_per_random_table::reset()
    {
        using org_ptr = void (WINAPIV*)(struct _100_per_random_table*);
        (org_ptr(0x1400727e0L))(this);
    };
END_ATF_NAMESPACE
