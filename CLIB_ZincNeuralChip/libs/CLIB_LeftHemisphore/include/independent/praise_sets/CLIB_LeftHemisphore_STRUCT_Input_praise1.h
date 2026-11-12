#ifndef CLIB_OPENEPICENTRE_STRUCT_INPUT_PRAISE1_H
#define CLIB_OPENEPICENTRE_STRUCT_INPUT_PRAISE1_H
#include <cstddef>
namespace zinc {
    struct CLIB_LeftHemisphore_STRUCT_Input_praise1 {
    public:
        void dyn_REG_boot1_DEFINE_Input_praise1(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_Input_praise1(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_Input_praise1(std::byte* sysThreadId);
        double* dyn_REG_get_Item_Input_praise1_valueA(std::byte* sysThreadId);
        double* dyn_REG_get_Item_Input_praise1_valueB(std::byte* sysThreadId);
        void dyn_REG_set_Item_Input_praise1_valueA(std::byte* sysThreadId, double* newValue_Double);
        void dyn_REG_set_Item_Input_praise1_valueB(std::byte* sysThreadId, double* newValue_Double);
    private:
        static double* stat_REG_ptr_Input_praise1_valueA;
        static double* stat_REG_ptr_Input_praise1_valueB;
        static void stat_REG_boot1_DEFINE_Input_praise1_valueA(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_Input_praise1_valueB(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueA(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_Input_praise1_valueB(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_Input_praise1_valueA(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_Input_praise1_valueB(std::byte* sysThreadId);
        static double* stat_REG_get_Ptr_Input_praise1_valueA(std::byte* sysThreadId);
        static double* stat_REG_get_Ptr_Input_praise1_valueB(std::byte* sysThreadId);
        static void stat_REG_set_Item_Input_praise1_valueA(std::byte* sysThreadId, double newValue_Double);
        static void stat_REG_set_Item_Input_praise1_valueB(std::byte* sysThreadId, double newValue_Double);
    };
}
#endif