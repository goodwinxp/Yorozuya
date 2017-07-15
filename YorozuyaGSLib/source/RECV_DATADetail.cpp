#include <RECV_DATADetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::RECV_DATActor_RECV_DATA2_ptr RECV_DATActor_RECV_DATA2_next(nullptr);
        Info::RECV_DATActor_RECV_DATA2_clbk RECV_DATActor_RECV_DATA2_user(nullptr);
        
        
        void RECV_DATActor_RECV_DATA2_wrapper(struct RECV_DATA* _this)
        {
           RECV_DATActor_RECV_DATA2_user(_this, RECV_DATActor_RECV_DATA2_next);
        };
        
        ::std::array<hook_record, 1> RECV_DATA_functions = 
        {
            _hook_record {
                (LPVOID)0x14031a490L,
                (LPVOID *)&RECV_DATActor_RECV_DATA2_user,
                (LPVOID *)&RECV_DATActor_RECV_DATA2_next,
                (LPVOID)cast_pointer_function(RECV_DATActor_RECV_DATA2_wrapper),
                (LPVOID)cast_pointer_function((void(RECV_DATA::*)())&RECV_DATA::ctor_RECV_DATA)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
