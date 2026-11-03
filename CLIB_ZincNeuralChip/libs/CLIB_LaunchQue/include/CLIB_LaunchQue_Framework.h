#ifndef CLIB_LAUNCHQUEUEATEND_FRAMEWORK_H
#define CLIB_LAUNCHQUEUEATEND_FRAMEWORK_H
#include "../include/CLIB_LaunchQue_Framework_App.h"
#include "../include/CLIB_LaunchQue_Framework_Global.h"
namespace zinc {
    class CLIB_LaunchQue_Framework {
    public:
        CLIB_LaunchQue_Framework(std::byte* sysThreadId);
        virtual ~CLIB_LaunchQue_Framework();
        void dyn_CLASS_create_Architecture(std::byte* sysThreadId);
        void dyn_CLASS_create_CLIB_LaunchQue_Framework_Global_and_Settings(std::byte* sysThreadId);
        class CLIB_LaunchQue_Framework_App* dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        class CLIB_LaunchQue_Framework_Global* dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        void dyn_REG_boot0_DECLARE_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework(std::byte* sysThreadId);
    private:
        static class CLIB_LaunchQue_Framework_App* stat_CLASS_ptr_CLIB_LaunchQue_Framework_App;
        static class CLIB_LaunchQue_Framework_Global* stat_CLASS_ptr_CLIB_LaunchQue_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
        static class CLIB_LaunchQue_Framework_App* stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        static class CLIB_LaunchQue_Framework_Global* stat_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(std::byte* sysThreadId);
    };
};
#endif