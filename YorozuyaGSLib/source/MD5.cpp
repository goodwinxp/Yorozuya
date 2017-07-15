#include <MD5.hpp>


START_ATF_NAMESPACE
    void MD5::Decode(unsigned int* output, char* input, unsigned int size)
    {
        using org_ptr = void (WINAPIV*)(struct MD5*, unsigned int*, char*, unsigned int);
        (org_ptr(0x1404423a0L))(this, output, input, size);
    };
    void MD5::Encode(char* output, unsigned int* input, unsigned int size)
    {
        using org_ptr = void (WINAPIV*)(struct MD5*, char*, unsigned int*, unsigned int);
        (org_ptr(0x1404422a0L))(this, output, input, size);
    };
    void MD5::Finalize(char* digest)
    {
        using org_ptr = void (WINAPIV*)(struct MD5*, char*);
        (org_ptr(0x140443560L))(this, digest);
    };
    void MD5::Init()
    {
        using org_ptr = void (WINAPIV*)(struct MD5*);
        (org_ptr(0x140442210L))(this);
    };
    MD5::MD5()
    {
        using org_ptr = void (WINAPIV*)(struct MD5*);
        (org_ptr(0x1404421c0L))(this);
    };
    void MD5::ctor_MD5()
    {
        using org_ptr = void (WINAPIV*)(struct MD5*);
        (org_ptr(0x1404421c0L))(this);
    };
    void MD5::Transform(char* block)
    {
        using org_ptr = void (WINAPIV*)(struct MD5*, char*);
        (org_ptr(0x140442600L))(this, block);
    };
    void MD5::Update(void* inputBuffer, unsigned int size)
    {
        using org_ptr = void (WINAPIV*)(struct MD5*, void*, unsigned int);
        (org_ptr(0x140442470L))(this, inputBuffer, size);
    };
    MD5::~MD5()
    {
        using org_ptr = void (WINAPIV*)(struct MD5*);
        (org_ptr(0x140442200L))(this);
    };
    void MD5::dtor_MD5()
    {
        using org_ptr = void (WINAPIV*)(struct MD5*);
        (org_ptr(0x140442200L))(this);
    };
END_ATF_NAMESPACE
