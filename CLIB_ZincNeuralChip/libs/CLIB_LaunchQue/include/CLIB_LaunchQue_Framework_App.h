#ifndef CLIB_LAUNCHQUEUEATEND_FRAMEWORK_APP_H
#define CLIB_LAUNCHQUEUEATEND_FRAMEWORK_APP_H
#include "../include/CLIB_LaunchQue_Framework_App_Control.h"
#include "../include/CLIB_LaunchQue_Framework_Execute.h"
#include <cstdint>
namespace zinc {
    class CLIB_LaunchQue_Framework_App {
    public:
        CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        virtual ~CLIB_LaunchQue_Framework_App();
        void dyn_APP_FUNCT_CLIB_LaunchQue_thread_Start(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj, uint8_t* concurrentThreadId);
        void dyn_APP_FUNCT_CLIB_LaunchQue_thread_End(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj, uint8_t* concurrentThreadId);
        class CLIB_LaunchQue_Framework_App_Control* dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId);
        class CLIB_LaunchQue_Framework_Execute* dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot1_REG_DEFINE_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        void dyn_REG_boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        void dyn_REG_boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        static void stat_CALSS_boot0_DECLARE_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        static void stat_CALSS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
        static void stat_CALSS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(std::byte* sysThreadId);
    private:
        static class CLIB_LaunchQue_Framework_App_Control* stat_CLASS_CLIB_LaunchQue_Framework_App_Control;
        static class CLIB_LaunchQue_Framework_Execute* stat_CLASS_CLIB_LaunchQue_Framework_App_Ececute;
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_WriteEnable_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_WriteEnable_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        static class CLIB_LaunchQue_Framework_App_Control* stat_CLASS_get_CLIB_LaunchQue_Framework_App_WriteEnable_Control(std::byte* sysThreadId);
        static class CLIB_LaunchQue_Framework_Execute* stat_CLASS_get_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
    };
}
#endif