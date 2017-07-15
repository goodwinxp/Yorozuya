#include <CD3DApplication.hpp>


START_ATF_NAMESPACE
    int32_t CD3DApplication::AdjustWindowForChange()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523fe0L))(this);
    };
    int32_t CD3DApplication::BuildDeviceList()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140525340L))(this);
    };
    CD3DApplication::CD3DApplication()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DApplication*);
        (org_ptr(0x140523950L))(this);
    };
    int64_t CD3DApplication::ctor_CD3DApplication()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523950L))(this);
    };
    void CD3DApplication::Cleanup3DEnvironment()
    {
        using org_ptr = void (WINAPIV*)(struct CD3DApplication*);
        (org_ptr(0x140524d10L))(this);
    };
    int32_t CD3DApplication::ConfirmDevice(struct _D3DCAPS8* arg_0, uint32_t arg_1, _D3DFORMAT arg_2)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*, struct _D3DCAPS8*, uint32_t, _D3DFORMAT);
        return (org_ptr(0x140523a30L))(this, arg_0, arg_1, arg_2);
    };
    int32_t CD3DApplication::Create(HINSTANCE arg_0)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*, HINSTANCE);
        return (org_ptr(0x140523af0L))(this, arg_0);
    };
    int32_t CD3DApplication::CreateDirect3D()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140526270L))(this);
    };
    int32_t CD3DApplication::DeleteDeviceObjects()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523aa0L))(this);
    };
    int32_t CD3DApplication::DisplayErrorMsg(int32_t arg_0, uint32_t arg_1)
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*, int32_t, uint32_t);
        return (org_ptr(0x140524d80L))(this, arg_0, arg_1);
    };
    int32_t CD3DApplication::EndLoop()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x1405252f0L))(this);
    };
    int32_t CD3DApplication::FinalCleanup()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523ab0L))(this);
    };
    int64_t CD3DApplication::FindDepthStencilFormat(unsigned int arg_0, _D3DDEVTYPE arg_1, _D3DFORMAT arg_2, _D3DFORMAT* arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DApplication*, unsigned int, _D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT*);
        return (org_ptr(0x140523b40L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    int32_t CD3DApplication::ForceWindowed()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140526040L))(this);
    };
    int32_t CD3DApplication::FrameMove()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523a70L))(this);
    };
    int32_t CD3DApplication::InitDeviceObjects()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523a50L))(this);
    };
    int32_t CD3DApplication::Initialize3DEnvironment()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140525a90L))(this);
    };
    int32_t CD3DApplication::InvalidateDeviceObjects()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523a90L))(this);
    };
    int64_t CD3DApplication::MsgProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DApplication*, HWND, UINT, WPARAM, LPARAM);
        return (org_ptr(0x1405265e0L))(this, hWnd, Msg, wParam, lParam);
    };
    int32_t CD3DApplication::OneTimeSceneInit()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523a40L))(this);
    };
    void CD3DApplication::Pause(int arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CD3DApplication*, int);
        (org_ptr(0x140524c90L))(this, arg_0);
    };
    int32_t CD3DApplication::PrepareLoop()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140525260L))(this);
    };
    int32_t CD3DApplication::Release()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140525330L))(this);
    };
    int32_t CD3DApplication::Render()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523a80L))(this);
    };
    int32_t CD3DApplication::Render3DEnvironment()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140524870L))(this);
    };
    int32_t CD3DApplication::Resize3DEnvironment()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523eb0L))(this);
    };
    int32_t CD3DApplication::RestoreDeviceObjects()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140523a60L))(this);
    };
    int64_t CD3DApplication::Run()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140526170L))(this);
    };
    int64_t CD3DApplication::SelectDeviceProc(HWND__* arg_0, unsigned int arg_1, uint64_t arg_2, int64_t arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(HWND__*, unsigned int, uint64_t, int64_t);
        return (org_ptr(0x140524060L))(arg_0, arg_1, arg_2, arg_3);
    };
    int32_t CD3DApplication::ToggleFullscreen()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x140526300L))(this);
    };
    int32_t CD3DApplication::UserSelectNewDevice()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        return (org_ptr(0x1405264c0L))(this);
    };
END_ATF_NAMESPACE
