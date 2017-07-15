#include <UsRefObject.hpp>


START_ATF_NAMESPACE
    void UsRefObject::DecRefCount()
    {
        using org_ptr = void (WINAPIV*)(struct UsRefObject*);
        (org_ptr(0x14014cd40L))(this);
    };
    void UsRefObject::IncRefCount()
    {
        using org_ptr = void (WINAPIV*)(struct UsRefObject*);
        (org_ptr(0x14014cc40L))(this);
    };
    UsRefObject::UsRefObject()
    {
        using org_ptr = void (WINAPIV*)(struct UsRefObject*);
        (org_ptr(0x1401633f0L))(this);
    };
    void UsRefObject::ctor_UsRefObject()
    {
        using org_ptr = void (WINAPIV*)(struct UsRefObject*);
        (org_ptr(0x1401633f0L))(this);
    };
    UsRefObject::~UsRefObject()
    {
        using org_ptr = void (WINAPIV*)(struct UsRefObject*);
        (org_ptr(0x1401634b0L))(this);
    };
    void UsRefObject::dtor_UsRefObject()
    {
        using org_ptr = void (WINAPIV*)(struct UsRefObject*);
        (org_ptr(0x1401634b0L))(this);
    };
END_ATF_NAMESPACE
