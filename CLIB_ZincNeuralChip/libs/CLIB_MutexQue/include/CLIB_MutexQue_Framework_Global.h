#ifndef CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_GLOBAL_H
#define CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_GLOBAL_H
#include <array>
#include <cstddef>
#include <cstdint>
namespace zinc {
    class CLIB_MutexQue_Framework_Global {
    public:
        CLIB_MutexQue_Framework_Global(std::byte* sysThreadId);
        ~CLIB_MutexQue_Framework_Global();
        void dyn_REG_boot0_DECLARE_CLIB_MutexQue_Global(std::byte* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(std::byte* sysThreadId);
        void dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Global_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        void dyn_REG_set_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId);
        static uint8_t* stat_REG_get_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId);


        static int* stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array);
        static unsigned long long* stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array);

        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double);
        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* newValue_ULongLong);
        
        static int* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_Msbint(std::byte* sysThreadId, std::byte* newValue_stdbyte);
        static unsigned long long* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbUnsignedLongLong(std::byte* sysThreadId, std::byte* newValue_stdbyte);
        
        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte);
    private:
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQue_2bitFLAG_IDLE;
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WAIT;
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQue_2bitFLAG_WRITE;
        static uint8_t* stat_REG_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID;
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQueMAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(std::byte* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WAIT(std::byte* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_WRITE(std::byte* sysThreadId);
        static uint8_t* pr_stat_REG_get_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId);
        static void stat_REG_set_ptr_CLIB_MutexQue_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(std::byte* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    };
}
#endif