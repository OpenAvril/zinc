#ifndef SILICONLIFE_BINARY_NEURAL_INTELLIGENCE_THREAD_TASKS_H
#define SILICONLIFE_BINARY_NEURAL_INTELLIGENCE_THREAD_TASKS_H
#include "../../../BNN/CLIB_BNI_BNN_Design_Suite/include/engine/CLIB_BNIBNN_Framework.h"
#include <array>
#include <list>
extern "C" {
    namespace zinc {
        class BNITT {
        public:
            static unsigned char* generateBNI(std::byte* sysThreadId, unsigned char* listOf_FLAG_PraiseEventId);
            static unsigned char* runBNN(std::byte* sysThreadId, unsigned char* bytes_PraiseEventId);
        private:
            static class zinc::CLIB_BNIBNN_STRUCT_BNITT* stat_App_FUNCT_CLIB_BNIBNN_generate_Program(std::byte* sysThreadId, unsigned long long* praiseEventId);
            static bool stat_APP_FUNCT_CLIB_BNIBNN_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot1_DEFINE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot2_SUBSTANTIATE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot3_INITIALISE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static std::array<bool, 5>* stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot1_DEFINE_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId);
            static void stat_REG_boot3_INITIALISE_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId);
            static class zinc::CLIB_BNIBNN_STRUCT_BNITT* stat_REG_get_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId, unsigned long long* praiseEventId);
            static void stat_REG_set_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId, unsigned long long* praiseEventId, class zinc::CLIB_BNIBNN_Framework* obj);
        };
    }
}
#endif