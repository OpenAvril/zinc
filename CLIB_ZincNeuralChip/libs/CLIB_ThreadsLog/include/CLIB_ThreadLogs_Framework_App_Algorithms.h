#ifndef CLIB_THEADLOGS_CLIB_FRAMEWORK_APP_ALGORITHM_H
#define CLIB_THEADLOGS_CLIB_FRAMEWORK_APP_ALGORITHM_H
#include "../include/CLIB_ThreadLogs_Framework.h"
#include <cstdint>
#include <string>
namespace zinc {
    class CLIB_ThreadLogs_Framework_App_Algorithms {
    public:
        CLIB_ThreadLogs_Framework_App_Algorithms(std::byte* sysThreadId);
        virtual ~CLIB_ThreadLogs_Framework_App_Algorithms();
        void dyn_APP_FUNCT_CLIB_printConsoleAndLog(std::byte* sysThreadId, class CLIB_ThreadLogs_Framework* obj, std::string* message);
        void dyn_APP_FUNCT_CLIB_printLog(std::byte* sysThreadId, class CLIB_ThreadLogs_Framework* obj, std::string* message);
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(std::byte* sysThreadId);
    private:
        void stat_APP_FUNCT_CLIB_printConsoleAndLog(std::byte* sysThreadId, std::ofstream objOUTPUT_FILE, std::string* message);
        void stat_APP_FUNCT_CLIB_printLog(std::byte* sysThreadId, std::ofstream objOUTPUT_FILE, std::string* message);
    };
}
#endif