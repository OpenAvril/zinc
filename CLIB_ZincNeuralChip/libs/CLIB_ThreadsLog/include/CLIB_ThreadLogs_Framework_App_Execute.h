#ifndef CLIB_THEADLOGS_CLIB_FRAMEWORK_APP_EXECUTE_H
#define CLIB_THEADLOGS_CLIB_FRAMEWORK_APP_EXECUTE_H
#include <cstddef>
#include <iosfwd>
namespace zinc {
    class CLIB_ThreadLogs_Framework_App_Execute {
    public:
        CLIB_ThreadLogs_Framework_App_Execute(std::byte* sysThreadId);
        virtual ~CLIB_ThreadLogs_Framework_App_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(std::byte* sysThreadId);
        void dyn_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(std::byte* sysThreadId);
        std::ofstream dyn_REG_get_CLIB_Framework_App_Execute_FILE_For_Log(std::byte* sysThreadId);
        int* dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_Framework_Execute(std::byte* sysThreadId);
    private:
        static std::ofstream stat_REG_CLIB_Framework_App_Execute_FILE_For_Log;
        static int* stat_PGM_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog;
        static void stat_PGM_boot1_DEFINE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(std::byte* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(std::byte* sysThreadId);
        static void stat_PGM_boot3_REINITIALISE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        static void stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_Framework_App_Execute_FILE_For_Log(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_Framework_App_Execute_FILE_For_Log(std::byte* sysThreadId);
        static std::ofstream stat_REG_get_CLIB_Framework_App_Execute_FILE_For_Log(std::byte* sysThreadId);
        static int* stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(std::byte* sysThreadId);
    };
};
#endif //CLIB_THREADLOGS_CLIB_THREADLOGS_FRAMEWORK_APP_EXECUTE_H
