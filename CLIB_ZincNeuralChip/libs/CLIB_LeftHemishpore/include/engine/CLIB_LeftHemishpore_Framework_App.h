#ifndef CLIB_LEFTHEMISPHORE_FRAMEWORK_APP_H
#define CLIB_LEFTHEMISPHORE_FRAMEWORK_APP_H
#include "CLIB_LeftHemishpore_Framework_App_Algorithms.h"
#include "CLIB_LeftHemishpore_Framework_App_Data.h"
#include "CLIB_LeftHemishpore_Framework_App_Execute.h"
namespace zinc {
    class CLIB_LeftHemishpore_Framework_App {
    public:
        CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId, zinc::CLIB_LeftHemishpore_Framework* obj);
        virtual ~CLIB_LeftHemishpore_Framework_App();
        class CLIB_LeftHemishpore_Framework_App_Algorithms* dyn_CLASS_get_ptr_Algorithms(std::byte* sysThreadId);
        class CLIB_LeftHemishpore_Framework_App_Data* dyn_CLASS_get_ptr_Data(std::byte* sysThreadId);
        class CLIB_LeftHemishpore_Framework_App_Execute* dyn_CLASS_get_ptr_Execute(std::byte* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        void dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId, zinc::CLIB_LeftHemishpore_Framework* obj);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
    private:
        static class CLIB_LeftHemishpore_Framework_App_Algorithms* stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms;
        static class CLIB_LeftHemishpore_Framework_App_Data* stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Data;
        static class CLIB_LeftHemishpore_Framework_App_Execute* stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Execute;
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Algorithms(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Algorithms(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(std::byte* sysThreadId, zinc::CLIB_LeftHemishpore_Framework* obj);
        static class CLIB_LeftHemishpore_Framework_App_Algorithms* stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms(std::byte* sysThreadId);
        static class CLIB_LeftHemishpore_Framework_App_Data* stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data(std::byte* sysThreadId);
        static class CLIB_LeftHemishpore_Framework_App_Execute* stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute(std::byte* sysThreadId);
    };
};
#endif