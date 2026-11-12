#ifndef CLIB_OPENEPICENTRE_STRUCT_OUTPUT_PRAISE0_H
#define CLIB_OPENEPICENTRE_STRUCT_OUTPUT_PRAISE0_H
#include <cstddef>
namespace zinc {
    struct CLIB_LeftHemisphore_STRUCT_Output_praise0 {
    public:
        void dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_praise0(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_praise0(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praise0(std::byte* sysThreadId);
        double* dyn_REG_get_CLIB_LeftHemisphore_STRUCT_Output_praise0_Value(std::byte* sysThreadId);
        void dyn_REG_set_CLIB_LeftHemisphore_STRUCT_Output_praise0_Value(std::byte* sysThreadId, double* newValue_Double);
        static void stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output_praise0(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_praise0(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praise0(std::byte* sysThreadId);
        static void stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_praise0(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output_praise0(std::byte* sysThreadId);
    private:
        static double* stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_Output_praise0_Value;
        void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_praise0_Value(std::byte* sysThreadId);
        void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_praise0_Value(std::byte* sysThreadId);
        void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praise0_Value(std::byte* sysThreadId);
        static double* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_praise0_Value(std::byte* sysThreadId);
        static void stat_REG_set_Item_CLIB_LeftHemisphore_STRUCT_Output_praise0_Value(std::byte* sysThreadId, double newValue_Double);
    };
}
#endif