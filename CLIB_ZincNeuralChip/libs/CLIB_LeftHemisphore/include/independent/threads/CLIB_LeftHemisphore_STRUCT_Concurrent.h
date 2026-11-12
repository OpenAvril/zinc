#ifndef CLIB_OPENEPICENTRE_STRUCT_CONCURRENT_H
#define CLIB_OPENEPICENTRE_STRUCT_CONCURRENT_H
#include "../../engine/CLIB_LeftHemisphore_Framework.h"
#include <cstddef>
#include <cstdint>
namespace zinc {
    struct CLIB_LeftHemisphore_STRUCT_Concurrent {
    public:
        void app_do_Concurrent_Algorithm_For_PraiseEventId(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, uint8_t* playerId, unsigned long long* praiseEventId, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void dyn_REG_boot1_DEFINE_Concurrent(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_Concurrent(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_Concurrent(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        std::byte* dyn_REG_get_CLIB_LeftHemisphore_Concurrent_ThreadId(std::byte* sysThreadId);
        void dyn_REG_set_CLIB_LeftHemisphore_Concurrent_ThreadId(std::byte* sysThreadId, std::byte* praiseId);
        static void stat_app_thread_Concurrency(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj, uint8_t* concurrentThreadId);
        static void stat_STRUCT_boot0_DECLARE_Concurrent(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_Concurrent(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_Concurrent(std::byte* sysThreadId);
        static void stat_STRUCT_boot4_INSTANTIATE_Concurrent(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_Concurrent(std::byte* sysThreadId);
    private:
        static std::byte* stat_REG_CLIB_LeftHemisphore_Concurrent_ThreadId;
        static std::byte* stat_REG_get_CLIB_LeftHemisphore_Concurrent_ThreadId(std::byte* sysThreadId);
        static void stat_REG_set_CLIB_LeftHemisphore_Concurrent_ThreadId(std::byte* sysThreadId, std::byte praiseId);
     };
}
#endif