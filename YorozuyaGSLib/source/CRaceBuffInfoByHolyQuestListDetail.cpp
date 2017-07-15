#include <CRaceBuffInfoByHolyQuestListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CRaceBuffInfoByHolyQuestListApply2_ptr CRaceBuffInfoByHolyQuestListApply2_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestListApply2_clbk CRaceBuffInfoByHolyQuestListApply2_user(nullptr);
        
        
        Info::CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_ptr CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_clbk CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestListCreateComplete6_ptr CRaceBuffInfoByHolyQuestListCreateComplete6_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestListCreateComplete6_clbk CRaceBuffInfoByHolyQuestListCreateComplete6_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestListGetMaxThCnt8_ptr CRaceBuffInfoByHolyQuestListGetMaxThCnt8_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestListGetMaxThCnt8_clbk CRaceBuffInfoByHolyQuestListGetMaxThCnt8_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestListInit10_ptr CRaceBuffInfoByHolyQuestListInit10_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestListInit10_clbk CRaceBuffInfoByHolyQuestListInit10_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestListRelease12_ptr CRaceBuffInfoByHolyQuestListRelease12_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestListRelease12_clbk CRaceBuffInfoByHolyQuestListRelease12_user(nullptr);
        
        
        Info::CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_ptr CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_clbk CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_user(nullptr);
        
        bool CRaceBuffInfoByHolyQuestListApply2_wrapper(struct CRaceBuffInfoByHolyQuestList* _this, unsigned int uiContinueCnt, int iResultType, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestListApply2_user(_this, uiContinueCnt, iResultType, pkDest, CRaceBuffInfoByHolyQuestListApply2_next);
        };
        
        void CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_wrapper(struct CRaceBuffInfoByHolyQuestList* _this)
        {
           CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_user(_this, CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_next);
        };
        bool CRaceBuffInfoByHolyQuestListCreateComplete6_wrapper(struct CRaceBuffInfoByHolyQuestList* _this, unsigned int uiContinueCnt, int iResultType, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestListCreateComplete6_user(_this, uiContinueCnt, iResultType, pkDest, CRaceBuffInfoByHolyQuestListCreateComplete6_next);
        };
        unsigned int CRaceBuffInfoByHolyQuestListGetMaxThCnt8_wrapper(struct CRaceBuffInfoByHolyQuestList* _this)
        {
           return CRaceBuffInfoByHolyQuestListGetMaxThCnt8_user(_this, CRaceBuffInfoByHolyQuestListGetMaxThCnt8_next);
        };
        bool CRaceBuffInfoByHolyQuestListInit10_wrapper(struct CRaceBuffInfoByHolyQuestList* _this)
        {
           return CRaceBuffInfoByHolyQuestListInit10_user(_this, CRaceBuffInfoByHolyQuestListInit10_next);
        };
        bool CRaceBuffInfoByHolyQuestListRelease12_wrapper(struct CRaceBuffInfoByHolyQuestList* _this, unsigned int uiContinueCnt, int iResultType, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestListRelease12_user(_this, uiContinueCnt, iResultType, pkDest, CRaceBuffInfoByHolyQuestListRelease12_next);
        };
        
        void CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_wrapper(struct CRaceBuffInfoByHolyQuestList* _this)
        {
           CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_user(_this, CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_next);
        };
        
        ::std::array<hook_record, 7> CRaceBuffInfoByHolyQuestList_functions = 
        {
            _hook_record {
                (LPVOID)0x1403b52b0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListApply2_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListApply2_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestListApply2_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuestList::*)(unsigned int, int, struct CPlayer*))&CRaceBuffInfoByHolyQuestList::Apply)
            },
            _hook_record {
                (LPVOID)0x1403b7c00L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestListctor_CRaceBuffInfoByHolyQuestList4_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuestList::*)())&CRaceBuffInfoByHolyQuestList::ctor_CRaceBuffInfoByHolyQuestList)
            },
            _hook_record {
                (LPVOID)0x1403b5230L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListCreateComplete6_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListCreateComplete6_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestListCreateComplete6_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuestList::*)(unsigned int, int, struct CPlayer*))&CRaceBuffInfoByHolyQuestList::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403b7d10L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListGetMaxThCnt8_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListGetMaxThCnt8_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestListGetMaxThCnt8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CRaceBuffInfoByHolyQuestList::*)())&CRaceBuffInfoByHolyQuestList::GetMaxThCnt)
            },
            _hook_record {
                (LPVOID)0x1403b5040L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListInit10_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListInit10_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestListInit10_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuestList::*)())&CRaceBuffInfoByHolyQuestList::Init)
            },
            _hook_record {
                (LPVOID)0x1403b5330L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListRelease12_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListRelease12_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestListRelease12_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuestList::*)(unsigned int, int, struct CPlayer*))&CRaceBuffInfoByHolyQuestList::Release)
            },
            _hook_record {
                (LPVOID)0x1403b4db0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestListdtor_CRaceBuffInfoByHolyQuestList14_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuestList::*)())&CRaceBuffInfoByHolyQuestList::dtor_CRaceBuffInfoByHolyQuestList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
