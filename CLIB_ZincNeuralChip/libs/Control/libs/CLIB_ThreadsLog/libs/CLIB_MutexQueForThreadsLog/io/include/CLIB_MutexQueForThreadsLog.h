#ifndef CLIB_CLIB_PACKAGE_MUTEXQUEFOTTHREADSLOG_H
#define CLIB_CLIB_PACKAGE_MUTEXQUEFOTTHREADSLOG_H
#include "../../include/CLIB_MutexQueForThreadsLog_Framework.h"
#include <array>
#include <cstdint>
#include <list>
extern "C" {
    namespace zinc {
        class MutexQueForThreadsLog {
        public:
            static void endByUnlock(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_ACCESS_ID);
            static unsigned char* generateHandle(uint8_t* sysThreadId);
            static void generateProgram(uint8_t* sysThreadId);
            static unsigned char* isINSTANTIATED(uint8_t* sysThreadId);
            static void reInitialiseHandle(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_MAX_NUMBER_OF_THREADS_FOR_ACCESS);
            static void startByLock(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_ACCESS_ID);
            static void terminateProgram(uint8_t* sysThreadId, unsigned char* handleId);
        private:
            static void CLIB_MutexQueForThreadsLog_App_FUNCT_generate_Program(uint8_t* sysThreadId);
            static bool CLIB_MutexQueForThreadsLog_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId);
            static void CLIB_MutexQueForThreadsLog_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(uint8_t* sysThreadId);
            static void CLIB_MutexQueForThreadsLog_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(uint8_t* sysThreadId);
            static void CLIB_MutexQueForThreadsLog_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static void CLIB_MutexQueForThreadsLog_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static void CLIB_MutexQueForThreadsLog_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static std::array<bool, 5>* CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static std::list<void*>* CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(uint8_t* sysThreadId);
            static CLIB_MutexQueForThreadsLog_Framework* CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(uint8_t* sysThreadId, int* handleId);
        };
    }
}
#endif
