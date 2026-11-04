#include "../include/CLIB_LaunchQue.h"
//#include "../../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../include/CLIB_LaunchQue_Framework_App.h"
#include "../../include/CLIB_LaunchQue_Framework_App_Control.h"
#include "../../include/CLIB_LaunchQue_Framework_Execute.h"
#include "../../include/CLIB_LaunchQue_Framework_Global.h"
#include <thread>
#include <iostream>
static std::list<zinc::CLIB_LaunchQue_Framework*>* stat_REG_List_Of_PGM_CLIB_LaunchQue;
    static std::array<bool, 12>* stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED;
    std::byte* accessId = new std::byte{0x00};
// public.
    int* zinc::LaunchQue::generateHandle(std::byte* sysThreadId) {
        auto result = new int();
        for (auto index_HandleId = new int(0); *index_HandleId < static_cast<int>(*CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)); index_HandleId++) {
            zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, index_HandleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), 0);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: CLIB : LaunchQue : generateHandle(sysThreadId)" << std::endl;
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->resize(*reinterpret_cast<uint8_t*>(CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->size()) + *reinterpret_cast<uint8_t*>(1));
            CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->assign(CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->size(), *CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->begin());
            *result = static_cast<int>(static_cast<int>(CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->size() - 1));
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: CLIB : LaunchQue : generateHandle(sysThreadId)" << std::endl;
        for (auto index_HandleId = new int(0); *index_HandleId < static_cast<int>(*CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)); index_HandleId++) {
            zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, index_HandleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), 0);
        }
        return result;
    }
    void zinc::LaunchQue::generateProgram(std::byte* sysThreadId) {
        CLIB_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
        CLIB_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
        CLIB_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
        CLIB_LaunchQue_stat_boot1_CLASS_DEFINE_List_Of_PGM_CLIB_LaunchQue_Framework(sysThreadId);
        CLIB_LaunchQue_stat_boot3_CLASS_INITIALISE_List_Of_PGM_CLIB_LaunchQue_Framework(sysThreadId);
    }
    unsigned char* zinc::LaunchQue::get_coreIdTolaunch(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        std::byte* result = nullptr;
        result = new std::byte{0xFF};
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, 0);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(2) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, result);
    }
    unsigned char* zinc::LaunchQue::get_FlagSTATEisActive(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(3) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *result);
    }
    unsigned char* zinc::LaunchQue::get_FlagSTATEofConcurrentCore(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, concurrentThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(4) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *result);
    }
    unsigned char* zinc::LaunchQue::get_FlagisIdle(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, 0));
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(6) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *result);
    }
    unsigned char* zinc::LaunchQue::get_FlagSTATEofThreadToLaunch(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, 0));
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(6) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *result);
    }
    unsigned char* zinc::LaunchQue::isINSTANTIATED(std::byte* sysThreadId)	{
        for (auto handleId_launchQue = new int(1); *handleId_launchQue < static_cast<int>(*CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)); handleId_launchQue++) {
            zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId_launchQue)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), 0);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(sysThreadId)" << std::endl;
        bool* result = nullptr;
        result = new bool(sysThreadId);
        *result = true;
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(7) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(sysThreadId)" << std::endl;
        for (auto handleId_launchQue = new int(1); *handleId_launchQue < static_cast<int>(*CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)); handleId_launchQue++) {
            zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId_launchQue)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), 0);
        }
        return zinc::CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *result);
    }
    void zinc::LaunchQue::reInitialiseHandle(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId, std::byte* MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            auto temp = CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->begin();
            std::advance(temp, *handleId);
            auto tempObj = *temp;
            tempObj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
            tempObj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(sysThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(8) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
    }
    void zinc::LaunchQue::set_FlagSTATEofConcurrentCore(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId, bool valueBool) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, concurrentThreadId, valueBool);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(9) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
    }
    void zinc::LaunchQue::terminateProgaram(std::byte* sysThreadId) {
        for (auto handleId_launchQue = new int(1); *handleId_launchQue < static_cast<int>(*CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)); handleId_launchQue++) {
            zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId_launchQue)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), 0);
        }
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            delete stat_REG_List_Of_PGM_CLIB_LaunchQue;
            delete stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED;
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(10) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        for (auto handleId_launchQue = new int(1); *handleId_launchQue < static_cast<int>(*CLIB_LaunchQue_Framework_Global::stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)); handleId_launchQue++) {
            zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId_launchQue)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)),  0);
        }
    }
    void zinc::LaunchQue::threadRequestlaunch(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
            if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
                CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_APP_FUNCT_CLIB_LaunchQue_thread_Start(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId)), concurrentThreadId);
            }
            else {
                CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(11) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
                CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
            }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        }
    void zinc::LaunchQue::threadEnd(std::byte* sysThreadId, unsigned char* handleId, std::byte* concurrentThreadId) {
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_APP_FUNCT_CLIB_LaunchQue_thread_End(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId)), concurrentThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(12) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIBMutexQue(sysThreadId)), concurrentThreadId);
    }
