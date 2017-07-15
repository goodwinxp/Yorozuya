#include <CObject.hpp>


START_ATF_NAMESPACE
    int64_t CObject::IsKindOf(struct CRuntimeClass* arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CObject*, struct CRuntimeClass*);
        return (org_ptr(0x1404dc210L))(this, arg_0);
    };
    void CObject::Serialize(struct CArchive* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CObject*, struct CArchive*);
        (org_ptr(0x1404dbb8cL))(this, arg_0);
    };
END_ATF_NAMESPACE
