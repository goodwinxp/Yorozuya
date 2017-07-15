#include <UIDGenerator.hpp>


START_ATF_NAMESPACE
    uint64_t UIDGenerator::getuid(char n)
    {
        using org_ptr = uint64_t (WINAPIV*)(char);
        return (org_ptr(0x14043f130L))(n);
    };
    uint64_t UIDGenerator::getuid(char n, char ncode)
    {
        using org_ptr = uint64_t (WINAPIV*)(char, char);
        return (org_ptr(0x14043f200L))(n, ncode);
    };
    void UIDGenerator::tmuid(uint64_t uid, char* szBuf)
    {
        using org_ptr = void (WINAPIV*)(uint64_t, char*);
        (org_ptr(0x14043f2f0L))(uid, szBuf);
    };
    
END_ATF_NAMESPACE
