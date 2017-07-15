#include <_DB_QRY_SYN_DATADetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_ptr _DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_next(nullptr);
        Info::_DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_clbk _DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_user(nullptr);
        
        
        void _DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_wrapper(struct _DB_QRY_SYN_DATA* _this)
        {
           _DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_user(_this, _DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_next);
        };
        
        ::std::array<hook_record, 1> _DB_QRY_SYN_DATA_functions = 
        {
            _hook_record {
                (LPVOID)0x1402024a0L,
                (LPVOID *)&_DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_user,
                (LPVOID *)&_DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_next,
                (LPVOID)cast_pointer_function(_DB_QRY_SYN_DATActor__DB_QRY_SYN_DATA2_wrapper),
                (LPVOID)cast_pointer_function((void(_DB_QRY_SYN_DATA::*)())&_DB_QRY_SYN_DATA::ctor__DB_QRY_SYN_DATA)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
