#include "../include/CLIB_LaunchQue_Framework_Global.h"
//#include "../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include <cfloat>
#include <climits>
#include <cstring>
#include <iostream>
    std::list<bool>* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    std::byte* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
// public.
    zinc::CLIB_LaunchQue_Framework_Global::CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    zinc::CLIB_LaunchQue_Framework_Global::~CLIB_LaunchQue_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : ~CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        delete stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
        delete stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : ~CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId);
        stat_REG_boot1_DEFINE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId, CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId);
        stat_REG_boot3_INITIALISE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId, obj);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    bool zinc::CLIB_LaunchQue_Framework_Global::dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)" << std::endl;
        return *stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->begin();
    }
    bool zinc::CLIB_LaunchQue_Framework_Global::dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)" << std::endl;
        return !*stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->begin();;
    }

    void zinc::CLIB_LaunchQue_Framework_Global::dyn_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(std::byte* sysThreadId, std::byte* coreId) {
        stat_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId, coreId);
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    bool zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= bool : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    int* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    std::byte* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::byte* temp;
        temp = new std::byte();
        std::memcpy(&temp, bytes_Array, sizeof(std::byte));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(std::byte); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        unsigned char* buffer = nullptr;
        buffer = CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, reinterpret_cast<std::byte *>(std::byte{0xFF}));
        std::memcpy(buffer, &newValue_stdbyte, sizeof(std::byte));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    std::byte* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte : stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)" << std::endl;
        return stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(sysThreadId);
    }
// private.
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = new std::list<bool>();//todo: number of concurrent threads.
        stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->resize(1);
        stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->assign(0, true);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = new std::byte();
        *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = static_cast<std::byte>(255);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId, CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        for (int index = 0; index < stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->size(); index++) {
            stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->assign(index, true);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(std::byte* sysThreadId) {
        *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = static_cast<std::byte>(3);//todo: number of concurrent threads.
    }
    std::list<bool>* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::list<bool>* : stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)" << std::endl;
        return stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    }
    std::byte* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::byte* : stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads(sysThreadId)" << std::endl;
        return stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(std::byte* sysThreadId, const std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: => std::byte : stat_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId, number_Implemented_Threads)" << std::endl;
	    *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_number_Implemented_Threads = *MAX_NUMBER_OF_THREADS_FOR_ACCESS;
    }