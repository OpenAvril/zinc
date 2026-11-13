#include "../../include/engine/CLIB_LeftHemisphore_Framework_App_Execute.h"
#include "../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../../CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../../include/engine/CLIB_LeftHemisphore_Framework_App_Execute_Control.h"
#include "../../include/engine/CLIB_LeftHemisphore_Framework_Global.h"
#include <iostream>
    zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_CLASS_CLIB_LeftHemisphore_Framework_App_Execute_Control;
    uint8_t* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_REG_HandleId_For_CLIB_LaunchQue_Server;
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_REG_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData;
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive;
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend;
// public.
    zinc::CLIB_LeftHemisphore_Framework_App_Execute::CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Execute::~CLIB_LeftHemisphore_Framework_App_Execute() {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        delete stat_CLASS_CLIB_LeftHemisphore_Framework_App_Execute_Control;
        delete stat_REG_HandleId_For_CLIB_LaunchQue_Server;
        delete stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive;
        delete stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend;
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control* zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class* : dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId);
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
        stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId);
        stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId);
        stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId);
        stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
    }
    uint8_t* zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= int* HandleId : dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)." << std::endl;
        return stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId);
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= int* HandleId : dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)." << std::endl;
        return stat_PGM_get_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId);
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= int* HandleId : dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId)." << std::endl;
        return stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId);
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= int* HandleId : dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId)." << std::endl;
        return stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId);
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
        stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId);
        stat_PGM_boot1_DEFINE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId);
        stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId);
        stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId);
        stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId);
        stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId). " << std::endl;
    }
// private.
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_CLASS_boot1_DEFINE_Execute_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId). " << std::endl;
        stat_CLASS_CLIB_LeftHemisphore_Framework_App_Execute_Control = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot1_DEFINE_Execute_Control(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_Execute_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId). " << std::endl;
        stat_CLASS_CLIB_LeftHemisphore_Framework_App_Execute_Control = new CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId) == nullptr) {}
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_CLASS_boot3_INITIALISE_Execute_Control(sysThreadId). " << std::endl;
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class* : stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
        return stat_CLASS_CLIB_LeftHemisphore_Framework_App_Execute_Control;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot1_DEFINE_HandleId_For_CLIB_LaunchQue_Server(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_LaunchQue_Server = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerInputReceive(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerOutputSend(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot1_DEFINE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_LaunchQue_Server(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_LaunchQue_Server = reinterpret_cast<uint8_t*>(zinc::LaunchQue::generateHandle(sysThreadId));
        zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_VUALUEofMsb_uint8_t_To_VALUEofMsbULongLong_In_MsbByteArray(sysThreadId, stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), reinterpret_cast<std::byte*>(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId) - 2));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_Input_LaunchQue_Server(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData = zinc::CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId,zinc::MutexQue::generateHandle(sysThreadId));
        zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, stat_PGM_get_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId)),  reinterpret_cast<std::byte*>(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId)));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_Input_LaunchQue_Server(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive = zinc::CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId,zinc::MutexQue::generateHandle(sysThreadId));
        zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId)), reinterpret_cast<std::byte*>(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId) - 1));
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
        stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend = zinc::CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId,zinc::MutexQue::generateHandle(sysThreadId));
        zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId)), reinterpret_cast<std::byte*>(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId) - 1));
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_INITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_LaunchQue_Server(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
        zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_VUALUEofMsb_uint8_t_To_VALUEofMsbULongLong_In_MsbByteArray(sysThreadId, stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), reinterpret_cast<std::byte*>(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId) - 2));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId). " << std::endl;
        zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_VUALUEofMsb_uint8_t_To_VALUEofMsbULongLong_In_MsbByteArray(sysThreadId, stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), reinterpret_cast<std::byte*>(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId)));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
        zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_VUALUEofMsb_uint8_t_To_VALUEofMsbULongLong_In_MsbByteArray(sysThreadId, stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), reinterpret_cast<std::byte*>(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId) - 1));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(std::byte* sysThreadId) {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute : stat_PGM_boot3_REINITIALISE_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
        zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_LeftHemisphore_Framework_Global::stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_VUALUEofMsb_uint8_t_To_VALUEofMsbULongLong_In_MsbByteArray(sysThreadId, stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), reinterpret_cast<std::byte*>(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId) - 2));
    }
    uint8_t* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= int* HandleId : stat_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId). " << std::endl;
        return stat_REG_HandleId_For_CLIB_LaunchQue_Server;
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_get_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData(std::byte* sysThreadId) {
        return stat_REG_HandleId_For_CLIB_MutexQue_LaunchQue_MetaData;
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= int* HandleId : stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId). " << std::endl;
        return stat_REG_HandleId_For_CLIB_MutexQue_ServerInputReceive;
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_Framework_App_Execute::stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= int* HandleId : stat_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId). " << std::endl;
        return stat_REG_HandleId_For_CLIB_MutexQue_ServerOutputSend;
    }