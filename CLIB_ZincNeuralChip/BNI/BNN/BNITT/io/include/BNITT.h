#ifndef SILICONLIFE_BINARY_NEURAL_INTELLIGENCE_THREAD_TASKS_H
#define SILICONLIFE_BINARY_NEURAL_INTELLIGENCE_THREAD_TASKS_H
#include <array>
#include <cstddef>
#include <list>

extern "C" {
namespace zinc {
    class BNITT {
    public:
        static unsigned char* generateBNI(std::byte* sysThreadId, unsigned char* listOf_FLAG_PraiseEventId);
        static unsigned char* runBNN(std::byte* sysThreadId, unsigned char* bytes_PraiseEventId);
    private:
        static class zinc::CLIB_BNIBNN_Framework* stat_App_FUNCT_CLIB_MutexQue_generate_Program(std::byte* sysThreadId, unsigned long long* praiseEventId);
        static bool stat_APP_FUNCT_CLIB_MutexQue_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
        static std::array<bool, 5>* stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_MutexQue_array_of_ptr_Framework(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_MutexQue_sarray_of_ptr_Framework(std::byte* sysThreadId);
    };
}
}
#endif