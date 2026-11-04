#ifndef CLIB_THEADLOGS_PACKAGE_MUTEXQUEFOTTHREADSLOG_FRAMEWORK_H
#define CLIB_THEADLOGS_PACKAGE_MUTEXQUEFOTTHREADSLOG_FRAMEWORK_H
#include "CLIB_MutexQueForThreadsLog_Framework_App.h"
#include "CLIB_MutexQueForThreadsLog_Framework_Global.h"
#include <cstddef>
namespace zinc {
    class CLIB_MutexQueForThreadsLog_Framework {
    public:
        CLIB_MutexQueForThreadsLog_Framework(std::byte* sysThreadId);
        virtual ~CLIB_MutexQueForThreadsLog_Framework();
        void dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Architecture(std::byte* sysThreadId);
        void dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Global_and_Settings(std::byte* sysThreadId);
        class CLIB_MutexQueForThreadsLog_Framework_App* dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(std::byte* sysThreadId);
        class CLIB_MutexQueForThreadsLog_Framework_Global* dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
    private:
        static class CLIB_MutexQueForThreadsLog_Framework_App* stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Framework_App;
        static class CLIB_MutexQueForThreadsLog_Framework_Global* stat_CLASS_ptr_CLIB_MutexQueForThreadsLog_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_App(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_App(std::byte* sysThreadId);
        static void pr_stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
        static class CLIB_MutexQueForThreadsLog_Framework_App* stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(std::byte* sysThreadId);
        static class CLIB_MutexQueForThreadsLog_Framework_Global* stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(std::byte* sysThreadId);
    };
}
#endif