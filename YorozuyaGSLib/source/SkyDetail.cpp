#include <SkyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::SkyCreateVertexBuffer1_ptr SkyCreateVertexBuffer1_next(nullptr);
        Info::SkyCreateVertexBuffer1_clbk SkyCreateVertexBuffer1_user(nullptr);
        
        Info::SkyFillupVertexBuffer2_ptr SkyFillupVertexBuffer2_next(nullptr);
        Info::SkyFillupVertexBuffer2_clbk SkyFillupVertexBuffer2_user(nullptr);
        
        Info::SkyInvalidateSky3_ptr SkyInvalidateSky3_next(nullptr);
        Info::SkyInvalidateSky3_clbk SkyInvalidateSky3_user(nullptr);
        
        Info::SkyRender4_ptr SkyRender4_next(nullptr);
        Info::SkyRender4_clbk SkyRender4_user(nullptr);
        
        Info::SkyRestoreSky5_ptr SkyRestoreSky5_next(nullptr);
        Info::SkyRestoreSky5_clbk SkyRestoreSky5_user(nullptr);
        
        
        Info::Skyctor_Sky6_ptr Skyctor_Sky6_next(nullptr);
        Info::Skyctor_Sky6_clbk Skyctor_Sky6_user(nullptr);
        
        
        Info::Skydtor_Sky7_ptr Skydtor_Sky7_next(nullptr);
        Info::Skydtor_Sky7_clbk Skydtor_Sky7_user(nullptr);
        
        int32_t SkyCreateVertexBuffer1_wrapper(struct Sky* _this)
        {
           return SkyCreateVertexBuffer1_user(_this, SkyCreateVertexBuffer1_next);
        };
        int32_t SkyFillupVertexBuffer2_wrapper(struct Sky* _this)
        {
           return SkyFillupVertexBuffer2_user(_this, SkyFillupVertexBuffer2_next);
        };
        void SkyInvalidateSky3_wrapper(struct Sky* _this)
        {
           SkyInvalidateSky3_user(_this, SkyInvalidateSky3_next);
        };
        int32_t SkyRender4_wrapper(struct Sky* _this)
        {
           return SkyRender4_user(_this, SkyRender4_next);
        };
        void SkyRestoreSky5_wrapper(struct Sky* _this)
        {
           SkyRestoreSky5_user(_this, SkyRestoreSky5_next);
        };
        
        int64_t Skyctor_Sky6_wrapper(struct Sky* _this)
        {
           return Skyctor_Sky6_user(_this, Skyctor_Sky6_next);
        };
        
        int64_t Skydtor_Sky7_wrapper(struct Sky* _this)
        {
           return Skydtor_Sky7_user(_this, Skydtor_Sky7_next);
        };
        
        ::std::array<hook_record, 7> Sky_functions = 
        {
            _hook_record {
                (LPVOID)0x140522db0L,
                (LPVOID *)&SkyCreateVertexBuffer1_user,
                (LPVOID *)&SkyCreateVertexBuffer1_next,
                (LPVOID)cast_pointer_function(SkyCreateVertexBuffer1_wrapper),
                (LPVOID)cast_pointer_function((int32_t(Sky::*)())&Sky::CreateVertexBuffer)
            },
            _hook_record {
                (LPVOID)0x140522a00L,
                (LPVOID *)&SkyFillupVertexBuffer2_user,
                (LPVOID *)&SkyFillupVertexBuffer2_next,
                (LPVOID)cast_pointer_function(SkyFillupVertexBuffer2_wrapper),
                (LPVOID)cast_pointer_function((int32_t(Sky::*)())&Sky::FillupVertexBuffer)
            },
            _hook_record {
                (LPVOID)0x1405229b0L,
                (LPVOID *)&SkyInvalidateSky3_user,
                (LPVOID *)&SkyInvalidateSky3_next,
                (LPVOID)cast_pointer_function(SkyInvalidateSky3_wrapper),
                (LPVOID)cast_pointer_function((void(Sky::*)())&Sky::InvalidateSky)
            },
            _hook_record {
                (LPVOID)0x140522e90L,
                (LPVOID *)&SkyRender4_user,
                (LPVOID *)&SkyRender4_next,
                (LPVOID)cast_pointer_function(SkyRender4_wrapper),
                (LPVOID)cast_pointer_function((int32_t(Sky::*)())&Sky::Render)
            },
            _hook_record {
                (LPVOID)0x140522f80L,
                (LPVOID *)&SkyRestoreSky5_user,
                (LPVOID *)&SkyRestoreSky5_next,
                (LPVOID)cast_pointer_function(SkyRestoreSky5_wrapper),
                (LPVOID)cast_pointer_function((void(Sky::*)())&Sky::RestoreSky)
            },
            _hook_record {
                (LPVOID)0x140522970L,
                (LPVOID *)&Skyctor_Sky6_user,
                (LPVOID *)&Skyctor_Sky6_next,
                (LPVOID)cast_pointer_function(Skyctor_Sky6_wrapper),
                (LPVOID)cast_pointer_function((int64_t(Sky::*)())&Sky::ctor_Sky)
            },
            _hook_record {
                (LPVOID)0x1405229a0L,
                (LPVOID *)&Skydtor_Sky7_user,
                (LPVOID *)&Skydtor_Sky7_next,
                (LPVOID)cast_pointer_function(Skydtor_Sky7_wrapper),
                (LPVOID)cast_pointer_function((int64_t(Sky::*)())&Sky::dtor_Sky)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
