#include <_LAYER_SETDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_LAYER_SETActiveLayer2_ptr _LAYER_SETActiveLayer2_next(nullptr);
        Info::_LAYER_SETActiveLayer2_clbk _LAYER_SETActiveLayer2_user(nullptr);
        
        Info::_LAYER_SETCreateLayer4_ptr _LAYER_SETCreateLayer4_next(nullptr);
        Info::_LAYER_SETCreateLayer4_clbk _LAYER_SETCreateLayer4_user(nullptr);
        
        Info::_LAYER_SETInertLayer6_ptr _LAYER_SETInertLayer6_next(nullptr);
        Info::_LAYER_SETInertLayer6_clbk _LAYER_SETInertLayer6_user(nullptr);
        
        Info::_LAYER_SETIsActiveLayer8_ptr _LAYER_SETIsActiveLayer8_next(nullptr);
        Info::_LAYER_SETIsActiveLayer8_clbk _LAYER_SETIsActiveLayer8_user(nullptr);
        
        
        Info::_LAYER_SETctor__LAYER_SET10_ptr _LAYER_SETctor__LAYER_SET10_next(nullptr);
        Info::_LAYER_SETctor__LAYER_SET10_clbk _LAYER_SETctor__LAYER_SET10_user(nullptr);
        
        
        Info::_LAYER_SETdtor__LAYER_SET14_ptr _LAYER_SETdtor__LAYER_SET14_next(nullptr);
        Info::_LAYER_SETdtor__LAYER_SET14_clbk _LAYER_SETdtor__LAYER_SET14_user(nullptr);
        
        void _LAYER_SETActiveLayer2_wrapper(struct _LAYER_SET* _this, struct _MULTI_BLOCK* pMB)
        {
           _LAYER_SETActiveLayer2_user(_this, pMB, _LAYER_SETActiveLayer2_next);
        };
        void _LAYER_SETCreateLayer4_wrapper(struct _LAYER_SET* _this, int nSecNum)
        {
           _LAYER_SETCreateLayer4_user(_this, nSecNum, _LAYER_SETCreateLayer4_next);
        };
        bool _LAYER_SETInertLayer6_wrapper(struct _LAYER_SET* _this)
        {
           return _LAYER_SETInertLayer6_user(_this, _LAYER_SETInertLayer6_next);
        };
        bool _LAYER_SETIsActiveLayer8_wrapper(struct _LAYER_SET* _this)
        {
           return _LAYER_SETIsActiveLayer8_user(_this, _LAYER_SETIsActiveLayer8_next);
        };
        
        void _LAYER_SETctor__LAYER_SET10_wrapper(struct _LAYER_SET* _this)
        {
           _LAYER_SETctor__LAYER_SET10_user(_this, _LAYER_SETctor__LAYER_SET10_next);
        };
        
        void _LAYER_SETdtor__LAYER_SET14_wrapper(struct _LAYER_SET* _this)
        {
           _LAYER_SETdtor__LAYER_SET14_user(_this, _LAYER_SETdtor__LAYER_SET14_next);
        };
        
        ::std::array<hook_record, 6> _LAYER_SET_functions = 
        {
            _hook_record {
                (LPVOID)0x140188e30L,
                (LPVOID *)&_LAYER_SETActiveLayer2_user,
                (LPVOID *)&_LAYER_SETActiveLayer2_next,
                (LPVOID)cast_pointer_function(_LAYER_SETActiveLayer2_wrapper),
                (LPVOID)cast_pointer_function((void(_LAYER_SET::*)(struct _MULTI_BLOCK*))&_LAYER_SET::ActiveLayer)
            },
            _hook_record {
                (LPVOID)0x140188930L,
                (LPVOID *)&_LAYER_SETCreateLayer4_user,
                (LPVOID *)&_LAYER_SETCreateLayer4_next,
                (LPVOID)cast_pointer_function(_LAYER_SETCreateLayer4_wrapper),
                (LPVOID)cast_pointer_function((void(_LAYER_SET::*)(int))&_LAYER_SET::CreateLayer)
            },
            _hook_record {
                (LPVOID)0x14026f200L,
                (LPVOID *)&_LAYER_SETInertLayer6_user,
                (LPVOID *)&_LAYER_SETInertLayer6_next,
                (LPVOID)cast_pointer_function(_LAYER_SETInertLayer6_wrapper),
                (LPVOID)cast_pointer_function((bool(_LAYER_SET::*)())&_LAYER_SET::InertLayer)
            },
            _hook_record {
                (LPVOID)0x14007aa70L,
                (LPVOID *)&_LAYER_SETIsActiveLayer8_user,
                (LPVOID *)&_LAYER_SETIsActiveLayer8_next,
                (LPVOID)cast_pointer_function(_LAYER_SETIsActiveLayer8_wrapper),
                (LPVOID)cast_pointer_function((bool(_LAYER_SET::*)())&_LAYER_SET::IsActiveLayer)
            },
            _hook_record {
                (LPVOID)0x1401887f0L,
                (LPVOID *)&_LAYER_SETctor__LAYER_SET10_user,
                (LPVOID *)&_LAYER_SETctor__LAYER_SET10_next,
                (LPVOID)cast_pointer_function(_LAYER_SETctor__LAYER_SET10_wrapper),
                (LPVOID)cast_pointer_function((void(_LAYER_SET::*)())&_LAYER_SET::ctor__LAYER_SET)
            },
            _hook_record {
                (LPVOID)0x140188220L,
                (LPVOID *)&_LAYER_SETdtor__LAYER_SET14_user,
                (LPVOID *)&_LAYER_SETdtor__LAYER_SET14_next,
                (LPVOID)cast_pointer_function(_LAYER_SETdtor__LAYER_SET14_wrapper),
                (LPVOID)cast_pointer_function((void(_LAYER_SET::*)())&_LAYER_SET::dtor__LAYER_SET)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
