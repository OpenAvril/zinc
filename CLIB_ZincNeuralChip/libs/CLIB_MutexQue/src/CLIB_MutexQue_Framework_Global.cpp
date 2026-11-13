#include "../include/CLIB_MutexQue_Framework_Global.h"
#include <cfloat>
#include <climits>
#include <cstring>
#include <iostream>
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE;
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT;
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE;
    uint8_t* zinc::CLIB_MutexQue_Framework_Global::stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID;
// public.
    zinc::CLIB_MutexQue_Framework_Global::CLIB_MutexQue_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    zinc::CLIB_MutexQue_Framework_Global::~CLIB_MutexQue_Framework_Global() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework : CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        delete stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE;
        delete stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT;
        delete stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE;
        delete stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework : CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::dyn_REG_boot0_DECLARE_CLIB_MutexQue_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot0_DECLARE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot0_DECLARE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        stat_REG_boot1_DEFINE_ptr_CLIB_MutexQueMAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId);
        stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId);
        stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId);
        auto MAX_NUMBER_OF_THREADS_FOR_ACCESS =  new unsigned long long();
        *MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<unsigned long long>(2);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Global_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Global_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)" << std::endl;
        stat_REG_set_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId, *MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Global_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::dyn_REG_set_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => std::unsigned long long* : dyn_REG_set_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)" << std::endl;
        stat_REG_set_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId, *MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    }
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONST : stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
        return pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId);
    }
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONST : stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)" << std::endl;
        return pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId);
    }
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= CONST : stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)" << std::endl;
        return pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId);
    }
    uint8_t* zinc::CLIB_MutexQue_Framework_Global::stat_REG_get_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte : stat_REG_get_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)" << std::endl;
        return pr_stat_REG_get_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId);
    }


    int* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array) {
        auto temp = new unsigned long long(ULONG_LONG_MAX);
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned long long* : stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId)." << std::endl;
        return temp;
    }

    unsigned char* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_MutexQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_MutexQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_MutexQue_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }

    int* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_Msbint(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "  :: <= int* : stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_Msbint(sysThreadId)." << std::endl;
        auto buffer = new int();
        std::memcpy(buffer, &newValue_stdbyte, sizeof(int));
        return buffer;
    }
    unsigned char* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        auto ULL = new unsigned long long();
        auto temp = std::to_integer<uint8_t>(*newValue_stdbyte);
        *ULL = temp;
        return reinterpret_cast<unsigned char*>(ULL);
    }

    unsigned long long* zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbUnsignedLongLong(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
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
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)" << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)" << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot1_DEFINE_ptr_CLIB_MutexQueMAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQueMAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)" << std::endl;
        stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot1_DEFINE_ptr_CLIB_MutexQueMAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE = new std::array<bool, 2>();
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE  = {true, true};
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT = new std::array<bool, 2>();
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT  = {true, true};
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE = new std::array<bool, 2>();
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE = {true, true};
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)." << std::endl;
        stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID = new uint8_t();
        *stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID = static_cast<uint8_t>(255);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE = {false, false};
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT = {true, false};
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        *stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE = {true, true};
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)." << std::endl;
        *stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID = static_cast<uint8_t>(2);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Global : stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)." << std::endl;
    }
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::array<bool,2>* : pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId)." << std::endl;
        return stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE;
    }
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::array<bool,2>* : pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(sysThreadId)." << std::endl;
        return stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT;
    }
    std::array<bool,2>* zinc::CLIB_MutexQue_Framework_Global::pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::array<bool,2>* : pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(sysThreadId)." << std::endl;
        return stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE;
    }
    uint8_t* zinc::CLIB_MutexQue_Framework_Global::pr_stat_REG_get_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : pr_stat_REG_get_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)." << std::endl;
        return stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID;
    }
    void zinc::CLIB_MutexQue_Framework_Global::stat_REG_set_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => uint8_t : stat_REG_set_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId)." << std::endl;
        *stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID = MAX_NUMBER_OF_THREADS_FOR_ACCESS;
    }