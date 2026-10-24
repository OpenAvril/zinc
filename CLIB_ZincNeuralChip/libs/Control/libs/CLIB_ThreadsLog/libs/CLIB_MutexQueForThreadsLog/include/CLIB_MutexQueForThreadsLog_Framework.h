#ifndef CLIB_CLIB_PACKAGE_MUTEXQUEFOTTHREADSLOG_FRAMEWORK_H
#define CLIB_CLIB_PACKAGE_MUTEXQUEFOTTHREADSLOG_FRAMEWORK_H
#include "CLIB_MutexQueForThreadsLog_Framework_App.h"
#include "CLIB_MutexQueForThreadsLog_Framework_Global.h"
#include <cstdint>
namespace zinc {
    class CLIB_MutexQueForThreadsLog_Framework {
    public:
        CLIB_MutexQueForThreadsLog_Framework(uint8_t* sysThreadId);
        virtual ~CLIB_MutexQueForThreadsLog_Framework();
        void dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Architecture(uint8_t* sysThreadId);
        void dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Global_and_Settings(uint8_t* sysThreadId);
        class CLIB_MutexQueForThreadsLog_Framework_App* dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(uint8_t* sysThreadId);
        class CLIB_MutexQueForThreadsLog_Framework_Global* dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Framework(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId);
    private:
        static class CLIB_MutexQueForThreadsLog_Framework_App* stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Framework_App;
        static class CLIB_MutexQueForThreadsLog_Framework_Global* stat_CLASS_ptr_CLIB_MutexQueForThreadsLog_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_App(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_App(uint8_t* sysThreadId);
        static void pr_stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId);
        static class CLIB_MutexQueForThreadsLog_Framework_App* stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(uint8_t* sysThreadId);
        static class CLIB_MutexQueForThreadsLog_Framework_Global* stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId);
    };
}
#endif