#include "../../include/engine/CLIB_LeftHemishpore_Framework_App_Algorithms.h"
#include <iostream>
    std::list<zinc::CLIB_LeftHemishpore_STRUCT_Concurrent*>* zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::CLIB_LeftHemishpore_Framework_App_Algorithms(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::~CLIB_LeftHemishpore_Framework_App_Algorithms() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        delete stat_REG_ptr_list_Of_ptr_Concurrent;
        std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemishpore_STRUCT_Concurrent* zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(std::byte* sysThreadId, std::byte* concurrentThreadId) {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
        std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= class : dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(sysThreadId)." << std::endl;
        return *temp;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj, CLIB_LeftHemishpore_STRUCT_Concurrent* objConcurrent) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId, obj, objConcurrent);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot3_REINITIALISE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot3_REINITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId, obj);
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot3_REINITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Algorithm(sysThreadId). " << std::endl;
    }
// private.
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        stat_REG_ptr_list_Of_ptr_Concurrent = nullptr;
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<CLIB_LeftHemishpore_STRUCT_Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->resize(std::to_integer<std::uint8_t>(*CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId)) - 2);//NUMBER OF CONCURRENT THREADS.
        for (int concurrentThreadId = 0; concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, concurrentThreadId);
            *temp = nullptr;
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj, CLIB_LeftHemishpore_STRUCT_Concurrent* objConcurrent) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        for (int concurrentThreadId = 0; concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, concurrentThreadId);
            *temp = objConcurrent;
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
        auto oldSize = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size();
        stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->resize(std::to_integer<std::uint8_t>(*CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId)));
        for (int concurrentThreadId = oldSize; concurrentThreadId < stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->size(); concurrentThreadId++) {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)->begin();
            std::advance(temp, concurrentThreadId);
            *temp = obj->dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId);
        }
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_App_Algorithms : stat_REG_boot3_REINITIALISE_list_Of_ptr_Concurrent(sysThreadId). " << std::endl;
    }
    std::list<zinc::CLIB_LeftHemishpore_STRUCT_Concurrent*>* zinc::CLIB_LeftHemishpore_Framework_App_Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= class : stat_REG_get_ptr_list_Of_ptr_Concurrent(sysThreadId)." << std::endl;
        return stat_REG_ptr_list_Of_ptr_Concurrent;
    }