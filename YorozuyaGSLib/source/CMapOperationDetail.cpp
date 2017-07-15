#include <CMapOperationDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMapOperationctor_CMapOperation2_ptr CMapOperationctor_CMapOperation2_next(nullptr);
        Info::CMapOperationctor_CMapOperation2_clbk CMapOperationctor_CMapOperation2_user(nullptr);
        
        Info::CMapOperationCheckMapPortalLink4_ptr CMapOperationCheckMapPortalLink4_next(nullptr);
        Info::CMapOperationCheckMapPortalLink4_clbk CMapOperationCheckMapPortalLink4_user(nullptr);
        
        Info::CMapOperationGetMap6_ptr CMapOperationGetMap6_next(nullptr);
        Info::CMapOperationGetMap6_clbk CMapOperationGetMap6_user(nullptr);
        
        Info::CMapOperationGetMap8_ptr CMapOperationGetMap8_next(nullptr);
        Info::CMapOperationGetMap8_clbk CMapOperationGetMap8_user(nullptr);
        
        Info::CMapOperationGetMap10_ptr CMapOperationGetMap10_next(nullptr);
        Info::CMapOperationGetMap10_clbk CMapOperationGetMap10_user(nullptr);
        
        Info::CMapOperationGetPosStartMap12_ptr CMapOperationGetPosStartMap12_next(nullptr);
        Info::CMapOperationGetPosStartMap12_clbk CMapOperationGetPosStartMap12_user(nullptr);
        
        Info::CMapOperationGetSettlementMapData14_ptr CMapOperationGetSettlementMapData14_next(nullptr);
        Info::CMapOperationGetSettlementMapData14_clbk CMapOperationGetSettlementMapData14_user(nullptr);
        
        Info::CMapOperationGetStartMap16_ptr CMapOperationGetStartMap16_next(nullptr);
        Info::CMapOperationGetStartMap16_clbk CMapOperationGetStartMap16_user(nullptr);
        
        Info::CMapOperationInit18_ptr CMapOperationInit18_next(nullptr);
        Info::CMapOperationInit18_clbk CMapOperationInit18_user(nullptr);
        
        Info::CMapOperationIsExistStdMapID20_ptr CMapOperationIsExistStdMapID20_next(nullptr);
        Info::CMapOperationIsExistStdMapID20_clbk CMapOperationIsExistStdMapID20_user(nullptr);
        
        Info::CMapOperationIsInRegion22_ptr CMapOperationIsInRegion22_next(nullptr);
        Info::CMapOperationIsInRegion22_clbk CMapOperationIsInRegion22_user(nullptr);
        
        Info::CMapOperationLoadMaps24_ptr CMapOperationLoadMaps24_next(nullptr);
        Info::CMapOperationLoadMaps24_clbk CMapOperationLoadMaps24_user(nullptr);
        
        Info::CMapOperationLoadRegion26_ptr CMapOperationLoadRegion26_next(nullptr);
        Info::CMapOperationLoadRegion26_clbk CMapOperationLoadRegion26_user(nullptr);
        
        Info::CMapOperationOnLoop28_ptr CMapOperationOnLoop28_next(nullptr);
        Info::CMapOperationOnLoop28_clbk CMapOperationOnLoop28_user(nullptr);
        
        Info::CMapOperationRespawnMonster30_ptr CMapOperationRespawnMonster30_next(nullptr);
        Info::CMapOperationRespawnMonster30_clbk CMapOperationRespawnMonster30_user(nullptr);
        
        
        Info::CMapOperationdtor_CMapOperation35_ptr CMapOperationdtor_CMapOperation35_next(nullptr);
        Info::CMapOperationdtor_CMapOperation35_clbk CMapOperationdtor_CMapOperation35_user(nullptr);
        
        
        void CMapOperationctor_CMapOperation2_wrapper(struct CMapOperation* _this)
        {
           CMapOperationctor_CMapOperation2_user(_this, CMapOperationctor_CMapOperation2_next);
        };
        void CMapOperationCheckMapPortalLink4_wrapper(struct CMapOperation* _this)
        {
           CMapOperationCheckMapPortalLink4_user(_this, CMapOperationCheckMapPortalLink4_next);
        };
        int CMapOperationGetMap6_wrapper(struct CMapOperation* _this, struct CMapData* pMap)
        {
           return CMapOperationGetMap6_user(_this, pMap, CMapOperationGetMap6_next);
        };
        struct CMapData* CMapOperationGetMap8_wrapper(struct CMapOperation* _this, char* szMapCode)
        {
           return CMapOperationGetMap8_user(_this, szMapCode, CMapOperationGetMap8_next);
        };
        struct CMapData* CMapOperationGetMap10_wrapper(struct CMapOperation* _this, int nIndex)
        {
           return CMapOperationGetMap10_user(_this, nIndex, CMapOperationGetMap10_next);
        };
        struct CMapData* CMapOperationGetPosStartMap12_wrapper(struct CMapOperation* _this, char byRaceCode, bool bRand, float* pfoutPos)
        {
           return CMapOperationGetPosStartMap12_user(_this, byRaceCode, bRand, pfoutPos, CMapOperationGetPosStartMap12_next);
        };
        struct CMapData* CMapOperationGetSettlementMapData14_wrapper(struct CMapOperation* _this, int iRace, int iTh)
        {
           return CMapOperationGetSettlementMapData14_user(_this, iRace, iTh, CMapOperationGetSettlementMapData14_next);
        };
        struct CMapData* CMapOperationGetStartMap16_wrapper(struct CMapOperation* _this, char byRaceCode)
        {
           return CMapOperationGetStartMap16_user(_this, byRaceCode, CMapOperationGetStartMap16_next);
        };
        bool CMapOperationInit18_wrapper(struct CMapOperation* _this)
        {
           return CMapOperationInit18_user(_this, CMapOperationInit18_next);
        };
        bool CMapOperationIsExistStdMapID20_wrapper(struct CMapOperation* _this, int iMapID)
        {
           return CMapOperationIsExistStdMapID20_user(_this, iMapID, CMapOperationIsExistStdMapID20_next);
        };
        bool CMapOperationIsInRegion22_wrapper(struct CMapOperation* _this, char* pszRegionCode, struct CGameObject* pObj)
        {
           return CMapOperationIsInRegion22_user(_this, pszRegionCode, pObj, CMapOperationIsInRegion22_next);
        };
        bool CMapOperationLoadMaps24_wrapper(struct CMapOperation* _this)
        {
           return CMapOperationLoadMaps24_user(_this, CMapOperationLoadMaps24_next);
        };
        bool CMapOperationLoadRegion26_wrapper(struct CMapOperation* _this)
        {
           return CMapOperationLoadRegion26_user(_this, CMapOperationLoadRegion26_next);
        };
        void CMapOperationOnLoop28_wrapper(struct CMapOperation* _this)
        {
           CMapOperationOnLoop28_user(_this, CMapOperationOnLoop28_next);
        };
        void CMapOperationRespawnMonster30_wrapper(struct CMapOperation* _this)
        {
           CMapOperationRespawnMonster30_user(_this, CMapOperationRespawnMonster30_next);
        };
        
        void CMapOperationdtor_CMapOperation35_wrapper(struct CMapOperation* _this)
        {
           CMapOperationdtor_CMapOperation35_user(_this, CMapOperationdtor_CMapOperation35_next);
        };
        
        ::std::array<hook_record, 16> CMapOperation_functions = 
        {
            _hook_record {
                (LPVOID)0x140195e20L,
                (LPVOID *)&CMapOperationctor_CMapOperation2_user,
                (LPVOID *)&CMapOperationctor_CMapOperation2_next,
                (LPVOID)cast_pointer_function(CMapOperationctor_CMapOperation2_wrapper),
                (LPVOID)cast_pointer_function((void(CMapOperation::*)())&CMapOperation::ctor_CMapOperation)
            },
            _hook_record {
                (LPVOID)0x140197d40L,
                (LPVOID *)&CMapOperationCheckMapPortalLink4_user,
                (LPVOID *)&CMapOperationCheckMapPortalLink4_next,
                (LPVOID)cast_pointer_function(CMapOperationCheckMapPortalLink4_wrapper),
                (LPVOID)cast_pointer_function((void(CMapOperation::*)())&CMapOperation::CheckMapPortalLink)
            },
            _hook_record {
                (LPVOID)0x1401979b0L,
                (LPVOID *)&CMapOperationGetMap6_user,
                (LPVOID *)&CMapOperationGetMap6_next,
                (LPVOID)cast_pointer_function(CMapOperationGetMap6_wrapper),
                (LPVOID)cast_pointer_function((int(CMapOperation::*)(struct CMapData*))&CMapOperation::GetMap)
            },
            _hook_record {
                (LPVOID)0x140197a30L,
                (LPVOID *)&CMapOperationGetMap8_user,
                (LPVOID *)&CMapOperationGetMap8_next,
                (LPVOID)cast_pointer_function(CMapOperationGetMap8_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CMapOperation::*)(char*))&CMapOperation::GetMap)
            },
            _hook_record {
                (LPVOID)0x140197970L,
                (LPVOID *)&CMapOperationGetMap10_user,
                (LPVOID *)&CMapOperationGetMap10_next,
                (LPVOID)cast_pointer_function(CMapOperationGetMap10_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CMapOperation::*)(int))&CMapOperation::GetMap)
            },
            _hook_record {
                (LPVOID)0x140197b90L,
                (LPVOID *)&CMapOperationGetPosStartMap12_user,
                (LPVOID *)&CMapOperationGetPosStartMap12_next,
                (LPVOID)cast_pointer_function(CMapOperationGetPosStartMap12_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CMapOperation::*)(char, bool, float*))&CMapOperation::GetPosStartMap)
            },
            _hook_record {
                (LPVOID)0x1402d7960L,
                (LPVOID *)&CMapOperationGetSettlementMapData14_user,
                (LPVOID *)&CMapOperationGetSettlementMapData14_next,
                (LPVOID)cast_pointer_function(CMapOperationGetSettlementMapData14_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CMapOperation::*)(int, int))&CMapOperation::GetSettlementMapData)
            },
            _hook_record {
                (LPVOID)0x140197ae0L,
                (LPVOID *)&CMapOperationGetStartMap16_user,
                (LPVOID *)&CMapOperationGetStartMap16_next,
                (LPVOID)cast_pointer_function(CMapOperationGetStartMap16_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CMapOperation::*)(char))&CMapOperation::GetStartMap)
            },
            _hook_record {
                (LPVOID)0x140196300L,
                (LPVOID *)&CMapOperationInit18_user,
                (LPVOID *)&CMapOperationInit18_next,
                (LPVOID)cast_pointer_function(CMapOperationInit18_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapOperation::*)())&CMapOperation::Init)
            },
            _hook_record {
                (LPVOID)0x140120ab0L,
                (LPVOID *)&CMapOperationIsExistStdMapID20_user,
                (LPVOID *)&CMapOperationIsExistStdMapID20_next,
                (LPVOID)cast_pointer_function(CMapOperationIsExistStdMapID20_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapOperation::*)(int))&CMapOperation::IsExistStdMapID)
            },
            _hook_record {
                (LPVOID)0x140197c50L,
                (LPVOID *)&CMapOperationIsInRegion22_user,
                (LPVOID *)&CMapOperationIsInRegion22_next,
                (LPVOID)cast_pointer_function(CMapOperationIsInRegion22_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapOperation::*)(char*, struct CGameObject*))&CMapOperation::IsInRegion)
            },
            _hook_record {
                (LPVOID)0x140196750L,
                (LPVOID *)&CMapOperationLoadMaps24_user,
                (LPVOID *)&CMapOperationLoadMaps24_next,
                (LPVOID)cast_pointer_function(CMapOperationLoadMaps24_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapOperation::*)())&CMapOperation::LoadMaps)
            },
            _hook_record {
                (LPVOID)0x140196c40L,
                (LPVOID *)&CMapOperationLoadRegion26_user,
                (LPVOID *)&CMapOperationLoadRegion26_next,
                (LPVOID)cast_pointer_function(CMapOperationLoadRegion26_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapOperation::*)())&CMapOperation::LoadRegion)
            },
            _hook_record {
                (LPVOID)0x140196f30L,
                (LPVOID *)&CMapOperationOnLoop28_user,
                (LPVOID *)&CMapOperationOnLoop28_next,
                (LPVOID)cast_pointer_function(CMapOperationOnLoop28_wrapper),
                (LPVOID)cast_pointer_function((void(CMapOperation::*)())&CMapOperation::OnLoop)
            },
            _hook_record {
                (LPVOID)0x140197190L,
                (LPVOID *)&CMapOperationRespawnMonster30_user,
                (LPVOID *)&CMapOperationRespawnMonster30_next,
                (LPVOID)cast_pointer_function(CMapOperationRespawnMonster30_wrapper),
                (LPVOID)cast_pointer_function((void(CMapOperation::*)())&CMapOperation::RespawnMonster)
            },
            _hook_record {
                (LPVOID)0x1401960c0L,
                (LPVOID *)&CMapOperationdtor_CMapOperation35_user,
                (LPVOID *)&CMapOperationdtor_CMapOperation35_next,
                (LPVOID)cast_pointer_function(CMapOperationdtor_CMapOperation35_wrapper),
                (LPVOID)cast_pointer_function((void(CMapOperation::*)())&CMapOperation::dtor_CMapOperation)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
