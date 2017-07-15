#include <GUILD_BATTLE__CGuildBattleStateListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            Info::GUILD_BATTLE__CGuildBattleStateListAdvance2_ptr GUILD_BATTLE__CGuildBattleStateListAdvance2_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListAdvance2_clbk GUILD_BATTLE__CGuildBattleStateListAdvance2_user(nullptr);
            
            
            Info::GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_ptr GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_clbk GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListCheckLoop6_ptr GUILD_BATTLE__CGuildBattleStateListCheckLoop6_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListCheckLoop6_clbk GUILD_BATTLE__CGuildBattleStateListCheckLoop6_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListClear8_ptr GUILD_BATTLE__CGuildBattleStateListClear8_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListClear8_clbk GUILD_BATTLE__CGuildBattleStateListClear8_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListForceNext10_ptr GUILD_BATTLE__CGuildBattleStateListForceNext10_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListForceNext10_clbk GUILD_BATTLE__CGuildBattleStateListForceNext10_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListGetTerm12_ptr GUILD_BATTLE__CGuildBattleStateListGetTerm12_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListGetTerm12_clbk GUILD_BATTLE__CGuildBattleStateListGetTerm12_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListGoto14_ptr GUILD_BATTLE__CGuildBattleStateListGoto14_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListGoto14_clbk GUILD_BATTLE__CGuildBattleStateListGoto14_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListGotoState16_ptr GUILD_BATTLE__CGuildBattleStateListGotoState16_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListGotoState16_clbk GUILD_BATTLE__CGuildBattleStateListGotoState16_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListIsEmpty18_ptr GUILD_BATTLE__CGuildBattleStateListIsEmpty18_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListIsEmpty18_clbk GUILD_BATTLE__CGuildBattleStateListIsEmpty18_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListIsProc20_ptr GUILD_BATTLE__CGuildBattleStateListIsProc20_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListIsProc20_clbk GUILD_BATTLE__CGuildBattleStateListIsProc20_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListLog22_ptr GUILD_BATTLE__CGuildBattleStateListLog22_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListLog22_clbk GUILD_BATTLE__CGuildBattleStateListLog22_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListNext24_ptr GUILD_BATTLE__CGuildBattleStateListNext24_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListNext24_clbk GUILD_BATTLE__CGuildBattleStateListNext24_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListProcess26_ptr GUILD_BATTLE__CGuildBattleStateListProcess26_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListProcess26_clbk GUILD_BATTLE__CGuildBattleStateListProcess26_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListSetNextState28_ptr GUILD_BATTLE__CGuildBattleStateListSetNextState28_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListSetNextState28_clbk GUILD_BATTLE__CGuildBattleStateListSetNextState28_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListSetReady30_ptr GUILD_BATTLE__CGuildBattleStateListSetReady30_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListSetReady30_clbk GUILD_BATTLE__CGuildBattleStateListSetReady30_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleStateListSetWait32_ptr GUILD_BATTLE__CGuildBattleStateListSetWait32_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListSetWait32_clbk GUILD_BATTLE__CGuildBattleStateListSetWait32_user(nullptr);
            
            
            Info::GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_ptr GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_clbk GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_user(nullptr);
            
            void GUILD_BATTLE__CGuildBattleStateListAdvance2_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this, int iAdvance)
            {
               GUILD_BATTLE__CGuildBattleStateListAdvance2_user(_this, iAdvance, GUILD_BATTLE__CGuildBattleStateListAdvance2_next);
            };
            
            void GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this, int iStateMax, int iLoopType, unsigned int uiLoopCnt)
            {
               GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_user(_this, iStateMax, iLoopType, uiLoopCnt, GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_next);
            };
            int GUILD_BATTLE__CGuildBattleStateListCheckLoop6_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CGuildBattleStateListCheckLoop6_user(_this, GUILD_BATTLE__CGuildBattleStateListCheckLoop6_next);
            };
            void GUILD_BATTLE__CGuildBattleStateListClear8_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CGuildBattleStateListClear8_user(_this, GUILD_BATTLE__CGuildBattleStateListClear8_next);
            };
            void GUILD_BATTLE__CGuildBattleStateListForceNext10_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CGuildBattleStateListForceNext10_user(_this, GUILD_BATTLE__CGuildBattleStateListForceNext10_next);
            };
            struct ATL::CTimeSpan* GUILD_BATTLE__CGuildBattleStateListGetTerm12_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this, struct ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CGuildBattleStateListGetTerm12_user(_this, result, GUILD_BATTLE__CGuildBattleStateListGetTerm12_next);
            };
            int GUILD_BATTLE__CGuildBattleStateListGoto14_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CGuildBattleStateListGoto14_user(_this, GUILD_BATTLE__CGuildBattleStateListGoto14_next);
            };
            bool GUILD_BATTLE__CGuildBattleStateListGotoState16_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this, int iState)
            {
               return GUILD_BATTLE__CGuildBattleStateListGotoState16_user(_this, iState, GUILD_BATTLE__CGuildBattleStateListGotoState16_next);
            };
            bool GUILD_BATTLE__CGuildBattleStateListIsEmpty18_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CGuildBattleStateListIsEmpty18_user(_this, GUILD_BATTLE__CGuildBattleStateListIsEmpty18_next);
            };
            bool GUILD_BATTLE__CGuildBattleStateListIsProc20_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               return GUILD_BATTLE__CGuildBattleStateListIsProc20_user(_this, GUILD_BATTLE__CGuildBattleStateListIsProc20_next);
            };
            void GUILD_BATTLE__CGuildBattleStateListLog22_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this, char* szMsg)
            {
               GUILD_BATTLE__CGuildBattleStateListLog22_user(_this, szMsg, GUILD_BATTLE__CGuildBattleStateListLog22_next);
            };
            int GUILD_BATTLE__CGuildBattleStateListNext24_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this, bool bForce)
            {
               return GUILD_BATTLE__CGuildBattleStateListNext24_user(_this, bForce, GUILD_BATTLE__CGuildBattleStateListNext24_next);
            };
            void GUILD_BATTLE__CGuildBattleStateListProcess26_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               GUILD_BATTLE__CGuildBattleStateListProcess26_user(_this, pkBattle, GUILD_BATTLE__CGuildBattleStateListProcess26_next);
            };
            void GUILD_BATTLE__CGuildBattleStateListSetNextState28_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CGuildBattleStateListSetNextState28_user(_this, GUILD_BATTLE__CGuildBattleStateListSetNextState28_next);
            };
            void GUILD_BATTLE__CGuildBattleStateListSetReady30_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CGuildBattleStateListSetReady30_user(_this, GUILD_BATTLE__CGuildBattleStateListSetReady30_next);
            };
            void GUILD_BATTLE__CGuildBattleStateListSetWait32_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CGuildBattleStateListSetWait32_user(_this, GUILD_BATTLE__CGuildBattleStateListSetWait32_next);
            };
            
            void GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_wrapper(struct GUILD_BATTLE::CGuildBattleStateList* _this)
            {
               GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_user(_this, GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_next);
            };
            
            ::std::array<hook_record, 17> CGuildBattleStateList_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403df610L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListAdvance2_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListAdvance2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListAdvance2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)(int))&GUILD_BATTLE::CGuildBattleStateList::Advance)
                },
                _hook_record {
                    (LPVOID)0x1403def90L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListctor_CGuildBattleStateList4_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)(int, int, unsigned int))&GUILD_BATTLE::CGuildBattleStateList::ctor_CGuildBattleStateList)
                },
                _hook_record {
                    (LPVOID)0x1403df4d0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListCheckLoop6_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListCheckLoop6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListCheckLoop6_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::CheckLoop)
                },
                _hook_record {
                    (LPVOID)0x1403df030L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListClear8_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListClear8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListClear8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::Clear)
                },
                _hook_record {
                    (LPVOID)0x1403df6a0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListForceNext10_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListForceNext10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListForceNext10_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::ForceNext)
                },
                _hook_record {
                    (LPVOID)0x1403df470L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListGetTerm12_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListGetTerm12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListGetTerm12_wrapper),
                    (LPVOID)cast_pointer_function((struct ATL::CTimeSpan*(GUILD_BATTLE::CGuildBattleStateList::*)(struct ATL::CTimeSpan*))&GUILD_BATTLE::CGuildBattleStateList::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x1403df2c0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListGoto14_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListGoto14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListGoto14_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::Goto)
                },
                _hook_record {
                    (LPVOID)0x1403f3370L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListGotoState16_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListGotoState16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListGotoState16_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleStateList::*)(int))&GUILD_BATTLE::CGuildBattleStateList::GotoState)
                },
                _hook_record {
                    (LPVOID)0x1403df8e0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListIsEmpty18_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListIsEmpty18_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListIsEmpty18_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::IsEmpty)
                },
                _hook_record {
                    (LPVOID)0x1403d9250L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListIsProc20_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListIsProc20_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListIsProc20_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::IsProc)
                },
                _hook_record {
                    (LPVOID)0x1403df340L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListLog22_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListLog22_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListLog22_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)(char*))&GUILD_BATTLE::CGuildBattleStateList::Log)
                },
                _hook_record {
                    (LPVOID)0x1403df220L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListNext24_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListNext24_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListNext24_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleStateList::*)(bool))&GUILD_BATTLE::CGuildBattleStateList::Next)
                },
                _hook_record {
                    (LPVOID)0x1403df090L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListProcess26_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListProcess26_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListProcess26_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CGuildBattleStateList::Process)
                },
                _hook_record {
                    (LPVOID)0x14007f830L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListSetNextState28_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListSetNextState28_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListSetNextState28_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::SetNextState)
                },
                _hook_record {
                    (LPVOID)0x1403eb0d0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListSetReady30_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListSetReady30_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListSetReady30_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::SetReady)
                },
                _hook_record {
                    (LPVOID)0x1403eb110L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListSetWait32_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListSetWait32_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListSetWait32_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::SetWait)
                },
                _hook_record {
                    (LPVOID)0x14007f810L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateListdtor_CGuildBattleStateList34_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleStateList::*)())&GUILD_BATTLE::CGuildBattleStateList::dtor_CGuildBattleStateList)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
