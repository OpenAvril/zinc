#include "../../include/engine/CLIB_LeftHemisphore_Framework_App_Algorithms.h"
#include <cstdint>
#include <iostream>
    std::list<zinc::CLIB_LeftHemisphore_STRUCT_Concurrent*>* zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::CLIB_LeftHemisphore_Framework_App_Algorithms(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::~CLIB_LeftHemisphore_Framework_App_Algorithms() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        delete stat_REG_ptr_list_Of_ptr_Concurrent;
        std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemisphore_STRUCT_Concurrent* zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(std::byte* sysThreadId, uint8_t* concurrentThreadId) {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
        std::advance(temp, *concurrentThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(sysThreadId)." << std::endl;
        return *temp;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj, CLIB_LeftHemisphore_STRUCT_Concurrent* objConcurrent) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId, obj, objConcurrent);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::dyn_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId, obj);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Algorithm(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Algorithm(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Algorithm(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Algorithm(sysThreadId). " << std::endl;
    }
// private.
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        stat_REG_ptr_list_Of_ptr_Concurrent = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<CLIB_LeftHemisphore_STRUCT_Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->resize(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId) - 2);
        for (auto* concurrentThreadId = new uint8_t(0); *concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, *concurrentThreadId);
            *temp = nullptr;
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj, CLIB_LeftHemisphore_STRUCT_Concurrent* objConcurrent) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        for (uint8_t concurrentThreadId = 0; concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, concurrentThreadId);
            *temp = objConcurrent;
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        auto oldSize = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size();
        stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->resize(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId));
        for (int concurrentThreadId = oldSize; concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, concurrentThreadId);
            *temp = obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_Concurrent(sysThreadId);
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Algorithms : stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    std::list<zinc::CLIB_LeftHemisphore_STRUCT_Concurrent*>* zinc::CLIB_LeftHemisphore_Framework_App_Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)." << std::endl;
        return stat_REG_ptr_list_Of_ptr_Concurrent;
    }