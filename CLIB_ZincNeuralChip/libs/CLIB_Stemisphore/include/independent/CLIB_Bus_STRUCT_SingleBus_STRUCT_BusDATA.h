#ifndef CLIB_THREADS_LOG_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_H
#define CLIB_THREADS_LOG_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_H
#include <cstddef>
namespace zinc {
    struct CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA {
    public:
        void dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId);

    private:
        static class StemTicket* stat_REG_of_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket;
        static unsigned char* stat_REG_of_CLIB_Bus_STRUCT_SingleBus_DATA;
        static void stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_DATA(std::byte* sysThreadId);
        static void stat_REG_boot1_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(std::byte* sysThreadId);
        static void stat_REG_boot1_INITIALISE_CLIB_Bus_STRUCT_SingleBus_DATA(std::byte* sysThreadId);
    };
}
#endif
