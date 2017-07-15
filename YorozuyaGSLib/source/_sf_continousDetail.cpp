#include <_sf_continousDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_sf_continousGetSFContCurTime2_ptr _sf_continousGetSFContCurTime2_next(nullptr);
        Info::_sf_continousGetSFContCurTime2_clbk _sf_continousGetSFContCurTime2_user(nullptr);
        
        
        Info::_sf_continousctor__sf_continous4_ptr _sf_continousctor__sf_continous4_next(nullptr);
        Info::_sf_continousctor__sf_continous4_clbk _sf_continousctor__sf_continous4_user(nullptr);
        
        unsigned int _sf_continousGetSFContCurTime2_wrapper()
        {
           return _sf_continousGetSFContCurTime2_user(_sf_continousGetSFContCurTime2_next);
        };
        
        void _sf_continousctor__sf_continous4_wrapper(struct _sf_continous* _this)
        {
           _sf_continousctor__sf_continous4_user(_this, _sf_continousctor__sf_continous4_next);
        };
        
        ::std::array<hook_record, 2> _sf_continous_functions = 
        {
            _hook_record {
                (LPVOID)0x140034970L,
                (LPVOID *)&_sf_continousGetSFContCurTime2_user,
                (LPVOID *)&_sf_continousGetSFContCurTime2_next,
                (LPVOID)cast_pointer_function(_sf_continousGetSFContCurTime2_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)())&_sf_continous::GetSFContCurTime)
            },
            _hook_record {
                (LPVOID)0x14017a3f0L,
                (LPVOID *)&_sf_continousctor__sf_continous4_user,
                (LPVOID *)&_sf_continousctor__sf_continous4_next,
                (LPVOID)cast_pointer_function(_sf_continousctor__sf_continous4_wrapper),
                (LPVOID)cast_pointer_function((void(_sf_continous::*)())&_sf_continous::ctor__sf_continous)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
