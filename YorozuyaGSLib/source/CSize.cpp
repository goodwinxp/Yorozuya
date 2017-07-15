#include <CSize.hpp>


START_ATF_NAMESPACE
    CSize::CSize(int initCX, int initCY)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, int, int);
        (org_ptr(0x1406705f0L))(this, initCX, initCY);
    };
    void CSize::ctor_CSize(int initCX, int initCY)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, int, int);
        (org_ptr(0x1406705f0L))(this, initCX, initCY);
    };
    CSize::CSize(struct tagPOINT initPt)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, struct tagPOINT);
        (org_ptr(0x140670660L))(this, initPt);
    };
    void CSize::ctor_CSize(struct tagPOINT initPt)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, struct tagPOINT);
        (org_ptr(0x140670660L))(this, initPt);
    };
    CSize::CSize(struct tagSIZE initSize)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, struct tagSIZE);
        (org_ptr(0x140670630L))(this, initSize);
    };
    void CSize::ctor_CSize(struct tagSIZE initSize)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, struct tagSIZE);
        (org_ptr(0x140670630L))(this, initSize);
    };
    CSize::CSize(unsigned int dwSize)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, unsigned int);
        (org_ptr(0x140670690L))(this, dwSize);
    };
    void CSize::ctor_CSize(unsigned int dwSize)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, unsigned int);
        (org_ptr(0x140670690L))(this, dwSize);
    };
    CSize::CSize()
    {
        using org_ptr = void (WINAPIV*)(struct CSize*);
        (org_ptr(0x1406705d0L))(this);
    };
    void CSize::ctor_CSize()
    {
        using org_ptr = void (WINAPIV*)(struct CSize*);
        (org_ptr(0x1406705d0L))(this);
    };
    void CSize::SetSize(int CX, int CY)
    {
        using org_ptr = void (WINAPIV*)(struct CSize*, int, int);
        (org_ptr(0x1406707f0L))(this, CX, CY);
    };
END_ATF_NAMESPACE
