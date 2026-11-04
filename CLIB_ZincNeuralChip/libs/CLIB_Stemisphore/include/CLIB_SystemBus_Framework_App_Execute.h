#ifndef CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
#define CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
#include <cstddef>
#include <list>
namespace zinc {
    class CLIB_SystemBus_Framework_App_Execute {
    public:
        CLIB_SystemBus_Framework_App_Execute(std::byte* sysThreadId);
        virtual ~CLIB_SystemBus_Framework_App_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        void dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        std::list<int*>* dyn_PGM_get_List_CLIB_List_Of_Busses(std::byte* sysThreadId);
        int* dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(std::byte* sysThreadId, std::byte* busId);
        int* dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
    private:
        static int* stat_PGM_CLIB_MutexQue_Of_Stemisphore;
        static std::list<int*>* stat_PGM_CLIB_List_Of_Busses;
        static void stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static void stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Stemisphore(std::byte* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Stemisphore(std::byte* sysThreadId);
        static void stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static std::list<int*>* stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(std::byte* sysThreadId);
        static int* stat_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(std::byte* sysThreadId);
    };
};
#endif //CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
