#ifndef CLIB_OPENEPICENTRE_FRAMEWORK_APP_EXECUTE_CONTROL_H
#define CLIB_OPENEPICENTRE_FRAMEWORK_APP_EXECUTE_CONTROL_H
#include "CLIB_LeftHemisphore_Framework.h"
#include <cstddef>
#include <cstdint>
#include <thread>
namespace zinc {
    class CLIB_LeftHemisphore_Framework_App_Execute_Control {
    public:
        CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId);
        virtual ~CLIB_LeftHemisphore_Framework_App_Execute_Control();
        void dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot4_REINITIALISE_CLIB_LeftHemoshpore_Framework_App_Execute_Control_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj, uint8_t* MAX_NUMBER_OF_THREADS);
        bool dyn_REG_get_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId);
        bool dyn_REG_get_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(std::byte* sysThreadId, uint8_t* concurrnetThreadId);
        void dyn_REG_set_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId, bool state);
        void dyn_REG_set_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(std::byte* sysThreadId, uint8_t* concurrnetThreadId, bool state);
        static void stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId);
    private:
        static bool* stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised;
        static std::list<bool>* stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;
        static std::list<std::thread*>* stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads;
        static void stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId);
        static void stat_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        static bool* stat_REG_get_ptr_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId);
        static std::list<bool>* stat_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId);
        static void stat_REG_set_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId, bool newFLAG);
        static void stat_set_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(std::byte* sysThreadId, uint8_t threadId, bool state);
    };
};
#endif