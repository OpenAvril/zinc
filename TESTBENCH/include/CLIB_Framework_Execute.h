#ifndef CLIB_PACKAGE_CLIB_FRAMEWORK_EXECUTE_H
#define CLIB_PACKAGE_CLIB_FRAMEWORK_EXECUTE_H
#include <cstdint>
#include <list>
namespace zinc {
    class CLIB_Framework_Execute {
    public:
        CLIB_Framework_Execute(std::byte* sysThreadId);
        virtual ~CLIB_Framework_Execute();
        void dyn_REG_boot1_DEFINE_zinc_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_zinc_Framework_Execute(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_zinc_Framework_Execute(std::byte* sysThreadId);
        void dyn_PGM_boot4_INSTANTIATE_zinc_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_zinc_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_zinc_Framework_Execute(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_zinc_Framework_Execute(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_zinc_Framework_Execute(std::byte* sysThreadId);
    private:

    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_zinc_Framework_Execute_H