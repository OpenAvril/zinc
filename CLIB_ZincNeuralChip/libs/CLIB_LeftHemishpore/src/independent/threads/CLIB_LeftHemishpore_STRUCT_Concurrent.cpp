#include "../../../include/independent/threads/CLIB_LeftHemishpore_STRUCT_Concurrent.h"
#include "../../../../CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../../../include/engine/CLIB_LeftHemishpore_Framework_App.h"
#include "../../../include/engine/CLIB_LeftHemishpore_Framework_App_Data.h"
#include "../../../include/engine/CLIB_LeftHemishpore_Framework_App_Data_Control.h"
#include "../../../include/engine/CLIB_LeftHemishpore_Framework_App_Execute.h"
#include "../../../include/engine/CLIB_LeftHemishpore_Framework_App_Execute_Control.h"
#include "../../../include/independent/CLIB_LeftHemishpore_STRUCT_User_Algorithm.h"
#include "../../../include/independent/CLIB_LeftHemishpore_STRUCT_User_Input.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise0.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise1.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise2.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise3.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise0.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise1.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise2.h"
#include "../../../include/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise3.h"
#include <iostream>
    std::byte* zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_REG_CLIB_LeftHemishpore_Concurrent_ThreadId;
// public.
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::app_do_Concurrent_Algorithm_For_PraiseEventId(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj, std::byte* playerId, unsigned long long* praiseEventId, Object* ptr_Input_Subset, Object* ptr_Output_Subset) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : app_do_Concurrent_Algorithm_For_PraiseEventId(sysThreadId)." << std::endl;
        switch (*praiseEventId) {
            case 0: {
                auto temp = reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Algorithm_praise0*>(*obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(sysThreadId, praiseEventId)->begin());
                temp->app_Do_Praise(sysThreadId, reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Input_praise0*>(ptr_Input_Subset), reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Output_praise0*>(ptr_Output_Subset));
                break;
            }
            case 1: {
                auto temp = reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Algorithm_praise1*>(*obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemishpore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId)->begin());
                temp->app_Do_Praise(sysThreadId, reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Input_praise1*>(ptr_Input_Subset), reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Output_praise1*>(ptr_Output_Subset));
                break;
            }
            case 2: {
                auto temp = reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Algorithm_praise2*>(*obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemishpore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId)->begin());
                temp->app_Do_Praise(sysThreadId, reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Input_praise2*>(ptr_Input_Subset), reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Output_praise2*>(ptr_Output_Subset));
                break;
            }
            case 3: {
                auto temp = reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Algorithm_praise3*>(*obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemishpore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId)->begin());
                temp->app_Do_Praise(sysThreadId, reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Input_praise3*>(ptr_Input_Subset), reinterpret_cast<CLIB_LeftHemishpore_STRUCT_Output_praise3*>(ptr_Output_Subset));
                break;
            }
            default: {
                break;
            }
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : app_do_Concurrent_Algorithm_For_PraiseEventId(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::dyn_REG_boot1_DEFINE_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot1_DEFINE_Concurrent(sysThreadId)." << std::endl;
        stat_REG_CLIB_LeftHemishpore_Concurrent_ThreadId = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot1_DEFINE_Concurrent(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot2_SUBSTANTIATE_Concurrent(sysThreadId)." << std::endl;
        stat_REG_CLIB_LeftHemishpore_Concurrent_ThreadId = new std::byte();
        *stat_REG_CLIB_LeftHemishpore_Concurrent_ThreadId = static_cast<std::byte>(255);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot2_SUBSTANTIATE_Concurrent(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(std::byte* sysThreadId, zinc::CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot3_INITIALISE_Concurrent(sysThreadId)." << std::endl;
        *stat_REG_CLIB_LeftHemishpore_Concurrent_ThreadId = static_cast<std::byte>(255);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : dyn_REG_boot3_INITIALISE_Concurrent(sysThreadId)." << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::dyn_REG_get_CLIB_LeftHemishpore_Concurrent_ThreadId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= std::byte* : dyn_REG_get_CLIB_LeftHemishpore_Concurrent_ThreadId(sysThreadId)." << std::endl;
        return stat_REG_get_CLIB_LeftHemishpore_Concurrent_ThreadId(sysThreadId);
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::dyn_REG_set_CLIB_LeftHemishpore_Concurrent_ThreadId(std::byte* sysThreadId, std::byte* praiseId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: => std::byte* : dyn_REG_set_CLIB_LeftHemishpore_Concurrent_ThreadId(sysThreadId)." << std::endl;
        stat_REG_set_CLIB_LeftHemishpore_Concurrent_ThreadId(sysThreadId, *praiseId);
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_app_thread_Concurrency(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj, std::byte* concurrentThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_app_thread_Concurrency(sysThreadId)." << std::endl;
        bool* checkPass = new bool(false);
        bool* doneOnce = new bool(false);
        while (!checkPass) {
            zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);
            while (obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId)->dyn_REG_get_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId, concurrentThreadId)) {
                if (!*doneOnce) {
                    obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId)->dyn_REG_set_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId, concurrentThreadId, !*doneOnce);
                    *doneOnce = !*doneOnce;
                }
            }
            *checkPass = !checkPass;
            zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);
        }
        *checkPass = !checkPass;
        zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);
        while (!checkPass) {
            while (obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId)) {
            }
            *checkPass = !obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
        }
        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);
        *checkPass = !checkPass;
        while (!checkPass) {
            zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);
            while (!obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId)) {
                switch (CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(sysThreadId, zinc::LaunchQue::get_FlagSTATEofConcurrentCore(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), concurrentThreadId))) {
                    case false: {
                        zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);

                        break;
                    }
                    case true: {
                        if (obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(sysThreadId)) {
                            zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);
                            zinc::MutexQue::startByLock(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId)), concurrentThreadId);
                            obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_pop_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Input(sysThreadId, obj, concurrentThreadId);
                            obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(sysThreadId, concurrentThreadId)->dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Output_Subset(sysThreadId, obj, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(sysThreadId, concurrentThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId));
                            zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerInputReceive(sysThreadId)), concurrentThreadId);

                            obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Algorithms(sysThreadId)->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(sysThreadId, concurrentThreadId)->app_do_Concurrent_Algorithm_For_PraiseEventId(
                                sysThreadId,
                                obj,
                                obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(sysThreadId, concurrentThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_playerId(sysThreadId),
                                obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(sysThreadId, concurrentThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_Input_praiseEventId(sysThreadId),
                                *obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(sysThreadId, concurrentThreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)->begin(),
                                *obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(sysThreadId, concurrentThreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemishpore_STRUCT_Output_Subset(sysThreadId)->begin()
                            );

                            zinc::MutexQue::startByLock(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId)), concurrentThreadId);
                            obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_LeftHemishpore_Framework_App_Data_Control_STACK_Of_Output(sysThreadId, obj, concurrentThreadId);
                            zinc::LaunchQue::threadEnd(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), concurrentThreadId);
                            if (obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(sysThreadId)) {
                                if (zinc::LaunchQue::get_FlagSTATEofConcurrentCore(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(sysThreadId, zinc::LaunchQue::get_coreIdTolaunch(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), concurrentThreadId))) == zinc::LaunchQue::get_FlagisIdle(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), concurrentThreadId)) {
                                    zinc::LaunchQue::threadRequestlaunch(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbStdByte(sysThreadId, zinc::LaunchQue::get_coreIdTolaunch(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_LaunchQue_Server(sysThreadId)), concurrentThreadId)));
                                }
                            }
                            zinc::MutexQue::startByLock(sysThreadId, CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_ServerOutputSend(sysThreadId)), concurrentThreadId);
                        }
                        break;
                    }
                }
                zinc::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);
                *checkPass = obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_LeftHemishpore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
                zinc::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_PGM_get_HandleId_For_CLIB_MutexQue_Epicentre_MetaData(sysThreadId)), concurrentThreadId);
            }
            std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_app_thread_Concurrency(sysThreadId)." << std::endl;
        }
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_STRUCT_boot0_DECLARE_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_STRUCT_boot0_DECLARE_Concurrent(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_STRUCT_boot0_DECLARE_Concurrent(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_STRUCT_boot1_DEFINE_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_STRUCT_boot1_DEFINE_Concurrent(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_STRUCT_boot1_DEFINE_Concurrent(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_STRUCT_boot3_INITIALISE_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_STRUCT_boot3_INITIALISE_Concurrent(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_STRUCT_boot3_INITIALISE_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_STRUCT_boot4_INSTANTIATE_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_STRUCT_boot4_INSTANTIATE_Concurrent(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_STRUCT_boot4_INSTANTIATE_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_REG_boot0_DECLARE_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot0_DECLARE_Concurrent(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_STRUCT_Concurrent : stat_REG_boot0_DECLARE_Concurrent(sysThreadId). " << std::endl;
    }
// private.
    std::byte* zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_REG_get_CLIB_LeftHemishpore_Concurrent_ThreadId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= std::byte* : stat_REG_get_CLIB_LeftHemishpore_Concurrent_ThreadId(sysThreadId). " << std::endl;
        return stat_REG_CLIB_LeftHemishpore_Concurrent_ThreadId;
    }
    void zinc::CLIB_LeftHemishpore_STRUCT_Concurrent::stat_REG_set_CLIB_LeftHemishpore_Concurrent_ThreadId(std::byte* sysThreadId, std::byte newValue_praiseId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: => std::byte : stat_REG_set_CLIB_LeftHemishpore_Concurrent_ThreadId(sysThreadId). " << std::endl;
        *stat_REG_CLIB_LeftHemishpore_Concurrent_ThreadId = newValue_praiseId;
    }