#include "../../include/engine/CLIB_LeftHemishpore_Framework_App.h"
#include "CLIB_ThreadLogs.h"
    zinc::CLIB_LeftHemishpore_Framework_App_Algorithms* zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms;
    zinc::CLIB_LeftHemishpore_Framework_App_Data* zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Data;
    zinc::CLIB_LeftHemishpore_Framework_App_Execute* zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Execute;
// public.
    zinc::CLIB_LeftHemishpore_Framework_App::CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered CONSTRUCTOR of CLIB_LeftHemishpore_Framework_App(sysThreadId) " << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting CONSTRUCTOR of CLIB_LeftHemishpore_Framework_App(sysThreadId) " << std::endl;
    }
    zinc::CLIB_LeftHemishpore_Framework_App::~CLIB_LeftHemishpore_Framework_App() {
        delete stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms;
        delete stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Data;
        delete stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Execute;
    }
    zinc::CLIB_LeftHemishpore_Framework_App_Algorithms* zinc::CLIB_LeftHemishpore_Framework_App::dyn_CLASS_get_ptr_Algorithms(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_Algorithms(sysThreadId). " << std::endl;
        return stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId);
    }
    zinc::CLIB_LeftHemishpore_Framework_App_Data* zinc::CLIB_LeftHemishpore_Framework_App::dyn_CLASS_get_ptr_Data(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_Data(sysThreadId). " << std::endl;
        return stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data(sysThreadId);
    }
    zinc::CLIB_LeftHemishpore_Framework_App_Execute* zinc::CLIB_LeftHemishpore_Framework_App::dyn_CLASS_get_ptr_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_Execute(sysThreadId)." << std::endl;
        return stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId);
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered dyn_REG_boot1_DEFINE_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting dyn_REG_boot1_DEFINE_App(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting dyn_REG_boot2_SUBSTANTIATE_App(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_AppApp(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting dyn_REG_boot3_INITIALISE_App(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered dyn_REG_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting dyn_REG_boot4_INSTANTIATE_App(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered stat_CLASS_boot0_DECLARE_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting stat_CLASS_boot0_DECLARE_App(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered stat_CLASS_boot1_DEFINE_App(sysThreadId)" << std::endl;
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Data(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting stat_CLASS_boot1_DEFINE_App(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered stat_CLASS_boot3_INITIALISE_App(sysThreadId)" << std::endl;
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Data(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting stat_CLASS_boot3_INITIALISE_App(sysThreadId)" << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered stat_REG_boot0_DECLARE_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting stat_REG_boot0_DECLARE_App(sysThreadId)" << std::endl;
    }
// private.
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Algorithms(uint8_t* sysThreadId) {
        stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms = nullptr;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Data(uint8_t* sysThreadId) {
        stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Data = nullptr;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId) {
        stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Execute = nullptr;
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Algorithms(uint8_t* sysThreadId) {
        stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms = new class zinc::CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId) == nullptr) {}
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Data(uint8_t* sysThreadId) {
        stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Data = new class zinc::CLIB_LeftHemishpore_Framework_App_Data(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data(sysThreadId) == nullptr) {}
    }
    void zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId) {
        stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Execute = new class zinc::CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId) == nullptr) {}
    }
    zinc::CLIB_LeftHemishpore_Framework_App_Algorithms* zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms(sysThreadId)." << std::endl;
        return stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Algorithms;
    }
    zinc::CLIB_LeftHemishpore_Framework_App_Data* zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Data(sysThreadId)." << std::endl;
        return stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Data;
    }
    zinc::CLIB_LeftHemishpore_Framework_App_Execute* zinc::CLIB_LeftHemishpore_Framework_App::stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App_Execute(sysThreadId)." << std::endl;
        return stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App_Execute;
    }