#include <CPvpUserRankingTargetUserListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPvpUserRankingTargetUserListAdd2_ptr CPvpUserRankingTargetUserListAdd2_next(nullptr);
        Info::CPvpUserRankingTargetUserListAdd2_clbk CPvpUserRankingTargetUserListAdd2_user(nullptr);
        
        
        Info::CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_ptr CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_next(nullptr);
        Info::CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_clbk CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_user(nullptr);
        
        Info::CPvpUserRankingTargetUserListClearRankingStart6_ptr CPvpUserRankingTargetUserListClearRankingStart6_next(nullptr);
        Info::CPvpUserRankingTargetUserListClearRankingStart6_clbk CPvpUserRankingTargetUserListClearRankingStart6_user(nullptr);
        
        Info::CPvpUserRankingTargetUserListGetAddedTotalCnt8_ptr CPvpUserRankingTargetUserListGetAddedTotalCnt8_next(nullptr);
        Info::CPvpUserRankingTargetUserListGetAddedTotalCnt8_clbk CPvpUserRankingTargetUserListGetAddedTotalCnt8_user(nullptr);
        
        Info::CPvpUserRankingTargetUserListUpdateCharGrade10_ptr CPvpUserRankingTargetUserListUpdateCharGrade10_next(nullptr);
        Info::CPvpUserRankingTargetUserListUpdateCharGrade10_clbk CPvpUserRankingTargetUserListUpdateCharGrade10_user(nullptr);
        
        Info::CPvpUserRankingTargetUserListUpdateRaceRankStep1112_ptr CPvpUserRankingTargetUserListUpdateRaceRankStep1112_next(nullptr);
        Info::CPvpUserRankingTargetUserListUpdateRaceRankStep1112_clbk CPvpUserRankingTargetUserListUpdateRaceRankStep1112_user(nullptr);
        
        Info::CPvpUserRankingTargetUserListassign14_ptr CPvpUserRankingTargetUserListassign14_next(nullptr);
        Info::CPvpUserRankingTargetUserListassign14_clbk CPvpUserRankingTargetUserListassign14_user(nullptr);
        
        
        Info::CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_ptr CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_next(nullptr);
        Info::CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_clbk CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_user(nullptr);
        
        void CPvpUserRankingTargetUserListAdd2_wrapper(struct CPvpUserRankingTargetUserList* _this, unsigned int dwSerial, char byLv, char byRace)
        {
           CPvpUserRankingTargetUserListAdd2_user(_this, dwSerial, byLv, byRace, CPvpUserRankingTargetUserListAdd2_next);
        };
        
        void CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_wrapper(struct CPvpUserRankingTargetUserList* _this)
        {
           CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_user(_this, CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_next);
        };
        void CPvpUserRankingTargetUserListClearRankingStart6_wrapper(struct CPvpUserRankingTargetUserList* _this)
        {
           CPvpUserRankingTargetUserListClearRankingStart6_user(_this, CPvpUserRankingTargetUserListClearRankingStart6_next);
        };
        unsigned int CPvpUserRankingTargetUserListGetAddedTotalCnt8_wrapper(struct CPvpUserRankingTargetUserList* _this)
        {
           return CPvpUserRankingTargetUserListGetAddedTotalCnt8_user(_this, CPvpUserRankingTargetUserListGetAddedTotalCnt8_next);
        };
        void CPvpUserRankingTargetUserListUpdateCharGrade10_wrapper(struct CPvpUserRankingTargetUserList* _this)
        {
           CPvpUserRankingTargetUserListUpdateCharGrade10_user(_this, CPvpUserRankingTargetUserListUpdateCharGrade10_next);
        };
        char CPvpUserRankingTargetUserListUpdateRaceRankStep1112_wrapper(struct CPvpUserRankingTargetUserList* _this, char* szData)
        {
           return CPvpUserRankingTargetUserListUpdateRaceRankStep1112_user(_this, szData, CPvpUserRankingTargetUserListUpdateRaceRankStep1112_next);
        };
        bool CPvpUserRankingTargetUserListassign14_wrapper(struct CPvpUserRankingTargetUserList* _this)
        {
           return CPvpUserRankingTargetUserListassign14_user(_this, CPvpUserRankingTargetUserListassign14_next);
        };
        
        void CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_wrapper(struct CPvpUserRankingTargetUserList* _this)
        {
           CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_user(_this, CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_next);
        };
        
        ::std::array<hook_record, 8> CPvpUserRankingTargetUserList_functions = 
        {
            _hook_record {
                (LPVOID)0x140336280L,
                (LPVOID *)&CPvpUserRankingTargetUserListAdd2_user,
                (LPVOID *)&CPvpUserRankingTargetUserListAdd2_next,
                (LPVOID)cast_pointer_function(CPvpUserRankingTargetUserListAdd2_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpUserRankingTargetUserList::*)(unsigned int, char, char))&CPvpUserRankingTargetUserList::Add)
            },
            _hook_record {
                (LPVOID)0x140344240L,
                (LPVOID *)&CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_user,
                (LPVOID *)&CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_next,
                (LPVOID)cast_pointer_function(CPvpUserRankingTargetUserListctor_CPvpUserRankingTargetUserList4_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpUserRankingTargetUserList::*)())&CPvpUserRankingTargetUserList::ctor_CPvpUserRankingTargetUserList)
            },
            _hook_record {
                (LPVOID)0x140336050L,
                (LPVOID *)&CPvpUserRankingTargetUserListClearRankingStart6_user,
                (LPVOID *)&CPvpUserRankingTargetUserListClearRankingStart6_next,
                (LPVOID)cast_pointer_function(CPvpUserRankingTargetUserListClearRankingStart6_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpUserRankingTargetUserList::*)())&CPvpUserRankingTargetUserList::ClearRankingStart)
            },
            _hook_record {
                (LPVOID)0x140344780L,
                (LPVOID *)&CPvpUserRankingTargetUserListGetAddedTotalCnt8_user,
                (LPVOID *)&CPvpUserRankingTargetUserListGetAddedTotalCnt8_next,
                (LPVOID)cast_pointer_function(CPvpUserRankingTargetUserListGetAddedTotalCnt8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPvpUserRankingTargetUserList::*)())&CPvpUserRankingTargetUserList::GetAddedTotalCnt)
            },
            _hook_record {
                (LPVOID)0x140336540L,
                (LPVOID *)&CPvpUserRankingTargetUserListUpdateCharGrade10_user,
                (LPVOID *)&CPvpUserRankingTargetUserListUpdateCharGrade10_next,
                (LPVOID)cast_pointer_function(CPvpUserRankingTargetUserListUpdateCharGrade10_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpUserRankingTargetUserList::*)())&CPvpUserRankingTargetUserList::UpdateCharGrade)
            },
            _hook_record {
                (LPVOID)0x140336390L,
                (LPVOID *)&CPvpUserRankingTargetUserListUpdateRaceRankStep1112_user,
                (LPVOID *)&CPvpUserRankingTargetUserListUpdateRaceRankStep1112_next,
                (LPVOID)cast_pointer_function(CPvpUserRankingTargetUserListUpdateRaceRankStep1112_wrapper),
                (LPVOID)cast_pointer_function((char(CPvpUserRankingTargetUserList::*)(char*))&CPvpUserRankingTargetUserList::UpdateRaceRankStep11)
            },
            _hook_record {
                (LPVOID)0x140335f70L,
                (LPVOID *)&CPvpUserRankingTargetUserListassign14_user,
                (LPVOID *)&CPvpUserRankingTargetUserListassign14_next,
                (LPVOID)cast_pointer_function(CPvpUserRankingTargetUserListassign14_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpUserRankingTargetUserList::*)())&CPvpUserRankingTargetUserList::assign)
            },
            _hook_record {
                (LPVOID)0x140335cf0L,
                (LPVOID *)&CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_user,
                (LPVOID *)&CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_next,
                (LPVOID)cast_pointer_function(CPvpUserRankingTargetUserListdtor_CPvpUserRankingTargetUserList16_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpUserRankingTargetUserList::*)())&CPvpUserRankingTargetUserList::dtor_CPvpUserRankingTargetUserList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
