#include <CMonsterEventSetDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMonsterEventSetctor_CMonsterEventSet2_ptr CMonsterEventSetctor_CMonsterEventSet2_next(nullptr);
        Info::CMonsterEventSetctor_CMonsterEventSet2_clbk CMonsterEventSetctor_CMonsterEventSet2_user(nullptr);
        
        Info::CMonsterEventSetCheckEventSetRespawn4_ptr CMonsterEventSetCheckEventSetRespawn4_next(nullptr);
        Info::CMonsterEventSetCheckEventSetRespawn4_clbk CMonsterEventSetCheckEventSetRespawn4_user(nullptr);
        
        Info::CMonsterEventSetGetEmptyEventSet6_ptr CMonsterEventSetGetEmptyEventSet6_next(nullptr);
        Info::CMonsterEventSetGetEmptyEventSet6_clbk CMonsterEventSetGetEmptyEventSet6_user(nullptr);
        
        Info::CMonsterEventSetGetEvenSetLooting8_ptr CMonsterEventSetGetEvenSetLooting8_next(nullptr);
        Info::CMonsterEventSetGetEvenSetLooting8_clbk CMonsterEventSetGetEvenSetLooting8_user(nullptr);
        
        Info::CMonsterEventSetGetMonsterSet10_ptr CMonsterEventSetGetMonsterSet10_next(nullptr);
        Info::CMonsterEventSetGetMonsterSet10_clbk CMonsterEventSetGetMonsterSet10_user(nullptr);
        
        Info::CMonsterEventSetIsINIFileChanged12_ptr CMonsterEventSetIsINIFileChanged12_next(nullptr);
        Info::CMonsterEventSetIsINIFileChanged12_clbk CMonsterEventSetIsINIFileChanged12_user(nullptr);
        
        Info::CMonsterEventSetLoadEventSet14_ptr CMonsterEventSetLoadEventSet14_next(nullptr);
        Info::CMonsterEventSetLoadEventSet14_clbk CMonsterEventSetLoadEventSet14_user(nullptr);
        
        Info::CMonsterEventSetLoadEventSetLooting16_ptr CMonsterEventSetLoadEventSetLooting16_next(nullptr);
        Info::CMonsterEventSetLoadEventSetLooting16_clbk CMonsterEventSetLoadEventSetLooting16_user(nullptr);
        
        Info::CMonsterEventSetStartEventSet18_ptr CMonsterEventSetStartEventSet18_next(nullptr);
        Info::CMonsterEventSetStartEventSet18_clbk CMonsterEventSetStartEventSet18_user(nullptr);
        
        Info::CMonsterEventSetStopEventSet20_ptr CMonsterEventSetStopEventSet20_next(nullptr);
        Info::CMonsterEventSetStopEventSet20_clbk CMonsterEventSetStopEventSet20_user(nullptr);
        
        
        Info::CMonsterEventSetdtor_CMonsterEventSet25_ptr CMonsterEventSetdtor_CMonsterEventSet25_next(nullptr);
        Info::CMonsterEventSetdtor_CMonsterEventSet25_clbk CMonsterEventSetdtor_CMonsterEventSet25_user(nullptr);
        
        
        void CMonsterEventSetctor_CMonsterEventSet2_wrapper(struct CMonsterEventSet* _this)
        {
           CMonsterEventSetctor_CMonsterEventSet2_user(_this, CMonsterEventSetctor_CMonsterEventSet2_next);
        };
        void CMonsterEventSetCheckEventSetRespawn4_wrapper(struct CMonsterEventSet* _this)
        {
           CMonsterEventSetCheckEventSetRespawn4_user(_this, CMonsterEventSetCheckEventSetRespawn4_next);
        };
        struct _event_set* CMonsterEventSetGetEmptyEventSet6_wrapper(struct CMonsterEventSet* _this)
        {
           return CMonsterEventSetGetEmptyEventSet6_user(_this, CMonsterEventSetGetEmptyEventSet6_next);
        };
        struct _event_set_looting* CMonsterEventSetGetEvenSetLooting8_wrapper(struct CMonsterEventSet* _this, char* pszCode)
        {
           return CMonsterEventSetGetEvenSetLooting8_user(_this, pszCode, CMonsterEventSetGetEvenSetLooting8_next);
        };
        struct _event_set::_monster_set* CMonsterEventSetGetMonsterSet10_wrapper(struct CMonsterEventSet* _this, struct _event_set* pEventSet)
        {
           return CMonsterEventSetGetMonsterSet10_user(_this, pEventSet, CMonsterEventSetGetMonsterSet10_next);
        };
        bool CMonsterEventSetIsINIFileChanged12_wrapper(struct CMonsterEventSet* _this, char* pszFileName, struct _FILETIME ftCurr)
        {
           return CMonsterEventSetIsINIFileChanged12_user(_this, pszFileName, ftCurr, CMonsterEventSetIsINIFileChanged12_next);
        };
        bool CMonsterEventSetLoadEventSet14_wrapper(struct CMonsterEventSet* _this, char* pwszErrCode)
        {
           return CMonsterEventSetLoadEventSet14_user(_this, pwszErrCode, CMonsterEventSetLoadEventSet14_next);
        };
        bool CMonsterEventSetLoadEventSetLooting16_wrapper(struct CMonsterEventSet* _this)
        {
           return CMonsterEventSetLoadEventSetLooting16_user(_this, CMonsterEventSetLoadEventSetLooting16_next);
        };
        bool CMonsterEventSetStartEventSet18_wrapper(struct CMonsterEventSet* _this, char* pszEventCode, char* pwszErrCode, struct CPlayer* pOne)
        {
           return CMonsterEventSetStartEventSet18_user(_this, pszEventCode, pwszErrCode, pOne, CMonsterEventSetStartEventSet18_next);
        };
        bool CMonsterEventSetStopEventSet20_wrapper(struct CMonsterEventSet* _this, char* pszEventCode, char* pwszErrCode)
        {
           return CMonsterEventSetStopEventSet20_user(_this, pszEventCode, pwszErrCode, CMonsterEventSetStopEventSet20_next);
        };
        
        void CMonsterEventSetdtor_CMonsterEventSet25_wrapper(struct CMonsterEventSet* _this)
        {
           CMonsterEventSetdtor_CMonsterEventSet25_user(_this, CMonsterEventSetdtor_CMonsterEventSet25_next);
        };
        
        ::std::array<hook_record, 11> CMonsterEventSet_functions = 
        {
            _hook_record {
                (LPVOID)0x1402a7920L,
                (LPVOID *)&CMonsterEventSetctor_CMonsterEventSet2_user,
                (LPVOID *)&CMonsterEventSetctor_CMonsterEventSet2_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetctor_CMonsterEventSet2_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterEventSet::*)())&CMonsterEventSet::ctor_CMonsterEventSet)
            },
            _hook_record {
                (LPVOID)0x1402a8a90L,
                (LPVOID *)&CMonsterEventSetCheckEventSetRespawn4_user,
                (LPVOID *)&CMonsterEventSetCheckEventSetRespawn4_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetCheckEventSetRespawn4_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterEventSet::*)())&CMonsterEventSet::CheckEventSetRespawn)
            },
            _hook_record {
                (LPVOID)0x1402a8fa0L,
                (LPVOID *)&CMonsterEventSetGetEmptyEventSet6_user,
                (LPVOID *)&CMonsterEventSetGetEmptyEventSet6_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetGetEmptyEventSet6_wrapper),
                (LPVOID)cast_pointer_function((struct _event_set*(CMonsterEventSet::*)())&CMonsterEventSet::GetEmptyEventSet)
            },
            _hook_record {
                (LPVOID)0x1402a90b0L,
                (LPVOID *)&CMonsterEventSetGetEvenSetLooting8_user,
                (LPVOID *)&CMonsterEventSetGetEvenSetLooting8_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetGetEvenSetLooting8_wrapper),
                (LPVOID)cast_pointer_function((struct _event_set_looting*(CMonsterEventSet::*)(char*))&CMonsterEventSet::GetEvenSetLooting)
            },
            _hook_record {
                (LPVOID)0x1402a9030L,
                (LPVOID *)&CMonsterEventSetGetMonsterSet10_user,
                (LPVOID *)&CMonsterEventSetGetMonsterSet10_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetGetMonsterSet10_wrapper),
                (LPVOID)cast_pointer_function((struct _event_set::_monster_set*(CMonsterEventSet::*)(struct _event_set*))&CMonsterEventSet::GetMonsterSet)
            },
            _hook_record {
                (LPVOID)0x1402a9150L,
                (LPVOID *)&CMonsterEventSetIsINIFileChanged12_user,
                (LPVOID *)&CMonsterEventSetIsINIFileChanged12_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetIsINIFileChanged12_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)(char*, struct _FILETIME))&CMonsterEventSet::IsINIFileChanged)
            },
            _hook_record {
                (LPVOID)0x1402a79e0L,
                (LPVOID *)&CMonsterEventSetLoadEventSet14_user,
                (LPVOID *)&CMonsterEventSetLoadEventSet14_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetLoadEventSet14_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)(char*))&CMonsterEventSet::LoadEventSet)
            },
            _hook_record {
                (LPVOID)0x1402a91e0L,
                (LPVOID *)&CMonsterEventSetLoadEventSetLooting16_user,
                (LPVOID *)&CMonsterEventSetLoadEventSetLooting16_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetLoadEventSetLooting16_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)())&CMonsterEventSet::LoadEventSetLooting)
            },
            _hook_record {
                (LPVOID)0x1402a8210L,
                (LPVOID *)&CMonsterEventSetStartEventSet18_user,
                (LPVOID *)&CMonsterEventSetStartEventSet18_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetStartEventSet18_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)(char*, char*, struct CPlayer*))&CMonsterEventSet::StartEventSet)
            },
            _hook_record {
                (LPVOID)0x1402a8870L,
                (LPVOID *)&CMonsterEventSetStopEventSet20_user,
                (LPVOID *)&CMonsterEventSetStopEventSet20_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetStopEventSet20_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)(char*, char*))&CMonsterEventSet::StopEventSet)
            },
            _hook_record {
                (LPVOID)0x1402a79c0L,
                (LPVOID *)&CMonsterEventSetdtor_CMonsterEventSet25_user,
                (LPVOID *)&CMonsterEventSetdtor_CMonsterEventSet25_next,
                (LPVOID)cast_pointer_function(CMonsterEventSetdtor_CMonsterEventSet25_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterEventSet::*)())&CMonsterEventSet::dtor_CMonsterEventSet)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
