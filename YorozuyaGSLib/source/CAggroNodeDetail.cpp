#include <CAggroNodeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CAggroNodector_CAggroNode2_ptr CAggroNodector_CAggroNode2_next(nullptr);
        Info::CAggroNodector_CAggroNode2_clbk CAggroNodector_CAggroNode2_user(nullptr);
        
        Info::CAggroNodeInit4_ptr CAggroNodeInit4_next(nullptr);
        Info::CAggroNodeInit4_clbk CAggroNodeInit4_user(nullptr);
        
        Info::CAggroNodeIsLive6_ptr CAggroNodeIsLive6_next(nullptr);
        Info::CAggroNodeIsLive6_clbk CAggroNodeIsLive6_user(nullptr);
        
        Info::CAggroNodeSet8_ptr CAggroNodeSet8_next(nullptr);
        Info::CAggroNodeSet8_clbk CAggroNodeSet8_user(nullptr);
        
        Info::CAggroNodeSetAggro10_ptr CAggroNodeSetAggro10_next(nullptr);
        Info::CAggroNodeSetAggro10_clbk CAggroNodeSetAggro10_user(nullptr);
        
        
        void CAggroNodector_CAggroNode2_wrapper(struct CAggroNode* _this)
        {
           CAggroNodector_CAggroNode2_user(_this, CAggroNodector_CAggroNode2_next);
        };
        void CAggroNodeInit4_wrapper(struct CAggroNode* _this)
        {
           CAggroNodeInit4_user(_this, CAggroNodeInit4_next);
        };
        int CAggroNodeIsLive6_wrapper(struct CAggroNode* _this)
        {
           return CAggroNodeIsLive6_user(_this, CAggroNodeIsLive6_next);
        };
        void CAggroNodeSet8_wrapper(struct CAggroNode* _this, struct CCharacter* pCharacter)
        {
           CAggroNodeSet8_user(_this, pCharacter, CAggroNodeSet8_next);
        };
        void CAggroNodeSetAggro10_wrapper(struct CAggroNode* _this, int nDam, float fAdd, int nAttackType, unsigned int dwAttackSerial, int bOtherPlayerSupport, int bFirstAttack, int bTempSkill)
        {
           CAggroNodeSetAggro10_user(_this, nDam, fAdd, nAttackType, dwAttackSerial, bOtherPlayerSupport, bFirstAttack, bTempSkill, CAggroNodeSetAggro10_next);
        };
        
        ::std::array<hook_record, 5> CAggroNode_functions = 
        {
            _hook_record {
                (LPVOID)0x1401616e0L,
                (LPVOID *)&CAggroNodector_CAggroNode2_user,
                (LPVOID *)&CAggroNodector_CAggroNode2_next,
                (LPVOID)cast_pointer_function(CAggroNodector_CAggroNode2_wrapper),
                (LPVOID)cast_pointer_function((void(CAggroNode::*)())&CAggroNode::ctor_CAggroNode)
            },
            _hook_record {
                (LPVOID)0x140161730L,
                (LPVOID *)&CAggroNodeInit4_user,
                (LPVOID *)&CAggroNodeInit4_next,
                (LPVOID)cast_pointer_function(CAggroNodeInit4_wrapper),
                (LPVOID)cast_pointer_function((void(CAggroNode::*)())&CAggroNode::Init)
            },
            _hook_record {
                (LPVOID)0x1400f00b0L,
                (LPVOID *)&CAggroNodeIsLive6_user,
                (LPVOID *)&CAggroNodeIsLive6_next,
                (LPVOID)cast_pointer_function(CAggroNodeIsLive6_wrapper),
                (LPVOID)cast_pointer_function((int(CAggroNode::*)())&CAggroNode::IsLive)
            },
            _hook_record {
                (LPVOID)0x140161810L,
                (LPVOID *)&CAggroNodeSet8_user,
                (LPVOID *)&CAggroNodeSet8_next,
                (LPVOID)cast_pointer_function(CAggroNodeSet8_wrapper),
                (LPVOID)cast_pointer_function((void(CAggroNode::*)(struct CCharacter*))&CAggroNode::Set)
            },
            _hook_record {
                (LPVOID)0x14015d5f0L,
                (LPVOID *)&CAggroNodeSetAggro10_user,
                (LPVOID *)&CAggroNodeSetAggro10_next,
                (LPVOID)cast_pointer_function(CAggroNodeSetAggro10_wrapper),
                (LPVOID)cast_pointer_function((void(CAggroNode::*)(int, float, int, unsigned int, int, int, int))&CAggroNode::SetAggro)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
