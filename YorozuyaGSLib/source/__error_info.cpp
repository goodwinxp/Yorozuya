#include <__error_info.hpp>


START_ATF_NAMESPACE
    void __error_info::SetFileName(char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct __error_info*, char*);
        (org_ptr(0x140272310L))(this, pszFileName);
    };
    void __error_info::SetQuestTitle(char* pszTitle)
    {
        using org_ptr = void (WINAPIV*)(struct __error_info*, char*);
        (org_ptr(0x140272360L))(this, pszTitle);
    };
    __error_info::__error_info()
    {
        using org_ptr = void (WINAPIV*)(struct __error_info*);
        (org_ptr(0x140271c30L))(this);
    };
    void __error_info::ctor___error_info()
    {
        using org_ptr = void (WINAPIV*)(struct __error_info*);
        (org_ptr(0x140271c30L))(this);
    };
    void __error_info::init()
    {
        using org_ptr = void (WINAPIV*)(struct __error_info*);
        (org_ptr(0x140271c80L))(this);
    };
END_ATF_NAMESPACE
