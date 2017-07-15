#include <CNetIndexList.hpp>


START_ATF_NAMESPACE
    CNetIndexList::CNetIndexList()
    {
        using org_ptr = void (WINAPIV*)(struct CNetIndexList*);
        (org_ptr(0x1400730a0L))(this);
    };
    void CNetIndexList::ctor_CNetIndexList()
    {
        using org_ptr = void (WINAPIV*)(struct CNetIndexList*);
        (org_ptr(0x1400730a0L))(this);
    };
    bool CNetIndexList::CopyFront(unsigned int* pdwOutIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetIndexList*, unsigned int*);
        return (org_ptr(0x14007dfb0L))(this, pdwOutIndex);
    };
    int CNetIndexList::CopyIndexList(unsigned int* pdwList, int nMax)
    {
        using org_ptr = int (WINAPIV*)(struct CNetIndexList*, unsigned int*, int);
        return (org_ptr(0x140120c80L))(this, pdwList, nMax);
    };
    struct CNetIndexList::_index_node* CNetIndexList::FindNode(unsigned int dwIndex)
    {
        using org_ptr = struct CNetIndexList::_index_node* (WINAPIV*)(struct CNetIndexList*, unsigned int);
        return (org_ptr(0x140090730L))(this, dwIndex);
    };
    bool CNetIndexList::IsInList(unsigned int dwIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetIndexList*, unsigned int);
        return (org_ptr(0x140078b40L))(this, dwIndex);
    };
    bool CNetIndexList::PopNode_Back(unsigned int* pdwOutIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetIndexList*, unsigned int*);
        return (org_ptr(0x1402a28a0L))(this, pdwOutIndex);
    };
    bool CNetIndexList::PopNode_Front(unsigned int* pdwOutIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetIndexList*, unsigned int*);
        return (org_ptr(0x140073770L))(this, pdwOutIndex);
    };
    bool CNetIndexList::PushNode_Back(unsigned int dwIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetIndexList*, unsigned int);
        return (org_ptr(0x14007a700L))(this, dwIndex);
    };
    bool CNetIndexList::PushNode_Front(unsigned int dwIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetIndexList*, unsigned int);
        return (org_ptr(0x14024fe00L))(this, dwIndex);
    };
    void CNetIndexList::ResetList()
    {
        using org_ptr = void (WINAPIV*)(struct CNetIndexList*);
        (org_ptr(0x140073700L))(this);
    };
    bool CNetIndexList::SetList(unsigned int dwMaxBufNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetIndexList*, unsigned int);
        return (org_ptr(0x140073390L))(this, dwMaxBufNum);
    };
    int CNetIndexList::size()
    {
        using org_ptr = int (WINAPIV*)(struct CNetIndexList*);
        return (org_ptr(0x140028f70L))(this);
    };
    CNetIndexList::~CNetIndexList()
    {
        using org_ptr = void (WINAPIV*)(struct CNetIndexList*);
        (org_ptr(0x1400732b0L))(this);
    };
    void CNetIndexList::dtor_CNetIndexList()
    {
        using org_ptr = void (WINAPIV*)(struct CNetIndexList*);
        (org_ptr(0x1400732b0L))(this);
    };
    CNetIndexList::_index_node::_index_node()
    {
        using org_ptr = void (WINAPIV*)(struct CNetIndexList::_index_node*);
        (org_ptr(0x140073280L))(this);
    };
    void CNetIndexList::_index_node::ctor__index_node()
    {
        using org_ptr = void (WINAPIV*)(struct CNetIndexList::_index_node*);
        (org_ptr(0x140073280L))(this);
    };
END_ATF_NAMESPACE
