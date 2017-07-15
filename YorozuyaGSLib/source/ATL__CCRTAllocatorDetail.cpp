#include <ATL__CCRTAllocatorDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            Info::ATL__CCRTAllocatorAllocate2_ptr ATL__CCRTAllocatorAllocate2_next(nullptr);
            Info::ATL__CCRTAllocatorAllocate2_clbk ATL__CCRTAllocatorAllocate2_user(nullptr);
            
            Info::ATL__CCRTAllocatorFree4_ptr ATL__CCRTAllocatorFree4_next(nullptr);
            Info::ATL__CCRTAllocatorFree4_clbk ATL__CCRTAllocatorFree4_user(nullptr);
            
            void* ATL__CCRTAllocatorAllocate2_wrapper(uint64_t nBytes)
            {
               return ATL__CCRTAllocatorAllocate2_user(nBytes, ATL__CCRTAllocatorAllocate2_next);
            };
            void ATL__CCRTAllocatorFree4_wrapper(void* p)
            {
               ATL__CCRTAllocatorFree4_user(p, ATL__CCRTAllocatorFree4_next);
            };
            
            ::std::array<hook_record, 2> CCRTAllocator_functions = 
            {
                _hook_record {
                    (LPVOID)0x140026cd0L,
                    (LPVOID *)&ATL__CCRTAllocatorAllocate2_user,
                    (LPVOID *)&ATL__CCRTAllocatorAllocate2_next,
                    (LPVOID)cast_pointer_function(ATL__CCRTAllocatorAllocate2_wrapper),
                    (LPVOID)cast_pointer_function((void*(*)(uint64_t))&ATL::CCRTAllocator::Allocate)
                },
                _hook_record {
                    (LPVOID)0x140026da0L,
                    (LPVOID *)&ATL__CCRTAllocatorFree4_user,
                    (LPVOID *)&ATL__CCRTAllocatorFree4_next,
                    (LPVOID)cast_pointer_function(ATL__CCRTAllocatorFree4_wrapper),
                    (LPVOID)cast_pointer_function((void(*)(void*))&ATL::CCRTAllocator::Free)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
