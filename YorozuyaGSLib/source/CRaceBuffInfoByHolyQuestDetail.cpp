#include <CRaceBuffInfoByHolyQuestDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CRaceBuffInfoByHolyQuestApply2_ptr CRaceBuffInfoByHolyQuestApply2_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestApply2_clbk CRaceBuffInfoByHolyQuestApply2_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestApplyEffect4_ptr CRaceBuffInfoByHolyQuestApplyEffect4_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestApplyEffect4_clbk CRaceBuffInfoByHolyQuestApplyEffect4_user(nullptr);
        
        
        Info::CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_ptr CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_clbk CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestCreate8_ptr CRaceBuffInfoByHolyQuestCreate8_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestCreate8_clbk CRaceBuffInfoByHolyQuestCreate8_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestCreateComplete10_ptr CRaceBuffInfoByHolyQuestCreateComplete10_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestCreateComplete10_clbk CRaceBuffInfoByHolyQuestCreateComplete10_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_ptr CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_clbk CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_ptr CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_clbk CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_ptr CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_clbk CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestNotifySetBuff18_ptr CRaceBuffInfoByHolyQuestNotifySetBuff18_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestNotifySetBuff18_clbk CRaceBuffInfoByHolyQuestNotifySetBuff18_user(nullptr);
        
        Info::CRaceBuffInfoByHolyQuestRelease20_ptr CRaceBuffInfoByHolyQuestRelease20_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestRelease20_clbk CRaceBuffInfoByHolyQuestRelease20_user(nullptr);
        
        
        Info::CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_ptr CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_next(nullptr);
        Info::CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_clbk CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_user(nullptr);
        
        bool CRaceBuffInfoByHolyQuestApply2_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestApply2_user(_this, pkDest, CRaceBuffInfoByHolyQuestApply2_next);
        };
        bool CRaceBuffInfoByHolyQuestApplyEffect4_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest, bool bAdd)
        {
           return CRaceBuffInfoByHolyQuestApplyEffect4_user(_this, pkDest, bAdd, CRaceBuffInfoByHolyQuestApplyEffect4_next);
        };
        
        void CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct _skill_fld* pFld, char byLv)
        {
           CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_user(_this, pFld, byLv, CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_next);
        };
        struct CRaceBuffInfoByHolyQuest* CRaceBuffInfoByHolyQuestCreate8_wrapper(unsigned int uiNTh, char* szItemName)
        {
           return CRaceBuffInfoByHolyQuestCreate8_user(uiNTh, szItemName, CRaceBuffInfoByHolyQuestCreate8_next);
        };
        bool CRaceBuffInfoByHolyQuestCreateComplete10_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestCreateComplete10_user(_this, pkDest, CRaceBuffInfoByHolyQuestCreateComplete10_next);
        };
        bool CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_wrapper(unsigned int uiTh, char* szItemName, struct _skill_fld** ppFld, char* byLv)
        {
           return CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_user(uiTh, szItemName, ppFld, byLv, CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_next);
        };
        void CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_wrapper(struct CRaceBuffInfoByHolyQuest* _this, uint16_t wUserInx)
        {
           CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_user(_this, wUserInx, CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_next);
        };
        void CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_wrapper(struct CRaceBuffInfoByHolyQuest* _this, uint16_t wUserInx)
        {
           CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_user(_this, wUserInx, CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_next);
        };
        void CRaceBuffInfoByHolyQuestNotifySetBuff18_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest)
        {
           CRaceBuffInfoByHolyQuestNotifySetBuff18_user(_this, pkDest, CRaceBuffInfoByHolyQuestNotifySetBuff18_next);
        };
        bool CRaceBuffInfoByHolyQuestRelease20_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestRelease20_user(_this, pkDest, CRaceBuffInfoByHolyQuestRelease20_next);
        };
        
        void CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_wrapper(struct CRaceBuffInfoByHolyQuest* _this)
        {
           CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_user(_this, CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_next);
        };
        
        ::std::array<hook_record, 11> CRaceBuffInfoByHolyQuest_functions = 
        {
            _hook_record {
                (LPVOID)0x1403b4080L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestApply2_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestApply2_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestApply2_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*))&CRaceBuffInfoByHolyQuest::Apply)
            },
            _hook_record {
                (LPVOID)0x1403b4160L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestApplyEffect4_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestApplyEffect4_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestApplyEffect4_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*, bool))&CRaceBuffInfoByHolyQuest::ApplyEffect)
            },
            _hook_record {
                (LPVOID)0x1403b3ea0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)(struct _skill_fld*, char))&CRaceBuffInfoByHolyQuest::ctor_CRaceBuffInfoByHolyQuest)
            },
            _hook_record {
                (LPVOID)0x1403b3ee0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestCreate8_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestCreate8_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestCreate8_wrapper),
                (LPVOID)cast_pointer_function((struct CRaceBuffInfoByHolyQuest*(*)(unsigned int, char*))&CRaceBuffInfoByHolyQuest::Create)
            },
            _hook_record {
                (LPVOID)0x1403b4010L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestCreateComplete10_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestCreateComplete10_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestCreateComplete10_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*))&CRaceBuffInfoByHolyQuest::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403b44b0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(unsigned int, char*, struct _skill_fld**, char*))&CRaceBuffInfoByHolyQuest::LoadINISubProcLoadCode)
            },
            _hook_record {
                (LPVOID)0x1403b42d0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)(uint16_t))&CRaceBuffInfoByHolyQuest::NotifyLogInSetBuff)
            },
            _hook_record {
                (LPVOID)0x1403b4430L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)(uint16_t))&CRaceBuffInfoByHolyQuest::NotifyReleaseBuff)
            },
            _hook_record {
                (LPVOID)0x1403b4380L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestNotifySetBuff18_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestNotifySetBuff18_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestNotifySetBuff18_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*))&CRaceBuffInfoByHolyQuest::NotifySetBuff)
            },
            _hook_record {
                (LPVOID)0x1403b40f0L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestRelease20_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestRelease20_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestRelease20_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*))&CRaceBuffInfoByHolyQuest::Release)
            },
            _hook_record {
                (LPVOID)0x1403b7800L,
                (LPVOID *)&CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_user,
                (LPVOID *)&CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_next,
                (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)())&CRaceBuffInfoByHolyQuest::dtor_CRaceBuffInfoByHolyQuest)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
