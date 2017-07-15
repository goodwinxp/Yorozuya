#include <strFILE.hpp>


START_ATF_NAMESPACE
    bool strFILE::load(char* pszFileName)
    {
        using org_ptr = bool (WINAPIV*)(struct strFILE*, char*);
        return (org_ptr(0x140271e20L))(this, pszFileName);
    };
    int strFILE::read_line_count()
    {
        using org_ptr = int (WINAPIV*)(struct strFILE*);
        return (org_ptr(0x14027a6b0L))(this);
    };
    strFILE::strFILE()
    {
        using org_ptr = void (WINAPIV*)(struct strFILE*);
        (org_ptr(0x140271d40L))(this);
    };
    void strFILE::ctor_strFILE()
    {
        using org_ptr = void (WINAPIV*)(struct strFILE*);
        (org_ptr(0x140271d40L))(this);
    };
    bool strFILE::word(char* poutszWord)
    {
        using org_ptr = bool (WINAPIV*)(struct strFILE*, char*);
        return (org_ptr(0x140272070L))(this, poutszWord);
    };
    bool strFILE::word(long double* pdoutVal)
    {
        using org_ptr = bool (WINAPIV*)(struct strFILE*, long double*);
        return (org_ptr(0x14027a0c0L))(this, pdoutVal);
    };
    bool strFILE::word(float* pfoutVal)
    {
        using org_ptr = bool (WINAPIV*)(struct strFILE*, float*);
        return (org_ptr(0x140279fe0L))(this, pfoutVal);
    };
    bool strFILE::word(int* pnoutVal)
    {
        using org_ptr = bool (WINAPIV*)(struct strFILE*, int*);
        return (org_ptr(0x140279eb0L))(this, pnoutVal);
    };
    strFILE::~strFILE()
    {
        using org_ptr = void (WINAPIV*)(struct strFILE*);
        (org_ptr(0x140271da0L))(this);
    };
    void strFILE::dtor_strFILE()
    {
        using org_ptr = void (WINAPIV*)(struct strFILE*);
        (org_ptr(0x140271da0L))(this);
    };
END_ATF_NAMESPACE
