#include "../../include/engine/CLIB_LeftHemishpore_Framework_App_Algorithms.h"
#include <iostream>
    std::list<zinc::CLIB_LeftHemishpore_STRUCT_Concurrent*>* zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::CLIB_LeftHemishpore_Framework_App_Algorithms(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::~CLIB_LeftHemishpore_Framework_App_Algorithms() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        delete stat_REG_ptr_list_Of_ptr_Concurrent;
        std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemishpore_STRUCT_Concurrent* zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t* sysThreadId, uint8_t* concurrentThreadId) {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
        std::advance(temp, *concurrentThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(sysThreadId)." << std::endl;
        return *temp;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj, CLIB_LeftHemishpore_STRUCT_Concurrent* objConcurrent) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId, obj, objConcurrent);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot3_REINITIALISE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot3_REINITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId, obj);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot3_REINITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
    }
// private.
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        stat_REG_ptr_list_Of_ptr_Concurrent = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<CLIB_LeftHemishpore_STRUCT_Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->resize(*CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId) - 2);//NUMBER OF CONCURRENT THREADS.
        for (int concurrentThreadId = 0; concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, concurrentThreadId);
            *temp = nullptr;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj, CLIB_LeftHemishpore_STRUCT_Concurrent* objConcurrent) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        for (int concurrentThreadId = 0; concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, concurrentThreadId);
            *temp = objConcurrent;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        auto oldSize = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size();
        stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->resize(*CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId));
        for (int concurrentThreadId = oldSize; concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, concurrentThreadId);
            *temp = obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    std::list<zinc::CLIB_LeftHemishpore_STRUCT_Concurrent*>* zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)." << std::endl;
        return stat_REG_ptr_list_Of_ptr_Concurrent;
    }