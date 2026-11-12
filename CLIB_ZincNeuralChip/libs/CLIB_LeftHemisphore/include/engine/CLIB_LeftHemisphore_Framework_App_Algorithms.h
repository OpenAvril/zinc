#ifndef CLIB_OPENEPICENTRE_FRAMEWORK_APP_ALGORITHMS_H
#define CLIB_OPENEPICENTRE_FRAMEWORK_APP_ALGORITHMS_H
#include "../engine/CLIB_LeftHemisphore_Framework.h"
#include "../independent/threads/CLIB_LeftHemisphore_STRUCT_Concurrent.h"
#include <cstddef>
#include <list>
namespace zinc {
    class CLIB_LeftHemisphore_Framework_App_Algorithms {
    public:
        CLIB_LeftHemisphore_Framework_App_Algorithms(std::byte* sysThreadId);
        virtual ~CLIB_LeftHemisphore_Framework_App_Algorithms();
        struct CLIB_LeftHemisphore_STRUCT_Concurrent* dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(std::byte* sysThreadId, uint8_t* concurrentThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId);
        void dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, struct CLIB_LeftHemisphore_STRUCT_Concurrent* objConcurrent);
        void dyn_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        static void stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId);
    private:
        static std::list<struct CLIB_LeftHemisphore_STRUCT_Concurrent*>* stat_REG_ptr_list_Of_ptr_Concurrent;
        static void stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, struct CLIB_LeftHemisphore_STRUCT_Concurrent* objConcurrent);
        static void stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        static std::list<struct CLIB_LeftHemisphore_STRUCT_Concurrent*>* stat_REG_get_ptr_list_Of_ptr_Concurrent(std::byte* sysThreadId);
    };
};
#endif
