#include <_NET_BUFFERDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_NET_BUFFERAddPopPos2_ptr _NET_BUFFERAddPopPos2_next(nullptr);
        Info::_NET_BUFFERAddPopPos2_clbk _NET_BUFFERAddPopPos2_user(nullptr);
        
        Info::_NET_BUFFERAddPushPos4_ptr _NET_BUFFERAddPushPos4_next(nullptr);
        Info::_NET_BUFFERAddPushPos4_clbk _NET_BUFFERAddPushPos4_user(nullptr);
        
        Info::_NET_BUFFERAllocBuffer6_ptr _NET_BUFFERAllocBuffer6_next(nullptr);
        Info::_NET_BUFFERAllocBuffer6_clbk _NET_BUFFERAllocBuffer6_user(nullptr);
        
        Info::_NET_BUFFERGetLeftLoadSize8_ptr _NET_BUFFERGetLeftLoadSize8_next(nullptr);
        Info::_NET_BUFFERGetLeftLoadSize8_clbk _NET_BUFFERGetLeftLoadSize8_user(nullptr);
        
        Info::_NET_BUFFERGetPopPoint10_ptr _NET_BUFFERGetPopPoint10_next(nullptr);
        Info::_NET_BUFFERGetPopPoint10_clbk _NET_BUFFERGetPopPoint10_user(nullptr);
        
        Info::_NET_BUFFERGetPushPos12_ptr _NET_BUFFERGetPushPos12_next(nullptr);
        Info::_NET_BUFFERGetPushPos12_clbk _NET_BUFFERGetPushPos12_user(nullptr);
        
        Info::_NET_BUFFERGetSendPoint14_ptr _NET_BUFFERGetSendPoint14_next(nullptr);
        Info::_NET_BUFFERGetSendPoint14_clbk _NET_BUFFERGetSendPoint14_user(nullptr);
        
        Info::_NET_BUFFERInit16_ptr _NET_BUFFERInit16_next(nullptr);
        Info::_NET_BUFFERInit16_clbk _NET_BUFFERInit16_user(nullptr);
        
        
        Info::_NET_BUFFERctor__NET_BUFFER18_ptr _NET_BUFFERctor__NET_BUFFER18_next(nullptr);
        Info::_NET_BUFFERctor__NET_BUFFER18_clbk _NET_BUFFERctor__NET_BUFFER18_user(nullptr);
        
        
        Info::_NET_BUFFERdtor__NET_BUFFER22_ptr _NET_BUFFERdtor__NET_BUFFER22_next(nullptr);
        Info::_NET_BUFFERdtor__NET_BUFFER22_clbk _NET_BUFFERdtor__NET_BUFFER22_user(nullptr);
        
        void _NET_BUFFERAddPopPos2_wrapper(struct _NET_BUFFER* _this, unsigned int dwAddSize)
        {
           _NET_BUFFERAddPopPos2_user(_this, dwAddSize, _NET_BUFFERAddPopPos2_next);
        };
        void _NET_BUFFERAddPushPos4_wrapper(struct _NET_BUFFER* _this, unsigned int dwAddSize)
        {
           _NET_BUFFERAddPushPos4_user(_this, dwAddSize, _NET_BUFFERAddPushPos4_next);
        };
        bool _NET_BUFFERAllocBuffer6_wrapper(struct _NET_BUFFER* _this, int nMaxSize, int nEtrSize, char* pTemp)
        {
           return _NET_BUFFERAllocBuffer6_user(_this, nMaxSize, nEtrSize, pTemp, _NET_BUFFERAllocBuffer6_next);
        };
        int _NET_BUFFERGetLeftLoadSize8_wrapper(struct _NET_BUFFER* _this)
        {
           return _NET_BUFFERGetLeftLoadSize8_user(_this, _NET_BUFFERGetLeftLoadSize8_next);
        };
        char* _NET_BUFFERGetPopPoint10_wrapper(struct _NET_BUFFER* _this, bool* pbMiss)
        {
           return _NET_BUFFERGetPopPoint10_user(_this, pbMiss, _NET_BUFFERGetPopPoint10_next);
        };
        char* _NET_BUFFERGetPushPos12_wrapper(struct _NET_BUFFER* _this)
        {
           return _NET_BUFFERGetPushPos12_user(_this, _NET_BUFFERGetPushPos12_next);
        };
        char* _NET_BUFFERGetSendPoint14_wrapper(struct _NET_BUFFER* _this, int* pnSendSize, bool* pMiss)
        {
           return _NET_BUFFERGetSendPoint14_user(_this, pnSendSize, pMiss, _NET_BUFFERGetSendPoint14_next);
        };
        void _NET_BUFFERInit16_wrapper(struct _NET_BUFFER* _this)
        {
           _NET_BUFFERInit16_user(_this, _NET_BUFFERInit16_next);
        };
        
        void _NET_BUFFERctor__NET_BUFFER18_wrapper(struct _NET_BUFFER* _this)
        {
           _NET_BUFFERctor__NET_BUFFER18_user(_this, _NET_BUFFERctor__NET_BUFFER18_next);
        };
        
        void _NET_BUFFERdtor__NET_BUFFER22_wrapper(struct _NET_BUFFER* _this)
        {
           _NET_BUFFERdtor__NET_BUFFER22_user(_this, _NET_BUFFERdtor__NET_BUFFER22_next);
        };
        
        ::std::array<hook_record, 10> _NET_BUFFER_functions = 
        {
            _hook_record {
                (LPVOID)0x14047d5c0L,
                (LPVOID *)&_NET_BUFFERAddPopPos2_user,
                (LPVOID *)&_NET_BUFFERAddPopPos2_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERAddPopPos2_wrapper),
                (LPVOID)cast_pointer_function((void(_NET_BUFFER::*)(unsigned int))&_NET_BUFFER::AddPopPos)
            },
            _hook_record {
                (LPVOID)0x14047d4f0L,
                (LPVOID *)&_NET_BUFFERAddPushPos4_user,
                (LPVOID *)&_NET_BUFFERAddPushPos4_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERAddPushPos4_wrapper),
                (LPVOID)cast_pointer_function((void(_NET_BUFFER::*)(unsigned int))&_NET_BUFFER::AddPushPos)
            },
            _hook_record {
                (LPVOID)0x14047d080L,
                (LPVOID *)&_NET_BUFFERAllocBuffer6_user,
                (LPVOID *)&_NET_BUFFERAllocBuffer6_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERAllocBuffer6_wrapper),
                (LPVOID)cast_pointer_function((bool(_NET_BUFFER::*)(int, int, char*))&_NET_BUFFER::AllocBuffer)
            },
            _hook_record {
                (LPVOID)0x14047d420L,
                (LPVOID *)&_NET_BUFFERGetLeftLoadSize8_user,
                (LPVOID *)&_NET_BUFFERGetLeftLoadSize8_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERGetLeftLoadSize8_wrapper),
                (LPVOID)cast_pointer_function((int(_NET_BUFFER::*)())&_NET_BUFFER::GetLeftLoadSize)
            },
            _hook_record {
                (LPVOID)0x14047d690L,
                (LPVOID *)&_NET_BUFFERGetPopPoint10_user,
                (LPVOID *)&_NET_BUFFERGetPopPoint10_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERGetPopPoint10_wrapper),
                (LPVOID)cast_pointer_function((char*(_NET_BUFFER::*)(bool*))&_NET_BUFFER::GetPopPoint)
            },
            _hook_record {
                (LPVOID)0x14047d400L,
                (LPVOID *)&_NET_BUFFERGetPushPos12_user,
                (LPVOID *)&_NET_BUFFERGetPushPos12_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERGetPushPos12_wrapper),
                (LPVOID)cast_pointer_function((char*(_NET_BUFFER::*)())&_NET_BUFFER::GetPushPos)
            },
            _hook_record {
                (LPVOID)0x14047d9b0L,
                (LPVOID *)&_NET_BUFFERGetSendPoint14_user,
                (LPVOID *)&_NET_BUFFERGetSendPoint14_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERGetSendPoint14_wrapper),
                (LPVOID)cast_pointer_function((char*(_NET_BUFFER::*)(int*, bool*))&_NET_BUFFER::GetSendPoint)
            },
            _hook_record {
                (LPVOID)0x14047d140L,
                (LPVOID *)&_NET_BUFFERInit16_user,
                (LPVOID *)&_NET_BUFFERInit16_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERInit16_wrapper),
                (LPVOID)cast_pointer_function((void(_NET_BUFFER::*)())&_NET_BUFFER::Init)
            },
            _hook_record {
                (LPVOID)0x14047ce20L,
                (LPVOID *)&_NET_BUFFERctor__NET_BUFFER18_user,
                (LPVOID *)&_NET_BUFFERctor__NET_BUFFER18_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERctor__NET_BUFFER18_wrapper),
                (LPVOID)cast_pointer_function((void(_NET_BUFFER::*)())&_NET_BUFFER::ctor__NET_BUFFER)
            },
            _hook_record {
                (LPVOID)0x14047cf60L,
                (LPVOID *)&_NET_BUFFERdtor__NET_BUFFER22_user,
                (LPVOID *)&_NET_BUFFERdtor__NET_BUFFER22_next,
                (LPVOID)cast_pointer_function(_NET_BUFFERdtor__NET_BUFFER22_wrapper),
                (LPVOID)cast_pointer_function((void(_NET_BUFFER::*)())&_NET_BUFFER::dtor__NET_BUFFER)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
