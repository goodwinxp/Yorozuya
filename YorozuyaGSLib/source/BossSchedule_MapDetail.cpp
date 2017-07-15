#include <BossSchedule_MapDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::BossSchedule_Mapctor_BossSchedule_Map2_ptr BossSchedule_Mapctor_BossSchedule_Map2_next(nullptr);
        Info::BossSchedule_Mapctor_BossSchedule_Map2_clbk BossSchedule_Mapctor_BossSchedule_Map2_user(nullptr);
        
        Info::BossSchedule_MapClear4_ptr BossSchedule_MapClear4_next(nullptr);
        Info::BossSchedule_MapClear4_clbk BossSchedule_MapClear4_user(nullptr);
        
        Info::BossSchedule_MapLoadAll6_ptr BossSchedule_MapLoadAll6_next(nullptr);
        Info::BossSchedule_MapLoadAll6_clbk BossSchedule_MapLoadAll6_user(nullptr);
        
        Info::BossSchedule_MapSaveAll8_ptr BossSchedule_MapSaveAll8_next(nullptr);
        Info::BossSchedule_MapSaveAll8_clbk BossSchedule_MapSaveAll8_user(nullptr);
        
        
        Info::BossSchedule_Mapdtor_BossSchedule_Map12_ptr BossSchedule_Mapdtor_BossSchedule_Map12_next(nullptr);
        Info::BossSchedule_Mapdtor_BossSchedule_Map12_clbk BossSchedule_Mapdtor_BossSchedule_Map12_user(nullptr);
        
        
        void BossSchedule_Mapctor_BossSchedule_Map2_wrapper(struct BossSchedule_Map* _this)
        {
           BossSchedule_Mapctor_BossSchedule_Map2_user(_this, BossSchedule_Mapctor_BossSchedule_Map2_next);
        };
        void BossSchedule_MapClear4_wrapper(struct BossSchedule_Map* _this)
        {
           BossSchedule_MapClear4_user(_this, BossSchedule_MapClear4_next);
        };
        bool BossSchedule_MapLoadAll6_wrapper(struct BossSchedule_Map* _this)
        {
           return BossSchedule_MapLoadAll6_user(_this, BossSchedule_MapLoadAll6_next);
        };
        bool BossSchedule_MapSaveAll8_wrapper(struct BossSchedule_Map* _this)
        {
           return BossSchedule_MapSaveAll8_user(_this, BossSchedule_MapSaveAll8_next);
        };
        
        void BossSchedule_Mapdtor_BossSchedule_Map12_wrapper(struct BossSchedule_Map* _this)
        {
           BossSchedule_Mapdtor_BossSchedule_Map12_user(_this, BossSchedule_Mapdtor_BossSchedule_Map12_next);
        };
        
        ::std::array<hook_record, 5> BossSchedule_Map_functions = 
        {
            _hook_record {
                (LPVOID)0x14041b720L,
                (LPVOID *)&BossSchedule_Mapctor_BossSchedule_Map2_user,
                (LPVOID *)&BossSchedule_Mapctor_BossSchedule_Map2_next,
                (LPVOID)cast_pointer_function(BossSchedule_Mapctor_BossSchedule_Map2_wrapper),
                (LPVOID)cast_pointer_function((void(BossSchedule_Map::*)())&BossSchedule_Map::ctor_BossSchedule_Map)
            },
            _hook_record {
                (LPVOID)0x14041b4d0L,
                (LPVOID *)&BossSchedule_MapClear4_user,
                (LPVOID *)&BossSchedule_MapClear4_next,
                (LPVOID)cast_pointer_function(BossSchedule_MapClear4_wrapper),
                (LPVOID)cast_pointer_function((void(BossSchedule_Map::*)())&BossSchedule_Map::Clear)
            },
            _hook_record {
                (LPVOID)0x14041a070L,
                (LPVOID *)&BossSchedule_MapLoadAll6_user,
                (LPVOID *)&BossSchedule_MapLoadAll6_next,
                (LPVOID)cast_pointer_function(BossSchedule_MapLoadAll6_wrapper),
                (LPVOID)cast_pointer_function((bool(BossSchedule_Map::*)())&BossSchedule_Map::LoadAll)
            },
            _hook_record {
                (LPVOID)0x140419fb0L,
                (LPVOID *)&BossSchedule_MapSaveAll8_user,
                (LPVOID *)&BossSchedule_MapSaveAll8_next,
                (LPVOID)cast_pointer_function(BossSchedule_MapSaveAll8_wrapper),
                (LPVOID)cast_pointer_function((bool(BossSchedule_Map::*)())&BossSchedule_Map::SaveAll)
            },
            _hook_record {
                (LPVOID)0x14041b430L,
                (LPVOID *)&BossSchedule_Mapdtor_BossSchedule_Map12_user,
                (LPVOID *)&BossSchedule_Mapdtor_BossSchedule_Map12_next,
                (LPVOID)cast_pointer_function(BossSchedule_Mapdtor_BossSchedule_Map12_wrapper),
                (LPVOID)cast_pointer_function((void(BossSchedule_Map::*)())&BossSchedule_Map::dtor_BossSchedule_Map)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
