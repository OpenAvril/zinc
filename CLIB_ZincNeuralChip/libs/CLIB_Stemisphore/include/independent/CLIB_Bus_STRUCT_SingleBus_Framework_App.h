#ifndef CLIB_CLIB_Bus_STRUCT_SingleBus_Framework_App_H
#define CLIB_CLIB_Bus_STRUCT_SingleBus_Framework_App_H
#include "CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include "CLIB_Bus_STRUCT_SingleBus_Framework_App_Data.h"
#include "CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute.h"
#include <cstddef>
namespace zinc {
    class CLIB_Bus_STRUCT_SingleBus_Framework_App {
    public:
        CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId, class CLIB_Bus_STRUCT_SingleBus_Framework* obj);
        virtual ~CLIB_Bus_STRUCT_SingleBus_Framework_App();
        void dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId);
        class CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        class CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId, class CLIB_Bus_STRUCT_SingleBus_Framework* obj);
        static void stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(std::byte* sysThreadId);
    private:
        static class CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data;
        static class CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute;
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(std::byte* sysThreadId, class CLIB_Bus_STRUCT_SingleBus_Framework* obj);
        static class CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(std::byte* sysThreadId);
        static class CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(std::byte* sysThreadId);
    };
}
#endif