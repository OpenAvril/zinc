#ifndef CLIB_LAUNCHQUEUEATEND_FRAMEWORK_APP_EXECUTE_H
#define CLIB_LAUNCHQUEUEATEND_FRAMEWORK_APP_EXECUTE_H
#include <cstddef>
namespace zinc {
    class CLIB_LaunchQue_Framework_Execute {
    public:
        CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        virtual ~CLIB_LaunchQue_Framework_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        unsigned long long* dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_Execute(std::byte* sysThreadId);
    private:
        static unsigned long long* stat_REG_HandleId_For_PGM_CLIBMutexQue;
        static void stat_REG_boot1_DEFINE_HandleId_For_PGM_CLIBMutexQue(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_CLIBMutexQue(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_HandleId_For_PGM_CLIBMutexQue(std::byte* sysThreadId);
        static unsigned long long* stat_REG_get_HandleId_For_PGM_CLIBMutexQue(std::byte* sysThreadId);
    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_CLIB_LaunchQue_Framework_Execute_H