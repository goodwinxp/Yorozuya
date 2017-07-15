#include <CNetIndexListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNetIndexListctor_CNetIndexList2_ptr CNetIndexListctor_CNetIndexList2_next(nullptr);
        Info::CNetIndexListctor_CNetIndexList2_clbk CNetIndexListctor_CNetIndexList2_user(nullptr);
        
        Info::CNetIndexListCopyFront4_ptr CNetIndexListCopyFront4_next(nullptr);
        Info::CNetIndexListCopyFront4_clbk CNetIndexListCopyFront4_user(nullptr);
        
        Info::CNetIndexListCopyIndexList6_ptr CNetIndexListCopyIndexList6_next(nullptr);
        Info::CNetIndexListCopyIndexList6_clbk CNetIndexListCopyIndexList6_user(nullptr);
        
        Info::CNetIndexListFindNode8_ptr CNetIndexListFindNode8_next(nullptr);
        Info::CNetIndexListFindNode8_clbk CNetIndexListFindNode8_user(nullptr);
        
        Info::CNetIndexListIsInList10_ptr CNetIndexListIsInList10_next(nullptr);
        Info::CNetIndexListIsInList10_clbk CNetIndexListIsInList10_user(nullptr);
        
        Info::CNetIndexListPopNode_Back12_ptr CNetIndexListPopNode_Back12_next(nullptr);
        Info::CNetIndexListPopNode_Back12_clbk CNetIndexListPopNode_Back12_user(nullptr);
        
        Info::CNetIndexListPopNode_Front14_ptr CNetIndexListPopNode_Front14_next(nullptr);
        Info::CNetIndexListPopNode_Front14_clbk CNetIndexListPopNode_Front14_user(nullptr);
        
        Info::CNetIndexListPushNode_Back16_ptr CNetIndexListPushNode_Back16_next(nullptr);
        Info::CNetIndexListPushNode_Back16_clbk CNetIndexListPushNode_Back16_user(nullptr);
        
        Info::CNetIndexListPushNode_Front18_ptr CNetIndexListPushNode_Front18_next(nullptr);
        Info::CNetIndexListPushNode_Front18_clbk CNetIndexListPushNode_Front18_user(nullptr);
        
        Info::CNetIndexListResetList20_ptr CNetIndexListResetList20_next(nullptr);
        Info::CNetIndexListResetList20_clbk CNetIndexListResetList20_user(nullptr);
        
        Info::CNetIndexListSetList22_ptr CNetIndexListSetList22_next(nullptr);
        Info::CNetIndexListSetList22_clbk CNetIndexListSetList22_user(nullptr);
        
        Info::CNetIndexListsize26_ptr CNetIndexListsize26_next(nullptr);
        Info::CNetIndexListsize26_clbk CNetIndexListsize26_user(nullptr);
        
        
        Info::CNetIndexListdtor_CNetIndexList28_ptr CNetIndexListdtor_CNetIndexList28_next(nullptr);
        Info::CNetIndexListdtor_CNetIndexList28_clbk CNetIndexListdtor_CNetIndexList28_user(nullptr);
        
        
        void CNetIndexListctor_CNetIndexList2_wrapper(struct CNetIndexList* _this)
        {
           CNetIndexListctor_CNetIndexList2_user(_this, CNetIndexListctor_CNetIndexList2_next);
        };
        bool CNetIndexListCopyFront4_wrapper(struct CNetIndexList* _this, unsigned int* pdwOutIndex)
        {
           return CNetIndexListCopyFront4_user(_this, pdwOutIndex, CNetIndexListCopyFront4_next);
        };
        int CNetIndexListCopyIndexList6_wrapper(struct CNetIndexList* _this, unsigned int* pdwList, int nMax)
        {
           return CNetIndexListCopyIndexList6_user(_this, pdwList, nMax, CNetIndexListCopyIndexList6_next);
        };
        struct CNetIndexList::_index_node* CNetIndexListFindNode8_wrapper(struct CNetIndexList* _this, unsigned int dwIndex)
        {
           return CNetIndexListFindNode8_user(_this, dwIndex, CNetIndexListFindNode8_next);
        };
        bool CNetIndexListIsInList10_wrapper(struct CNetIndexList* _this, unsigned int dwIndex)
        {
           return CNetIndexListIsInList10_user(_this, dwIndex, CNetIndexListIsInList10_next);
        };
        bool CNetIndexListPopNode_Back12_wrapper(struct CNetIndexList* _this, unsigned int* pdwOutIndex)
        {
           return CNetIndexListPopNode_Back12_user(_this, pdwOutIndex, CNetIndexListPopNode_Back12_next);
        };
        bool CNetIndexListPopNode_Front14_wrapper(struct CNetIndexList* _this, unsigned int* pdwOutIndex)
        {
           return CNetIndexListPopNode_Front14_user(_this, pdwOutIndex, CNetIndexListPopNode_Front14_next);
        };
        bool CNetIndexListPushNode_Back16_wrapper(struct CNetIndexList* _this, unsigned int dwIndex)
        {
           return CNetIndexListPushNode_Back16_user(_this, dwIndex, CNetIndexListPushNode_Back16_next);
        };
        bool CNetIndexListPushNode_Front18_wrapper(struct CNetIndexList* _this, unsigned int dwIndex)
        {
           return CNetIndexListPushNode_Front18_user(_this, dwIndex, CNetIndexListPushNode_Front18_next);
        };
        void CNetIndexListResetList20_wrapper(struct CNetIndexList* _this)
        {
           CNetIndexListResetList20_user(_this, CNetIndexListResetList20_next);
        };
        bool CNetIndexListSetList22_wrapper(struct CNetIndexList* _this, unsigned int dwMaxBufNum)
        {
           return CNetIndexListSetList22_user(_this, dwMaxBufNum, CNetIndexListSetList22_next);
        };
        int CNetIndexListsize26_wrapper(struct CNetIndexList* _this)
        {
           return CNetIndexListsize26_user(_this, CNetIndexListsize26_next);
        };
        
        void CNetIndexListdtor_CNetIndexList28_wrapper(struct CNetIndexList* _this)
        {
           CNetIndexListdtor_CNetIndexList28_user(_this, CNetIndexListdtor_CNetIndexList28_next);
        };
        
        ::std::array<hook_record, 13> CNetIndexList_functions = 
        {
            _hook_record {
                (LPVOID)0x1400730a0L,
                (LPVOID *)&CNetIndexListctor_CNetIndexList2_user,
                (LPVOID *)&CNetIndexListctor_CNetIndexList2_next,
                (LPVOID)cast_pointer_function(CNetIndexListctor_CNetIndexList2_wrapper),
                (LPVOID)cast_pointer_function((void(CNetIndexList::*)())&CNetIndexList::ctor_CNetIndexList)
            },
            _hook_record {
                (LPVOID)0x14007dfb0L,
                (LPVOID *)&CNetIndexListCopyFront4_user,
                (LPVOID *)&CNetIndexListCopyFront4_next,
                (LPVOID)cast_pointer_function(CNetIndexListCopyFront4_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetIndexList::*)(unsigned int*))&CNetIndexList::CopyFront)
            },
            _hook_record {
                (LPVOID)0x140120c80L,
                (LPVOID *)&CNetIndexListCopyIndexList6_user,
                (LPVOID *)&CNetIndexListCopyIndexList6_next,
                (LPVOID)cast_pointer_function(CNetIndexListCopyIndexList6_wrapper),
                (LPVOID)cast_pointer_function((int(CNetIndexList::*)(unsigned int*, int))&CNetIndexList::CopyIndexList)
            },
            _hook_record {
                (LPVOID)0x140090730L,
                (LPVOID *)&CNetIndexListFindNode8_user,
                (LPVOID *)&CNetIndexListFindNode8_next,
                (LPVOID)cast_pointer_function(CNetIndexListFindNode8_wrapper),
                (LPVOID)cast_pointer_function((struct CNetIndexList::_index_node*(CNetIndexList::*)(unsigned int))&CNetIndexList::FindNode)
            },
            _hook_record {
                (LPVOID)0x140078b40L,
                (LPVOID *)&CNetIndexListIsInList10_user,
                (LPVOID *)&CNetIndexListIsInList10_next,
                (LPVOID)cast_pointer_function(CNetIndexListIsInList10_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetIndexList::*)(unsigned int))&CNetIndexList::IsInList)
            },
            _hook_record {
                (LPVOID)0x1402a28a0L,
                (LPVOID *)&CNetIndexListPopNode_Back12_user,
                (LPVOID *)&CNetIndexListPopNode_Back12_next,
                (LPVOID)cast_pointer_function(CNetIndexListPopNode_Back12_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetIndexList::*)(unsigned int*))&CNetIndexList::PopNode_Back)
            },
            _hook_record {
                (LPVOID)0x140073770L,
                (LPVOID *)&CNetIndexListPopNode_Front14_user,
                (LPVOID *)&CNetIndexListPopNode_Front14_next,
                (LPVOID)cast_pointer_function(CNetIndexListPopNode_Front14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetIndexList::*)(unsigned int*))&CNetIndexList::PopNode_Front)
            },
            _hook_record {
                (LPVOID)0x14007a700L,
                (LPVOID *)&CNetIndexListPushNode_Back16_user,
                (LPVOID *)&CNetIndexListPushNode_Back16_next,
                (LPVOID)cast_pointer_function(CNetIndexListPushNode_Back16_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetIndexList::*)(unsigned int))&CNetIndexList::PushNode_Back)
            },
            _hook_record {
                (LPVOID)0x14024fe00L,
                (LPVOID *)&CNetIndexListPushNode_Front18_user,
                (LPVOID *)&CNetIndexListPushNode_Front18_next,
                (LPVOID)cast_pointer_function(CNetIndexListPushNode_Front18_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetIndexList::*)(unsigned int))&CNetIndexList::PushNode_Front)
            },
            _hook_record {
                (LPVOID)0x140073700L,
                (LPVOID *)&CNetIndexListResetList20_user,
                (LPVOID *)&CNetIndexListResetList20_next,
                (LPVOID)cast_pointer_function(CNetIndexListResetList20_wrapper),
                (LPVOID)cast_pointer_function((void(CNetIndexList::*)())&CNetIndexList::ResetList)
            },
            _hook_record {
                (LPVOID)0x140073390L,
                (LPVOID *)&CNetIndexListSetList22_user,
                (LPVOID *)&CNetIndexListSetList22_next,
                (LPVOID)cast_pointer_function(CNetIndexListSetList22_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetIndexList::*)(unsigned int))&CNetIndexList::SetList)
            },
            _hook_record {
                (LPVOID)0x140028f70L,
                (LPVOID *)&CNetIndexListsize26_user,
                (LPVOID *)&CNetIndexListsize26_next,
                (LPVOID)cast_pointer_function(CNetIndexListsize26_wrapper),
                (LPVOID)cast_pointer_function((int(CNetIndexList::*)())&CNetIndexList::size)
            },
            _hook_record {
                (LPVOID)0x1400732b0L,
                (LPVOID *)&CNetIndexListdtor_CNetIndexList28_user,
                (LPVOID *)&CNetIndexListdtor_CNetIndexList28_next,
                (LPVOID)cast_pointer_function(CNetIndexListdtor_CNetIndexList28_wrapper),
                (LPVOID)cast_pointer_function((void(CNetIndexList::*)())&CNetIndexList::dtor_CNetIndexList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
