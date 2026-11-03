#ifndef CLIB_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_H
#define CLIB_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_H
#include <cstddef>
namespace zinc {
    class CLIB_Bus_STRUCT_SingleBus_Framework_App_Data {
    public:
        CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        virtual ~CLIB_Bus_STRUCT_SingleBus_Framework_App_Data();
        unsigned char* dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(std::byte* sysThreadId);
        void dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(std::byte* sysThreadId, unsigned char* newValue_DATA);
        void dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
    private:
        static unsigned char* stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA;
        static void stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(std::byte* sysThreadId);
        static void stat_CLASS_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(std::byte* sysThreadId);
        static unsigned char* stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(std::byte* sysThreadId);
        static void stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(std::byte* sysThreadId, unsigned char* newValue_DATA);
    };
}
#endif