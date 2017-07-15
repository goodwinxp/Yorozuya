#include <CPlayMP3Detail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPlayMP3IsLoadedMP31_ptr CPlayMP3IsLoadedMP31_next(nullptr);
        Info::CPlayMP3IsLoadedMP31_clbk CPlayMP3IsLoadedMP31_user(nullptr);
        
        int64_t CPlayMP3IsLoadedMP31_wrapper(struct CPlayMP3* _this)
        {
           return CPlayMP3IsLoadedMP31_user(_this, CPlayMP3IsLoadedMP31_next);
        };
        
        ::std::array<hook_record, 1> CPlayMP3_functions = 
        {
            _hook_record {
                (LPVOID)0x14050f720L,
                (LPVOID *)&CPlayMP3IsLoadedMP31_user,
                (LPVOID *)&CPlayMP3IsLoadedMP31_next,
                (LPVOID)cast_pointer_function(CPlayMP3IsLoadedMP31_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CPlayMP3::*)())&CPlayMP3::IsLoadedMP3)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
