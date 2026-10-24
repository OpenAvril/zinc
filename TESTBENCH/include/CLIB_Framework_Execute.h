#ifndef CLIB_PACKAGE_CLIB_FRAMEWORK_EXECUTE_H
#define CLIB_PACKAGE_CLIB_FRAMEWORK_EXECUTE_H
#include <cstdint>
#include <list>
namespace zinc {
    class CLIB_Framework_Execute {
    public:
        CLIB_Framework_Execute(uint8_t* sysThreadId);
        virtual ~CLIB_Framework_Execute();
        void dyn_REG_boot1_DEFINE_zinc_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot2_SUBSTANTIATE_zinc_Framework_Execute(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_zinc_Framework_Execute(uint8_t* sysThreadId);
        void dyn_PGM_boot4_INSTANTIATE_zinc_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_zinc_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_zinc_Framework_Execute(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_zinc_Framework_Execute(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_zinc_Framework_Execute(uint8_t* sysThreadId);
    private:
        static int* stat_REG_HandleId_For_PGM_zincMutexQue;
        static int* stat_REG_HandleId_For_PGM_zincLaunchQue;
        static void stat_PGM_boot1_DEFINE_HandleId_For_PGM_zincMutexQue(uint8_t* sysThreadId);
        static void stat_PGM_boot1_DEFINE_HandleId_For_PGM_zincLaunchQue(uint8_t* sysThreadId);
        static void stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_zincMutexQue(uint8_t* sysThreadId);
        static void stat_PGM_boot2_SUBSTANTIATE_HandleId_For_PGM_zincLaunchQue(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_HandleId_For_PGM_zincMutexQue(uint8_t* sysThreadId);
        static void stat_PGM_boot3_INITIALISE_HandleId_For_PGM_zincLaunchQue(uint8_t* sysThreadId);
        static int* stat_PGM_get_array_of_ptrPGM_HandleId_For_PGM_zincMutexQue(uint8_t* sysThreadId);
        static int* stat_PGM_get_array_of_ptrPGM_HandleId_For_PGM_zincLaunchQue(uint8_t* sysThreadId);
    };
};
#endif //OPENEPICENTRE_BACKENDSUBUNTU_zinc_Framework_Execute_H