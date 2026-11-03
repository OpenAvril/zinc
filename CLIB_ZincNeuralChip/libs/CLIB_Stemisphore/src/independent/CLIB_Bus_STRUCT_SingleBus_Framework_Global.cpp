#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include "../../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include <cfloat>
#include <climits>
#include <cstddef>
#include <cstring>
#include <iostream>
    std::byte* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    std::list<std::byte>* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
// public.
    zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::~CLIB_Bus_STRUCT_SingleBus_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : ~CLIB_Bus_STRUCT_SingleBus_Framework_Global()." << std::endl;
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : ~CLIB_Bus_STRUCT_SingleBus_Framework_Global()." << std::endl;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    bool zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= bool : stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    int* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    std::byte* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::byte* temp;
        temp = new std::byte();
        std::memcpy(&temp, bytes_Array, sizeof(std::byte));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(std::byte); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<std::byte>(255));
        std::memcpy(buffer, &newValue_stdbyte, sizeof(std::byte));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    std::byte zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        return *stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
    }
    std::list<std::byte>* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        return stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId);
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, std::byte MAX_NUMBER_OF_JUNCTIONS) {
        stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, MAX_NUMBER_OF_JUNCTIONS);
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<std::byte> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    }
// private.
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = nullptr;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = nullptr;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = new std::byte();
        *stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = UINT8_MAX;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = new std::list<std::byte>;
        stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(*stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionId = 0; junctionId < stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, junctionId);
            *temp = UINT8_MAX;
        }
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        *stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = 3;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(*stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (uint8_t junctionId = 0; junctionId < stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, junctionId);
            *temp = 2;
        }
    }
    std::byte* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        return stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    }
    std::list<std::byte>* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        return stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, std::byte MAX_NUMBER_OF_JUNCTIONS) {
        *stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = MAX_NUMBER_OF_JUNCTIONS;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<std::byte> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        *stat_REG_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }