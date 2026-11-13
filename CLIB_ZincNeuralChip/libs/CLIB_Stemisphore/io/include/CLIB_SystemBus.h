#ifndef CLIB_SYSTEMBUS_H
#define CLIB_SYSTEMBUS_H
#include "../../include/CLIB_SystemBus_Framework.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"
#include <cstddef>
#include <cstdint>
extern "C" {
    namespace zinc {
        class Stemisphore {
            public:
            static std::byte* generateHandle(std::byte* sysThreadId);
            static void generateProgram(std::byte* sysThreadId);
            static void load(std::byte* sysThreadId, std::byte* handle_Id, StemTicket StemTicket, unsigned char* bytes_Cargo);
            static void reInitialiseHandle(std::byte* sysThreadId, std::byte* handle_Id, unsigned char* MAX_NUMBER_OF_JUNCTIONS);
            static unsigned char* unload(std::byte* sysThreadId, std::byte* handle_Id, StemTicket StemTicket);
            static void terminateProgram(std::byte* sysThreadId);
        private:
            static std::byte* accessId;
            static std::byte* externalSide;
            static void stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
            static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(std::byte* sysThreadId);
            static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(std::byte* sysThreadId);
            static std::list<zinc::CLIB_SystemBus_Framework*>* stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(std::byte* sysThreadId);
            static class CLIB_SystemBus_Framework* stat_CLASS_get_ptr_CLIB_SystemBus_Framework(std::byte* sysThreadId, uint8_t* handleId);
            static void stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId);
            static std::array<bool, 4>* stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId);
        };
    }
}
#endif