// private.
    void zinc::LaunchQue::CLIB_LaunchQue_generateProgram(std::byte* sysThreadId) {
        auto handleId = new int(0);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " entered app_FUNCT_generate_Program(sysThreadId)" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " started CLIB_LaunchQue_Framework_Global Meta-Data and Settings" << std::endl;
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_create_CLIB_LaunchQue_Framework_Global_and_Settings(sysThreadId);
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId);
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(sysThreadId);
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId));
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " done CLIB_LaunchQue_Framework_Global Meta-Data and Settings" << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " started IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " done IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;
        CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_create_Architecture(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " started Registers - DEFINE" << std::endl;

		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " done Registers - DEFINE" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " started Registers - SUBSTANTIATE" << std::endl;
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_App_Control(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId));
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " done Registers - SUBSTANTIATE" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " started Registers - INITIALISE" << std::endl;
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " done Registers - INITIALISE" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " started Program - INSTANTIATION" << std::endl;
		CLIB_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
		CLIB_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
		CLIB_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
        CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_PGM_boot4_INSTANTIATE_CLIB_LaunchQue_Framework_Execute(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " done Program - INSTANTIATION" << std::endl;

        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "        ,     \\      /      ," << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "       / \\    )\\ __ /(     / \\ " << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|              |\\../|               |" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|               \\VV/                |" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|        MIT Launch Que .dll        |" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|___________________________________|" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|  /    V          ))        V   \\  |" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|/                //               \\|"  << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "`                 V                 '" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "" << std::endl;
    }
    void zinc::LaunchQue::CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(std::byte* sysThreadId) {
        CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)); memberFunctionId++) {
            if (CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId)) {
                CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId);
                break;
            }
        }
    }
    void zinc::LaunchQue::CLIB_LaunchQue_stat_boot1_CLASS_DEFINE_List_Of_PGM_CLIB_LaunchQue_Framework(std::byte* sysThreadId) {
        stat_REG_List_Of_PGM_CLIB_LaunchQue = nullptr;
    }
    void zinc::LaunchQue::CLIB_LaunchQue_stat_boot3_CLASS_INITIALISE_List_Of_PGM_CLIB_LaunchQue_Framework(std::byte* sysThreadId) {
        auto handleId = new int(0);
        stat_REG_List_Of_PGM_CLIB_LaunchQue = new std::list<zinc::CLIB_LaunchQue_Framework*>;
        while (CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId) == nullptr) {}
        CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->resize(1);
        CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->assign(*handleId, new class zinc::CLIB_LaunchQue_Framework(sysThreadId));
        CLIB_LaunchQue_generateProgram(sysThreadId);
    }
    std::list<zinc::CLIB_LaunchQue_Framework*>*  zinc::LaunchQue::CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(std::byte* sysThreadId) {
        return stat_REG_List_Of_PGM_CLIB_LaunchQue;
    }
    zinc::CLIB_LaunchQue_Framework* zinc::LaunchQue::CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(std::byte* sysThreadId, int* handleId) {
        auto temp = stat_REG_List_Of_PGM_CLIB_LaunchQue->begin();
        std::advance(temp, *handleId);
        return *temp;
    }
    void zinc::LaunchQue::CLIB_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
        stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED = nullptr;
    }
    void zinc::LaunchQue::CLIB_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
        stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED = new std::array<bool, 12>();
        while (CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId) == nullptr) { }
        for (int index = 0; index < CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->size(); index++) {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(index) = true;
        }
    }
    void zinc::LaunchQue::CLIB_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
        for (int index = 0; index < CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->size(); index++) {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(index) = true;
        }
    }
    std::array<bool, 12>* zinc::LaunchQue::CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
        return stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED;
    }
