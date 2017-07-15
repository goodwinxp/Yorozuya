#include <common/ATFCore.hpp>
#include <strFILEDetail.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::strFILEload5_ptr strFILEload5_next(nullptr);
        Info::strFILEload5_clbk strFILEload5_user(nullptr);
        
        Info::strFILEread_line_count7_ptr strFILEread_line_count7_next(nullptr);
        Info::strFILEread_line_count7_clbk strFILEread_line_count7_user(nullptr);
        
        
        Info::strFILEctor_strFILE9_ptr strFILEctor_strFILE9_next(nullptr);
        Info::strFILEctor_strFILE9_clbk strFILEctor_strFILE9_user(nullptr);
        
        Info::strFILEword11_ptr strFILEword11_next(nullptr);
        Info::strFILEword11_clbk strFILEword11_user(nullptr);
        
        Info::strFILEword13_ptr strFILEword13_next(nullptr);
        Info::strFILEword13_clbk strFILEword13_user(nullptr);
        
        Info::strFILEword15_ptr strFILEword15_next(nullptr);
        Info::strFILEword15_clbk strFILEword15_user(nullptr);
        
        Info::strFILEword17_ptr strFILEword17_next(nullptr);
        Info::strFILEword17_clbk strFILEword17_user(nullptr);
        
        
        Info::strFILEdtor_strFILE19_ptr strFILEdtor_strFILE19_next(nullptr);
        Info::strFILEdtor_strFILE19_clbk strFILEdtor_strFILE19_user(nullptr);
        
        bool strFILEload5_wrapper(struct strFILE* _this, char* pszFileName)
        {
           return strFILEload5_user(_this, pszFileName, strFILEload5_next);
        };
        int strFILEread_line_count7_wrapper(struct strFILE* _this)
        {
           return strFILEread_line_count7_user(_this, strFILEread_line_count7_next);
        };
        
        void strFILEctor_strFILE9_wrapper(struct strFILE* _this)
        {
           strFILEctor_strFILE9_user(_this, strFILEctor_strFILE9_next);
        };
        bool strFILEword11_wrapper(struct strFILE* _this, char* poutszWord)
        {
           return strFILEword11_user(_this, poutszWord, strFILEword11_next);
        };
        bool strFILEword13_wrapper(struct strFILE* _this, long double* pdoutVal)
        {
           return strFILEword13_user(_this, pdoutVal, strFILEword13_next);
        };
        bool strFILEword15_wrapper(struct strFILE* _this, float* pfoutVal)
        {
           return strFILEword15_user(_this, pfoutVal, strFILEword15_next);
        };
        bool strFILEword17_wrapper(struct strFILE* _this, int* pnoutVal)
        {
           return strFILEword17_user(_this, pnoutVal, strFILEword17_next);
        };
        
        void strFILEdtor_strFILE19_wrapper(struct strFILE* _this)
        {
           strFILEdtor_strFILE19_user(_this, strFILEdtor_strFILE19_next);
        };
        
        ::std::array<hook_record, 8> strFILE_functions = 
        {
            _hook_record {
                (LPVOID)0x140271e20L,
                (LPVOID *)&strFILEload5_user,
                (LPVOID *)&strFILEload5_next,
                (LPVOID)cast_pointer_function(strFILEload5_wrapper),
                (LPVOID)cast_pointer_function((bool(strFILE::*)(char*))&strFILE::load)
            },
            _hook_record {
                (LPVOID)0x14027a6b0L,
                (LPVOID *)&strFILEread_line_count7_user,
                (LPVOID *)&strFILEread_line_count7_next,
                (LPVOID)cast_pointer_function(strFILEread_line_count7_wrapper),
                (LPVOID)cast_pointer_function((int(strFILE::*)())&strFILE::read_line_count)
            },
            _hook_record {
                (LPVOID)0x140271d40L,
                (LPVOID *)&strFILEctor_strFILE9_user,
                (LPVOID *)&strFILEctor_strFILE9_next,
                (LPVOID)cast_pointer_function(strFILEctor_strFILE9_wrapper),
                (LPVOID)cast_pointer_function((void(strFILE::*)())&strFILE::ctor_strFILE)
            },
            _hook_record {
                (LPVOID)0x140272070L,
                (LPVOID *)&strFILEword11_user,
                (LPVOID *)&strFILEword11_next,
                (LPVOID)cast_pointer_function(strFILEword11_wrapper),
                (LPVOID)cast_pointer_function((bool(strFILE::*)(char*))&strFILE::word)
            },
            _hook_record {
                (LPVOID)0x14027a0c0L,
                (LPVOID *)&strFILEword13_user,
                (LPVOID *)&strFILEword13_next,
                (LPVOID)cast_pointer_function(strFILEword13_wrapper),
                (LPVOID)cast_pointer_function((bool(strFILE::*)(long double*))&strFILE::word)
            },
            _hook_record {
                (LPVOID)0x140279fe0L,
                (LPVOID *)&strFILEword15_user,
                (LPVOID *)&strFILEword15_next,
                (LPVOID)cast_pointer_function(strFILEword15_wrapper),
                (LPVOID)cast_pointer_function((bool(strFILE::*)(float*))&strFILE::word)
            },
            _hook_record {
                (LPVOID)0x140279eb0L,
                (LPVOID *)&strFILEword17_user,
                (LPVOID *)&strFILEword17_next,
                (LPVOID)cast_pointer_function(strFILEword17_wrapper),
                (LPVOID)cast_pointer_function((bool(strFILE::*)(int*))&strFILE::word)
            },
            _hook_record {
                (LPVOID)0x140271da0L,
                (LPVOID *)&strFILEdtor_strFILE19_user,
                (LPVOID *)&strFILEdtor_strFILE19_next,
                (LPVOID)cast_pointer_function(strFILEdtor_strFILE19_wrapper),
                (LPVOID)cast_pointer_function((void(strFILE::*)())&strFILE::dtor_strFILE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
