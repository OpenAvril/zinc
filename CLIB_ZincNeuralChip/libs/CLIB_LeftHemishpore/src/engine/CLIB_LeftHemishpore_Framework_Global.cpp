#include "../../include/engine/CLIB_LeftHemishpore_Framework_Global.h"
#include <cfloat>
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <ostream>
    std::byte* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS;
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS;
// public.
    zinc::CLIB_LeftHemishpore_Framework_Global::CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemishpore_Framework_Global::~CLIB_LeftHemishpore_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : ~CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
        delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS;
        delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS;
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : ~CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte : dyn_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        return pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte : dyn_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        return pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(sysThreadId);
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= unsigned long long : stat_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
        return pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId);
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS) {
        pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId, *MAX_NUMBER_OF_THREADS);
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_set_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId, std::byte* NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS) {
        pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(sysThreadId, *NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS);
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_set_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId, std::byte* NUMBER_OF_PRAISE_EVENTS) {
        pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId, *NUMBER_OF_PRAISE_EVENTS);
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {

    }
    int* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_Bool_To_Int(std::byte* sysThreadId, bool newValue_Bool) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (newValue_Bool) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_MutexQue_Framework_Global_Bool_To_Int(sysThreadId)." << std::endl;
        return temp;
    }
    zinc::Object* zinc::CLIB_LeftHemishpore_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(std::byte* sysThreadId, unsigned char* byteArray_DATA) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= unsigned long long* : stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(sysThreadId). " << std::endl;
        return reinterpret_cast<zinc::Object*>(byteArray_DATA);
    }
    bool zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    int* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(sysThreadId)." << std::endl;
        return temp;
    }
std::byte* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::byte* temp;
        temp = new std::byte();
        std::memcpy(&temp, bytes_Array, sizeof(std::byte));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId)." << std::endl;
        return temp;
    }

unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(std::byte* sysThreadId, class zinc::Object* DATA) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= unsigned long long* : stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId). " << std::endl;
        return reinterpret_cast<unsigned char*>(DATA);
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(std::byte); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        std::memcpy(buffer, &newValue_stdbyte, sizeof(std::byte));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_MutexQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbUnsignedLongLong(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned long long* : stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbUnsignedLongLong(sysThreadId)." << std::endl;
        auto tempA = new unsigned long long(ULONG_LONG_MAX);
        auto tempB = new std::uint8_t(UINT8_MAX);
        uint8_t bytes[8] = {0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
        std::memcpy(&tempB, newValue_stdbyte, sizeof(uint8_t));
        tempB[0] = *tempB;
        std::memcpy(&tempA, bytes, sizeof(unsigned long long));
        return tempA;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        auto ULL = new unsigned long long();
        auto temp = std::to_integer<uint8_t>(*newValue_stdbyte);
        *ULL = temp;
        return reinterpret_cast<unsigned char*>(ULL);
    }
// private.
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_IO_MEMBER_FUNCTIONS(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_IO_MEMBER_FUNCTIONS(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = new std::byte();
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = static_cast<std::byte>(0xFF);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS = new unsigned long long();
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS = ULONG_LONG_MAX;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS = new unsigned long long();
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS = ULLONG_MAX;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = static_cast<std::byte>(0x02);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS = static_cast<unsigned long long>(1);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS = static_cast<unsigned long long>(4);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        return stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        return stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= unsigned long long* : pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(sysThreadId). " << std::endl;
        return stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId, std::byte NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS) {
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, std::byte MAX_NUMBER_OF_THREADS) {
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = MAX_NUMBER_OF_THREADS;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId, std::byte NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS) {
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS;
    }