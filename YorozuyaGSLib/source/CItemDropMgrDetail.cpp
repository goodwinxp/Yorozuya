#include <CItemDropMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CItemDropMgrDrop2_ptr CItemDropMgrDrop2_next(nullptr);
        Info::CItemDropMgrDrop2_clbk CItemDropMgrDrop2_user(nullptr);
        
        Info::CItemDropMgrFrontDrop4_ptr CItemDropMgrFrontDrop4_next(nullptr);
        Info::CItemDropMgrFrontDrop4_clbk CItemDropMgrFrontDrop4_user(nullptr);
        
        Info::CItemDropMgrGetFrontPtr6_ptr CItemDropMgrGetFrontPtr6_next(nullptr);
        Info::CItemDropMgrGetFrontPtr6_clbk CItemDropMgrGetFrontPtr6_user(nullptr);
        
        Info::CItemDropMgrPopFront8_ptr CItemDropMgrPopFront8_next(nullptr);
        Info::CItemDropMgrPopFront8_clbk CItemDropMgrPopFront8_user(nullptr);
        
        bool CItemDropMgrDrop2_wrapper(struct CItemDropMgr* _this, int nCnt)
        {
           return CItemDropMgrDrop2_user(_this, nCnt, CItemDropMgrDrop2_next);
        };
        bool CItemDropMgrFrontDrop4_wrapper(struct CItemDropMgr* _this)
        {
           return CItemDropMgrFrontDrop4_user(_this, CItemDropMgrFrontDrop4_next);
        };
        struct _DropItemGroupInfo* CItemDropMgrGetFrontPtr6_wrapper(struct CItemDropMgr* _this)
        {
           return CItemDropMgrGetFrontPtr6_user(_this, CItemDropMgrGetFrontPtr6_next);
        };
        bool CItemDropMgrPopFront8_wrapper(struct CItemDropMgr* _this)
        {
           return CItemDropMgrPopFront8_user(_this, CItemDropMgrPopFront8_next);
        };
        
        ::std::array<hook_record, 4> CItemDropMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1402cfde0L,
                (LPVOID *)&CItemDropMgrDrop2_user,
                (LPVOID *)&CItemDropMgrDrop2_next,
                (LPVOID)cast_pointer_function(CItemDropMgrDrop2_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemDropMgr::*)(int))&CItemDropMgr::Drop)
            },
            _hook_record {
                (LPVOID)0x1402cfe60L,
                (LPVOID *)&CItemDropMgrFrontDrop4_user,
                (LPVOID *)&CItemDropMgrFrontDrop4_next,
                (LPVOID)cast_pointer_function(CItemDropMgrFrontDrop4_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemDropMgr::*)())&CItemDropMgr::FrontDrop)
            },
            _hook_record {
                (LPVOID)0x1402d0290L,
                (LPVOID *)&CItemDropMgrGetFrontPtr6_user,
                (LPVOID *)&CItemDropMgrGetFrontPtr6_next,
                (LPVOID)cast_pointer_function(CItemDropMgrGetFrontPtr6_wrapper),
                (LPVOID)cast_pointer_function((struct _DropItemGroupInfo*(CItemDropMgr::*)())&CItemDropMgr::GetFrontPtr)
            },
            _hook_record {
                (LPVOID)0x1402d01d0L,
                (LPVOID *)&CItemDropMgrPopFront8_user,
                (LPVOID *)&CItemDropMgrPopFront8_next,
                (LPVOID)cast_pointer_function(CItemDropMgrPopFront8_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemDropMgr::*)())&CItemDropMgr::PopFront)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
