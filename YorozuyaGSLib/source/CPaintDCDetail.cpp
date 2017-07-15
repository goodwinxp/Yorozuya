#include <CPaintDCDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPaintDCdtor_CPaintDC1_ptr CPaintDCdtor_CPaintDC1_next(nullptr);
        Info::CPaintDCdtor_CPaintDC1_clbk CPaintDCdtor_CPaintDC1_user(nullptr);
        
        
        int64_t CPaintDCdtor_CPaintDC1_wrapper(struct CPaintDC* _this)
        {
           return CPaintDCdtor_CPaintDC1_user(_this, CPaintDCdtor_CPaintDC1_next);
        };
        
        ::std::array<hook_record, 1> CPaintDC_functions = 
        {
            _hook_record {
                (LPVOID)0x1404dbefeL,
                (LPVOID *)&CPaintDCdtor_CPaintDC1_user,
                (LPVOID *)&CPaintDCdtor_CPaintDC1_next,
                (LPVOID)cast_pointer_function(CPaintDCdtor_CPaintDC1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CPaintDC::*)())&CPaintDC::dtor_CPaintDC)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
