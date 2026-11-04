#include "../include/CLIB_LaunchQue_Framework_App_Control.h"

#include <cstdint>

#include "../include/CLIB_LaunchQue_Framework_App.h"
#include "../include/CLIB_LaunchQue_Framework.h"
#include "../include/CLIB_LaunchQue_Framework_Global.h"
//#include "../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include <iostream>
    std::list<unsigned long long>* zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId;
    std::list<unsigned long long>* zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId;
    std::list<bool>* zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    std::list<std::byte>* zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
// public.
    zinc::CLIB_LaunchQue_Framework_App_Control::CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    zinc::CLIB_LaunchQue_Framework_App_Control::~CLIB_LaunchQue_Framework_App_Control() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : ~CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        delete stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId;
        delete stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId;
        delete stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        delete stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : ~CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(std::byte* sysThreadId, zinc::CLIB_LaunchQue_Framework* obj, std::byte* number_Implemented_Threads) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId)" << std::endl;
        for (auto concurrentThreadId_A = reinterpret_cast<uint8_t*>(std::byte{0x00}); *concurrentThreadId_A < *reinterpret_cast<uint8_t*>(*number_Implemented_Threads) - 2; concurrentThreadId_A++) {
            for (auto concurrentThreadId_B = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint8_t*>(*concurrentThreadId_A) - 2); *concurrentThreadId_B < *reinterpret_cast<uint8_t*>(*number_Implemented_Threads) - 1; concurrentThreadId_B++) {
                if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, reinterpret_cast<std::byte*>(*concurrentThreadId_A))) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)) {
                    if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, reinterpret_cast<std::byte*>(*concurrentThreadId_B))) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, reinterpret_cast<std::byte*>(concurrentThreadId_A), reinterpret_cast<std::byte*>(concurrentThreadId_B));
                    }
                    else if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, reinterpret_cast<std::byte*>(concurrentThreadId_B))) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)) {
                        if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, reinterpret_cast<std::byte*>(concurrentThreadId_A)) > obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, reinterpret_cast<std::byte*>(concurrentThreadId_B))) {
                            obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, reinterpret_cast<std::byte*>(concurrentThreadId_A), reinterpret_cast<std::byte*>(concurrentThreadId_B));
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, reinterpret_cast<std::byte*>(concurrentThreadId_A))) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                    if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, reinterpret_cast<std::byte*>(concurrentThreadId_B))) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                        if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, reinterpret_cast<std::byte*>(concurrentThreadId_A)) < obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, reinterpret_cast<std::byte*>(concurrentThreadId_B))) {
                            obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, reinterpret_cast<std::byte*>(concurrentThreadId_A), reinterpret_cast<std::byte*>(concurrentThreadId_B));
                        }
                    }
                }
            }
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(std::byte* sysThreadId, zinc::CLIB_LaunchQue_Framework* obj, std::byte* number_Implemented_Threads) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId)" << std::endl;
        for (auto concurrentThreadId = reinterpret_cast<std::byte*>(std::byte{0x00}); *concurrentThreadId < *number_Implemented_Threads; concurrentThreadId++) {
            switch (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, concurrentThreadId)) {
                case false: {
                    obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId, 0);
                    obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId) + 1);
                    break;
                }
                case true: {
                    obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId) + 1);
                    obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId, 0);
                    break;
                }
                default:
                    break;
            }
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId, obj);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(sysThreadId)" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(sysThreadId)" << std::endl;
    }
    unsigned long long* zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId, std::byte* concurrentThreadId) {
        auto result = new unsigned long long();
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned long long : dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId)" << std::endl;
        *result = *temp;
        return result;
    }
    unsigned long long* zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId, std::byte* concurrentThreadId) {
        auto result = new unsigned long long();
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= unsigned long long : dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)" << std::endl;
        *result = *temp;
        return result;
    }
    bool zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId, std::byte* concurrentThreadId) {
        auto result = new bool();
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)" << std::endl;
        *result = *temp;
        return result;
    }
    std::byte* zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId, std::byte* slot) {
        auto result = new std::byte();
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(*slot));
        *result = *temp;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)" << std::endl;
        return result;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId, std::byte* concurrentThreadId, unsigned long long* newValue) {
        stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, *concurrentThreadId, *newValue);
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId, std::byte* concurrentThreadId, unsigned long long* newValue) {
        stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, *concurrentThreadId, *newValue);
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId, std::byte* concurrentThreadId, bool newState) {
        stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, *concurrentThreadId, newState);
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId, std::byte* slot, std::byte* concurrentThreadId) {
        stat_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, *slot, *concurrentThreadId);
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
    }
// private.
    void zinc::CLIB_LaunchQue_Framework_App_Control::dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(std::byte* sysThreadId, zinc::CLIB_LaunchQue_Framework* obj, std::byte* concurrentThreadId_A, std::byte* concurrentThreadId_B) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId)" << std::endl;
        auto temp_UlongLong = new unsigned long long();
        auto temp_UnnsignedChar = new std::byte();
        temp_UlongLong = obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_B, temp_UlongLong);
        temp_UlongLong = obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_B, temp_UlongLong);
        temp_UnnsignedChar = obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_B, temp_UnnsignedChar);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)" << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->resize(3);//todo: number of concurrent threads.
        //stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->resize(obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->stat_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId));//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>();
        while (stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId) == nullptr) {}
        stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = true;
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = new std::list<std::byte>();
        while (stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId) == nullptr) {}
        stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = std::byte{0xFF};
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = false;
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<std::byte>(index);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
    }
    std::list<unsigned long long>* zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::list<unsigned long long>* : stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)." << std::endl;
        return stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId;
    }
    std::list<unsigned long long>* zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::list<unsigned long long>* : stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
        return stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId;
    }
    std::list<bool>* zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::list<std::byte>* : stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
        return stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<std::byte>* zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: <= std::list<std::byte>* : stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)." << std::endl;
        return stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId, std::byte concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(concurrentThreadId));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: => unsigned long long : stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId)." << std::endl;
        *temp = newValue;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId, std::byte concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(concurrentThreadId));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: => unsigned long long : stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)." << std::endl;
        *temp = newValue;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId, std::byte concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(concurrentThreadId));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: => bool : stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)." << std::endl;
        *temp = newState;
    }
    void zinc::CLIB_LaunchQue_Framework_App_Control::stat_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId, std::byte slot, std::byte concurrentThreadId) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(slot));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "  :: => std::byte : stat_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId)." << std::endl;
        *temp = concurrentThreadId;
    }