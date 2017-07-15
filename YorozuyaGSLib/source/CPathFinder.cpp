#include <CPathFinder.hpp>


START_ATF_NAMESPACE
    int64_t CPathFinder::AddPath(float* arg_0, int arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CPathFinder*, float*, int);
        return (org_ptr(0x14050c710L))(this, arg_0, arg_1);
    };
    void CPathFinder::CompletePath(int arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CPathFinder*, int);
        (org_ptr(0x14050c550L))(this, arg_0);
    };
    uint16_t CPathFinder::GetBackLineId(int arg_0)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPathFinder*, int);
        return (org_ptr(0x14050c630L))(this, arg_0);
    };
    uint16_t CPathFinder::GetFrontLineId(int arg_0)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPathFinder*, int);
        return (org_ptr(0x14050c610L))(this, arg_0);
    };
    int64_t CPathFinder::GetPathCnt(int arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CPathFinder*, int);
        return (org_ptr(0x14050c570L))(this, arg_0);
    };
    int64_t CPathFinder::GetPathDirection(int arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CPathFinder*, int);
        return (org_ptr(0x14050c5b0L))(this, arg_0);
    };
    void CPathFinder::PopPathStack(int arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CPathFinder*, int);
        (org_ptr(0x14050c8a0L))(this, arg_0);
    };
    void CPathFinder::PushPathStack(int arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CPathFinder*, int);
        (org_ptr(0x14050c830L))(this, arg_0);
    };
    void CPathFinder::SetBackLineId(int arg_0, int arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CPathFinder*, int, int);
        (org_ptr(0x14050c5f0L))(this, arg_0, arg_1);
    };
    void CPathFinder::SetFrontLineId(int arg_0, int arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CPathFinder*, int, int);
        (org_ptr(0x14050c5d0L))(this, arg_0, arg_1);
    };
    void CPathFinder::SetPathDirection(int arg_0, int arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CPathFinder*, int, int);
        (org_ptr(0x14050c590L))(this, arg_0, arg_1);
    };
END_ATF_NAMESPACE
