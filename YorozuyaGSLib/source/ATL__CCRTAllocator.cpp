#include <ATL__CCRTAllocator.hpp>


START_ATF_NAMESPACE
    void* ATL::CCRTAllocator::Allocate(uint64_t nBytes)
    {
        using org_ptr = void* (WINAPIV*)(uint64_t);
        return (org_ptr(0x140026cd0L))(nBytes);
    };
    void ATL::CCRTAllocator::Free(void* p)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140026da0L))(p);
    };
END_ATF_NAMESPACE
