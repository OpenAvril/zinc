#ifndef CLIB_PACKAGE_CLIB_FRAMEWORK_H
#define CLIB_PACKAGE_CLIB_FRAMEWORK_H
#include "CLIB_Framework_Global.h"
namespace zinc {
    class CLIB_Framework {
    public:
        CLIB_Framework(std::byte* sysThreadId);
        virtual ~CLIB_Framework();
        void dyn_CLASS_create_Architecture(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        void dyn_CLASS_create_zinc_Framework_Global_and_Settings(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        class CLIB_Framework_Global* dyn_CLASS_get_ptr_zinc_Framework_Global(std::byte* sysThreadId);
        void dyn_REG_boot0_DECLARE_zinc_Framework(std::byte* sysThreadId);
        void dyn_REG_boot1_DEFINE_zinc_Framework(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_zinc_Framework(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_zinc_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_zinc_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_zinc_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_zinc_Framework(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_zinc_Framework(std::byte* sysThreadId);
    private:
        static class CLIB_Framework_Global* stat_CLASS_ptr_zinc_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_zinc_Framework_Global(std::byte* sysThreadId);
        static void pr_stat_CLASS_boot3_INITIALISE_zinc_Framework_Global(std::byte* sysThreadId);
        static class CLIB_Framework_Global* stat_CLASS_get_ptr_zinc_Framework_Global(std::byte* sysThreadId);
    };
};
#endif