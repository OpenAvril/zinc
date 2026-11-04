#ifndef CLIB_Bus_STRUCT_SingleBus_CLIB_Bus_STRUCT_SingleBus_FRAMEWORK_APP_EXECUTE_H
#define CLIB_Bus_STRUCT_SingleBus_CLIB_Bus_STRUCT_SingleBus_FRAMEWORK_APP_EXECUTE_H
#include "CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include <cstddef>
#include <list>
namespace zinc {
    class CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute {
    public:
        CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(std::byte* sysThreadId, class CLIB_Bus_STRUCT_SingleBus_Framework* obj);
        virtual ~CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(std::byte* sysThreadId);
        void dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        void dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(std::byte* sysThreadId);
        void dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(std::byte* sysThreadId);
        void* dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(std::byte* sysThreadId, std::byte* busId);
        int* dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(std::byte* sysThreadId);
        std::list<void*>* dyn_PGM_get_List_CLIB_List_Of_Busses(std::byte* sysThreadId);
        int* dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(std::byte* sysThreadId, std::byte* busId);
        int* dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(std::byte* sysThreadId, std::byte* busId, std::byte* junctionId);
        static void stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(std::byte* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj);
        static void stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_Framework_Execute(std::byte* sysThreadId);
    private:
        static std::list<void*>* stat_PGM_CLIB_List_Of_Busses;
        static int* stat_PGM_CLIB_MutexQue_Of_Bus;
        static std::list<int*>* stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction;
        static std::list<std::list<int*>>* stat_PGM_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock;
        static void stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static void stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus(std::byte* sysThreadId);
        static void stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus_At_Junction(std::byte* sysThreadId);
        static void stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(std::byte* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(std::byte* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj);
        static void stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Bus(std::byte* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(std::byte* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(std::byte* sysThreadId);
        static void stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static void stat_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(std::byte* sysThreadId);
        static void stat_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(std::byte* sysThreadId);
        static std::list<void*>* stat_REG_get_PGM_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static int* stat_REG_get_PGM_CLIB_MutexQue_Of_Bus(std::byte* sysThreadId);
        static std::list<int*>* stat_REG_get_PGM_CLIB_MutexQue_Of_Bus_At_Junction(std::byte* sysThreadId);
        static std::list<std::list<int*>>*  stat_REG_get_PGM_CLIB_MutexQue_Of_MutexQue_Junction_At_AccessLock(std::byte* sysThreadId);
    };
};
#endif //CLIB_Bus_STRUCT_SingleBus_CLIB_Bus_STRUCT_SingleBus_FRAMEWORK_APP_EXECUTE_H
