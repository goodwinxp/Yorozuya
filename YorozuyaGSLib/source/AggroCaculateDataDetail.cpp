#include <AggroCaculateDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AggroCaculateDatactor_AggroCaculateData2_ptr AggroCaculateDatactor_AggroCaculateData2_next(nullptr);
        Info::AggroCaculateDatactor_AggroCaculateData2_clbk AggroCaculateDatactor_AggroCaculateData2_user(nullptr);
        
        Info::AggroCaculateDataGetDefault4_ptr AggroCaculateDataGetDefault4_next(nullptr);
        Info::AggroCaculateDataGetDefault4_clbk AggroCaculateDataGetDefault4_user(nullptr);
        
        Info::AggroCaculateDataGetSize6_ptr AggroCaculateDataGetSize6_next(nullptr);
        Info::AggroCaculateDataGetSize6_clbk AggroCaculateDataGetSize6_user(nullptr);
        
        Info::AggroCaculateDataGetSpecialData8_ptr AggroCaculateDataGetSpecialData8_next(nullptr);
        Info::AggroCaculateDataGetSpecialData8_clbk AggroCaculateDataGetSpecialData8_user(nullptr);
        
        Info::AggroCaculateDataInit10_ptr AggroCaculateDataInit10_next(nullptr);
        Info::AggroCaculateDataInit10_clbk AggroCaculateDataInit10_user(nullptr);
        
        Info::AggroCaculateDataLoad12_ptr AggroCaculateDataLoad12_next(nullptr);
        Info::AggroCaculateDataLoad12_clbk AggroCaculateDataLoad12_user(nullptr);
        
        Info::AggroCaculateDataPushSpecialData14_ptr AggroCaculateDataPushSpecialData14_next(nullptr);
        Info::AggroCaculateDataPushSpecialData14_clbk AggroCaculateDataPushSpecialData14_user(nullptr);
        
        
        void AggroCaculateDatactor_AggroCaculateData2_wrapper(struct AggroCaculateData* _this)
        {
           AggroCaculateDatactor_AggroCaculateData2_user(_this, AggroCaculateDatactor_AggroCaculateData2_next);
        };
        int AggroCaculateDataGetDefault4_wrapper(struct AggroCaculateData* _this, unsigned int dwKind)
        {
           return AggroCaculateDataGetDefault4_user(_this, dwKind, AggroCaculateDataGetDefault4_next);
        };
        int AggroCaculateDataGetSize6_wrapper(struct AggroCaculateData* _this)
        {
           return AggroCaculateDataGetSize6_user(_this, AggroCaculateDataGetSize6_next);
        };
        int AggroCaculateDataGetSpecialData8_wrapper(struct AggroCaculateData* _this, char byAttackType, uint16_t wIndex)
        {
           return AggroCaculateDataGetSpecialData8_user(_this, byAttackType, wIndex, AggroCaculateDataGetSpecialData8_next);
        };
        void AggroCaculateDataInit10_wrapper(struct AggroCaculateData* _this)
        {
           AggroCaculateDataInit10_user(_this, AggroCaculateDataInit10_next);
        };
        int AggroCaculateDataLoad12_wrapper(struct AggroCaculateData* _this, char* strFileName)
        {
           return AggroCaculateDataLoad12_user(_this, strFileName, AggroCaculateDataLoad12_next);
        };
        int AggroCaculateDataPushSpecialData14_wrapper(struct AggroCaculateData* _this, char byAttackType, uint16_t wIndex, int nValue)
        {
           return AggroCaculateDataPushSpecialData14_user(_this, byAttackType, wIndex, nValue, AggroCaculateDataPushSpecialData14_next);
        };
        
        ::std::array<hook_record, 7> AggroCaculateData_functions = 
        {
            _hook_record {
                (LPVOID)0x14015beb0L,
                (LPVOID *)&AggroCaculateDatactor_AggroCaculateData2_user,
                (LPVOID *)&AggroCaculateDatactor_AggroCaculateData2_next,
                (LPVOID)cast_pointer_function(AggroCaculateDatactor_AggroCaculateData2_wrapper),
                (LPVOID)cast_pointer_function((void(AggroCaculateData::*)())&AggroCaculateData::ctor_AggroCaculateData)
            },
            _hook_record {
                (LPVOID)0x1401616b0L,
                (LPVOID *)&AggroCaculateDataGetDefault4_user,
                (LPVOID *)&AggroCaculateDataGetDefault4_next,
                (LPVOID)cast_pointer_function(AggroCaculateDataGetDefault4_wrapper),
                (LPVOID)cast_pointer_function((int(AggroCaculateData::*)(unsigned int))&AggroCaculateData::GetDefault)
            },
            _hook_record {
                (LPVOID)0x140161690L,
                (LPVOID *)&AggroCaculateDataGetSize6_user,
                (LPVOID *)&AggroCaculateDataGetSize6_next,
                (LPVOID)cast_pointer_function(AggroCaculateDataGetSize6_wrapper),
                (LPVOID)cast_pointer_function((int(AggroCaculateData::*)())&AggroCaculateData::GetSize)
            },
            _hook_record {
                (LPVOID)0x14015c710L,
                (LPVOID *)&AggroCaculateDataGetSpecialData8_user,
                (LPVOID *)&AggroCaculateDataGetSpecialData8_next,
                (LPVOID)cast_pointer_function(AggroCaculateDataGetSpecialData8_wrapper),
                (LPVOID)cast_pointer_function((int(AggroCaculateData::*)(char, uint16_t))&AggroCaculateData::GetSpecialData)
            },
            _hook_record {
                (LPVOID)0x14015bef0L,
                (LPVOID *)&AggroCaculateDataInit10_user,
                (LPVOID *)&AggroCaculateDataInit10_next,
                (LPVOID)cast_pointer_function(AggroCaculateDataInit10_wrapper),
                (LPVOID)cast_pointer_function((void(AggroCaculateData::*)())&AggroCaculateData::Init)
            },
            _hook_record {
                (LPVOID)0x14015bf70L,
                (LPVOID *)&AggroCaculateDataLoad12_user,
                (LPVOID *)&AggroCaculateDataLoad12_next,
                (LPVOID)cast_pointer_function(AggroCaculateDataLoad12_wrapper),
                (LPVOID)cast_pointer_function((int(AggroCaculateData::*)(char*))&AggroCaculateData::Load)
            },
            _hook_record {
                (LPVOID)0x14015c660L,
                (LPVOID *)&AggroCaculateDataPushSpecialData14_user,
                (LPVOID *)&AggroCaculateDataPushSpecialData14_next,
                (LPVOID)cast_pointer_function(AggroCaculateDataPushSpecialData14_wrapper),
                (LPVOID)cast_pointer_function((int(AggroCaculateData::*)(char, uint16_t, int))&AggroCaculateData::PushSpecialData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
