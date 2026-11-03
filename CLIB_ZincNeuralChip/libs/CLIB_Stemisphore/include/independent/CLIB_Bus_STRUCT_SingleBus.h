#ifndef CLIB_THEADLOGS_zinc_H
#define CLIB_THEADLOGS_zinc_H
#include "CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"
#include <array>
#include <cstddef>
namespace zinc {
    struct CLIB_Bus_STRUCT_SingleBus {
    public:
        static int* generateHandle(std::byte* sysThreadId);
        static void generateProgram(std::byte* sysThreadId);
        static unsigned char* isINSTANTIATED(std::byte* sysThreadId);
        static void load(std::byte* sysThreadId, StemTicket StemTicket, unsigned char* bytes_Cargo);
        static unsigned char* unload(std::byte* sysThreadId, StemTicket StemTicket);
        static void reInitialiseHandle(std::byte* sysThreadId, std::byte MAX_NUMBER_OF_JUNCTIONS);
        static void terminateProgram(std::byte* sysThreadId);
    private:
        static void stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId);
        static class CLIB_Bus_STRUCT_SingleBus_Framework* stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId);
        static std::array<bool, 4>* stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId);
    };
}
#endif