#ifndef CLIB_LAUNCHQUEUEATEND_FRAMEWORK_APP_GLOBAL_H
#define CLIB_LAUNCHQUEUEATEND_FRAMEWORK_APP_GLOBAL_H
#include <list>
#include <cstddef>
#include <cstdint>
#include "CLIB_LaunchQue_Framework.h"
namespace zinc {
    class CLIB_LaunchQue_Framework_Global {
    public:
        CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        ~CLIB_LaunchQue_Framework_Global();
        void boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        void boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        void boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId, CLIB_LaunchQue_Framework* obj);
        bool dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(std::byte* sysThreadId);
        bool dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(std::byte* sysThreadId);
        void dyn_REG_set_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static void boot0_CLASS_DECLARE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        static void boot1_CLASS_DEFINE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        static void boot3_CLASS_INITIALISE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        static void boot0_REG_DECLARE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);

        static int* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array);
        static unsigned long long* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array);

        static int* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsb_uint8_t_To_MsbInt(std::byte* sysThreadId, uint8_t* newValue_uint8_t);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* newValue_ULongLong);

        static int* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_Msbint(std::byte* sysThreadId, std::byte* newValue_stdbyte);
        static unsigned long long* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbUnsignedLongLong(std::byte* sysThreadId, std::byte* newValue_stdbyte);

        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte);

        static uint8_t* stat_REG_get_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
    private:
        static std::list<bool>* stat_REG_CLIB_LaunchQue_Framework_Global_ptr_array_Of_FlagThread2STATE;
        static uint8_t* stat_REG_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS;//todo: number of concurrent threads.
        static void stat_REG_boot1_DEFINE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_FLAG_CLIB_LaunchQue_Framework_Global_thread_2STATE(std::byte* sysThreadId, CLIB_LaunchQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static std::list<bool>* stat_REG_get_Array_Of_FLAG_CLIB_LaunchQue_Framework_Global_Thread2STATE(std::byte* sysThreadId);
        static uint8_t* stat_REG_get_CLIB_LaunchQue_Framework_Global_ptr_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static void stat_REG_set_CLIB_LaunchQue_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    };
}
#endif
