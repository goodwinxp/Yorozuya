#include <D3DXVECTOR2Detail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::D3DXVECTOR2ctor_D3DXVECTOR22_ptr D3DXVECTOR2ctor_D3DXVECTOR22_next(nullptr);
        Info::D3DXVECTOR2ctor_D3DXVECTOR22_clbk D3DXVECTOR2ctor_D3DXVECTOR22_user(nullptr);
        
        
        void D3DXVECTOR2ctor_D3DXVECTOR22_wrapper(struct D3DXVECTOR2* _this)
        {
           D3DXVECTOR2ctor_D3DXVECTOR22_user(_this, D3DXVECTOR2ctor_D3DXVECTOR22_next);
        };
        
        ::std::array<hook_record, 1> D3DXVECTOR2_functions = 
        {
            _hook_record {
                (LPVOID)0x14012d1d0L,
                (LPVOID *)&D3DXVECTOR2ctor_D3DXVECTOR22_user,
                (LPVOID *)&D3DXVECTOR2ctor_D3DXVECTOR22_next,
                (LPVOID)cast_pointer_function(D3DXVECTOR2ctor_D3DXVECTOR22_wrapper),
                (LPVOID)cast_pointer_function((void(D3DXVECTOR2::*)())&D3DXVECTOR2::ctor_D3DXVECTOR2)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
