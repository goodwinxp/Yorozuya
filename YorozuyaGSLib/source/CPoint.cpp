#include <CPoint.hpp>


START_ATF_NAMESPACE
    CPoint::CPoint(int64_t dwPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, int64_t);
        (org_ptr(0x140670b20L))(this, dwPoint);
    };
    void CPoint::ctor_CPoint(int64_t dwPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, int64_t);
        (org_ptr(0x140670b20L))(this, dwPoint);
    };
    CPoint::CPoint(int initX, int initY)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, int, int);
        (org_ptr(0x140670a80L))(this, initX, initY);
    };
    void CPoint::ctor_CPoint(int initX, int initY)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, int, int);
        (org_ptr(0x140670a80L))(this, initX, initY);
    };
    CPoint::CPoint(struct tagPOINT initPt)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, struct tagPOINT);
        (org_ptr(0x140670ac0L))(this, initPt);
    };
    void CPoint::ctor_CPoint(struct tagPOINT initPt)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, struct tagPOINT);
        (org_ptr(0x140670ac0L))(this, initPt);
    };
    CPoint::CPoint(struct tagSIZE initSize)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, struct tagSIZE);
        (org_ptr(0x140670af0L))(this, initSize);
    };
    void CPoint::ctor_CPoint(struct tagSIZE initSize)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, struct tagSIZE);
        (org_ptr(0x140670af0L))(this, initSize);
    };
    CPoint::CPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*);
        (org_ptr(0x140670a60L))(this);
    };
    void CPoint::ctor_CPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*);
        (org_ptr(0x140670a60L))(this);
    };
    void CPoint::Offset(int xOffset, int yOffset)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, int, int);
        (org_ptr(0x140670b60L))(this, xOffset, yOffset);
    };
    void CPoint::Offset(struct tagPOINT point)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, struct tagPOINT);
        (org_ptr(0x140670ba0L))(this, point);
    };
    void CPoint::Offset(struct tagSIZE size)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, struct tagSIZE);
        (org_ptr(0x140670be0L))(this, size);
    };
    void CPoint::SetPoint(int X, int Y)
    {
        using org_ptr = void (WINAPIV*)(struct CPoint*, int, int);
        (org_ptr(0x140670c20L))(this, X, Y);
    };
END_ATF_NAMESPACE
