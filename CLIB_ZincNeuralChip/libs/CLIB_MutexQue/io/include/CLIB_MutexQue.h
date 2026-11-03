#ifndef CLIB_CLIB_PACKAGE_MUTEXQUE_H
#define CLIB_CLIB_PACKAGE_MUTEXQUE_H
#include "../../include/CLIB_MutexQue_Framework.h"
#include <array>
#include <cstddef>
#include <list>
extern "C" {
    namespace zinc {
        class MutexQue {
        public:
            static void endByUnlock(std::byte* sysThreadId, unsigned char* handleId, std::byte* byte_ACCESS_ID);
            static unsigned char* generateHandle(std::byte* sysThreadId);
            static void generateProgram(std::byte* sysThreadId);
            static unsigned char* isINSTANTIATED(std::byte* sysThreadId);
            static void reInitialiseHandle(std::byte* sysThreadId, unsigned char* handleId, unsigned char* bytes_MAX_NUMBER_OF_THREADS_FOR_ACCESS);
            static void startByLock(std::byte* sysThreadId, unsigned char* handleId, std::byte* byte_ACCESS_ID);
            static void terminateProgram(std::byte* sysThreadId, unsigned char* handleId);
        private:
            static void CLIB_MutexQue_App_FUNCT_generate_Program(std::byte* sysThreadId);
            static bool CLIB_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
            static void CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(std::byte* sysThreadId);
            static void CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(std::byte* sysThreadId);
            static void CLIB_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static std::array<bool, 5>* CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static std::list<void*>* CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(std::byte* sysThreadId);
            static CLIB_MutexQue_Framework* CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(std::byte* sysThreadId, int* handleId);
        };
    }
}
#endif
