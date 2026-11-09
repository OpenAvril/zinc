#ifndef CLIB_CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_APP_CONTROL_H
#define CLIB_CLIB_PACKAGE_MUTEXQUE_FRAMEWORK_APP_CONTROL_H
#include "CLIB_MutexQue_Framework.h"
#include <array>
#include <cstddef>
#include <list>
namespace zinc {
    class CLIB_MutexQue_Framework_App_Control {
    public:
        CLIB_MutexQue_Framework_App_Control(std::byte* sysThreadId);
        ~CLIB_MutexQue_Framework_App_Control();
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicIn(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj, unsigned long long* coreId);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicOut(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj, unsigned long long* coreId);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_Activate(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj, unsigned long long* coreId);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_ShiftQueValues(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj, unsigned long long* coreId_A, unsigned long long* coreId_B);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_SortQue(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeQue_Update(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_REG_boot1_DEFINE_CLIB_MutexQue_Framework_App_Control(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Framework_App_Control(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        void dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Framework_App_Control_For_New_Access_Count(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        bool dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(std::byte* sysThreadId);
        bool dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(std::byte* sysThreadId);
        bool dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(std::byte* sysThreadId);
        bool dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(std::byte* sysThreadId);
        unsigned long long* dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(std::byte* sysThreadId, unsigned long long* coreId);
        unsigned long long* dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(std::byte* sysThreadId, unsigned long long* coreId);
        std::array<bool, 2> dyn_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(std::byte* sysThreadId, unsigned long long* coreId);
        unsigned long long* dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteActive_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId);
        unsigned long long* dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteIdle_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId);
        unsigned long long* dyn_REG_get_Item_On_CLIB_MutexQue_Framework_App_Control_list_Of_WriteWait_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId);
        unsigned long long* dyn_REG_get_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(std::byte* sysThreadId, unsigned long long* slotID);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(std::byte* sysThreadId, bool FLAGState);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(std::byte* sysThreadId, bool FLAGState);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(std::byte* sysThreadId, bool FLAGState);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(std::byte* sysThreadId, bool FLAGState);
        void dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(std::byte* sysThreadId, unsigned long long* coreId, std::array<bool, 2> new2bitState);
        void dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId, unsigned long long* newCount);
        void dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId, unsigned long long* newCount);
        void dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId, unsigned long long* newCount);
        void dyn_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(std::byte* sysThreadId, unsigned long long* slotID, unsigned long long* newID);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(std::byte* sysThreadId, unsigned long long* newValue);
        void dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(std::byte* sysThreadId, unsigned long long* newValue);
    private:
        static bool* stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_ONE;
        static bool* stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
        static bool* stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_ONE;
        static bool* stat_REG_FLAG_CLIB_MutexQue_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
        static std::array<std::array<bool, 2>, 3>* stat_REG_CONST_CLIB_MutexQue_Framework_App_Control_2bitFLAG_STATE;
        static std::list<unsigned long long>* stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId;
        static std::list<unsigned long long>* stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId;
        static std::list<unsigned long long>* stat_REG_LIST_Of_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId;
        static std::list<unsigned long long>* stat_REG_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE;
        static unsigned long long* stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index;
        static unsigned long long* stat_REG_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index;
        static void stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_QUE_Of_CLIB_MutexQue_Framework_App_Control_ThreadId_To_WRITE(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadId(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(std::byte* sysThreadId, class CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(std::byte* sysThreadId, CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteIDLE_Count_For_ThreadId(std::byte* sysThreadId, CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_WriteWAIT_Count_For_ThreadIdd(std::byte* sysThreadId, CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_ptr_QUE_Of_ThreadId_To_WRITE(std::byte* sysThreadId, CLIB_MutexQue_Framework* obj);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(std::byte* sysThreadId);
        static bool stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(std::byte* sysThreadId);
        static bool stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(std::byte* sysThreadId);
        static bool stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(std::byte* sysThreadId);
        static bool stat_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(std::byte* sysThreadId);
        static std::array<std::array<bool, 2>, 3>* stat_REG_get_ptr_Array_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(std::byte* sysThreadId);
        static unsigned long long* stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteActive_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId);
        static unsigned long long* stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId);
        static unsigned long long* stat_REG_get_ptr_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long* coreId);
        static std::list<unsigned long long>* stat_REG_get_ptr_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(std::byte* sysThreadId);
        static unsigned long long* stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(std::byte* sysThreadId, unsigned long long* coreId);
        static unsigned long long* stat_REG_get_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(std::byte* sysThreadId, unsigned long long* coreId);
        static void stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(std::byte* sysThreadId, bool newFLAG);
        static void stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(std::byte* sysThreadId, bool newFLAG);
        static void stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(std::byte* sysThreadId, bool newFLAG);
        static void stat_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(std::byte* sysThreadId, bool newFLAG);
        static void stat_REG_set_Item_On_Of_CLIB_MutexQue_Framework_App_Control_3STATE_FLAG_WriteState(std::byte* sysThreadId, unsigned long long coreId, std::array<bool, 2> new2bitState);
        static void stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteACTIVE_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long coreId, unsigned long long newCount);
        static void stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteIdle_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long coreId, unsigned long long newCount);
        static void stat_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_WriteWait_Count_For_ThreadId(std::byte* sysThreadId, unsigned long long coreId, unsigned long long newCount);
        static void stat_REG_set_Item_On_QUE_CLIB_MutexQue_Framework_App_Control_List_Of_ThreadToWrite(std::byte* sysThreadId, unsigned long long slotID, unsigned long long coreId);
        static void stat_REG_set_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartThreadId_Index(std::byte* sysThreadId, unsigned long long newValue);
        static void stat_REG_set_ptr_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndThreadId_Index(std::byte* sysThreadId, unsigned long long newValue);
    };
}
#endif
