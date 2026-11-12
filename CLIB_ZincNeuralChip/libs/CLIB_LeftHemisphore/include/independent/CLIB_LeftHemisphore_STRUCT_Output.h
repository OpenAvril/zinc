#ifndef CLIB_OPENEPICENTRE_STRUCT_OUTPUT_H
#define CLIB_OPENEPICENTRE_STRUCT_OUTPUT_H
#include "../engine/CLIB_LeftHemisphore_Framework.h"
#include "../independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise0.h"
#include "../independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise1.h"
#include "../independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise2.h"
#include "../independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise3.h"
#include <list>
namespace zinc {
    struct CLIB_LeftHemisphore_STRUCT_Output {
    public:
        void dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Output_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj, unsigned long long *praiseEventId);
        void dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Output(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Output(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Output(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        std::byte* dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId);
        unsigned long long* dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId);
        std::list<class Object*>* dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId);
        void dyn_REG_set_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId, std::byte* newPraiseId);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId, unsigned long long* new_unsignedLongLong);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(std::byte* sysThreadId, class CLIB_LeftHemisphore_STRUCT_Output_praise0* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(std::byte* sysThreadId, class CLIB_LeftHemisphore_STRUCT_Output_praise1* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(std::byte* sysThreadId, class CLIB_LeftHemisphore_STRUCT_Output_praise2* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(std::byte* sysThreadId, class CLIB_LeftHemisphore_STRUCT_Output_praise3* objOutputSubset);
        static void stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId);
        static void stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId);
    private:
        static std::byte* stat_REG_ptr_LeftHemishpore_STRUCT_Output_playerId;
        static unsigned long long* stat_REG_ptr_LeftHemishpore_STRUCT_Output_praiseEventId;
        static std::list<class Object*>* stat_REG_ptr_LeftHemishpore_STRUCT_Output_Subset;
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        static std::byte* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId);
        static unsigned long long* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId);
        static std::list<class Object*>* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId);
        void stat_REG_set_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId, std::byte newPraiseId);
        static void stat_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId, unsigned long long new_unsignedLongLong);
    };
}
#endif