#include <common/ATFCore.hpp>
#include <qry_case_golden_box_itemDetail.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::qry_case_golden_box_itemctor_qry_case_golden_box_item2_ptr qry_case_golden_box_itemctor_qry_case_golden_box_item2_next(nullptr);
        Info::qry_case_golden_box_itemctor_qry_case_golden_box_item2_clbk qry_case_golden_box_itemctor_qry_case_golden_box_item2_user(nullptr);
        
        Info::qry_case_golden_box_itemsize4_ptr qry_case_golden_box_itemsize4_next(nullptr);
        Info::qry_case_golden_box_itemsize4_clbk qry_case_golden_box_itemsize4_user(nullptr);
        
        
        void qry_case_golden_box_itemctor_qry_case_golden_box_item2_wrapper(struct qry_case_golden_box_item* _this)
        {
           qry_case_golden_box_itemctor_qry_case_golden_box_item2_user(_this, qry_case_golden_box_itemctor_qry_case_golden_box_item2_next);
        };
        int qry_case_golden_box_itemsize4_wrapper(struct qry_case_golden_box_item* _this)
        {
           return qry_case_golden_box_itemsize4_user(_this, qry_case_golden_box_itemsize4_next);
        };
        
        ::std::array<hook_record, 2> qry_case_golden_box_item_functions = 
        {
            _hook_record {
                (LPVOID)0x140416bc0L,
                (LPVOID *)&qry_case_golden_box_itemctor_qry_case_golden_box_item2_user,
                (LPVOID *)&qry_case_golden_box_itemctor_qry_case_golden_box_item2_next,
                (LPVOID)cast_pointer_function(qry_case_golden_box_itemctor_qry_case_golden_box_item2_wrapper),
                (LPVOID)cast_pointer_function((void(qry_case_golden_box_item::*)())&qry_case_golden_box_item::ctor_qry_case_golden_box_item)
            },
            _hook_record {
                (LPVOID)0x140416bb0L,
                (LPVOID *)&qry_case_golden_box_itemsize4_user,
                (LPVOID *)&qry_case_golden_box_itemsize4_next,
                (LPVOID)cast_pointer_function(qry_case_golden_box_itemsize4_wrapper),
                (LPVOID)cast_pointer_function((int(qry_case_golden_box_item::*)())&qry_case_golden_box_item::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
