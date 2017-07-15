#include <CLuaLootingMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CLuaLootingMgrAddNovusItem2_ptr CLuaLootingMgrAddNovusItem2_next(nullptr);
        Info::CLuaLootingMgrAddNovusItem2_clbk CLuaLootingMgrAddNovusItem2_user(nullptr);
        
        
        Info::CLuaLootingMgrctor_CLuaLootingMgr4_ptr CLuaLootingMgrctor_CLuaLootingMgr4_next(nullptr);
        Info::CLuaLootingMgrctor_CLuaLootingMgr4_clbk CLuaLootingMgrctor_CLuaLootingMgr4_user(nullptr);
        
        Info::CLuaLootingMgrDestroy6_ptr CLuaLootingMgrDestroy6_next(nullptr);
        Info::CLuaLootingMgrDestroy6_clbk CLuaLootingMgrDestroy6_user(nullptr);
        
        Info::CLuaLootingMgrInitSDM8_ptr CLuaLootingMgrInitSDM8_next(nullptr);
        Info::CLuaLootingMgrInitSDM8_clbk CLuaLootingMgrInitSDM8_user(nullptr);
        
        Info::CLuaLootingMgrInstance10_ptr CLuaLootingMgrInstance10_next(nullptr);
        Info::CLuaLootingMgrInstance10_clbk CLuaLootingMgrInstance10_user(nullptr);
        
        Info::CLuaLootingMgrLoop12_ptr CLuaLootingMgrLoop12_next(nullptr);
        Info::CLuaLootingMgrLoop12_clbk CLuaLootingMgrLoop12_user(nullptr);
        
        
        Info::CLuaLootingMgrdtor_CLuaLootingMgr16_ptr CLuaLootingMgrdtor_CLuaLootingMgr16_next(nullptr);
        Info::CLuaLootingMgrdtor_CLuaLootingMgr16_clbk CLuaLootingMgrdtor_CLuaLootingMgr16_user(nullptr);
        
        bool CLuaLootingMgrAddNovusItem2_wrapper(struct CLuaLootingMgr* _this, char* strItemCode, struct CMapData* pMap, uint16_t wLayerIndex, float* fPos, uint16_t wLootRange, unsigned int dwOverlapCnt, unsigned int dwItemNum, char byCreateType)
        {
           return CLuaLootingMgrAddNovusItem2_user(_this, strItemCode, pMap, wLayerIndex, fPos, wLootRange, dwOverlapCnt, dwItemNum, byCreateType, CLuaLootingMgrAddNovusItem2_next);
        };
        
        void CLuaLootingMgrctor_CLuaLootingMgr4_wrapper(struct CLuaLootingMgr* _this)
        {
           CLuaLootingMgrctor_CLuaLootingMgr4_user(_this, CLuaLootingMgrctor_CLuaLootingMgr4_next);
        };
        void CLuaLootingMgrDestroy6_wrapper()
        {
           CLuaLootingMgrDestroy6_user(CLuaLootingMgrDestroy6_next);
        };
        bool CLuaLootingMgrInitSDM8_wrapper(struct CLuaLootingMgr* _this, unsigned int dwLoopLootingCount, unsigned int dwLoopLootingTerm)
        {
           return CLuaLootingMgrInitSDM8_user(_this, dwLoopLootingCount, dwLoopLootingTerm, CLuaLootingMgrInitSDM8_next);
        };
        struct CLuaLootingMgr* CLuaLootingMgrInstance10_wrapper()
        {
           return CLuaLootingMgrInstance10_user(CLuaLootingMgrInstance10_next);
        };
        void CLuaLootingMgrLoop12_wrapper(struct CLuaLootingMgr* _this)
        {
           CLuaLootingMgrLoop12_user(_this, CLuaLootingMgrLoop12_next);
        };
        
        void CLuaLootingMgrdtor_CLuaLootingMgr16_wrapper(struct CLuaLootingMgr* _this)
        {
           CLuaLootingMgrdtor_CLuaLootingMgr16_user(_this, CLuaLootingMgrdtor_CLuaLootingMgr16_next);
        };
        
        ::std::array<hook_record, 7> CLuaLootingMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x140404ee0L,
                (LPVOID *)&CLuaLootingMgrAddNovusItem2_user,
                (LPVOID *)&CLuaLootingMgrAddNovusItem2_next,
                (LPVOID)cast_pointer_function(CLuaLootingMgrAddNovusItem2_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaLootingMgr::*)(char*, struct CMapData*, uint16_t, float*, uint16_t, unsigned int, unsigned int, char))&CLuaLootingMgr::AddNovusItem)
            },
            _hook_record {
                (LPVOID)0x140404dd0L,
                (LPVOID *)&CLuaLootingMgrctor_CLuaLootingMgr4_user,
                (LPVOID *)&CLuaLootingMgrctor_CLuaLootingMgr4_next,
                (LPVOID)cast_pointer_function(CLuaLootingMgrctor_CLuaLootingMgr4_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaLootingMgr::*)())&CLuaLootingMgr::ctor_CLuaLootingMgr)
            },
            _hook_record {
                (LPVOID)0x1402035e0L,
                (LPVOID *)&CLuaLootingMgrDestroy6_user,
                (LPVOID *)&CLuaLootingMgrDestroy6_next,
                (LPVOID)cast_pointer_function(CLuaLootingMgrDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CLuaLootingMgr::Destroy)
            },
            _hook_record {
                (LPVOID)0x140404ea0L,
                (LPVOID *)&CLuaLootingMgrInitSDM8_user,
                (LPVOID *)&CLuaLootingMgrInitSDM8_next,
                (LPVOID)cast_pointer_function(CLuaLootingMgrInitSDM8_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaLootingMgr::*)(unsigned int, unsigned int))&CLuaLootingMgr::InitSDM)
            },
            _hook_record {
                (LPVOID)0x1404010f0L,
                (LPVOID *)&CLuaLootingMgrInstance10_user,
                (LPVOID *)&CLuaLootingMgrInstance10_next,
                (LPVOID)cast_pointer_function(CLuaLootingMgrInstance10_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaLootingMgr*(*)())&CLuaLootingMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x140405180L,
                (LPVOID *)&CLuaLootingMgrLoop12_user,
                (LPVOID *)&CLuaLootingMgrLoop12_next,
                (LPVOID)cast_pointer_function(CLuaLootingMgrLoop12_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaLootingMgr::*)())&CLuaLootingMgr::Loop)
            },
            _hook_record {
                (LPVOID)0x140404e60L,
                (LPVOID *)&CLuaLootingMgrdtor_CLuaLootingMgr16_user,
                (LPVOID *)&CLuaLootingMgrdtor_CLuaLootingMgr16_next,
                (LPVOID)cast_pointer_function(CLuaLootingMgrdtor_CLuaLootingMgr16_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaLootingMgr::*)())&CLuaLootingMgr::dtor_CLuaLootingMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
