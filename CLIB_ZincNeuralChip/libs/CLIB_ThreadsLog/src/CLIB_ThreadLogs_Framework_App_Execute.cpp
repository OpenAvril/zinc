#include "../include/CLIB_ThreadLogs_Framework_App_Execute.h"
#include "../libs/CLIB_MutexQueForThreadsLog/io/include/CLIB_MutexQueForThreadsLog.h"
#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include <climits>
#include <fstream>
#include <iostream>
    std::ofstream zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_CLIB_Framework_App_Execute_FILE_For_Log;
    int* zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog;
// public.
    zinc::CLIB_ThreadLogs_Framework_App_Execute::CLIB_ThreadLogs_Framework_App_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : CLIB_Framework_Execute(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    zinc::CLIB_ThreadLogs_Framework_App_Execute::~CLIB_ThreadLogs_Framework_App_Execute() {
        delete stat_PGM_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot2_SUBSTANTIATE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot2_SUBSTANTIATE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_REINITIALISE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(sysThreadId);
    }
    std::ofstream zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_get_CLIB_Framework_App_Execute_FILE_For_Log(std::byte* sysThreadId) {
        return stat_REG_get_CLIB_Framework_App_Execute_FILE_For_Log(sysThreadId);
    }
    int* zinc::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(std::byte* sysThreadId) {
        return stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId);
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot1_DEFINE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_Framework_App_Execute_FILE_For_Log(sysThreadId);
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot1_DEFINE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_Framework_App_Execute_FILE_For_Log(sysThreadId);
        stat_PGM_boot3_INITIALISE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(sysThreadId);
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_REG_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_REG_boot0_DECLARE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
// private.
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot1_DEFINE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot1_DEFINE_ForThreadsAt_MutexQueForThreadLogsId(sysThreadId)." << std::endl;
        stat_PGM_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog = nullptr;
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot1_DEFINE_ForThreadsAt_MutexQueForThreadLogsId(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_INITIALISE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot3_INITIALISE_ForThreadsAt_MutexQueForThreadLogsId(sysThreadId)." << std::endl;
        zinc::MutexQueForThreadsLog::generateProgram(sysThreadId);
        auto handleId = new unsigned char();
        handleId = CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId,new int(INT_MAX));
        auto bytes_AccessId = new unsigned char();
        bytes_AccessId = CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, new uint8_t(255));
        auto MAX_NUMBER_OF_THREADS_FOR_ACCESS = new uint8_t();
        *MAX_NUMBER_OF_THREADS_FOR_ACCESS = static_cast<uint8_t>(255);
        auto MAX_NUMBER_OF_JUNCTIONS = new uint8_t();
        *MAX_NUMBER_OF_JUNCTIONS = static_cast<uint8_t>(255);
        int* tempA0 = CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, zinc::MutexQueForThreadsLog::generateHandle(sysThreadId));
        //zinc::MutexQueForThreadsLog::generateProgram(sysThreadId);
        zinc::MutexQueForThreadsLog::reInitialiseHandle(sysThreadId, handleId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        zinc::MutexQueForThreadsLog::startByLock(sysThreadId, handleId, bytes_AccessId);
        zinc::MutexQueForThreadsLog::terminateProgram(sysThreadId, handleId);
        stat_PGM_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog = CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, zinc::MutexQueForThreadsLog::generateHandle(sysThreadId));
          std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot3_INITIALISE_ForThreadsAt_MutexQueForThreadLogsId(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)." << std::endl;
        zinc::MutexQueForThreadsLog::reInitialiseHandle(sysThreadId, CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_PGM_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog), CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY));
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_PGM_boot4_INSTANTIATE_CLIB_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_boot1_DEFINE_CLIB_Framework_App_Execute_FILE_For_Log(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_REG_boot1_DEFINE_CLIB_Framework_App_Execute_FILE_For_Log(sysThreadId)." << std::endl;
        stat_REG_CLIB_Framework_App_Execute_FILE_For_Log = std::ofstream(nullptr);
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_REG_boot1_DEFINE_CLIB_Framework_App_Execute_FILE_For_Log(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_boot3_INITIALISE_CLIB_Framework_App_Execute_FILE_For_Log(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_REG_boot3_INITIALISE_CLIB_Framework_App_Execute_FILE_For_Log(sysThreadId)." << std::endl;
        stat_REG_CLIB_Framework_App_Execute_FILE_For_Log = std::ofstream("${CMAKE_CURRENT_SOURCE_DIR}/__system_threads_log/system_threads_log.txt");
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Execute : stat_REG_boot3_INITIALISE_CLIB_Framework_App_Execute_FILE_For_Log(sysThreadId)." << std::endl;
    }
    std::ofstream zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_get_CLIB_Framework_App_Execute_FILE_For_Log(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: <= std::ofstream : stat_REG_get_CLIB_Framework_App_Execute_FILE_For_Log(sysThreadId)." << std::endl;
        return std::move(stat_REG_CLIB_Framework_App_Execute_FILE_For_Log);
    }
    int* zinc::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: <= PGM : stat_REG_get_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)." << std::endl;
        return stat_PGM_CLIB_Framework_App_Execute_ForThreadsAt_MutexQueOfThreadsLog;
    }