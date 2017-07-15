#include <RACE_BOSS_MSG__CMsgListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace RACE_BOSS_MSG
    {
        namespace Detail
        {
            Info::RACE_BOSS_MSG__CMsgListAddEmpty2_ptr RACE_BOSS_MSG__CMsgListAddEmpty2_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListAddEmpty2_clbk RACE_BOSS_MSG__CMsgListAddEmpty2_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListAddUse4_ptr RACE_BOSS_MSG__CMsgListAddUse4_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListAddUse4_clbk RACE_BOSS_MSG__CMsgListAddUse4_user(nullptr);
            
            
            Info::RACE_BOSS_MSG__CMsgListctor_CMsgList6_ptr RACE_BOSS_MSG__CMsgListctor_CMsgList6_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListctor_CMsgList6_clbk RACE_BOSS_MSG__CMsgListctor_CMsgList6_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListCancel8_ptr RACE_BOSS_MSG__CMsgListCancel8_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListCancel8_clbk RACE_BOSS_MSG__CMsgListCancel8_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListCleanUp10_ptr RACE_BOSS_MSG__CMsgListCleanUp10_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListCleanUp10_clbk RACE_BOSS_MSG__CMsgListCleanUp10_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListGetEmpty12_ptr RACE_BOSS_MSG__CMsgListGetEmpty12_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListGetEmpty12_clbk RACE_BOSS_MSG__CMsgListGetEmpty12_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListGetRemainCnt14_ptr RACE_BOSS_MSG__CMsgListGetRemainCnt14_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListGetRemainCnt14_clbk RACE_BOSS_MSG__CMsgListGetRemainCnt14_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListGetSendMsg16_ptr RACE_BOSS_MSG__CMsgListGetSendMsg16_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListGetSendMsg16_clbk RACE_BOSS_MSG__CMsgListGetSendMsg16_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListInit18_ptr RACE_BOSS_MSG__CMsgListInit18_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListInit18_clbk RACE_BOSS_MSG__CMsgListInit18_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListLoad20_ptr RACE_BOSS_MSG__CMsgListLoad20_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListLoad20_clbk RACE_BOSS_MSG__CMsgListLoad20_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListLoadIndexList22_ptr RACE_BOSS_MSG__CMsgListLoadIndexList22_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListLoadIndexList22_clbk RACE_BOSS_MSG__CMsgListLoadIndexList22_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListLoadMsgList24_ptr RACE_BOSS_MSG__CMsgListLoadMsgList24_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListLoadMsgList24_clbk RACE_BOSS_MSG__CMsgListLoadMsgList24_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListRefresh26_ptr RACE_BOSS_MSG__CMsgListRefresh26_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListRefresh26_clbk RACE_BOSS_MSG__CMsgListRefresh26_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListRelease28_ptr RACE_BOSS_MSG__CMsgListRelease28_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListRelease28_clbk RACE_BOSS_MSG__CMsgListRelease28_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListRollBack30_ptr RACE_BOSS_MSG__CMsgListRollBack30_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListRollBack30_clbk RACE_BOSS_MSG__CMsgListRollBack30_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListSave32_ptr RACE_BOSS_MSG__CMsgListSave32_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListSave32_clbk RACE_BOSS_MSG__CMsgListSave32_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListSaveIndexList34_ptr RACE_BOSS_MSG__CMsgListSaveIndexList34_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListSaveIndexList34_clbk RACE_BOSS_MSG__CMsgListSaveIndexList34_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListSaveMsgList36_ptr RACE_BOSS_MSG__CMsgListSaveMsgList36_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListSaveMsgList36_clbk RACE_BOSS_MSG__CMsgListSaveMsgList36_user(nullptr);
            
            
            Info::RACE_BOSS_MSG__CMsgListdtor_CMsgList40_ptr RACE_BOSS_MSG__CMsgListdtor_CMsgList40_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListdtor_CMsgList40_clbk RACE_BOSS_MSG__CMsgListdtor_CMsgList40_user(nullptr);
            
            void RACE_BOSS_MSG__CMsgListAddEmpty2_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, struct RACE_BOSS_MSG::CMsg* pkMsg)
            {
               RACE_BOSS_MSG__CMsgListAddEmpty2_user(_this, pkMsg, RACE_BOSS_MSG__CMsgListAddEmpty2_next);
            };
            void RACE_BOSS_MSG__CMsgListAddUse4_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, struct RACE_BOSS_MSG::CMsg* pkMsg)
            {
               RACE_BOSS_MSG__CMsgListAddUse4_user(_this, pkMsg, RACE_BOSS_MSG__CMsgListAddUse4_next);
            };
            
            void RACE_BOSS_MSG__CMsgListctor_CMsgList6_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, char ucRace, unsigned int uiSize)
            {
               RACE_BOSS_MSG__CMsgListctor_CMsgList6_user(_this, ucRace, uiSize, RACE_BOSS_MSG__CMsgListctor_CMsgList6_next);
            };
            int RACE_BOSS_MSG__CMsgListCancel8_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, unsigned int dwMsgID, struct RACE_BOSS_MSG::CMsg** pkMsg)
            {
               return RACE_BOSS_MSG__CMsgListCancel8_user(_this, dwMsgID, pkMsg, RACE_BOSS_MSG__CMsgListCancel8_next);
            };
            void RACE_BOSS_MSG__CMsgListCleanUp10_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               RACE_BOSS_MSG__CMsgListCleanUp10_user(_this, RACE_BOSS_MSG__CMsgListCleanUp10_next);
            };
            struct RACE_BOSS_MSG::CMsg* RACE_BOSS_MSG__CMsgListGetEmpty12_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               return RACE_BOSS_MSG__CMsgListGetEmpty12_user(_this, RACE_BOSS_MSG__CMsgListGetEmpty12_next);
            };
            char RACE_BOSS_MSG__CMsgListGetRemainCnt14_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               return RACE_BOSS_MSG__CMsgListGetRemainCnt14_user(_this, RACE_BOSS_MSG__CMsgListGetRemainCnt14_next);
            };
            struct RACE_BOSS_MSG::CMsg* RACE_BOSS_MSG__CMsgListGetSendMsg16_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               return RACE_BOSS_MSG__CMsgListGetSendMsg16_user(_this, RACE_BOSS_MSG__CMsgListGetSendMsg16_next);
            };
            bool RACE_BOSS_MSG__CMsgListInit18_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               return RACE_BOSS_MSG__CMsgListInit18_user(_this, RACE_BOSS_MSG__CMsgListInit18_next);
            };
            bool RACE_BOSS_MSG__CMsgListLoad20_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, unsigned int dwCurTime)
            {
               return RACE_BOSS_MSG__CMsgListLoad20_user(_this, dwCurTime, RACE_BOSS_MSG__CMsgListLoad20_next);
            };
            bool RACE_BOSS_MSG__CMsgListLoadIndexList22_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, int iType, struct CNetIndexList* kInxList)
            {
               return RACE_BOSS_MSG__CMsgListLoadIndexList22_user(_this, iType, kInxList, RACE_BOSS_MSG__CMsgListLoadIndexList22_next);
            };
            bool RACE_BOSS_MSG__CMsgListLoadMsgList24_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, struct CNetIndexList* kInxList, unsigned int dwCurTime)
            {
               return RACE_BOSS_MSG__CMsgListLoadMsgList24_user(_this, kInxList, dwCurTime, RACE_BOSS_MSG__CMsgListLoadMsgList24_next);
            };
            void RACE_BOSS_MSG__CMsgListRefresh26_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               RACE_BOSS_MSG__CMsgListRefresh26_user(_this, RACE_BOSS_MSG__CMsgListRefresh26_next);
            };
            void RACE_BOSS_MSG__CMsgListRelease28_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, struct RACE_BOSS_MSG::CMsg* pkMsg)
            {
               RACE_BOSS_MSG__CMsgListRelease28_user(_this, pkMsg, RACE_BOSS_MSG__CMsgListRelease28_next);
            };
            void RACE_BOSS_MSG__CMsgListRollBack30_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               RACE_BOSS_MSG__CMsgListRollBack30_user(_this, RACE_BOSS_MSG__CMsgListRollBack30_next);
            };
            bool RACE_BOSS_MSG__CMsgListSave32_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               return RACE_BOSS_MSG__CMsgListSave32_user(_this, RACE_BOSS_MSG__CMsgListSave32_next);
            };
            bool RACE_BOSS_MSG__CMsgListSaveIndexList34_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, int iType, struct CNetIndexList* kInxList)
            {
               return RACE_BOSS_MSG__CMsgListSaveIndexList34_user(_this, iType, kInxList, RACE_BOSS_MSG__CMsgListSaveIndexList34_next);
            };
            bool RACE_BOSS_MSG__CMsgListSaveMsgList36_wrapper(struct RACE_BOSS_MSG::CMsgList* _this, struct CNetIndexList* kInxList)
            {
               return RACE_BOSS_MSG__CMsgListSaveMsgList36_user(_this, kInxList, RACE_BOSS_MSG__CMsgListSaveMsgList36_next);
            };
            
            void RACE_BOSS_MSG__CMsgListdtor_CMsgList40_wrapper(struct RACE_BOSS_MSG::CMsgList* _this)
            {
               RACE_BOSS_MSG__CMsgListdtor_CMsgList40_user(_this, RACE_BOSS_MSG__CMsgListdtor_CMsgList40_next);
            };
            
            ::std::array<hook_record, 19> CMsgList_functions = 
            {
                _hook_record {
                    (LPVOID)0x14029eb20L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListAddEmpty2_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListAddEmpty2_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListAddEmpty2_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgList::*)(struct RACE_BOSS_MSG::CMsg*))&RACE_BOSS_MSG::CMsgList::AddEmpty)
                },
                _hook_record {
                    (LPVOID)0x14029e9d0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListAddUse4_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListAddUse4_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListAddUse4_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgList::*)(struct RACE_BOSS_MSG::CMsg*))&RACE_BOSS_MSG::CMsgList::AddUse)
                },
                _hook_record {
                    (LPVOID)0x14029e460L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListctor_CMsgList6_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListctor_CMsgList6_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListctor_CMsgList6_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgList::*)(char, unsigned int))&RACE_BOSS_MSG::CMsgList::ctor_CMsgList)
                },
                _hook_record {
                    (LPVOID)0x14029ec50L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListCancel8_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListCancel8_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListCancel8_wrapper),
                    (LPVOID)cast_pointer_function((int(RACE_BOSS_MSG::CMsgList::*)(unsigned int, struct RACE_BOSS_MSG::CMsg**))&RACE_BOSS_MSG::CMsgList::Cancel)
                },
                _hook_record {
                    (LPVOID)0x14029f050L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListCleanUp10_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListCleanUp10_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListCleanUp10_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::CleanUp)
                },
                _hook_record {
                    (LPVOID)0x14029e880L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListGetEmpty12_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListGetEmpty12_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListGetEmpty12_wrapper),
                    (LPVOID)cast_pointer_function((struct RACE_BOSS_MSG::CMsg*(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::GetEmpty)
                },
                _hook_record {
                    (LPVOID)0x1402a2ae0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListGetRemainCnt14_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListGetRemainCnt14_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListGetRemainCnt14_wrapper),
                    (LPVOID)cast_pointer_function((char(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::GetRemainCnt)
                },
                _hook_record {
                    (LPVOID)0x14029e920L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListGetSendMsg16_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListGetSendMsg16_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListGetSendMsg16_wrapper),
                    (LPVOID)cast_pointer_function((struct RACE_BOSS_MSG::CMsg*(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::GetSendMsg)
                },
                _hook_record {
                    (LPVOID)0x14029ee60L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListInit18_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListInit18_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListInit18_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::Init)
                },
                _hook_record {
                    (LPVOID)0x14029e790L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListLoad20_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListLoad20_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListLoad20_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgList::*)(unsigned int))&RACE_BOSS_MSG::CMsgList::Load)
                },
                _hook_record {
                    (LPVOID)0x14029f450L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListLoadIndexList22_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListLoadIndexList22_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListLoadIndexList22_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgList::*)(int, struct CNetIndexList*))&RACE_BOSS_MSG::CMsgList::LoadIndexList)
                },
                _hook_record {
                    (LPVOID)0x14029f780L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListLoadMsgList24_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListLoadMsgList24_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListLoadMsgList24_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgList::*)(struct CNetIndexList*, unsigned int))&RACE_BOSS_MSG::CMsgList::LoadMsgList)
                },
                _hook_record {
                    (LPVOID)0x14029ed00L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListRefresh26_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListRefresh26_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListRefresh26_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::Refresh)
                },
                _hook_record {
                    (LPVOID)0x14029eba0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListRelease28_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListRelease28_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListRelease28_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgList::*)(struct RACE_BOSS_MSG::CMsg*))&RACE_BOSS_MSG::CMsgList::Release)
                },
                _hook_record {
                    (LPVOID)0x14029ea60L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListRollBack30_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListRollBack30_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListRollBack30_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::RollBack)
                },
                _hook_record {
                    (LPVOID)0x14029e6b0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListSave32_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListSave32_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListSave32_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::Save)
                },
                _hook_record {
                    (LPVOID)0x14029f120L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListSaveIndexList34_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListSaveIndexList34_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListSaveIndexList34_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgList::*)(int, struct CNetIndexList*))&RACE_BOSS_MSG::CMsgList::SaveIndexList)
                },
                _hook_record {
                    (LPVOID)0x14029f690L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListSaveMsgList36_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListSaveMsgList36_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListSaveMsgList36_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgList::*)(struct CNetIndexList*))&RACE_BOSS_MSG::CMsgList::SaveMsgList)
                },
                _hook_record {
                    (LPVOID)0x14029e5a0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListdtor_CMsgList40_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListdtor_CMsgList40_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListdtor_CMsgList40_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgList::*)())&RACE_BOSS_MSG::CMsgList::dtor_CMsgList)
                },
            };
        }; // end namespace Detail
    }; // end namespace RACE_BOSS_MSG
END_ATF_NAMESPACE
