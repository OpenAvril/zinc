#include "../include/CLIB_Framework_Execute.h"
#include "../../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include <iostream>
    int* zinc::CLIB_Framework_Execute::stat_REG_HandleId_For_PGM_zincMutexQue;
    int* zinc::CLIB_Framework_Execute::stat_REG_HandleId_For_PGM_zincLaunchQue;
// public.
    zinc::CLIB_Framework_Execute::CLIB_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : zinc_Framework_Execute(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_zinc_Framework_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_zinc_Framework_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_zinc_Framework_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_zinc_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    zinc::CLIB_Framework_Execute::~CLIB_Framework_Execute() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : zinc_Framework_Execute : zinc_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : zinc_Framework_Execute : zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::dyn_REG_boot1_DEFINE_zinc_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : dyn_REG_boot1_DEFINE_zinc_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot1_DEFINE_HandleId_For_PGM_zincMutexQue(sysThreadId);
        stat_PGM_boot1_DEFINE_HandleId_For_PGM_zincLaunchQue(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : dyn_REG_boot1_DEFINE_zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::dyn_REG_boot2_SUBSTANTIATE_zinc_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_zinc_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_zincMutexQue(sysThreadId);
        stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_zincLaunchQue(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::dyn_REG_boot3_INITIALISE_zinc_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : dyn_REG_boot3_INITIALISE_zinc_Framework_Execute(sysThreadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_HandleId_For_PGM_zincMutexQue(sysThreadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_PGM_zincLaunchQue(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : dyn_REG_boot3_INITIALISE_zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::dyn_PGM_boot4_INSTANTIATE_zinc_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_zinc_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_CLASS_boot0_DECLARE_zinc_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : stat_CLASS_boot0_DECLARE_zinc_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : stat_CLASS_boot0_DECLARE_zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_CLASS_boot1_DEFINE_zinc_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : stat_CLASS_boot1_DEFINE_zinc_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : stat_CLASS_boot1_DEFINE_zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_CLASS_boot3_INITIALISE_zinc_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : stat_CLASS_boot3_INITIALISE_zinc_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : stat_CLASS_boot3_INITIALISE_zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_REG_boot0_DECLARE_zinc_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : stat_REG_boot0_DECLARE_zinc_Framework_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework_Execute : stat_REG_boot0_DECLARE_zinc_Framework_Execute(sysThreadId)." << std::endl;
    }
// private.
    void zinc::CLIB_Framework_Execute::stat_PGM_boot1_DEFINE_HandleId_For_PGM_zincLaunchQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
        stat_REG_HandleId_For_PGM_zincLaunchQue = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_PGM_boot1_DEFINE_HandleId_For_PGM_zincMutexQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
        stat_REG_HandleId_For_PGM_zincMutexQue = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_zincLaunchQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
        zinc::LaunchQue::generateProgram(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_zincMutexQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
        zinc::MutexQue::generateProgram(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_PGM_zincLaunchQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
        *stat_REG_HandleId_For_PGM_zincLaunchQue = *zinc::LaunchQue::generateHandle(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_Framework_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_PGM_zincMutexQue(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
        *stat_REG_HandleId_For_PGM_zincMutexQue = *zinc::MutexQue::generateHandle(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(sysThreadId)." << std::endl;
    }
    int* zinc::CLIB_Framework_Execute::stat_PGM_get_array_of_ptrPGM_HandleId_For_PGM_zincMutexQue(uint8_t* sysThreadId) {
        return stat_REG_HandleId_For_PGM_zincMutexQue;
    }
    int* zinc::CLIB_Framework_Execute::stat_PGM_get_array_of_ptrPGM_HandleId_For_PGM_zincLaunchQue(uint8_t* sysThreadId) {
        return stat_REG_HandleId_For_PGM_zincLaunchQue;
    }