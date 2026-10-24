#ifndef CLIB_THEADLOGS_zinc_H
#define CLIB_THEADLOGS_zinc_H
#include "CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_Ticket.h"
#include <array>
#include <cstdint>
namespace zinc {
    struct CLIB_Bus_STRUCT_SingleBus {
    public:
        static int* generateHandle(uint8_t* sysThreadId);
        static void generateProgram(uint8_t* sysThreadId);
        static unsigned char* isINSTANTIATED(uint8_t* sysThreadId);
        static void load(uint8_t* sysThreadId, Ticket ticket, unsigned char* bytes_Cargo);
        static unsigned char* unload(uint8_t* sysThreadId, Ticket ticket);
        static void reInitialiseHandle(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_JUNCTIONS);
        static void terminateProgram(uint8_t* sysThreadId);
    private:
        static void stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId);
        static class CLIB_Bus_STRUCT_SingleBus_Framework* stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(uint8_t* sysThreadId);
        static void stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
        static std::array<bool, 4>* stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId);
    };
}
#endif