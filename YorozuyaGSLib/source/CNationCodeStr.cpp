#include <CNationCodeStr.hpp>


START_ATF_NAMESPACE
    CNationCodeStr::CNationCodeStr(int iCode, char* szCodeStr)
    {
        using org_ptr = void (WINAPIV*)(struct CNationCodeStr*, int, char*);
        (org_ptr(0x14020abe0L))(this, iCode, szCodeStr);
    };
    void CNationCodeStr::ctor_CNationCodeStr(int iCode, char* szCodeStr)
    {
        using org_ptr = void (WINAPIV*)(struct CNationCodeStr*, int, char*);
        (org_ptr(0x14020abe0L))(this, iCode, szCodeStr);
    };
    int CNationCodeStr::GetKey()
    {
        using org_ptr = int (WINAPIV*)(struct CNationCodeStr*);
        return (org_ptr(0x14020bc10L))(this);
    };
    char* CNationCodeStr::GetStr()
    {
        using org_ptr = char* (WINAPIV*)(struct CNationCodeStr*);
        return (org_ptr(0x14020b980L))(this);
    };
    bool CNationCodeStr::IsNULL()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationCodeStr*);
        return (org_ptr(0x14020bc30L))(this);
    };
    CNationCodeStr::~CNationCodeStr()
    {
        using org_ptr = void (WINAPIV*)(struct CNationCodeStr*);
        (org_ptr(0x14020a350L))(this);
    };
    void CNationCodeStr::dtor_CNationCodeStr()
    {
        using org_ptr = void (WINAPIV*)(struct CNationCodeStr*);
        (org_ptr(0x14020a350L))(this);
    };
END_ATF_NAMESPACE
