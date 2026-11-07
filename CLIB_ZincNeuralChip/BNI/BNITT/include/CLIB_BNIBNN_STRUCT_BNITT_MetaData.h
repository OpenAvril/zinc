#ifndef BNI_CLIB_BNIBNN_STRUCT_BNITT_H
#define BNI_CLIB_BNIBNN_STRUCT_BNITT_H
#include <cstddef>
#include <string>
extern "C" {
    namespace zinc {
        class CLIB_BNIBNN_STRUCT_BNITT_MetaData {
        public:
            std::byte* dyn_REG_get_CLIB_BNIBNN_STRUCT_BNITT_MetaData_ConditionCode(std::byte* sysThreadId);
            class Object* dyn_REG_get_CLIB_BNIBNN_STRUCT_BNITT_Subset_BNN(std::byte* sysThreadId);
            
        private:
            static bool stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_ConditionCode_ParamId[2];
            static bool stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_ConditionCode_PathId[2];
            static std::string* stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_Description;
            static class Object* stat_REG_CLIB_BNIBNN_STRUCT_BNITT_Subset_BNN;
        };
    }
}
#endif
