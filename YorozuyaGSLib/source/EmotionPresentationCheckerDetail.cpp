#include <EmotionPresentationCheckerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::EmotionPresentationCheckerCheckEmotionState2_ptr EmotionPresentationCheckerCheckEmotionState2_next(nullptr);
        Info::EmotionPresentationCheckerCheckEmotionState2_clbk EmotionPresentationCheckerCheckEmotionState2_user(nullptr);
        
        
        Info::EmotionPresentationCheckerctor_EmotionPresentationChecker4_ptr EmotionPresentationCheckerctor_EmotionPresentationChecker4_next(nullptr);
        Info::EmotionPresentationCheckerctor_EmotionPresentationChecker4_clbk EmotionPresentationCheckerctor_EmotionPresentationChecker4_user(nullptr);
        
        Info::EmotionPresentationCheckerReSet6_ptr EmotionPresentationCheckerReSet6_next(nullptr);
        Info::EmotionPresentationCheckerReSet6_clbk EmotionPresentationCheckerReSet6_user(nullptr);
        
        bool EmotionPresentationCheckerCheckEmotionState2_wrapper(struct EmotionPresentationChecker* _this, struct CMonster* pThis, char byCheckType, struct CCharacter* pTarget)
        {
           return EmotionPresentationCheckerCheckEmotionState2_user(_this, pThis, byCheckType, pTarget, EmotionPresentationCheckerCheckEmotionState2_next);
        };
        
        void EmotionPresentationCheckerctor_EmotionPresentationChecker4_wrapper(struct EmotionPresentationChecker* _this)
        {
           EmotionPresentationCheckerctor_EmotionPresentationChecker4_user(_this, EmotionPresentationCheckerctor_EmotionPresentationChecker4_next);
        };
        void EmotionPresentationCheckerReSet6_wrapper(struct EmotionPresentationChecker* _this)
        {
           EmotionPresentationCheckerReSet6_user(_this, EmotionPresentationCheckerReSet6_next);
        };
        
        ::std::array<hook_record, 3> EmotionPresentationChecker_functions = 
        {
            _hook_record {
                (LPVOID)0x14015d250L,
                (LPVOID *)&EmotionPresentationCheckerCheckEmotionState2_user,
                (LPVOID *)&EmotionPresentationCheckerCheckEmotionState2_next,
                (LPVOID)cast_pointer_function(EmotionPresentationCheckerCheckEmotionState2_wrapper),
                (LPVOID)cast_pointer_function((bool(EmotionPresentationChecker::*)(struct CMonster*, char, struct CCharacter*))&EmotionPresentationChecker::CheckEmotionState)
            },
            _hook_record {
                (LPVOID)0x14014b720L,
                (LPVOID *)&EmotionPresentationCheckerctor_EmotionPresentationChecker4_user,
                (LPVOID *)&EmotionPresentationCheckerctor_EmotionPresentationChecker4_next,
                (LPVOID)cast_pointer_function(EmotionPresentationCheckerctor_EmotionPresentationChecker4_wrapper),
                (LPVOID)cast_pointer_function((void(EmotionPresentationChecker::*)())&EmotionPresentationChecker::ctor_EmotionPresentationChecker)
            },
            _hook_record {
                (LPVOID)0x14014be60L,
                (LPVOID *)&EmotionPresentationCheckerReSet6_user,
                (LPVOID *)&EmotionPresentationCheckerReSet6_next,
                (LPVOID)cast_pointer_function(EmotionPresentationCheckerReSet6_wrapper),
                (LPVOID)cast_pointer_function((void(EmotionPresentationChecker::*)())&EmotionPresentationChecker::ReSet)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
