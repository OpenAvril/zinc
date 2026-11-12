#include "../include/CLIB_SystemBus_Framework_Global.h"
#include <cfloat>
#include <climits>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <iostream>
    std::byte* zinc::CLIB_SystemBus_Framework_Global::stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    std::list<std::byte>* zinc::CLIB_SystemBus_Framework_Global::stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
// public.
    zinc::CLIB_SystemBus_Framework_Global::CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    zinc::CLIB_SystemBus_Framework_Global::~CLIB_SystemBus_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : ~CLIB_SystemBus_Framework_Global()." << std::endl;
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : ~CLIB_SystemBus_Framework_Global()." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot4_INSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    int* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_Bool_To_Int(std::byte* sysThreadId, bool newValue_Bool) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (newValue_Bool) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_SystemBusses_Framework_Global_Bool_To_Int(sysThreadId)." << std::endl;
        return temp;
    }
    class zinc::Object* zinc::CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_VUALUEofOBJ(std::byte* sysThreadId, unsigned char* byteArray_DATA) {
        return reinterpret_cast<zinc::Object*>(byteArray_DATA);
    }
    bool zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    int* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    std::byte* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::byte* temp;
        temp = new std::byte();
        std::memcpy(&temp, bytes_Array, sizeof(std::byte));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(std::byte* sysThreadId, class zinc::Object* DATA) {
        return reinterpret_cast<unsigned char*>(DATA);
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(std::byte); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        unsigned char* buffer = nullptr;
        buffer = CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, new std::byte{0xFF});
        std::memcpy(buffer, &newValue_stdbyte, sizeof(std::byte));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    std::byte zinc::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        return *pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
    }
    std::list<std::byte> zinc::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        return *pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId);
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_JUNCTIONS) {
        pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, *MAX_NUMBER_OF_JUNCTIONS);
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<std::byte>* List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        auto ULL = new unsigned long long();
        auto temp = std::to_integer<uint8_t>(*newValue_stdbyte);
        *ULL = temp;
        return reinterpret_cast<unsigned char*>(ULL);
    }
// private.
    zinc::Object* zinc::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_VUALUEofOBJ(std::byte* sysThreadId, unsigned char* DATA) {
        class Object* temp;
        auto tempDATA = reinterpret_cast<class Object*>(DATA);
        std::memcpy(&temp, tempDATA, sizeof(tempDATA));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONVERT : pr_stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbBoolean_To_MsbByteArray(std::byte* sysThreadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbBoolean_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbDouble_To_MsbByteArray(std::byte* sysThreadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbDouble_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::pr_stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte value) {
        unsigned char* temp;
        temp = new unsigned char();
        std::memcpy(&temp, &value, sizeof(std::byte));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONVERT : pr_stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId)." << std::endl;
        return temp;
    }
    bool zinc::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbBoolean(std::byte* sysThreadId, const unsigned char* byteArray) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbBoolean(sysThreadId)." << std::endl;
        return (byteArray[7] & 1) != 0;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(std::byte* sysThreadId, unsigned char* byteArray_DATA) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(sysThreadId, value)." << std::endl;
        return reinterpret_cast<unsigned char*>(byteArray_DATA);
    }
    double zinc::CLIB_SystemBus_Framework_Global::pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbDouble(std::byte* sysThreadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONVERT : pr_stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_MsbDouble(sysThreadId)." << std::endl;
        return temp;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = nullptr;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = nullptr;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = new std::byte();
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = std::byte{0xFF};
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = new std::list<std::byte>;
        pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(*reinterpret_cast<uint8_t*>(stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)));
        for (uint8_t junctionId = 0; junctionId < pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, junctionId);
            *temp = std::byte{0xFF};
        }
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = std::byte{0x03};
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(*reinterpret_cast<uint8_t*>(stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)));
        for (uint8_t junctionId = 0; junctionId < pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, junctionId);
            *temp = std::byte{0x02};
        }
    }
    std::byte* zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        return stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    }
    std::list<std::byte>* zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        return stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }
    void zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, std::byte MAX_NUMBER_OF_JUNCTIONS) {
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = MAX_NUMBER_OF_JUNCTIONS;
    }
    void zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<std::byte> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
       *stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }