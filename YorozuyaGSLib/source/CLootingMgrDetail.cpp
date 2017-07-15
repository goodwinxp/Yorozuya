#include <CLootingMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLootingMgrctor_CLootingMgr2_ptr CLootingMgrctor_CLootingMgr2_next(nullptr);
        Info::CLootingMgrctor_CLootingMgr2_clbk CLootingMgrctor_CLootingMgr2_user(nullptr);
        
        Info::CLootingMgrGetLooter4_ptr CLootingMgrGetLooter4_next(nullptr);
        Info::CLootingMgrGetLooter4_clbk CLootingMgrGetLooter4_user(nullptr);
        
        Info::CLootingMgrInit6_ptr CLootingMgrInit6_next(nullptr);
        Info::CLootingMgrInit6_clbk CLootingMgrInit6_user(nullptr);
        
        Info::CLootingMgrPushDamage8_ptr CLootingMgrPushDamage8_next(nullptr);
        Info::CLootingMgrPushDamage8_clbk CLootingMgrPushDamage8_user(nullptr);
        
        
        void CLootingMgrctor_CLootingMgr2_wrapper(struct CLootingMgr* _this)
        {
           CLootingMgrctor_CLootingMgr2_user(_this, CLootingMgrctor_CLootingMgr2_next);
        };
        struct CPlayer* CLootingMgrGetLooter4_wrapper(struct CLootingMgr* _this, struct CMapData* pMap, float* pPos, struct CPlayer* pSkipObject)
        {
           return CLootingMgrGetLooter4_user(_this, pMap, pPos, pSkipObject, CLootingMgrGetLooter4_next);
        };
        void CLootingMgrInit6_wrapper(struct CLootingMgr* _this, int nUserNode)
        {
           CLootingMgrInit6_user(_this, nUserNode, CLootingMgrInit6_next);
        };
        void CLootingMgrPushDamage8_wrapper(struct CLootingMgr* _this, struct CPlayer* pAtter, uint16_t wDamage)
        {
           CLootingMgrPushDamage8_user(_this, pAtter, wDamage, CLootingMgrPushDamage8_next);
        };
        
        ::std::array<hook_record, 4> CLootingMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14014b780L,
                (LPVOID *)&CLootingMgrctor_CLootingMgr2_user,
                (LPVOID *)&CLootingMgrctor_CLootingMgr2_next,
                (LPVOID)cast_pointer_function(CLootingMgrctor_CLootingMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CLootingMgr::*)())&CLootingMgr::ctor_CLootingMgr)
            },
            _hook_record {
                (LPVOID)0x14014c830L,
                (LPVOID *)&CLootingMgrGetLooter4_user,
                (LPVOID *)&CLootingMgrGetLooter4_next,
                (LPVOID)cast_pointer_function(CLootingMgrGetLooter4_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CLootingMgr::*)(struct CMapData*, float*, struct CPlayer*))&CLootingMgr::GetLooter)
            },
            _hook_record {
                (LPVOID)0x14014be90L,
                (LPVOID *)&CLootingMgrInit6_user,
                (LPVOID *)&CLootingMgrInit6_next,
                (LPVOID)cast_pointer_function(CLootingMgrInit6_wrapper),
                (LPVOID)cast_pointer_function((void(CLootingMgr::*)(int))&CLootingMgr::Init)
            },
            _hook_record {
                (LPVOID)0x14014c470L,
                (LPVOID *)&CLootingMgrPushDamage8_user,
                (LPVOID *)&CLootingMgrPushDamage8_next,
                (LPVOID)cast_pointer_function(CLootingMgrPushDamage8_wrapper),
                (LPVOID)cast_pointer_function((void(CLootingMgr::*)(struct CPlayer*, uint16_t))&CLootingMgr::PushDamage)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
