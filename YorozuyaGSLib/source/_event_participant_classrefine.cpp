#include <_event_participant_classrefine.hpp>


START_ATF_NAMESPACE
    bool _event_participant_classrefine::IsChanged()
    {
        using org_ptr = bool (WINAPIV*)(struct _event_participant_classrefine*);
        return (org_ptr(0x140329680L))(this);
    };
    int _event_participant_classrefine::size()
    {
        using org_ptr = int (WINAPIV*)(struct _event_participant_classrefine*);
        return (org_ptr(0x1401bfec0L))(this);
    };
END_ATF_NAMESPACE
