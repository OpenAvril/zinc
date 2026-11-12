#ifndef CLIB_LAUNCHQUEUEATEND_FRAMEWORK_APP_CONTROL_H
#define CLIB_LAUNCHQUEUEATEND_FRAMEWORK_APP_CONTROL_H
#include <cstddef>
#include <cstdint>
#include <list>
namespace zinc {
    class CLIB_LaunchQue_Framework_App_Control {
    public:
        CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId);
        virtual ~CLIB_LaunchQue_Framework_App_Control();
        void dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj, uint8_t* MAX_NUMBER_OF_THREADS);
        void dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj, uint8_t* MAX_NUMBER_OF_THREADS);
        void dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(std::byte* sysThreadId);
        unsigned long long* dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId, uint8_t* concurrentThreadId);
        unsigned long long* dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId, uint8_t* concurrentThreadId);
        bool dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId, uint8_t* concurrentThreadId);
        uint8_t* dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId, uint8_t* slot);
        void dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId, uint8_t* concurrentThreadId, unsigned long long* newValue);
        void dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId, uint8_t* concurrentThreadId, unsigned long long* newValue);
        void dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId, uint8_t* concurrentThreadId, bool newState);
        void dyn_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId, uint8_t* slot, uint8_t* concurrentThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(std::byte* sysThreadId);
    private:
        static std::list<unsigned long long>* stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId;
        static std::list<unsigned long long>* stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId;
        static std::list<bool>* stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        static std::list<uint8_t>* stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        void dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj, uint8_t* concurrentThreadId_A, uint8_t* concurrentThreadId_B);
        static void stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId, class CLIB_LaunchQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId);
        static std::list<unsigned long long>* stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId);
        static std::list<unsigned long long>* stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId);
        static std::list<bool>* stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId);
        static std::list<uint8_t>* stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(std::byte* sysThreadId);
        static void stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(std::byte* sysThreadId, uint8_t concurrentThreadId, unsigned long long newValue);
        static void stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(std::byte* sysThreadId, uint8_t concurrentThreadId, unsigned long long newValue);
        static void stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(std::byte* sysThreadId, uint8_t concurrentThreadId, bool newState);
        static void stat_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(std::byte* sysThreadId, uint8_t slot, uint8_t concurrentThreadId);
    };
}
#endif