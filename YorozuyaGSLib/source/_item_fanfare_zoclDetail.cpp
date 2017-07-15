#include <_item_fanfare_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_item_fanfare_zoclInit2_ptr _item_fanfare_zoclInit2_next(nullptr);
        Info::_item_fanfare_zoclInit2_clbk _item_fanfare_zoclInit2_user(nullptr);
        
        
        Info::_item_fanfare_zoclctor__item_fanfare_zocl4_ptr _item_fanfare_zoclctor__item_fanfare_zocl4_next(nullptr);
        Info::_item_fanfare_zoclctor__item_fanfare_zocl4_clbk _item_fanfare_zoclctor__item_fanfare_zocl4_user(nullptr);
        
        void _item_fanfare_zoclInit2_wrapper(struct _item_fanfare_zocl* _this)
        {
           _item_fanfare_zoclInit2_user(_this, _item_fanfare_zoclInit2_next);
        };
        
        void _item_fanfare_zoclctor__item_fanfare_zocl4_wrapper(struct _item_fanfare_zocl* _this)
        {
           _item_fanfare_zoclctor__item_fanfare_zocl4_user(_this, _item_fanfare_zoclctor__item_fanfare_zocl4_next);
        };
        
        ::std::array<hook_record, 2> _item_fanfare_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f0560L,
                (LPVOID *)&_item_fanfare_zoclInit2_user,
                (LPVOID *)&_item_fanfare_zoclInit2_next,
                (LPVOID)cast_pointer_function(_item_fanfare_zoclInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_item_fanfare_zocl::*)())&_item_fanfare_zocl::Init)
            },
            _hook_record {
                (LPVOID)0x1400f0510L,
                (LPVOID *)&_item_fanfare_zoclctor__item_fanfare_zocl4_user,
                (LPVOID *)&_item_fanfare_zoclctor__item_fanfare_zocl4_next,
                (LPVOID)cast_pointer_function(_item_fanfare_zoclctor__item_fanfare_zocl4_wrapper),
                (LPVOID)cast_pointer_function((void(_item_fanfare_zocl::*)())&_item_fanfare_zocl::ctor__item_fanfare_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
