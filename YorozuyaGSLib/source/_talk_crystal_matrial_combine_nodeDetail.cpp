#include <_talk_crystal_matrial_combine_nodeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_talk_crystal_matrial_combine_nodeConsume2_ptr _talk_crystal_matrial_combine_nodeConsume2_next(nullptr);
        Info::_talk_crystal_matrial_combine_nodeConsume2_clbk _talk_crystal_matrial_combine_nodeConsume2_user(nullptr);
        
        Info::_talk_crystal_matrial_combine_nodeGetMixNeedNum4_ptr _talk_crystal_matrial_combine_nodeGetMixNeedNum4_next(nullptr);
        Info::_talk_crystal_matrial_combine_nodeGetMixNeedNum4_clbk _talk_crystal_matrial_combine_nodeGetMixNeedNum4_user(nullptr);
        
        Info::_talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_ptr _talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_next(nullptr);
        Info::_talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_clbk _talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_user(nullptr);
        
        Info::_talk_crystal_matrial_combine_nodeInit8_ptr _talk_crystal_matrial_combine_nodeInit8_next(nullptr);
        Info::_talk_crystal_matrial_combine_nodeInit8_clbk _talk_crystal_matrial_combine_nodeInit8_user(nullptr);
        
        Info::_talk_crystal_matrial_combine_nodeMake10_ptr _talk_crystal_matrial_combine_nodeMake10_next(nullptr);
        Info::_talk_crystal_matrial_combine_nodeMake10_clbk _talk_crystal_matrial_combine_nodeMake10_user(nullptr);
        
        Info::_talk_crystal_matrial_combine_nodePush12_ptr _talk_crystal_matrial_combine_nodePush12_next(nullptr);
        Info::_talk_crystal_matrial_combine_nodePush12_clbk _talk_crystal_matrial_combine_nodePush12_user(nullptr);
        
        Info::_talk_crystal_matrial_combine_nodeSet14_ptr _talk_crystal_matrial_combine_nodeSet14_next(nullptr);
        Info::_talk_crystal_matrial_combine_nodeSet14_clbk _talk_crystal_matrial_combine_nodeSet14_user(nullptr);
        
        
        Info::_talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_ptr _talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_next(nullptr);
        Info::_talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_clbk _talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_user(nullptr);
        
        void _talk_crystal_matrial_combine_nodeConsume2_wrapper(struct _talk_crystal_matrial_combine_node* _this, int nConsumeCount)
        {
           _talk_crystal_matrial_combine_nodeConsume2_user(_this, nConsumeCount, _talk_crystal_matrial_combine_nodeConsume2_next);
        };
        int _talk_crystal_matrial_combine_nodeGetMixNeedNum4_wrapper(struct _talk_crystal_matrial_combine_node* _this)
        {
           return _talk_crystal_matrial_combine_nodeGetMixNeedNum4_user(_this, _talk_crystal_matrial_combine_nodeGetMixNeedNum4_next);
        };
        int _talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_wrapper(struct _talk_crystal_matrial_combine_node* _this)
        {
           return _talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_user(_this, _talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_next);
        };
        void _talk_crystal_matrial_combine_nodeInit8_wrapper(struct _talk_crystal_matrial_combine_node* _this)
        {
           _talk_crystal_matrial_combine_nodeInit8_user(_this, _talk_crystal_matrial_combine_nodeInit8_next);
        };
        void _talk_crystal_matrial_combine_nodeMake10_wrapper(struct _talk_crystal_matrial_combine_node* _this, int nMakeCount)
        {
           _talk_crystal_matrial_combine_nodeMake10_user(_this, nMakeCount, _talk_crystal_matrial_combine_nodeMake10_next);
        };
        bool _talk_crystal_matrial_combine_nodePush12_wrapper(struct _talk_crystal_matrial_combine_node* _this, _STORAGE_LIST::_db_con* pItem, char byUseCount, char byClientIndex)
        {
           return _talk_crystal_matrial_combine_nodePush12_user(_this, pItem, byUseCount, byClientIndex, _talk_crystal_matrial_combine_nodePush12_next);
        };
        bool _talk_crystal_matrial_combine_nodeSet14_wrapper(struct _talk_crystal_matrial_combine_node* _this, int nMixIndex, int nNeedItemNum, char byTableCode, uint16_t wItemIndex)
        {
           return _talk_crystal_matrial_combine_nodeSet14_user(_this, nMixIndex, nNeedItemNum, byTableCode, wItemIndex, _talk_crystal_matrial_combine_nodeSet14_next);
        };
        
        void _talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_wrapper(struct _talk_crystal_matrial_combine_node* _this)
        {
           _talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_user(_this, _talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_next);
        };
        
        ::std::array<hook_record, 8> _talk_crystal_matrial_combine_node_functions = 
        {
            _hook_record {
                (LPVOID)0x140430a90L,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeConsume2_user,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeConsume2_next,
                (LPVOID)cast_pointer_function(_talk_crystal_matrial_combine_nodeConsume2_wrapper),
                (LPVOID)cast_pointer_function((void(_talk_crystal_matrial_combine_node::*)(int))&_talk_crystal_matrial_combine_node::Consume)
            },
            _hook_record {
                (LPVOID)0x1404321f0L,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeGetMixNeedNum4_user,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeGetMixNeedNum4_next,
                (LPVOID)cast_pointer_function(_talk_crystal_matrial_combine_nodeGetMixNeedNum4_wrapper),
                (LPVOID)cast_pointer_function((int(_talk_crystal_matrial_combine_node::*)())&_talk_crystal_matrial_combine_node::GetMixNeedNum)
            },
            _hook_record {
                (LPVOID)0x140432210L,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_user,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_next,
                (LPVOID)cast_pointer_function(_talk_crystal_matrial_combine_nodeGetRequiredSlotCount6_wrapper),
                (LPVOID)cast_pointer_function((int(_talk_crystal_matrial_combine_node::*)())&_talk_crystal_matrial_combine_node::GetRequiredSlotCount)
            },
            _hook_record {
                (LPVOID)0x1404307f0L,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeInit8_user,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeInit8_next,
                (LPVOID)cast_pointer_function(_talk_crystal_matrial_combine_nodeInit8_wrapper),
                (LPVOID)cast_pointer_function((void(_talk_crystal_matrial_combine_node::*)())&_talk_crystal_matrial_combine_node::Init)
            },
            _hook_record {
                (LPVOID)0x140430b70L,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeMake10_user,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeMake10_next,
                (LPVOID)cast_pointer_function(_talk_crystal_matrial_combine_nodeMake10_wrapper),
                (LPVOID)cast_pointer_function((void(_talk_crystal_matrial_combine_node::*)(int))&_talk_crystal_matrial_combine_node::Make)
            },
            _hook_record {
                (LPVOID)0x1404309c0L,
                (LPVOID *)&_talk_crystal_matrial_combine_nodePush12_user,
                (LPVOID *)&_talk_crystal_matrial_combine_nodePush12_next,
                (LPVOID)cast_pointer_function(_talk_crystal_matrial_combine_nodePush12_wrapper),
                (LPVOID)cast_pointer_function((bool(_talk_crystal_matrial_combine_node::*)(_STORAGE_LIST::_db_con*, char, char))&_talk_crystal_matrial_combine_node::Push)
            },
            _hook_record {
                (LPVOID)0x1404308f0L,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeSet14_user,
                (LPVOID *)&_talk_crystal_matrial_combine_nodeSet14_next,
                (LPVOID)cast_pointer_function(_talk_crystal_matrial_combine_nodeSet14_wrapper),
                (LPVOID)cast_pointer_function((bool(_talk_crystal_matrial_combine_node::*)(int, int, char, uint16_t))&_talk_crystal_matrial_combine_node::Set)
            },
            _hook_record {
                (LPVOID)0x140432110L,
                (LPVOID *)&_talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_user,
                (LPVOID *)&_talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_next,
                (LPVOID)cast_pointer_function(_talk_crystal_matrial_combine_nodector__talk_crystal_matrial_combine_node16_wrapper),
                (LPVOID)cast_pointer_function((void(_talk_crystal_matrial_combine_node::*)())&_talk_crystal_matrial_combine_node::ctor__talk_crystal_matrial_combine_node)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
