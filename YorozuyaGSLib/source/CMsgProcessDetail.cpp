#include <CMsgProcessDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMsgProcessctor_CMsgProcess2_ptr CMsgProcessctor_CMsgProcess2_next(nullptr);
        Info::CMsgProcessctor_CMsgProcess2_clbk CMsgProcessctor_CMsgProcess2_user(nullptr);
        
        
        Info::CMsgProcessctor_CMsgProcess4_ptr CMsgProcessctor_CMsgProcess4_next(nullptr);
        Info::CMsgProcessctor_CMsgProcess4_clbk CMsgProcessctor_CMsgProcess4_user(nullptr);
        
        Info::CMsgProcessProcessMessage6_ptr CMsgProcessProcessMessage6_next(nullptr);
        Info::CMsgProcessProcessMessage6_clbk CMsgProcessProcessMessage6_user(nullptr);
        
        
        Info::CMsgProcessdtor_CMsgProcess11_ptr CMsgProcessdtor_CMsgProcess11_next(nullptr);
        Info::CMsgProcessdtor_CMsgProcess11_clbk CMsgProcessdtor_CMsgProcess11_user(nullptr);
        
        
        void CMsgProcessctor_CMsgProcess2_wrapper(struct CMsgProcess* _this, int nObjNum)
        {
           CMsgProcessctor_CMsgProcess2_user(_this, nObjNum, CMsgProcessctor_CMsgProcess2_next);
        };
        
        void CMsgProcessctor_CMsgProcess4_wrapper(struct CMsgProcess* _this)
        {
           CMsgProcessctor_CMsgProcess4_user(_this, CMsgProcessctor_CMsgProcess4_next);
        };
        void CMsgProcessProcessMessage6_wrapper(struct CMsgProcess* _this, struct _message* pMsg)
        {
           CMsgProcessProcessMessage6_user(_this, pMsg, CMsgProcessProcessMessage6_next);
        };
        
        void CMsgProcessdtor_CMsgProcess11_wrapper(struct CMsgProcess* _this)
        {
           CMsgProcessdtor_CMsgProcess11_user(_this, CMsgProcessdtor_CMsgProcess11_next);
        };
        
        ::std::array<hook_record, 4> CMsgProcess_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bfed0L,
                (LPVOID *)&CMsgProcessctor_CMsgProcess2_user,
                (LPVOID *)&CMsgProcessctor_CMsgProcess2_next,
                (LPVOID)cast_pointer_function(CMsgProcessctor_CMsgProcess2_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgProcess::*)(int))&CMsgProcess::ctor_CMsgProcess)
            },
            _hook_record {
                (LPVOID)0x1401bff30L,
                (LPVOID *)&CMsgProcessctor_CMsgProcess4_user,
                (LPVOID *)&CMsgProcessctor_CMsgProcess4_next,
                (LPVOID)cast_pointer_function(CMsgProcessctor_CMsgProcess4_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgProcess::*)())&CMsgProcess::ctor_CMsgProcess)
            },
            _hook_record {
                (LPVOID)0x1401bffd0L,
                (LPVOID *)&CMsgProcessProcessMessage6_user,
                (LPVOID *)&CMsgProcessProcessMessage6_next,
                (LPVOID)cast_pointer_function(CMsgProcessProcessMessage6_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgProcess::*)(struct _message*))&CMsgProcess::ProcessMessage)
            },
            _hook_record {
                (LPVOID)0x1401bff80L,
                (LPVOID *)&CMsgProcessdtor_CMsgProcess11_user,
                (LPVOID *)&CMsgProcessdtor_CMsgProcess11_next,
                (LPVOID)cast_pointer_function(CMsgProcessdtor_CMsgProcess11_wrapper),
                (LPVOID)cast_pointer_function((void(CMsgProcess::*)())&CMsgProcess::dtor_CMsgProcess)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
