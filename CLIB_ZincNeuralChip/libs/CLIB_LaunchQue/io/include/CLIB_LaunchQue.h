#ifndef CLIB_LAUNCHQUEUEATEND_H
#define CLIB_LAUNCHQUEUEATEND_H
#include "../../include/CLIB_LaunchQue_Framework.h"
#include <array>
#include <cstddef>
extern "C" {
    namespace zinc {
        class LaunchQue {
        public:
            static int* generateHandle(std::byte* sysThreadId);
            static void generateProgram(std::byte* sysThreadId);
            static unsigned char* get_coreIdTolaunch(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId);
            static unsigned char* get_FlagSTATEisActive(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId);
            static unsigned char* get_FlagSTATEofConcurrentCore(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId);
            static unsigned char* get_FlagisIdle(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId);
            static unsigned char* get_FlagSTATEofThreadToLaunch(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId);
            static unsigned char* isINSTANTIATED(std::byte* sysThreadId);
            static void reInitialiseHandle(std::byte* sysThreadId, unsigned char* handleId, std::byte* MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
            static void set_FlagSTATEofConcurrentCore(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId, bool valueBool);
            static void terminateProgaram(std::byte* sysThreadId);
            static void threadRequestlaunch(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId);
            static void threadEnd(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId);
        private:
            static int* stat_REG_HandleId_For_PGM_CLIBMutexQue;
            static void CLIB_LaunchQue_generateProgram(std::byte* sysThreadId);
            static void CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
            static void CLIB_LaunchQue_stat_boot1_CLASS_DEFINE_List_Of_PGM_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
            static void CLIB_LaunchQue_stat_boot3_CLASS_INITIALISE_List_Of_PGM_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
            static std::list<class zinc::CLIB_LaunchQue_Framework*>* CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(std::byte* sysThreadId);
            static class zinc::CLIB_LaunchQue_Framework* CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(std::byte* sysThreadId, int* handleId);
            static void CLIB_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void CLIB_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void CLIB_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static std::array<bool, 12>* CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
        };
    }
}
#endif