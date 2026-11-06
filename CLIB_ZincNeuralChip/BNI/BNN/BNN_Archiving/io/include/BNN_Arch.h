#ifndef SILICONLIFE_BINARY_NEURAL_INTELLIGENCE_THREAD_TASKS_H
#define SILICONLIFE_BINARY_NEURAL_INTELLIGENCE_THREAD_TASKS_H
#import "../../CLIB_BNI_BNN_Design_Suite/include/engine/CLIB_BNIBNN_Framework.h"
#include <array>
#include <list>
#include <string>
extern "C" {
    namespace zinc {
        class BNN_Arch {
        public:
            static /* HandleId */unsigned char* generate_BNN_File(std::byte* sysThreadId, class zinc::CLIB_BNIBNN_Framework* obj, std::string* local_location_to_save_file);
        private:
            static bool stat_APP_FUNCT_CLIB_BNIBNN_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot1_DEFINE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot2_SUBSTANTIATE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static void stat_REG_boot3_INITIALISE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static std::array<bool, 5>* stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
        };
    }
}
#endif