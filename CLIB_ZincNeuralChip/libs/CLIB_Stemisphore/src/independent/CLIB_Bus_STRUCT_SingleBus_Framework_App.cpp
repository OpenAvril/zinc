#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App.h"
#include "../../../Control/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data;
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute;
// public.
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId, obj);
		stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::~CLIB_Bus_STRUCT_SingleBus_Framework_App() {
		std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : ~CLIB_Bus_STRUCT_SingleBus_Framework_App()." << std::endl;
		delete stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data;
		delete stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute;
		std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : ~CLIB_Bus_STRUCT_SingleBus_Framework_App()." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		return pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
	}
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)." << std::endl;
		return pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId);
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId, obj);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)." << std::endl;
	}
// private
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data = new class CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		while(pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId) == nullptr) { }
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute = new class CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId, obj);
		while(pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId) == nullptr) { }
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)." << std::endl;
	}
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App_Data* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)." << std::endl;
		return stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data;
	}
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute* zinc::CLIB_Bus_STRUCT_SingleBus_Framework_App::pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : pr_stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)." << std::endl;
		return stat_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute;
	}