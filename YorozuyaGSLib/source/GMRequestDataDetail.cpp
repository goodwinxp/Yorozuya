#include <GMRequestDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::GMRequestDatactor_GMRequestData2_ptr GMRequestDatactor_GMRequestData2_next(nullptr);
        Info::GMRequestDatactor_GMRequestData2_clbk GMRequestDatactor_GMRequestData2_user(nullptr);
        
        Info::GMRequestDataSet4_ptr GMRequestDataSet4_next(nullptr);
        Info::GMRequestDataSet4_clbk GMRequestDataSet4_user(nullptr);
        
        
        Info::GMRequestDatadtor_GMRequestData9_ptr GMRequestDatadtor_GMRequestData9_next(nullptr);
        Info::GMRequestDatadtor_GMRequestData9_clbk GMRequestDatadtor_GMRequestData9_user(nullptr);
        
        
        void GMRequestDatactor_GMRequestData2_wrapper(struct GMRequestData* _this)
        {
           GMRequestDatactor_GMRequestData2_user(_this, GMRequestDatactor_GMRequestData2_next);
        };
        void GMRequestDataSet4_wrapper(struct GMRequestData* _this, unsigned int dwSerial, char* pwszName, unsigned int dwTime)
        {
           GMRequestDataSet4_user(_this, dwSerial, pwszName, dwTime, GMRequestDataSet4_next);
        };
        
        void GMRequestDatadtor_GMRequestData9_wrapper(struct GMRequestData* _this)
        {
           GMRequestDatadtor_GMRequestData9_user(_this, GMRequestDatadtor_GMRequestData9_next);
        };
        
        ::std::array<hook_record, 3> GMRequestData_functions = 
        {
            _hook_record {
                (LPVOID)0x1402ab250L,
                (LPVOID *)&GMRequestDatactor_GMRequestData2_user,
                (LPVOID *)&GMRequestDatactor_GMRequestData2_next,
                (LPVOID)cast_pointer_function(GMRequestDatactor_GMRequestData2_wrapper),
                (LPVOID)cast_pointer_function((void(GMRequestData::*)())&GMRequestData::ctor_GMRequestData)
            },
            _hook_record {
                (LPVOID)0x1402ab5e0L,
                (LPVOID *)&GMRequestDataSet4_user,
                (LPVOID *)&GMRequestDataSet4_next,
                (LPVOID)cast_pointer_function(GMRequestDataSet4_wrapper),
                (LPVOID)cast_pointer_function((void(GMRequestData::*)(unsigned int, char*, unsigned int))&GMRequestData::Set)
            },
            _hook_record {
                (LPVOID)0x1402ab510L,
                (LPVOID *)&GMRequestDatadtor_GMRequestData9_user,
                (LPVOID *)&GMRequestDatadtor_GMRequestData9_next,
                (LPVOID)cast_pointer_function(GMRequestDatadtor_GMRequestData9_wrapper),
                (LPVOID)cast_pointer_function((void(GMRequestData::*)())&GMRequestData::dtor_GMRequestData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
