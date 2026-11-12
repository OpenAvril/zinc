#include "../include/CLIB_LaunchQue_Framework_Global.h"
//#include "../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include <cfloat>
#include <climits>
#include <cstring>
#include <iostream>
    std::list<bool>* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    uint8_t* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS;
// public.
    zinc::CLIB_LaunchQue_Framework_Global::CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    zinc::CLIB_LaunchQue_Framework_Global::~CLIB_LaunchQue_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : ~CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        delete stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
        delete stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : ~CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot1_DEFINE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId, CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot3_INITIALISE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(sysThreadId, obj);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    bool zinc::CLIB_LaunchQue_Framework_Global::dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)" << std::endl;
        return *stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->begin();
    }
    bool zinc::CLIB_LaunchQue_Framework_Global::dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)" << std::endl;
        return !*stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->begin();;
    }
    uint8_t* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte : stat_REG_get_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId)" << std::endl;
        return stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS(sysThreadId);
    }
    void zinc::CLIB_LaunchQue_Framework_Global::dyn_REG_set_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        stat_REG_set_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId, *MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    }

    void zinc::CLIB_LaunchQue_Framework_Global::boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }

    int* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }

    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LaunchQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }

    int* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_Msbint(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= int* : stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_Msbint(sysThreadId)." << std::endl;
        auto buffer = new int();
        std::memcpy(buffer, &newValue_stdbyte, sizeof(int));
        return buffer;
    }
    unsigned char* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        auto ULL = new unsigned long long();
        auto temp = std::to_integer<uint8_t>(*newValue_stdbyte);
        *ULL = temp;
        return reinterpret_cast<unsigned char*>(ULL);
    }

    unsigned long long* zinc::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbUnsignedLongLong(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned long long* : stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbUnsignedLongLong(sysThreadId)." << std::endl;
        auto tempA = new unsigned long long(ULONG_LONG_MAX);
        auto tempB = new std::uint8_t(UINT8_MAX);
        uint8_t bytes[8] = {0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
        std::memcpy(&tempB, newValue_stdbyte, sizeof(uint8_t));
        tempB[0] = *tempB;
        std::memcpy(&tempA, bytes, sizeof(unsigned long long));
        return tempA;
    }
// private.
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE = new std::list<bool>();//todo: number of concurrent threads.
        stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->resize(1);
        stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->assign(0, true);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS = new uint8_t();
        *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS = static_cast<uint8_t>(255);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId, CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
        for (int index = 0; index < stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->size(); index++) {
            stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)->assign(index, true);
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_Global : dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS = static_cast<uint8_t>(3);//todo: number of concurrent threads.
    }
    std::list<bool>* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::list<bool>* : stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(sysThreadId)" << std::endl;
        return stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
    }
    uint8_t* zinc::CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= uint8_t* : stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS(sysThreadId)" << std::endl;
        return stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS;
    }
    void zinc::CLIB_LaunchQue_Framework_Global::stat_REG_set_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: => uint8_t : stat_REG_set_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId, MAX_NUMBER_OF_THREADS)" << std::endl;
	    *stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS = MAX_NUMBER_OF_THREADS_FOR_ACCESS;
    }