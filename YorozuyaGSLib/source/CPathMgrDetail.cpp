#include <CPathMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPathMgrctor_CPathMgr2_ptr CPathMgrctor_CPathMgr2_next(nullptr);
        Info::CPathMgrctor_CPathMgr2_clbk CPathMgrctor_CPathMgr2_user(nullptr);
        
        Info::CPathMgrCopy4_ptr CPathMgrCopy4_next(nullptr);
        Info::CPathMgrCopy4_clbk CPathMgrCopy4_user(nullptr);
        
        Info::CPathMgrGetPathSize6_ptr CPathMgrGetPathSize6_next(nullptr);
        Info::CPathMgrGetPathSize6_clbk CPathMgrGetPathSize6_user(nullptr);
        
        Info::CPathMgrInit8_ptr CPathMgrInit8_next(nullptr);
        Info::CPathMgrInit8_clbk CPathMgrInit8_user(nullptr);
        
        Info::CPathMgrPopNextPath10_ptr CPathMgrPopNextPath10_next(nullptr);
        Info::CPathMgrPopNextPath10_clbk CPathMgrPopNextPath10_user(nullptr);
        
        Info::CPathMgrSearchPathA12_ptr CPathMgrSearchPathA12_next(nullptr);
        Info::CPathMgrSearchPathA12_clbk CPathMgrSearchPathA12_user(nullptr);
        
        
        Info::CPathMgrdtor_CPathMgr17_ptr CPathMgrdtor_CPathMgr17_next(nullptr);
        Info::CPathMgrdtor_CPathMgr17_clbk CPathMgrdtor_CPathMgr17_user(nullptr);
        
        
        void CPathMgrctor_CPathMgr2_wrapper(struct CPathMgr* _this)
        {
           CPathMgrctor_CPathMgr2_user(_this, CPathMgrctor_CPathMgr2_next);
        };
        void CPathMgrCopy4_wrapper(struct CPathMgr* _this, struct CPathMgr* pDst)
        {
           CPathMgrCopy4_user(_this, pDst, CPathMgrCopy4_next);
        };
        char CPathMgrGetPathSize6_wrapper(struct CPathMgr* _this)
        {
           return CPathMgrGetPathSize6_user(_this, CPathMgrGetPathSize6_next);
        };
        void CPathMgrInit8_wrapper(struct CPathMgr* _this)
        {
           CPathMgrInit8_user(_this, CPathMgrInit8_next);
        };
        int CPathMgrPopNextPath10_wrapper(struct CPathMgr* _this, float* pPos)
        {
           return CPathMgrPopNextPath10_user(_this, pPos, CPathMgrPopNextPath10_next);
        };
        int CPathMgrSearchPathA12_wrapper(struct CPathMgr* _this, struct CMonster* pMon, float* vTarPos, int bBackupRestore)
        {
           return CPathMgrSearchPathA12_user(_this, pMon, vTarPos, bBackupRestore, CPathMgrSearchPathA12_next);
        };
        
        void CPathMgrdtor_CPathMgr17_wrapper(struct CPathMgr* _this)
        {
           CPathMgrdtor_CPathMgr17_user(_this, CPathMgrdtor_CPathMgr17_next);
        };
        
        ::std::array<hook_record, 7> CPathMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1401559f0L,
                (LPVOID *)&CPathMgrctor_CPathMgr2_user,
                (LPVOID *)&CPathMgrctor_CPathMgr2_next,
                (LPVOID)cast_pointer_function(CPathMgrctor_CPathMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CPathMgr::*)())&CPathMgr::ctor_CPathMgr)
            },
            _hook_record {
                (LPVOID)0x140155bb0L,
                (LPVOID *)&CPathMgrCopy4_user,
                (LPVOID *)&CPathMgrCopy4_next,
                (LPVOID)cast_pointer_function(CPathMgrCopy4_wrapper),
                (LPVOID)cast_pointer_function((void(CPathMgr::*)(struct CPathMgr*))&CPathMgr::Copy)
            },
            _hook_record {
                (LPVOID)0x1401558b0L,
                (LPVOID *)&CPathMgrGetPathSize6_user,
                (LPVOID *)&CPathMgrGetPathSize6_next,
                (LPVOID)cast_pointer_function(CPathMgrGetPathSize6_wrapper),
                (LPVOID)cast_pointer_function((char(CPathMgr::*)())&CPathMgr::GetPathSize)
            },
            _hook_record {
                (LPVOID)0x140155ab0L,
                (LPVOID *)&CPathMgrInit8_user,
                (LPVOID *)&CPathMgrInit8_next,
                (LPVOID)cast_pointer_function(CPathMgrInit8_wrapper),
                (LPVOID)cast_pointer_function((void(CPathMgr::*)())&CPathMgr::Init)
            },
            _hook_record {
                (LPVOID)0x140155ae0L,
                (LPVOID *)&CPathMgrPopNextPath10_user,
                (LPVOID *)&CPathMgrPopNextPath10_next,
                (LPVOID)cast_pointer_function(CPathMgrPopNextPath10_wrapper),
                (LPVOID)cast_pointer_function((int(CPathMgr::*)(float*))&CPathMgr::PopNextPath)
            },
            _hook_record {
                (LPVOID)0x140155c90L,
                (LPVOID *)&CPathMgrSearchPathA12_user,
                (LPVOID *)&CPathMgrSearchPathA12_next,
                (LPVOID)cast_pointer_function(CPathMgrSearchPathA12_wrapper),
                (LPVOID)cast_pointer_function((int(CPathMgr::*)(struct CMonster*, float*, int))&CPathMgr::SearchPathA)
            },
            _hook_record {
                (LPVOID)0x140155a60L,
                (LPVOID *)&CPathMgrdtor_CPathMgr17_user,
                (LPVOID *)&CPathMgrdtor_CPathMgr17_next,
                (LPVOID)cast_pointer_function(CPathMgrdtor_CPathMgr17_wrapper),
                (LPVOID)cast_pointer_function((void(CPathMgr::*)())&CPathMgr::dtor_CPathMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
