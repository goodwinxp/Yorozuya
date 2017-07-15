#include <CFrameRate.hpp>


START_ATF_NAMESPACE
    CFrameRate::CFrameRate()
    {
        using org_ptr = void (WINAPIV*)(struct CFrameRate*);
        (org_ptr(0x140438d80L))(this);
    };
    void CFrameRate::ctor_CFrameRate()
    {
        using org_ptr = void (WINAPIV*)(struct CFrameRate*);
        (org_ptr(0x140438d80L))(this);
    };
    void CFrameRate::CalcSpeedPerFrame()
    {
        using org_ptr = void (WINAPIV*)(struct CFrameRate*);
        (org_ptr(0x140438dc0L))(this);
    };
    unsigned int CFrameRate::GetFPS()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CFrameRate*);
        return (org_ptr(0x140438f30L))(this);
    };
    float CFrameRate::GetSpeedPerFrame()
    {
        using org_ptr = float (WINAPIV*)(struct CFrameRate*);
        return (org_ptr(0x140438ef0L))(this);
    };
    CFrameRate::~CFrameRate()
    {
        using org_ptr = void (WINAPIV*)(struct CFrameRate*);
        (org_ptr(0x1402023e0L))(this);
    };
    void CFrameRate::dtor_CFrameRate()
    {
        using org_ptr = void (WINAPIV*)(struct CFrameRate*);
        (org_ptr(0x1402023e0L))(this);
    };
END_ATF_NAMESPACE
