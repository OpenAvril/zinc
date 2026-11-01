#include "../include/CLIB_ThreadLogs_Framework_App_Execute.h"
#include "../../libs/CLIB_MutexQueForThreadsLog/io/include/CLIB_MutexQueForThreadsLog.h"
#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include <iostream>
    int* zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog;
// public.
    zinc::CLIB_ThreadLogs_Framework_App_Execute::CLIB_ThreadLogs_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : CLIB_Framework_Execute(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    zinc::CLIB_ThreadLogs_Framework_App_Execute::~CLIB_ThreadLogs_Framework_App_Execute() {
        delete stat_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot2_SUBSTANTIATE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot2_SUBSTANTIATE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(sysThreadId);
    }
    int* zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(uint8_t* sysThreadId) {
        return stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId);
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_REG_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_REG_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
// private.
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_ForThreadsAt_MutexQueForThreadsLog(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot1_DEFINE_ForThreadsAt_MutexQueForThreadLogsId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot1_DEFINE_ForThreadsAt_MutexQueForThreadLogsId(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot3_INITIALISE_ForThreadsAt_MutexQueForThreadLogsId(sysThreadId)." << std::endl;
        zinc::MutexQueForThreadsLog::generateProgram(sysThreadId);
        stat_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog = CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, zinc::MutexQueForThreadsLog::generateHandle(sysThreadId));
          std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot3_INITIALISE_ForThreadsAt_MutexQueForThreadLogsId(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)." << std::endl;
        zinc::MutexQueForThreadsLog::reInitialiseHandle(sysThreadId, CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog), CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadsLog_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY));
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    int* zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(uint8_t* sysThreadId) {
        //std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= PGM : stat_PGM_get_ptr_ForThreadsAt__ThreadLogsId(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog;
    }