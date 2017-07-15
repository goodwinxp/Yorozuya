#include <CVertexBuffer.hpp>


START_ATF_NAMESPACE
    CVertexBuffer::CVertexBuffer()
    {
        using org_ptr = void (WINAPIV*)(CVertexBuffer*);
        (org_ptr(0x14050c180L))(this);
    };
    void CVertexBuffer::ctor_CVertexBuffer()
    {
        using org_ptr = void (WINAPIV*)(CVertexBuffer*);
        (org_ptr(0x14050c180L))(this);
    };
    void CVertexBuffer::InitVertexBuffer(int arg_0, int arg_1, uint32_t arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CVertexBuffer*, int, int, uint32_t);
        (org_ptr(0x14050c1a0L))(this, arg_0, arg_1, arg_2);
    };
    void CVertexBuffer::ReleaseVertexBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CVertexBuffer*);
        (org_ptr(0x14050c280L))(this);
    };
    uint8_t* CVertexBuffer::VPLock(int arg_0, int arg_1, uint32_t arg_2)
    {
        using org_ptr = uint8_t* (WINAPIV*)(struct CVertexBuffer*, int, int, uint32_t);
        return (org_ptr(0x14050c2c0L))(this, arg_0, arg_1, arg_2);
    };
    void CVertexBuffer::VPUnLock()
    {
        using org_ptr = void (WINAPIV*)(struct CVertexBuffer*);
        (org_ptr(0x14050c340L))(this);
    };
    CVertexBuffer::~CVertexBuffer()
    {
        using org_ptr = void (WINAPIV*)(CVertexBuffer*);
        (org_ptr(0x14050c190L))(this);
    };
    void CVertexBuffer::dtor_CVertexBuffer()
    {
        using org_ptr = void (WINAPIV*)(CVertexBuffer*);
        (org_ptr(0x14050c190L))(this);
    };
END_ATF_NAMESPACE
