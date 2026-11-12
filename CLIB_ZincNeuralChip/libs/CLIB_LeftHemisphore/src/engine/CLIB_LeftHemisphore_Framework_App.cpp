#include "../../include/engine/CLIB_LeftHemisphore_Framework_App.h"
#include <cstdint>
#include <iostream>
    zinc::CLIB_LeftHemisphore_Framework_App_Algorithms* zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms;
    zinc::CLIB_LeftHemisphore_Framework_App_Data* zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Data;
    zinc::CLIB_LeftHemisphore_Framework_App_Execute* zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Execute;
// public.
    zinc::CLIB_LeftHemisphore_Framework_App::CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App(sysThreadId, obj);
        stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemisphore_Framework_App::~CLIB_LeftHemisphore_Framework_App() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
        delete stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms;
        delete stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Data;
        delete stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Execute;
        std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Algorithms* zinc::CLIB_LeftHemisphore_Framework_App::dyn_CLASS_get_ptr_Algorithms(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_Algorithms(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId);
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Data* zinc::CLIB_LeftHemisphore_Framework_App::dyn_CLASS_get_ptr_Data(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_Data(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Data(sysThreadId);
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Execute* zinc::CLIB_LeftHemisphore_Framework_App::dyn_CLASS_get_ptr_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_Execute(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId);
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App(sysThreadId). " << std::endl;
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App(sysThreadId). " << std::endl;
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId, obj);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App(sysThreadId). " << std::endl;
    }
// private.
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Algorithms(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms = nullptr;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data(sysThreadId)." << std::endl;
        stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Data = nullptr;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Execute = nullptr;
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Algorithms(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms = new class zinc::CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId) == nullptr) {}
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;

        stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Data = new class zinc::CLIB_LeftHemisphore_Framework_App_Data(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Data(sysThreadId) == nullptr) {}
    }
    void zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Execute = new class zinc::CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId, obj);
        while (stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId) == nullptr) {}
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Algorithms* zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        return stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Algorithms;
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Data* zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Data(sysThreadId)." << std::endl;
        return stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Data;
    }
    zinc::CLIB_LeftHemisphore_Framework_App_Execute* zinc::CLIB_LeftHemisphore_Framework_App::stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId)." << std::endl;
        return stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Execute;
    }