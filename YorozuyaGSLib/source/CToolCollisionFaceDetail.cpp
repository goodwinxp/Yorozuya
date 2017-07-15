#include <CToolCollisionFaceDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CToolCollisionFaceDrawCollisionPoint1_ptr CToolCollisionFaceDrawCollisionPoint1_next(nullptr);
        Info::CToolCollisionFaceDrawCollisionPoint1_clbk CToolCollisionFaceDrawCollisionPoint1_user(nullptr);
        
        Info::CToolCollisionFaceDrawCollisionPoly2_ptr CToolCollisionFaceDrawCollisionPoly2_next(nullptr);
        Info::CToolCollisionFaceDrawCollisionPoly2_clbk CToolCollisionFaceDrawCollisionPoly2_user(nullptr);
        
        void CToolCollisionFaceDrawCollisionPoint1_wrapper(struct CToolCollisionFace* _this)
        {
           CToolCollisionFaceDrawCollisionPoint1_user(_this, CToolCollisionFaceDrawCollisionPoint1_next);
        };
        void CToolCollisionFaceDrawCollisionPoly2_wrapper(struct CToolCollisionFace* _this)
        {
           CToolCollisionFaceDrawCollisionPoly2_user(_this, CToolCollisionFaceDrawCollisionPoly2_next);
        };
        
        ::std::array<hook_record, 2> CToolCollisionFace_functions = 
        {
            _hook_record {
                (LPVOID)0x1404f1b50L,
                (LPVOID *)&CToolCollisionFaceDrawCollisionPoint1_user,
                (LPVOID *)&CToolCollisionFaceDrawCollisionPoint1_next,
                (LPVOID)cast_pointer_function(CToolCollisionFaceDrawCollisionPoint1_wrapper),
                (LPVOID)cast_pointer_function((void(CToolCollisionFace::*)())&CToolCollisionFace::DrawCollisionPoint)
            },
            _hook_record {
                (LPVOID)0x1404f1d90L,
                (LPVOID *)&CToolCollisionFaceDrawCollisionPoly2_user,
                (LPVOID *)&CToolCollisionFaceDrawCollisionPoly2_next,
                (LPVOID)cast_pointer_function(CToolCollisionFaceDrawCollisionPoly2_wrapper),
                (LPVOID)cast_pointer_function((void(CToolCollisionFace::*)())&CToolCollisionFace::DrawCollisionPoly)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
