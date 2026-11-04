#include "../../include/engine/CLIB_LeftHemishpore_Framework_Global.h"
#include <cfloat>
#include <climits>
#include <cstring>
#include <iostream>
#include <ostream>
    std::byte* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events;
// public.
    zinc::CLIB_LeftHemishpore_Framework_Global::CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemishpore_Framework_Global::~CLIB_LeftHemishpore_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : ~CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
        delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events;
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : ~CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= std::byte : dyn_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        return pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS) {
        pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId, *MAX_NUMBER_OF_THREADS);
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
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= bool : stat_CONVERT_CLIB_MutexQue_Framework_Global_Bool_To_Int(sysThreadId)." << std::endl;
        return temp;
    }
    zinc::Object* zinc::CLIB_LeftHemishpore_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(std::byte* sysThreadId, unsigned char* byteArray_DATA) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= unsigned long long* : stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(sysThreadId). " << std::endl;
        return reinterpret_cast<zinc::Object*>(byteArray_DATA);
    }
    bool zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= bool : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    int* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    std::byte* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::byte* temp;
        temp = new std::byte();
        std::memcpy(&temp, bytes_Array, sizeof(std::byte));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(std::byte* sysThreadId, class zinc::Object* DATA) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= unsigned long long* : stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId). " << std::endl;
        return reinterpret_cast<unsigned char*>(DATA);
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(std::byte); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        unsigned char* buffer = nullptr;
        buffer = CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, reinterpret_cast<std::byte *>(std::byte{0xFF}));
        std::memcpy(buffer, &newValue_stdbyte, sizeof(std::byte));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_number_Of_Praise_Events(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= unsigned long long : dyn_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_number_Of_Praise_Events(sysThreadId). " << std::endl;
        return pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(sysThreadId);
    }
// private.
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = new std::byte();
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = static_cast<std::byte>(255);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events = new unsigned long long();
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events = ULLONG_MAX;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = static_cast<std::byte>(2);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId). " << std::endl;
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events = static_cast<unsigned long long>(4);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId). " << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= std::byte* : stat_REG_get_Ptr_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
        return stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= unsigned long long* : stat_REG_get_Ptr_number_Of_Praise_Events(sysThreadId). " << std::endl;
        return stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, std::byte MAX_NUMBER_OF_THREADS) {
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = MAX_NUMBER_OF_THREADS;
    }