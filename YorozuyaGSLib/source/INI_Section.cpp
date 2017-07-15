#include <INI_Section.hpp>


START_ATF_NAMESPACE
    struct INI_Key* INI_Section::GetKey(char* strKey)
    {
        using org_ptr = struct INI_Key* (WINAPIV*)(struct INI_Section*, char*);
        return (org_ptr(0x14046c270L))(this, strKey);
    };
    INI_Section::INI_Section()
    {
        using org_ptr = void (WINAPIV*)(struct INI_Section*);
        (org_ptr(0x140470050L))(this);
    };
    void INI_Section::ctor_INI_Section()
    {
        using org_ptr = void (WINAPIV*)(struct INI_Section*);
        (org_ptr(0x140470050L))(this);
    };
    INI_Section::~INI_Section()
    {
        using org_ptr = void (WINAPIV*)(struct INI_Section*);
        (org_ptr(0x14046fc50L))(this);
    };
    void INI_Section::dtor_INI_Section()
    {
        using org_ptr = void (WINAPIV*)(struct INI_Section*);
        (org_ptr(0x14046fc50L))(this);
    };
END_ATF_NAMESPACE
