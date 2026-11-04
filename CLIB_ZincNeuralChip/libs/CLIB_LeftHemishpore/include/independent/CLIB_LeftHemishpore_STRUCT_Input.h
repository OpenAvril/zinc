#ifndef CLIB_OPENEPICENTRE_STRUCT_INPUT_H
#define CLIB_OPENEPICENTRE_STRUCT_INPUT_H
#include "../engine/CLIB_LeftHemishpore_Framework.h"
#include "../independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise0.h"
#include "../independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise1.h"
#include "../independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise2.h"
#include "../independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise3.h"
#include <list>
namespace zinc {
    struct CLIB_LeftHemishpore_STRUCT_Input {
    public:
        void dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj, unsigned long long *praiseEventId);
        void dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj);
        std::byte* dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(std::byte* sysThreadId);
        unsigned long long* dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(std::byte* sysThreadId);
        std::list<class Object*>* dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(std::byte* sysThreadId);
        void dyn_REG_set_CLIB_LeftHemishpore_STRUCT_Input_playerId(std::byte* sysThreadId, std::byte* newPraiseId);
        void dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(std::byte* sysThreadId, unsigned long long* new_unsignedLongLong);
        void dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(std::byte* sysThreadId, class CLIB_LeftHemishpore_STRUCT_Input_praise0* objInputSubset);
        void dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(std::byte* sysThreadId, class CLIB_LeftHemishpore_STRUCT_Input_praise1* objInputSubset);
        void dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(std::byte* sysThreadId, class CLIB_LeftHemishpore_STRUCT_Input_praise2* objInputSubset);
        void dyn_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(std::byte* sysThreadId, class CLIB_LeftHemishpore_STRUCT_Input_praise3* objInputSubset);
        static void stat_STRUCT_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId);
        static void stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId);
    private:
        static std::byte* stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId;
        static unsigned long long* stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId;
        static std::list<class Object*>* stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset;
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_playerId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Input_Subset(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_playerId(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_Input_Subset(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_playerId(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Input_Subset(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj);
        static std::byte* stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(std::byte* sysThreadId);
        static unsigned long long* stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(std::byte* sysThreadId);
        static std::list<class Object*>* stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(std::byte* sysThreadId);
        void stat_REG_set_CLIB_LeftHemishpore_STRUCT_Input_playerId(std::byte* sysThreadId, std::byte newPraiseId);
        static void stat_REG_set_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(std::byte* sysThreadId, unsigned long long new_unsignedLongLong);
    };
}
#endif