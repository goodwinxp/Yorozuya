#include <CIndexList.hpp>


START_ATF_NAMESPACE
    CIndexList::CIndexList()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList*);
        (org_ptr(0x1404392f0L))(this);
    };
    void CIndexList::ctor_CIndexList()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList*);
        (org_ptr(0x1404392f0L))(this);
    };
    bool CIndexList::CopyFront(unsigned int* pdwOutIndex, char* pInfoData)
    {
        using org_ptr = bool (WINAPIV*)(struct CIndexList*, unsigned int*, char*);
        return (org_ptr(0x140439be0L))(this, pdwOutIndex, pInfoData);
    };
    bool CIndexList::FindNode(unsigned int dwIndex, char* pInfoData)
    {
        using org_ptr = bool (WINAPIV*)(struct CIndexList*, unsigned int, char*);
        return (org_ptr(0x140439e60L))(this, dwIndex, pInfoData);
    };
    struct CIndexList::_index_node* CIndexList::GetAllNode(unsigned int* pdwMaxNodeNum)
    {
        using org_ptr = struct CIndexList::_index_node* (WINAPIV*)(struct CIndexList*, unsigned int*);
        return (org_ptr(0x14043a120L))(this, pdwMaxNodeNum);
    };
    int CIndexList::GetSize()
    {
        using org_ptr = int (WINAPIV*)(struct CIndexList*);
        return (org_ptr(0x14043a100L))(this);
    };
    bool CIndexList::IsInList(unsigned int dwIndex, char* pInfoData)
    {
        using org_ptr = bool (WINAPIV*)(struct CIndexList*, unsigned int, char*);
        return (org_ptr(0x14043a010L))(this, dwIndex, pInfoData);
    };
    bool CIndexList::IsSetting()
    {
        using org_ptr = bool (WINAPIV*)(struct CIndexList*);
        return (org_ptr(0x1404399c0L))(this);
    };
    bool CIndexList::PopNode_Front(unsigned int* pdwOutIndex, char* pInfoData)
    {
        using org_ptr = bool (WINAPIV*)(struct CIndexList*, unsigned int*, char*);
        return (org_ptr(0x140439a40L))(this, pdwOutIndex, pInfoData);
    };
    bool CIndexList::PushNode_Back(unsigned int dwIndex, char* pInfoData)
    {
        using org_ptr = bool (WINAPIV*)(struct CIndexList*, unsigned int, char*);
        return (org_ptr(0x140439cd0L))(this, dwIndex, pInfoData);
    };
    void CIndexList::ResetList()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList*);
        (org_ptr(0x1404399f0L))(this);
    };
    bool CIndexList::SetList(unsigned int dwMaxBufNum, unsigned int nInfoSize, bool bUseMultiThread)
    {
        using org_ptr = bool (WINAPIV*)(struct CIndexList*, unsigned int, unsigned int, bool);
        return (org_ptr(0x140439720L))(this, dwMaxBufNum, nInfoSize, bUseMultiThread);
    };
    CIndexList::~CIndexList()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList*);
        (org_ptr(0x140439530L))(this);
    };
    void CIndexList::dtor_CIndexList()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList*);
        (org_ptr(0x140439530L))(this);
    };
    bool CIndexList::_index_node::AllocInfo(unsigned int nSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CIndexList::_index_node*, unsigned int);
        return (org_ptr(0x14043ab10L))(this, nSize);
    };
    CIndexList::_index_node::_index_node()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList::_index_node*);
        (org_ptr(0x14043a910L))(this);
    };
    void CIndexList::_index_node::ctor__index_node()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList::_index_node*);
        (org_ptr(0x14043a910L))(this);
    };
    CIndexList::_index_node::~_index_node()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList::_index_node*);
        (org_ptr(0x14043a970L))(this);
    };
    void CIndexList::_index_node::dtor__index_node()
    {
        using org_ptr = void (WINAPIV*)(struct CIndexList::_index_node*);
        (org_ptr(0x14043a970L))(this);
    };
END_ATF_NAMESPACE
