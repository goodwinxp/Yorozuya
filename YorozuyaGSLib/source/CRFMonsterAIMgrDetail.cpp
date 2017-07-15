#include <CRFMonsterAIMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRFMonsterAIMgrctor_CRFMonsterAIMgr2_ptr CRFMonsterAIMgrctor_CRFMonsterAIMgr2_next(nullptr);
        Info::CRFMonsterAIMgrctor_CRFMonsterAIMgr2_clbk CRFMonsterAIMgrctor_CRFMonsterAIMgr2_user(nullptr);
        
        Info::CRFMonsterAIMgrDestory4_ptr CRFMonsterAIMgrDestory4_next(nullptr);
        Info::CRFMonsterAIMgrDestory4_clbk CRFMonsterAIMgrDestory4_user(nullptr);
        
        Info::CRFMonsterAIMgrGetStateTBL6_ptr CRFMonsterAIMgrGetStateTBL6_next(nullptr);
        Info::CRFMonsterAIMgrGetStateTBL6_clbk CRFMonsterAIMgrGetStateTBL6_user(nullptr);
        
        Info::CRFMonsterAIMgrInstance8_ptr CRFMonsterAIMgrInstance8_next(nullptr);
        Info::CRFMonsterAIMgrInstance8_clbk CRFMonsterAIMgrInstance8_user(nullptr);
        
        
        Info::CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_ptr CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_next(nullptr);
        Info::CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_clbk CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_user(nullptr);
        
        
        void CRFMonsterAIMgrctor_CRFMonsterAIMgr2_wrapper(struct CRFMonsterAIMgr* _this)
        {
           CRFMonsterAIMgrctor_CRFMonsterAIMgr2_user(_this, CRFMonsterAIMgrctor_CRFMonsterAIMgr2_next);
        };
        void CRFMonsterAIMgrDestory4_wrapper()
        {
           CRFMonsterAIMgrDestory4_user(CRFMonsterAIMgrDestory4_next);
        };
        struct UsPoint* CRFMonsterAIMgrGetStateTBL6_wrapper(struct CRFMonsterAIMgr* _this, struct UsPoint* result, int nIndex)
        {
           return CRFMonsterAIMgrGetStateTBL6_user(_this, result, nIndex, CRFMonsterAIMgrGetStateTBL6_next);
        };
        struct CRFMonsterAIMgr* CRFMonsterAIMgrInstance8_wrapper()
        {
           return CRFMonsterAIMgrInstance8_user(CRFMonsterAIMgrInstance8_next);
        };
        
        void CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_wrapper(struct CRFMonsterAIMgr* _this)
        {
           CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_user(_this, CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_next);
        };
        
        ::std::array<hook_record, 5> CRFMonsterAIMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14014c1e0L,
                (LPVOID *)&CRFMonsterAIMgrctor_CRFMonsterAIMgr2_user,
                (LPVOID *)&CRFMonsterAIMgrctor_CRFMonsterAIMgr2_next,
                (LPVOID)cast_pointer_function(CRFMonsterAIMgrctor_CRFMonsterAIMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CRFMonsterAIMgr::*)())&CRFMonsterAIMgr::ctor_CRFMonsterAIMgr)
            },
            _hook_record {
                (LPVOID)0x140203300L,
                (LPVOID *)&CRFMonsterAIMgrDestory4_user,
                (LPVOID *)&CRFMonsterAIMgrDestory4_next,
                (LPVOID)cast_pointer_function(CRFMonsterAIMgrDestory4_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CRFMonsterAIMgr::Destory)
            },
            _hook_record {
                (LPVOID)0x14014c040L,
                (LPVOID *)&CRFMonsterAIMgrGetStateTBL6_user,
                (LPVOID *)&CRFMonsterAIMgrGetStateTBL6_next,
                (LPVOID)cast_pointer_function(CRFMonsterAIMgrGetStateTBL6_wrapper),
                (LPVOID)cast_pointer_function((struct UsPoint*(CRFMonsterAIMgr::*)(struct UsPoint*, int))&CRFMonsterAIMgr::GetStateTBL)
            },
            _hook_record {
                (LPVOID)0x14014c100L,
                (LPVOID *)&CRFMonsterAIMgrInstance8_user,
                (LPVOID *)&CRFMonsterAIMgrInstance8_next,
                (LPVOID)cast_pointer_function(CRFMonsterAIMgrInstance8_wrapper),
                (LPVOID)cast_pointer_function((struct CRFMonsterAIMgr*(*)())&CRFMonsterAIMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x140203400L,
                (LPVOID *)&CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_user,
                (LPVOID *)&CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_next,
                (LPVOID)cast_pointer_function(CRFMonsterAIMgrdtor_CRFMonsterAIMgr12_wrapper),
                (LPVOID)cast_pointer_function((void(CRFMonsterAIMgr::*)())&CRFMonsterAIMgr::dtor_CRFMonsterAIMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
