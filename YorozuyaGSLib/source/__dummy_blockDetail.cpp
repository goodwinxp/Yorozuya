#include <__dummy_blockDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__dummy_blockctor___dummy_block2_ptr __dummy_blockctor___dummy_block2_next(nullptr);
        Info::__dummy_blockctor___dummy_block2_clbk __dummy_blockctor___dummy_block2_user(nullptr);
        
        
        void __dummy_blockctor___dummy_block2_wrapper(struct __dummy_block* _this)
        {
           __dummy_blockctor___dummy_block2_user(_this, __dummy_blockctor___dummy_block2_next);
        };
        
        ::std::array<hook_record, 1> __dummy_block_functions = 
        {
            _hook_record {
                (LPVOID)0x140279f80L,
                (LPVOID *)&__dummy_blockctor___dummy_block2_user,
                (LPVOID *)&__dummy_blockctor___dummy_block2_next,
                (LPVOID)cast_pointer_function(__dummy_blockctor___dummy_block2_wrapper),
                (LPVOID)cast_pointer_function((void(__dummy_block::*)())&__dummy_block::ctor___dummy_block)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
