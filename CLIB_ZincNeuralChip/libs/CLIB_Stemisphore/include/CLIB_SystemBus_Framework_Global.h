#ifndef CLIB_CLIB_SystemBus_Framework_Global_H
#define CLIB_CLIB_SystemBus_Framework_Global_H
#include "independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"
#include <cstddef>
#include <cstdint>
#include <list>
namespace zinc {
    class CLIB_SystemBus_Framework_Global {
    public:
        CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        ~CLIB_SystemBus_Framework_Global();
        static int* stat_CONVERT_CLIB_SystemBusses_Framework_Global_Bool_To_Int(std::byte* sysThreadId, bool newValue_Bool);

        static class StemTicket* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_STRUCT_StemTicket(std::byte* sysThreadId, unsigned char* byteArray_StemTicket);
        static class Object* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_VUALUEofOBJ(std::byte* sysThreadId, unsigned char* byteArray_DATA);

        static bool stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array);
        static uint8_t* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt8(std::byte* sysThreadId, unsigned char* bytes_Array);
        static uint16_t* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt16(std::byte* sysThreadId, unsigned char* bytes_Array);
        static uint32_t* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt32(std::byte* sysThreadId, unsigned char* bytes_Array);
        static uint64_t* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt64(std::byte* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array);

        static unsigned char* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(std::byte* sysThreadId, class Object* DATA);
        static unsigned char* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_STRUCT_StemTicket_To_MsbByteArray(std::byte* sysThreadId, zinc::StemTicket* StemTicket);

        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt8_To_MsbByteArray(std::byte* sysThreadId, uint8_t* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt16_To_MsbByteArray(std::byte* sysThreadId, uint16_t* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt32_To_MsbByteArray(std::byte* sysThreadId, uint32_t* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(std::byte* sysThreadId, uint64_t* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double);

        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte);

        static uint16_t* stat_REG_get_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId);
        static uint64_t* stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static std::list<uint64_t> stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_set_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId, uint16_t* NUMBER_OF_BUSSES);
        static void stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, uint64_t* MAX_NUMBER_OF_JUNCTIONS);
        static void stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<uint64_t>* List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    private:
        static uint16_t* stat_REG_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES;
        static uint64_t* stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
        static std::list<uint64_t>* stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
        static void stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static uint64_t* pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static uint16_t* pr_stat_REG_get_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId);
        static std::list<uint64_t>* pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static void pr_stat_REG_set_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId, uint16_t NUMBER_OF_BUSSES);
        static void pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, uint64_t MAX_NUMBER_OF_JUNCTIONS);
        static void pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<uint64_t> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    };
}
#endif