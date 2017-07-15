#include <CNationCodeStrTable.hpp>


START_ATF_NAMESPACE
    CNationCodeStrTable::CNationCodeStrTable()
    {
        using org_ptr = void (WINAPIV*)(struct CNationCodeStrTable*);
        (org_ptr(0x140204ad0L))(this);
    };
    void CNationCodeStrTable::ctor_CNationCodeStrTable()
    {
        using org_ptr = void (WINAPIV*)(struct CNationCodeStrTable*);
        (org_ptr(0x140204ad0L))(this);
    };
    int CNationCodeStrTable::GetCode(char* szCodeStr)
    {
        using org_ptr = int (WINAPIV*)(struct CNationCodeStrTable*, char*);
        return (org_ptr(0x14020aca0L))(this, szCodeStr);
    };
    char* CNationCodeStrTable::GetStr(int iType)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationCodeStrTable*, int);
        return (org_ptr(0x14020adb0L))(this, iType);
    };
    bool CNationCodeStrTable::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationCodeStrTable*);
        return (org_ptr(0x14020ac40L))(this);
    };
    int CNationCodeStrTable::RegistCode()
    {
        using org_ptr = int (WINAPIV*)(struct CNationCodeStrTable*);
        return (org_ptr(0x14020ae30L))(this);
    };
    CNationCodeStrTable::~CNationCodeStrTable()
    {
        using org_ptr = void (WINAPIV*)(struct CNationCodeStrTable*);
        (org_ptr(0x140204b20L))(this);
    };
    void CNationCodeStrTable::dtor_CNationCodeStrTable()
    {
        using org_ptr = void (WINAPIV*)(struct CNationCodeStrTable*);
        (org_ptr(0x140204b20L))(this);
    };
END_ATF_NAMESPACE
