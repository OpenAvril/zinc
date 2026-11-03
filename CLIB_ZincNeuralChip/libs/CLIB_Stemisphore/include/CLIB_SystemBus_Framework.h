#ifndef CLIB_THEADLOGS_CLIB_SystemBus_Framework_H
#define CLIB_THEADLOGS_CLIB_SystemBus_Framework_H
#include "CLIB_SystemBus_Framework_App.h"
#include "CLIB_SystemBus_Framework_Global.h"
#include "independent/CLIB_Bus_STRUCT_SingleBus.h"
#include <cstddef>
namespace zinc {
    class CLIB_SystemBus_Framework {
    public:
        CLIB_SystemBus_Framework(std::byte* sysThreadId);
        virtual ~CLIB_SystemBus_Framework();
        void dyn_APP_CLIB_SystemBus_Framework_create_Architecture(std::byte* sysThreadId);
        void dyn_APP_CLIB_SystemBus_Framework_create_Global_and_Settings(std::byte* sysThreadId);
        void dyn_APP_CLIB_SystemBus_STRUCT_boot1_DEFINE(std::byte* sysThreadId);
        void dyn_APP_CLIB_SystemBus_STRUCT_boot3_INITIALISE(std::byte* sysThreadId);
        class CLIB_SystemBus_Framework_App* dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(std::byte* sysThreadId);
        class CLIB_SystemBus_Framework_Global* dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);

        void dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework(std::byte* sysThreadId);
    private:
        static class CLIB_SystemBus_Framework_App* stat_CLASS_ptr_CLIB_SystemBus_Framework_App;
        static class CLIB_SystemBus_Framework_Global* stat_CLASS_ptr_CLIB_SystemBus_Framework_Global;
        static struct CLIB_Bus_STRUCT_SingleBus* stat_STRUCT_CLIB_SystemBus_SingleBus;
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
        static class CLIB_SystemBus_Framework_App* stat_CLASS_get_ptr_CLIB_SystemBus_Framework_App(std::byte* sysThreadId);
        static class CLIB_SystemBus_Framework_Global* stat_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId);
    };
}
#endif