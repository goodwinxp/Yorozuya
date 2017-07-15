#include <CRect.hpp>


START_ATF_NAMESPACE
    struct CPoint* CRect::BottomRight()
    {
        using org_ptr = struct CPoint* (WINAPIV*)(struct CRect*);
        return (org_ptr(0x140671260L))(this);
    };
    CRect::CRect(int l, int t, int r, int b)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        (org_ptr(0x140671050L))(this, l, t, r, b);
    };
    void CRect::ctor_CRect(int l, int t, int r, int b)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        (org_ptr(0x140671050L))(this, l, t, r, b);
    };
    CRect::CRect(struct tagPOINT topLeft, struct tagPOINT bottomRight)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagPOINT);
        (org_ptr(0x140671160L))(this, topLeft, bottomRight);
    };
    void CRect::ctor_CRect(struct tagPOINT topLeft, struct tagPOINT bottomRight)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagPOINT);
        (org_ptr(0x140671160L))(this, topLeft, bottomRight);
    };
    CRect::CRect(struct tagPOINT point, struct tagSIZE size)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagSIZE);
        (org_ptr(0x140671100L))(this, point, size);
    };
    void CRect::ctor_CRect(struct tagPOINT point, struct tagSIZE size)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagSIZE);
        (org_ptr(0x140671100L))(this, point, size);
    };
    CRect::CRect(struct tagRECT& srcRect)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT&);
        (org_ptr(0x1406710a0L))(this, srcRect);
    };
    void CRect::ctor_CRect(struct tagRECT& srcRect)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT&);
        (org_ptr(0x1406710a0L))(this, srcRect);
    };
    CRect::CRect(struct tagRECT* lpSrcRect)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        (org_ptr(0x1406710d0L))(this, lpSrcRect);
    };
    void CRect::ctor_CRect(struct tagRECT* lpSrcRect)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        (org_ptr(0x1406710d0L))(this, lpSrcRect);
    };
    CRect::CRect()
    {
        using org_ptr = void (WINAPIV*)(struct CRect*);
        (org_ptr(0x140671030L))(this);
    };
    void CRect::ctor_CRect()
    {
        using org_ptr = void (WINAPIV*)(struct CRect*);
        (org_ptr(0x140671030L))(this);
    };
    struct CPoint* CRect::CenterPoint(struct CPoint* result)
    {
        using org_ptr = struct CPoint* (WINAPIV*)(struct CRect*, struct CPoint*);
        return (org_ptr(0x1406712c0L))(this, result);
    };
    void CRect::CopyRect(struct tagRECT* lpSrcRect)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        (org_ptr(0x140671520L))(this, lpSrcRect);
    };
    void CRect::DeflateRect(int x, int y)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int);
        (org_ptr(0x1406715f0L))(this, x, y);
    };
    void CRect::DeflateRect(int l, int t, int r, int b)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        (org_ptr(0x1406720c0L))(this, l, t, r, b);
    };
    void CRect::DeflateRect(struct tagRECT* lpRect)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        (org_ptr(0x140672040L))(this, lpRect);
    };
    void CRect::DeflateRect(struct tagSIZE size)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagSIZE);
        (org_ptr(0x140671630L))(this, size);
    };
    int CRect::EqualRect(struct tagRECT* lpRect)
    {
        using org_ptr = int (WINAPIV*)(struct CRect*, struct tagRECT*);
        return (org_ptr(0x140671550L))(this, lpRect);
    };
    int CRect::Height()
    {
        using org_ptr = int (WINAPIV*)(struct CRect*);
        return (org_ptr(0x1406711d0L))(this);
    };
    void CRect::InflateRect(int x, int y)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int);
        (org_ptr(0x140671580L))(this, x, y);
    };
    void CRect::InflateRect(int l, int t, int r, int b)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        (org_ptr(0x140671fd0L))(this, l, t, r, b);
    };
    void CRect::InflateRect(struct tagRECT* lpRect)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        (org_ptr(0x140671f50L))(this, lpRect);
    };
    void CRect::InflateRect(struct tagSIZE size)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagSIZE);
        (org_ptr(0x1406715c0L))(this, size);
    };
    int CRect::IntersectRect(struct tagRECT* lpRect1, struct tagRECT* lpRect2)
    {
        using org_ptr = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*);
        return (org_ptr(0x140671810L))(this, lpRect1, lpRect2);
    };
    int CRect::IsRectEmpty()
    {
        using org_ptr = int (WINAPIV*)(struct CRect*);
        return (org_ptr(0x1406713c0L))(this);
    };
    int CRect::IsRectNull()
    {
        using org_ptr = int (WINAPIV*)(struct CRect*);
        return (org_ptr(0x1406713e0L))(this);
    };
    void CRect::MoveToX(int x)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int);
        (org_ptr(0x140671750L))(this, x);
    };
    void CRect::MoveToXY(int x, int y)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int);
        (org_ptr(0x140671790L))(this, x, y);
    };
    void CRect::MoveToXY(struct tagPOINT pt)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT);
        (org_ptr(0x1406717d0L))(this, pt);
    };
    void CRect::MoveToY(int y)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int);
        (org_ptr(0x140671710L))(this, y);
    };
    struct CRect* CRect::MulDiv(struct CRect* result, int nMultiplier, int nDivisor)
    {
        using org_ptr = struct CRect* (WINAPIV*)(struct CRect*, struct CRect*, int, int);
        return (org_ptr(0x140672130L))(this, result, nMultiplier, nDivisor);
    };
    void CRect::NormalizeRect()
    {
        using org_ptr = void (WINAPIV*)(struct CRect*);
        (org_ptr(0x140671ec0L))(this);
    };
    void CRect::OffsetRect(int x, int y)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int);
        (org_ptr(0x140671670L))(this, x, y);
    };
    void CRect::OffsetRect(struct tagPOINT point)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT);
        (org_ptr(0x1406716b0L))(this, point);
    };
    void CRect::OffsetRect(struct tagSIZE size)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagSIZE);
        (org_ptr(0x1406716e0L))(this, size);
    };
    int CRect::PtInRect(struct tagPOINT point)
    {
        using org_ptr = int (WINAPIV*)(struct CRect*, struct tagPOINT);
        return (org_ptr(0x140671440L))(this, point);
    };
    void CRect::SetRect(int x1, int y1, int x2, int y2)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        (org_ptr(0x140671470L))(this, x1, y1, x2, y2);
    };
    void CRect::SetRect(struct tagPOINT topLeft, struct tagPOINT bottomRight)
    {
        using org_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagPOINT);
        (org_ptr(0x1406714c0L))(this, topLeft, bottomRight);
    };
    void CRect::SetRectEmpty()
    {
        using org_ptr = void (WINAPIV*)(struct CRect*);
        (org_ptr(0x140671500L))(this);
    };
    struct CSize* CRect::Size(struct CSize* result)
    {
        using org_ptr = struct CSize* (WINAPIV*)(struct CRect*, struct CSize*);
        return (org_ptr(0x1406711f0L))(this, result);
    };
    int CRect::SubtractRect(struct tagRECT* lpRectSrc1, struct tagRECT* lpRectSrc2)
    {
        using org_ptr = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*);
        return (org_ptr(0x140671e80L))(this, lpRectSrc1, lpRectSrc2);
    };
    void CRect::SwapLeftRight(struct tagRECT* lpRect)
    {
        using org_ptr = void (WINAPIV*)(struct tagRECT*);
        (org_ptr(0x140671340L))(lpRect);
    };
    void CRect::SwapLeftRight()
    {
        using org_ptr = void (WINAPIV*)(struct CRect*);
        (org_ptr(0x140671320L))(this);
    };
    struct CPoint* CRect::TopLeft()
    {
        using org_ptr = struct CPoint* (WINAPIV*)(struct CRect*);
        return (org_ptr(0x140671240L))(this);
    };
    int CRect::UnionRect(struct tagRECT* lpRect1, struct tagRECT* lpRect2)
    {
        using org_ptr = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*);
        return (org_ptr(0x140671850L))(this, lpRect1, lpRect2);
    };
    int CRect::Width()
    {
        using org_ptr = int (WINAPIV*)(struct CRect*);
        return (org_ptr(0x1406711b0L))(this);
    };
END_ATF_NAMESPACE
