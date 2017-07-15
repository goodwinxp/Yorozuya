#include <CIndexBuffer.hpp>


START_ATF_NAMESPACE
    void CIndexBuffer::InitIndexBuffer(int arg_0, int arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CIndexBuffer*, int, int);
        (org_ptr(0x14050c370L))(this, arg_0, arg_1);
    };
    void CIndexBuffer::ReleaseIndexBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexBuffer*);
        (org_ptr(0x14050c420L))(this);
    };
    uint8_t* CIndexBuffer::VPLock(int arg_0, int arg_1, uint32_t arg_2)
    {
        using org_ptr = uint8_t* (WINAPIV*)(struct CIndexBuffer*, int, int, uint32_t);
        return (org_ptr(0x14050c460L))(this, arg_0, arg_1, arg_2);
    };
    void CIndexBuffer::VPUnLock()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexBuffer*);
        (org_ptr(0x14050c4e0L))(this);
    };
    CIndexBuffer::~CIndexBuffer()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CIndexBuffer*);
        (org_ptr(0x14050c530L))(this);
    };
    int64_t CIndexBuffer::dtor_CIndexBuffer()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CIndexBuffer*);
        return (org_ptr(0x14050c530L))(this);
    };
END_ATF_NAMESPACE
