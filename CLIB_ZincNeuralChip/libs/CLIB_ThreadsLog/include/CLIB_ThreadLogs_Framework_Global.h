#ifndef CLIB_THEADLOGS_CLIB_FRAMEWORK_APP_GLOBAL_H
#define CLIB_THEADLOGS_CLIB_FRAMEWORK_APP_GLOBAL_H
#include <array>
#include <cstdint>
namespace zinc {
    class CLIB_ThreadLogs_Framework_Global {
    public:
        CLIB_ThreadLogs_Framework_Global(std::byte* sysThreadId);
        ~CLIB_ThreadLogs_Framework_Global();
        void dyn_REG_boot0_DECLARE_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_IDLE(std::byte* sysThreadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WAIT(std::byte* sysThreadId);
        static std::array<bool,2>* stat_REG_get_ptr_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WRITE(std::byte* sysThreadId);
        static std::byte* stat_REG_get_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads(std::byte* sysThreadId);
        static void stat_REG_set_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        static int* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_Bool_To_Int(std::byte* sysThreadId, bool newValue_Bool);
        static bool stat_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array);
        static int* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array);
        static std::byte* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array);
        static unsigned long long* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array);
        static unsigned char* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool);
        static unsigned char* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double);
        static unsigned char* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* newValue_ULongLong);
        static unsigned char* stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_uint8_t);
    private:
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_IDLE;
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WAIT;
        static std::array<bool,2>* stat_REG_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WRITE;
        static std::byte* stat_REG_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads;
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_IDLE(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WAIT(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WRITE(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_IDLE(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WAIT(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WRITE(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_IDLE(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WAIT(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WRITE(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads(std::byte* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_IDLE(std::byte* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WAIT(std::byte* sysThreadId);
        static std::array<bool,2>* pr_stat_REG_get_ptr_CONST_CLIB_MutexQueForThreadsLog_2bitFLAG_WRITE(std::byte* sysThreadId);
        static std::byte* pr_stat_REG_get_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads(std::byte* sysThreadId);
        static void pr_stat_REG_set_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads(std::byte* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS_FOR_ACCESS);
    };
}
#endif