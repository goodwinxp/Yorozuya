#include <CMonsterEventRespawnDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMonsterEventRespawnctor_CMonsterEventRespawn2_ptr CMonsterEventRespawnctor_CMonsterEventRespawn2_next(nullptr);
        Info::CMonsterEventRespawnctor_CMonsterEventRespawn2_clbk CMonsterEventRespawnctor_CMonsterEventRespawn2_user(nullptr);
        
        Info::CMonsterEventRespawnCheckRespawnEvent4_ptr CMonsterEventRespawnCheckRespawnEvent4_next(nullptr);
        Info::CMonsterEventRespawnCheckRespawnEvent4_clbk CMonsterEventRespawnCheckRespawnEvent4_user(nullptr);
        
        Info::CMonsterEventRespawnSetEventRespawn6_ptr CMonsterEventRespawnSetEventRespawn6_next(nullptr);
        Info::CMonsterEventRespawnSetEventRespawn6_clbk CMonsterEventRespawnSetEventRespawn6_user(nullptr);
        
        Info::CMonsterEventRespawnStartRespawnEvent8_ptr CMonsterEventRespawnStartRespawnEvent8_next(nullptr);
        Info::CMonsterEventRespawnStartRespawnEvent8_clbk CMonsterEventRespawnStartRespawnEvent8_user(nullptr);
        
        Info::CMonsterEventRespawnStopRespawnEvent10_ptr CMonsterEventRespawnStopRespawnEvent10_next(nullptr);
        Info::CMonsterEventRespawnStopRespawnEvent10_clbk CMonsterEventRespawnStopRespawnEvent10_user(nullptr);
        
        
        Info::CMonsterEventRespawndtor_CMonsterEventRespawn15_ptr CMonsterEventRespawndtor_CMonsterEventRespawn15_next(nullptr);
        Info::CMonsterEventRespawndtor_CMonsterEventRespawn15_clbk CMonsterEventRespawndtor_CMonsterEventRespawn15_user(nullptr);
        
        
        void CMonsterEventRespawnctor_CMonsterEventRespawn2_wrapper(struct CMonsterEventRespawn* _this)
        {
           CMonsterEventRespawnctor_CMonsterEventRespawn2_user(_this, CMonsterEventRespawnctor_CMonsterEventRespawn2_next);
        };
        void CMonsterEventRespawnCheckRespawnEvent4_wrapper(struct CMonsterEventRespawn* _this)
        {
           CMonsterEventRespawnCheckRespawnEvent4_user(_this, CMonsterEventRespawnCheckRespawnEvent4_next);
        };
        bool CMonsterEventRespawnSetEventRespawn6_wrapper(struct CMonsterEventRespawn* _this)
        {
           return CMonsterEventRespawnSetEventRespawn6_user(_this, CMonsterEventRespawnSetEventRespawn6_next);
        };
        bool CMonsterEventRespawnStartRespawnEvent8_wrapper(struct CMonsterEventRespawn* _this, char* pszEventCode, char* pwszErrCode)
        {
           return CMonsterEventRespawnStartRespawnEvent8_user(_this, pszEventCode, pwszErrCode, CMonsterEventRespawnStartRespawnEvent8_next);
        };
        bool CMonsterEventRespawnStopRespawnEvent10_wrapper(struct CMonsterEventRespawn* _this, char* pszEventCode, char* pwszErrCode)
        {
           return CMonsterEventRespawnStopRespawnEvent10_user(_this, pszEventCode, pwszErrCode, CMonsterEventRespawnStopRespawnEvent10_next);
        };
        
        void CMonsterEventRespawndtor_CMonsterEventRespawn15_wrapper(struct CMonsterEventRespawn* _this)
        {
           CMonsterEventRespawndtor_CMonsterEventRespawn15_user(_this, CMonsterEventRespawndtor_CMonsterEventRespawn15_next);
        };
        
        ::std::array<hook_record, 6> CMonsterEventRespawn_functions = 
        {
            _hook_record {
                (LPVOID)0x1402a5d40L,
                (LPVOID *)&CMonsterEventRespawnctor_CMonsterEventRespawn2_user,
                (LPVOID *)&CMonsterEventRespawnctor_CMonsterEventRespawn2_next,
                (LPVOID)cast_pointer_function(CMonsterEventRespawnctor_CMonsterEventRespawn2_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterEventRespawn::*)())&CMonsterEventRespawn::ctor_CMonsterEventRespawn)
            },
            _hook_record {
                (LPVOID)0x1402a6fe0L,
                (LPVOID *)&CMonsterEventRespawnCheckRespawnEvent4_user,
                (LPVOID *)&CMonsterEventRespawnCheckRespawnEvent4_next,
                (LPVOID)cast_pointer_function(CMonsterEventRespawnCheckRespawnEvent4_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterEventRespawn::*)())&CMonsterEventRespawn::CheckRespawnEvent)
            },
            _hook_record {
                (LPVOID)0x1402a5de0L,
                (LPVOID *)&CMonsterEventRespawnSetEventRespawn6_user,
                (LPVOID *)&CMonsterEventRespawnSetEventRespawn6_next,
                (LPVOID)cast_pointer_function(CMonsterEventRespawnSetEventRespawn6_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterEventRespawn::*)())&CMonsterEventRespawn::SetEventRespawn)
            },
            _hook_record {
                (LPVOID)0x1402a6b90L,
                (LPVOID *)&CMonsterEventRespawnStartRespawnEvent8_user,
                (LPVOID *)&CMonsterEventRespawnStartRespawnEvent8_next,
                (LPVOID)cast_pointer_function(CMonsterEventRespawnStartRespawnEvent8_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterEventRespawn::*)(char*, char*))&CMonsterEventRespawn::StartRespawnEvent)
            },
            _hook_record {
                (LPVOID)0x1402a6e50L,
                (LPVOID *)&CMonsterEventRespawnStopRespawnEvent10_user,
                (LPVOID *)&CMonsterEventRespawnStopRespawnEvent10_next,
                (LPVOID)cast_pointer_function(CMonsterEventRespawnStopRespawnEvent10_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonsterEventRespawn::*)(char*, char*))&CMonsterEventRespawn::StopRespawnEvent)
            },
            _hook_record {
                (LPVOID)0x1402a5dc0L,
                (LPVOID *)&CMonsterEventRespawndtor_CMonsterEventRespawn15_user,
                (LPVOID *)&CMonsterEventRespawndtor_CMonsterEventRespawn15_next,
                (LPVOID)cast_pointer_function(CMonsterEventRespawndtor_CMonsterEventRespawn15_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterEventRespawn::*)())&CMonsterEventRespawn::dtor_CMonsterEventRespawn)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
