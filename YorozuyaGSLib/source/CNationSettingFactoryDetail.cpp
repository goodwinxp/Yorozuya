#include <CNationSettingFactoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryctor_CNationSettingFactory2_ptr CNationSettingFactoryctor_CNationSettingFactory2_next(nullptr);
        Info::CNationSettingFactoryctor_CNationSettingFactory2_clbk CNationSettingFactoryctor_CNationSettingFactory2_user(nullptr);
        
        Info::CNationSettingFactoryGetKey4_ptr CNationSettingFactoryGetKey4_next(nullptr);
        Info::CNationSettingFactoryGetKey4_clbk CNationSettingFactoryGetKey4_user(nullptr);
        
        Info::CNationSettingFactoryIsExistCheat6_ptr CNationSettingFactoryIsExistCheat6_next(nullptr);
        Info::CNationSettingFactoryIsExistCheat6_clbk CNationSettingFactoryIsExistCheat6_user(nullptr);
        
        Info::CNationSettingFactoryIsNULL8_ptr CNationSettingFactoryIsNULL8_next(nullptr);
        Info::CNationSettingFactoryIsNULL8_clbk CNationSettingFactoryIsNULL8_user(nullptr);
        
        Info::CNationSettingFactoryRegistCheat10_ptr CNationSettingFactoryRegistCheat10_next(nullptr);
        Info::CNationSettingFactoryRegistCheat10_clbk CNationSettingFactoryRegistCheat10_user(nullptr);
        
        Info::CNationSettingFactoryRegistCheatEndRecord12_ptr CNationSettingFactoryRegistCheatEndRecord12_next(nullptr);
        Info::CNationSettingFactoryRegistCheatEndRecord12_clbk CNationSettingFactoryRegistCheatEndRecord12_user(nullptr);
        
        Info::CNationSettingFactoryRegistCheatTable14_ptr CNationSettingFactoryRegistCheatTable14_next(nullptr);
        Info::CNationSettingFactoryRegistCheatTable14_clbk CNationSettingFactoryRegistCheatTable14_user(nullptr);
        
        Info::CNationSettingFactoryRegistCheatTableOnlyInternal16_ptr CNationSettingFactoryRegistCheatTableOnlyInternal16_next(nullptr);
        Info::CNationSettingFactoryRegistCheatTableOnlyInternal16_clbk CNationSettingFactoryRegistCheatTableOnlyInternal16_user(nullptr);
        
        Info::CNationSettingFactoryRegistCheatTableUnion18_ptr CNationSettingFactoryRegistCheatTableUnion18_next(nullptr);
        Info::CNationSettingFactoryRegistCheatTableUnion18_clbk CNationSettingFactoryRegistCheatTableUnion18_user(nullptr);
        
        
        void CNationSettingFactoryctor_CNationSettingFactory2_wrapper(struct CNationSettingFactory* _this, int iType)
        {
           CNationSettingFactoryctor_CNationSettingFactory2_user(_this, iType, CNationSettingFactoryctor_CNationSettingFactory2_next);
        };
        int CNationSettingFactoryGetKey4_wrapper(struct CNationSettingFactory* _this)
        {
           return CNationSettingFactoryGetKey4_user(_this, CNationSettingFactoryGetKey4_next);
        };
        bool CNationSettingFactoryIsExistCheat6_wrapper(struct CNationSettingFactory* _this, char* szCheat, struct CNationSettingData* pkData)
        {
           return CNationSettingFactoryIsExistCheat6_user(_this, szCheat, pkData, CNationSettingFactoryIsExistCheat6_next);
        };
        bool CNationSettingFactoryIsNULL8_wrapper(struct CNationSettingFactory* _this)
        {
           return CNationSettingFactoryIsNULL8_user(_this, CNationSettingFactoryIsNULL8_next);
        };
        bool CNationSettingFactoryRegistCheat10_wrapper(struct CNationSettingFactory* _this, struct CNationSettingData* pkData, char* szCheat, bool (WINAPIV* pCheatCommandFn)(struct CPlayer*), int iUseDegree, int iMgrDegree)
        {
           return CNationSettingFactoryRegistCheat10_user(_this, pkData, szCheat, pCheatCommandFn, iUseDegree, iMgrDegree, CNationSettingFactoryRegistCheat10_next);
        };
        void CNationSettingFactoryRegistCheatEndRecord12_wrapper(struct CNationSettingFactory* _this, struct CNationSettingData* pkData)
        {
           CNationSettingFactoryRegistCheatEndRecord12_user(_this, pkData, CNationSettingFactoryRegistCheatEndRecord12_next);
        };
        bool CNationSettingFactoryRegistCheatTable14_wrapper(struct CNationSettingFactory* _this, struct CNationSettingData* pkData)
        {
           return CNationSettingFactoryRegistCheatTable14_user(_this, pkData, CNationSettingFactoryRegistCheatTable14_next);
        };
        bool CNationSettingFactoryRegistCheatTableOnlyInternal16_wrapper(struct CNationSettingFactory* _this, struct CNationSettingData* pkData)
        {
           return CNationSettingFactoryRegistCheatTableOnlyInternal16_user(_this, pkData, CNationSettingFactoryRegistCheatTableOnlyInternal16_next);
        };
        bool CNationSettingFactoryRegistCheatTableUnion18_wrapper(struct CNationSettingFactory* _this, struct CNationSettingData* pkData)
        {
           return CNationSettingFactoryRegistCheatTableUnion18_user(_this, pkData, CNationSettingFactoryRegistCheatTableUnion18_next);
        };
        
        ::std::array<hook_record, 9> CNationSettingFactory_functions = 
        {
            _hook_record {
                (LPVOID)0x1402194e0L,
                (LPVOID *)&CNationSettingFactoryctor_CNationSettingFactory2_user,
                (LPVOID *)&CNationSettingFactoryctor_CNationSettingFactory2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryctor_CNationSettingFactory2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactory::*)(int))&CNationSettingFactory::ctor_CNationSettingFactory)
            },
            _hook_record {
                (LPVOID)0x14021af50L,
                (LPVOID *)&CNationSettingFactoryGetKey4_user,
                (LPVOID *)&CNationSettingFactoryGetKey4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryGetKey4_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingFactory::*)())&CNationSettingFactory::GetKey)
            },
            _hook_record {
                (LPVOID)0x140217450L,
                (LPVOID *)&CNationSettingFactoryIsExistCheat6_user,
                (LPVOID *)&CNationSettingFactoryIsExistCheat6_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryIsExistCheat6_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingFactory::*)(char*, struct CNationSettingData*))&CNationSettingFactory::IsExistCheat)
            },
            _hook_record {
                (LPVOID)0x14021af70L,
                (LPVOID *)&CNationSettingFactoryIsNULL8_user,
                (LPVOID *)&CNationSettingFactoryIsNULL8_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryIsNULL8_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingFactory::*)())&CNationSettingFactory::IsNULL)
            },
            _hook_record {
                (LPVOID)0x1402171c0L,
                (LPVOID *)&CNationSettingFactoryRegistCheat10_user,
                (LPVOID *)&CNationSettingFactoryRegistCheat10_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryRegistCheat10_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingFactory::*)(struct CNationSettingData*, char*, bool (WINAPIV*)(struct CPlayer*), int, int))&CNationSettingFactory::RegistCheat)
            },
            _hook_record {
                (LPVOID)0x140217710L,
                (LPVOID *)&CNationSettingFactoryRegistCheatEndRecord12_user,
                (LPVOID *)&CNationSettingFactoryRegistCheatEndRecord12_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryRegistCheatEndRecord12_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactory::*)(struct CNationSettingData*))&CNationSettingFactory::RegistCheatEndRecord)
            },
            _hook_record {
                (LPVOID)0x140213530L,
                (LPVOID *)&CNationSettingFactoryRegistCheatTable14_user,
                (LPVOID *)&CNationSettingFactoryRegistCheatTable14_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryRegistCheatTable14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingFactory::*)(struct CNationSettingData*))&CNationSettingFactory::RegistCheatTable)
            },
            _hook_record {
                (LPVOID)0x1402168b0L,
                (LPVOID *)&CNationSettingFactoryRegistCheatTableOnlyInternal16_user,
                (LPVOID *)&CNationSettingFactoryRegistCheatTableOnlyInternal16_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryRegistCheatTableOnlyInternal16_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingFactory::*)(struct CNationSettingData*))&CNationSettingFactory::RegistCheatTableOnlyInternal)
            },
            _hook_record {
                (LPVOID)0x1402135b0L,
                (LPVOID *)&CNationSettingFactoryRegistCheatTableUnion18_user,
                (LPVOID *)&CNationSettingFactoryRegistCheatTableUnion18_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryRegistCheatTableUnion18_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingFactory::*)(struct CNationSettingData*))&CNationSettingFactory::RegistCheatTableUnion)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
