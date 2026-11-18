#ifndef CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
#define CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
#include <cstddef>
#include <cstdint>
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
        std::list<uint16_t*>* dyn_PGM_get_List_CLIB_List_Of_Busses(std::byte* sysThreadId);
        unsigned long long* dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(std::byte* sysThreadId, uint16_t* busId);
        unsigned long long* dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_SystemBus_Framework_Execute(std::byte* sysThreadId);
    private:
        static unsigned long long* stat_PGM_CLIB_MutexQue_Of_Stemisphore;
        static std::list<uint16_t*>* stat_PGM_CLIB_List_Of_Busses;
        static void stat_PGM_boot1_DEFINE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static void stat_PGM_boot1_DEFINE_CLIB_MutexQue_Of_Stemisphore(std::byte* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_CLIB_MutexQue_Of_Stemisphore(std::byte* sysThreadId);
        static void stat_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(std::byte* sysThreadId);
        static std::list<unsigned long long*>* stat_REG_get_HandleId_List_Of_CLIB_MutexQue_On_List_Of_Busses(std::byte* sysThreadId);
        static unsigned long long* stat_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(std::byte* sysThreadId);
    };
};
#endif //CLIB_SystemBus_CLIB_SystemBus_FRAMEWORK_APP_EXECUTE_H
