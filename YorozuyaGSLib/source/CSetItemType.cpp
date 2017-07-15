#include <CSetItemType.hpp>


START_ATF_NAMESPACE
    CSetItemType::CSetItemType()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemType*);
        (org_ptr(0x1402e1cb0L))(this);
    };
    void CSetItemType::ctor_CSetItemType()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemType*);
        (org_ptr(0x1402e1cb0L))(this);
    };
    void CSetItemType::Class_Init()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemType*);
        (org_ptr(0x1402e1fc0L))(this);
    };
    int CSetItemType::GetEffectTypeCount()
    {
        using org_ptr = int (WINAPIV*)(struct CSetItemType*);
        return (org_ptr(0x1402e2090L))(this);
    };
    struct si_interpret* CSetItemType::Getsi_interpret(int set_pos)
    {
        using org_ptr = struct si_interpret* (WINAPIV*)(struct CSetItemType*, int);
        return (org_ptr(0x1402e1f70L))(this, set_pos);
    };
    bool CSetItemType::SetItemType_Init(struct CRecordData* prd)
    {
        using org_ptr = bool (WINAPIV*)(struct CSetItemType*, struct CRecordData*);
        return (org_ptr(0x1402e1d40L))(this, prd);
    };
    bool CSetItemType::SetItemType_UnInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CSetItemType*);
        return (org_ptr(0x1402e1f30L))(this);
    };
    CSetItemType::~CSetItemType()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemType*);
        (org_ptr(0x1402e1d00L))(this);
    };
    void CSetItemType::dtor_CSetItemType()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemType*);
        (org_ptr(0x1402e1d00L))(this);
    };
END_ATF_NAMESPACE
