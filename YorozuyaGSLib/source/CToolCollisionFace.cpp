#include <CToolCollisionFace.hpp>


START_ATF_NAMESPACE
    void CToolCollisionFace::DrawCollisionPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CToolCollisionFace*);
        (org_ptr(0x1404f1b50L))(this);
    };
    void CToolCollisionFace::DrawCollisionPoly()
    {
        using org_ptr = void (WINAPIV*)(struct CToolCollisionFace*);
        (org_ptr(0x1404f1d90L))(this);
    };
END_ATF_NAMESPACE
