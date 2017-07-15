#include <std___Iterator_base.hpp>


START_ATF_NAMESPACE
    void std::_Iterator_base::_Clean_up_iter_debug()
    {
        using org_ptr = void (WINAPIV*)(struct std::_Iterator_base*);
        (org_ptr(0x1401234a0L))(this);
    };
    std::_Iterator_base::_Iterator_base(struct std::_Iterator_base* _Right)
    {
        using org_ptr = void (WINAPIV*)(struct std::_Iterator_base*, struct std::_Iterator_base*);
        (org_ptr(0x140123b90L))(this, _Right);
    };
    void std::_Iterator_base::ctor__Iterator_base(struct std::_Iterator_base* _Right)
    {
        using org_ptr = void (WINAPIV*)(struct std::_Iterator_base*, struct std::_Iterator_base*);
        (org_ptr(0x140123b90L))(this, _Right);
    };
    std::_Iterator_base::_Iterator_base()
    {
        using org_ptr = void (WINAPIV*)(struct std::_Iterator_base*);
        (org_ptr(0x140123a90L))(this);
    };
    void std::_Iterator_base::ctor__Iterator_base()
    {
        using org_ptr = void (WINAPIV*)(struct std::_Iterator_base*);
        (org_ptr(0x140123a90L))(this);
    };
    std::_Iterator_base::~_Iterator_base()
    {
        using org_ptr = void (WINAPIV*)(struct std::_Iterator_base*);
        (org_ptr(0x140123420L))(this);
    };
    void std::_Iterator_base::dtor__Iterator_base()
    {
        using org_ptr = void (WINAPIV*)(struct std::_Iterator_base*);
        (org_ptr(0x140123420L))(this);
    };
END_ATF_NAMESPACE
