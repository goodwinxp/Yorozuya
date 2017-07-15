#include <CD3DArcBall.hpp>


START_ATF_NAMESPACE
    CD3DArcBall::CD3DArcBall()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DArcBall*);
        (org_ptr(0x14052c210L))(this);
    };
    int64_t CD3DArcBall::ctor_CD3DArcBall()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DArcBall*);
        return (org_ptr(0x14052c210L))(this);
    };
    int64_t CD3DArcBall::HandleMouseMessages(HWND arg_0, unsigned int arg_1, uint64_t arg_2, int64_t arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DArcBall*, HWND, unsigned int, uint64_t, int64_t);
        return (org_ptr(0x14052c510L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    struct D3DXVECTOR3* CD3DArcBall::ScreenToVector(short retstr, struct D3DXVECTOR3* arg_0, int arg_1)
    {
        using org_ptr = struct D3DXVECTOR3* (WINAPIV*)(struct CD3DArcBall*, short, struct D3DXVECTOR3*, int);
        return (org_ptr(0x14052c3e0L))(this, retstr, arg_0, arg_1);
    };
    void CD3DArcBall::SetRadius(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CD3DArcBall*, float);
        (org_ptr(0x14052c500L))(this, arg_0);
    };
    void CD3DArcBall::SetWindow(int arg_0, int arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CD3DArcBall*, int, int, float);
        (org_ptr(0x14052c3d0L))(this, arg_0, arg_1, arg_2);
    };
END_ATF_NAMESPACE
