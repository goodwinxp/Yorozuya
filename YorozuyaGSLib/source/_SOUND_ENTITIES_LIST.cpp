#include <_SOUND_ENTITIES_LIST.hpp>


START_ATF_NAMESPACE
    float _SOUND_ENTITIES_LIST::GetBoxIntensity(float* arg_0)
    {
        using org_ptr = float (WINAPIV*)(struct _SOUND_ENTITIES_LIST*, float*);
        return (org_ptr(0x140520540L))(this, arg_0);
    };
    float _SOUND_ENTITIES_LIST::GetPan(float* arg_0)
    {
        using org_ptr = float (WINAPIV*)(struct _SOUND_ENTITIES_LIST*, float*);
        return (org_ptr(0x1405203f0L))(this, arg_0);
    };
    float _SOUND_ENTITIES_LIST::GetVolume(float* arg_0)
    {
        using org_ptr = float (WINAPIV*)(struct _SOUND_ENTITIES_LIST*, float*);
        return (org_ptr(0x140520360L))(this, arg_0);
    };
END_ATF_NAMESPACE
