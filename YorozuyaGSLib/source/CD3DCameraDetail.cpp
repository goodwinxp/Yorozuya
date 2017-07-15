#include <CD3DCameraDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CD3DCameractor_CD3DCamera1_ptr CD3DCameractor_CD3DCamera1_next(nullptr);
        Info::CD3DCameractor_CD3DCamera1_clbk CD3DCameractor_CD3DCamera1_user(nullptr);
        
        Info::CD3DCameraSetProjParams2_ptr CD3DCameraSetProjParams2_next(nullptr);
        Info::CD3DCameraSetProjParams2_clbk CD3DCameraSetProjParams2_user(nullptr);
        
        Info::CD3DCameraSetViewParams3_ptr CD3DCameraSetViewParams3_next(nullptr);
        Info::CD3DCameraSetViewParams3_clbk CD3DCameraSetViewParams3_user(nullptr);
        
        
        int64_t CD3DCameractor_CD3DCamera1_wrapper(struct CD3DCamera* _this)
        {
           return CD3DCameractor_CD3DCamera1_user(_this, CD3DCameractor_CD3DCamera1_next);
        };
        void CD3DCameraSetProjParams2_wrapper(struct CD3DCamera* _this, float arg_0, float arg_1, float arg_2, float arg_3)
        {
           CD3DCameraSetProjParams2_user(_this, arg_0, arg_1, arg_2, arg_3, CD3DCameraSetProjParams2_next);
        };
        void CD3DCameraSetViewParams3_wrapper(struct CD3DCamera* _this, struct D3DXVECTOR3* arg_0, struct D3DXVECTOR3* arg_1, struct D3DXVECTOR3* arg_2)
        {
           CD3DCameraSetViewParams3_user(_this, arg_0, arg_1, arg_2, CD3DCameraSetViewParams3_next);
        };
        
        ::std::array<hook_record, 3> CD3DCamera_functions = 
        {
            _hook_record {
                (LPVOID)0x14052c940L,
                (LPVOID *)&CD3DCameractor_CD3DCamera1_user,
                (LPVOID *)&CD3DCameractor_CD3DCamera1_next,
                (LPVOID)cast_pointer_function(CD3DCameractor_CD3DCamera1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CD3DCamera::*)())&CD3DCamera::ctor_CD3DCamera)
            },
            _hook_record {
                (LPVOID)0x14052c8f0L,
                (LPVOID *)&CD3DCameraSetProjParams2_user,
                (LPVOID *)&CD3DCameraSetProjParams2_next,
                (LPVOID)cast_pointer_function(CD3DCameraSetProjParams2_wrapper),
                (LPVOID)cast_pointer_function((void(CD3DCamera::*)(float, float, float, float))&CD3DCamera::SetProjParams)
            },
            _hook_record {
                (LPVOID)0x14052c7a0L,
                (LPVOID *)&CD3DCameraSetViewParams3_user,
                (LPVOID *)&CD3DCameraSetViewParams3_next,
                (LPVOID)cast_pointer_function(CD3DCameraSetViewParams3_wrapper),
                (LPVOID)cast_pointer_function((void(CD3DCamera::*)(struct D3DXVECTOR3*, struct D3DXVECTOR3*, struct D3DXVECTOR3*))&CD3DCamera::SetViewParams)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
