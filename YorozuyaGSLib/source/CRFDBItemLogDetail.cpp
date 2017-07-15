#include <CRFDBItemLogDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRFDBItemLogctor_CRFDBItemLog2_ptr CRFDBItemLogctor_CRFDBItemLog2_next(nullptr);
        Info::CRFDBItemLogctor_CRFDBItemLog2_clbk CRFDBItemLogctor_CRFDBItemLog2_user(nullptr);
        
        Info::CRFDBItemLogCreateTblLtd4_ptr CRFDBItemLogCreateTblLtd4_next(nullptr);
        Info::CRFDBItemLogCreateTblLtd4_clbk CRFDBItemLogCreateTblLtd4_user(nullptr);
        
        Info::CRFDBItemLogCreateTblLtd_Expend6_ptr CRFDBItemLogCreateTblLtd_Expend6_next(nullptr);
        Info::CRFDBItemLogCreateTblLtd_Expend6_clbk CRFDBItemLogCreateTblLtd_Expend6_user(nullptr);
        
        Info::CRFDBItemLogCreateTblLtd_ItemInfo8_ptr CRFDBItemLogCreateTblLtd_ItemInfo8_next(nullptr);
        Info::CRFDBItemLogCreateTblLtd_ItemInfo8_clbk CRFDBItemLogCreateTblLtd_ItemInfo8_user(nullptr);
        
        Info::CRFDBItemLogSetKorTime10_ptr CRFDBItemLogSetKorTime10_next(nullptr);
        Info::CRFDBItemLogSetKorTime10_clbk CRFDBItemLogSetKorTime10_user(nullptr);
        
        Info::CRFDBItemLoginsert_expend15_ptr CRFDBItemLoginsert_expend15_next(nullptr);
        Info::CRFDBItemLoginsert_expend15_clbk CRFDBItemLoginsert_expend15_user(nullptr);
        
        Info::CRFDBItemLoginsert_iteminfo17_ptr CRFDBItemLoginsert_iteminfo17_next(nullptr);
        Info::CRFDBItemLoginsert_iteminfo17_clbk CRFDBItemLoginsert_iteminfo17_user(nullptr);
        
        Info::CRFDBItemLoginsert_ltd19_ptr CRFDBItemLoginsert_ltd19_next(nullptr);
        Info::CRFDBItemLoginsert_ltd19_clbk CRFDBItemLoginsert_ltd19_user(nullptr);
        
        
        Info::CRFDBItemLogdtor_CRFDBItemLog21_ptr CRFDBItemLogdtor_CRFDBItemLog21_next(nullptr);
        Info::CRFDBItemLogdtor_CRFDBItemLog21_clbk CRFDBItemLogdtor_CRFDBItemLog21_user(nullptr);
        
        
        void CRFDBItemLogctor_CRFDBItemLog2_wrapper(struct CRFDBItemLog* _this, unsigned int dwLocalDate)
        {
           CRFDBItemLogctor_CRFDBItemLog2_user(_this, dwLocalDate, CRFDBItemLogctor_CRFDBItemLog2_next);
        };
        bool CRFDBItemLogCreateTblLtd4_wrapper(struct CRFDBItemLog* _this, int nKorTime)
        {
           return CRFDBItemLogCreateTblLtd4_user(_this, nKorTime, CRFDBItemLogCreateTblLtd4_next);
        };
        bool CRFDBItemLogCreateTblLtd_Expend6_wrapper(struct CRFDBItemLog* _this, int nKorTime)
        {
           return CRFDBItemLogCreateTblLtd_Expend6_user(_this, nKorTime, CRFDBItemLogCreateTblLtd_Expend6_next);
        };
        bool CRFDBItemLogCreateTblLtd_ItemInfo8_wrapper(struct CRFDBItemLog* _this, int nKorTime)
        {
           return CRFDBItemLogCreateTblLtd_ItemInfo8_user(_this, nKorTime, CRFDBItemLogCreateTblLtd_ItemInfo8_next);
        };
        void CRFDBItemLogSetKorTime10_wrapper(struct CRFDBItemLog* _this, unsigned int dwKorTime)
        {
           CRFDBItemLogSetKorTime10_user(_this, dwKorTime, CRFDBItemLogSetKorTime10_next);
        };
        bool CRFDBItemLoginsert_expend15_wrapper(struct CRFDBItemLog* _this, struct _LTD_EXPEND* pe)
        {
           return CRFDBItemLoginsert_expend15_user(_this, pe, CRFDBItemLoginsert_expend15_next);
        };
        bool CRFDBItemLoginsert_iteminfo17_wrapper(struct CRFDBItemLog* _this, struct _LTD_ITEMINFO* pi, char byIndex)
        {
           return CRFDBItemLoginsert_iteminfo17_user(_this, pi, byIndex, CRFDBItemLoginsert_iteminfo17_next);
        };
        bool CRFDBItemLoginsert_ltd19_wrapper(struct CRFDBItemLog* _this, struct _LTD* pl)
        {
           return CRFDBItemLoginsert_ltd19_user(_this, pl, CRFDBItemLoginsert_ltd19_next);
        };
        
        void CRFDBItemLogdtor_CRFDBItemLog21_wrapper(struct CRFDBItemLog* _this)
        {
           CRFDBItemLogdtor_CRFDBItemLog21_user(_this, CRFDBItemLogdtor_CRFDBItemLog21_next);
        };
        
        ::std::array<hook_record, 9> CRFDBItemLog_functions = 
        {
            _hook_record {
                (LPVOID)0x140485420L,
                (LPVOID *)&CRFDBItemLogctor_CRFDBItemLog2_user,
                (LPVOID *)&CRFDBItemLogctor_CRFDBItemLog2_next,
                (LPVOID)cast_pointer_function(CRFDBItemLogctor_CRFDBItemLog2_wrapper),
                (LPVOID)cast_pointer_function((void(CRFDBItemLog::*)(unsigned int))&CRFDBItemLog::ctor_CRFDBItemLog)
            },
            _hook_record {
                (LPVOID)0x140485500L,
                (LPVOID *)&CRFDBItemLogCreateTblLtd4_user,
                (LPVOID *)&CRFDBItemLogCreateTblLtd4_next,
                (LPVOID)cast_pointer_function(CRFDBItemLogCreateTblLtd4_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFDBItemLog::*)(int))&CRFDBItemLog::CreateTblLtd)
            },
            _hook_record {
                (LPVOID)0x140485730L,
                (LPVOID *)&CRFDBItemLogCreateTblLtd_Expend6_user,
                (LPVOID *)&CRFDBItemLogCreateTblLtd_Expend6_next,
                (LPVOID)cast_pointer_function(CRFDBItemLogCreateTblLtd_Expend6_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFDBItemLog::*)(int))&CRFDBItemLog::CreateTblLtd_Expend)
            },
            _hook_record {
                (LPVOID)0x140485630L,
                (LPVOID *)&CRFDBItemLogCreateTblLtd_ItemInfo8_user,
                (LPVOID *)&CRFDBItemLogCreateTblLtd_ItemInfo8_next,
                (LPVOID)cast_pointer_function(CRFDBItemLogCreateTblLtd_ItemInfo8_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFDBItemLog::*)(int))&CRFDBItemLog::CreateTblLtd_ItemInfo)
            },
            _hook_record {
                (LPVOID)0x14024bf20L,
                (LPVOID *)&CRFDBItemLogSetKorTime10_user,
                (LPVOID *)&CRFDBItemLogSetKorTime10_next,
                (LPVOID)cast_pointer_function(CRFDBItemLogSetKorTime10_wrapper),
                (LPVOID)cast_pointer_function((void(CRFDBItemLog::*)(unsigned int))&CRFDBItemLog::SetKorTime)
            },
            _hook_record {
                (LPVOID)0x140485b80L,
                (LPVOID *)&CRFDBItemLoginsert_expend15_user,
                (LPVOID *)&CRFDBItemLoginsert_expend15_next,
                (LPVOID)cast_pointer_function(CRFDBItemLoginsert_expend15_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFDBItemLog::*)(struct _LTD_EXPEND*))&CRFDBItemLog::insert_expend)
            },
            _hook_record {
                (LPVOID)0x1404859a0L,
                (LPVOID *)&CRFDBItemLoginsert_iteminfo17_user,
                (LPVOID *)&CRFDBItemLoginsert_iteminfo17_next,
                (LPVOID)cast_pointer_function(CRFDBItemLoginsert_iteminfo17_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFDBItemLog::*)(struct _LTD_ITEMINFO*, char))&CRFDBItemLog::insert_iteminfo)
            },
            _hook_record {
                (LPVOID)0x140485810L,
                (LPVOID *)&CRFDBItemLoginsert_ltd19_user,
                (LPVOID *)&CRFDBItemLoginsert_ltd19_next,
                (LPVOID)cast_pointer_function(CRFDBItemLoginsert_ltd19_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFDBItemLog::*)(struct _LTD*))&CRFDBItemLog::insert_ltd)
            },
            _hook_record {
                (LPVOID)0x1404854b0L,
                (LPVOID *)&CRFDBItemLogdtor_CRFDBItemLog21_user,
                (LPVOID *)&CRFDBItemLogdtor_CRFDBItemLog21_next,
                (LPVOID)cast_pointer_function(CRFDBItemLogdtor_CRFDBItemLog21_wrapper),
                (LPVOID)cast_pointer_function((void(CRFDBItemLog::*)())&CRFDBItemLog::dtor_CRFDBItemLog)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
