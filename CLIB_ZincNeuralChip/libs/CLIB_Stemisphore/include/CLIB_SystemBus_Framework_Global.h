#ifndef CLIB_CLIB_SystemBus_Framework_Global_H
#define CLIB_CLIB_SystemBus_Framework_Global_H
#include <cstddef>
#include <list>
namespace zinc {
    class CLIB_SystemBus_Framework_Global {
    public:
        CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        ~CLIB_SystemBus_Framework_Global();
        void dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static int* stat_CONVERT_CLIB_SystemBusses_Framework_Global_Bool_To_Int(std::byte* sysThreadId, bool newValue_Bool);
        static class Object* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(std::byte* sysThreadId, unsigned char* byteArray_DATA);
        static bool stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array);
        static int* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array);
        static std::byte* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array);
        static unsigned long long* stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array);
        static unsigned char* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(std::byte* sysThreadId, class Object* DATA);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* newValue_ULongLong);
        static unsigned char* stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte);
        static std::byte stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static std::list<std::byte> stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_JUNCTIONS);
        static void stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<std::byte>* List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    private:
        static std::byte* stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
        static std::list<std::byte>* stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
        static class Object* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(std::byte* sysThreadId, unsigned char* byteArray_DATA);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbBoolean_To_MsbByteArray(std::byte* sysThreadId, bool value);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbDouble_To_MsbByteArray(std::byte* sysThreadId, double value);
        static unsigned char* pr_stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte value);
        static bool pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbBoolean(std::byte* sysThreadId, const unsigned char* byteArray);
        static unsigned char* pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(std::byte* sysThreadId, unsigned char* byteArray_DATA);
        static double pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbDouble(std::byte* sysThreadId, const unsigned char* byteArray);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static std::byte* pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId);
        static std::list<std::byte>* pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId);
        static void pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, std::byte MAX_NUMBER_OF_JUNCTIONS);
        static void pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<std::byte> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    };
}
#endif