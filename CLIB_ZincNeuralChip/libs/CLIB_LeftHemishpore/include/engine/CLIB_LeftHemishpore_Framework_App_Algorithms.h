#ifndef CLIB_OPENEPICENTRE_FRAMEWORK_APP_ALGORITHMS_H
#define CLIB_OPENEPICENTRE_FRAMEWORK_APP_ALGORITHMS_H
#include "../engine/CLIB_LeftHemishpore_Framework.h"
#include "../independent/threads/CLIB_LeftHemishpore_STRUCT_Concurrent.h"
#include <cstdint>
#include <list>
namespace zinc {
    class CLIB_LeftHemishpore_Framework_App_Algorithms {
    public:
        CLIB_LeftHemishpore_Framework_App_Algorithms(uint8_t* sysThreadId);
        virtual ~CLIB_LeftHemishpore_Framework_App_Algorithms();
        struct CLIB_LeftHemishpore_STRUCT_Concurrent* dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t* sysThreadId, uint8_t* concurrentThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId, class CLIB_LeftHemishpore_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId, class CLIB_LeftHemishpore_Framework* obj, struct CLIB_LeftHemishpore_STRUCT_Concurrent* objConcurrent);
        void dyn_REG_boot3_REINITIALISE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId, class CLIB_LeftHemishpore_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId, class CLIB_LeftHemishpore_Framework* obj);
        static void stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId);
    private:
        static std::list<struct CLIB_LeftHemishpore_STRUCT_Concurrent*>* stat_REG_ptr_list_Of_ptr_Concurrent;
        static void stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(uint8_t* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(uint8_t* sysThreadId);
        static void stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(uint8_t* sysThreadId, class CLIB_LeftHemishpore_Framework* obj, struct CLIB_LeftHemishpore_STRUCT_Concurrent* objConcurrent);
        static void stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj);
        static std::list<struct CLIB_LeftHemishpore_STRUCT_Concurrent*>* stat_REG_get_ptr_list_Of_ptr_Concurrent(uint8_t* sysThreadId);
    };
};
#endif
