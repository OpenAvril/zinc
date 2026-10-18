#include "../../include/engine/CLIB_LeftHemishpore_Framework.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework_App_Execute.h"
#include <cstdint>
#include <iostream>
	zinc::CLIB_LeftHemishpore_Framework_App* zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App;
	zinc::CLIB_LeftHemishpore_Framework_Global* zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_Global;
	zinc::CLIB_LeftHemishpore_STRUCT_Concurrent* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_Concurrent;
	zinc::CLIB_LeftHemishpore_STRUCT_Input* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Input;
	zinc::CLIB_LeftHemishpore_STRUCT_Output* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Output;
	zinc::CLIB_LeftHemishpore_STRUCT_User_Algorithm* zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_User_Algorithm;
	zinc::CLIB_LeftHemishpore_STRUCT_User_Input* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Input;
	zinc::CLIB_LeftHemishpore_STRUCT_User_Output* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Output;
// public.
	zinc::CLIB_LeftHemishpore_Framework::CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : CLIB_LeftHemishpore_Framework(sysThreadId). " << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : CLIB_LeftHemishpore_Framework(sysThreadId). " << std::endl;
	}
	zinc::CLIB_LeftHemishpore_Framework::~CLIB_LeftHemishpore_Framework() {
		std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : ~CLIB_LeftHemishpore_Framework(sysThreadId). " << std::endl;
		delete stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App;
		delete stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_Global;//
		delete stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_Concurrent;
		delete stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Input;
		delete stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Output;
		delete stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_User_Algorithm;
		delete stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Input;
		delete stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Output;
		std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : ~CLIB_LeftHemishpore_Framework(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Architecture(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Architecture(sysThreadId). " << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(sysThreadId);
		stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Architecture(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Global_and_Settings(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Global_and_Settings(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Global_and_Settings(sysThreadId)." << std::endl;
	}
	zinc::CLIB_LeftHemishpore_Framework_App* zinc::CLIB_LeftHemishpore_Framework::dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId);
	}
	zinc::CLIB_LeftHemishpore_Framework_Global* zinc::CLIB_LeftHemishpore_Framework::dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_PGM_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId, CLIB_LeftHemishpore_Framework* obj) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_PGM_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : dyn_PGM_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework(sysThreadId)." << std::endl;

		obj->dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_App_Execute(obj);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Algorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Concurrent(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Input(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Input(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Output(sysThreadId)." << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Output(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Algorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Concurrent(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Input(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Input(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Output(sysThreadId)." << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Output(sysThreadId);
	}
	zinc::CLIB_LeftHemishpore_STRUCT_Concurrent* zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)." << std::endl;
		return stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId);
	}
	zinc::CLIB_LeftHemishpore_STRUCT_Input* zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(sysThreadId)." << std::endl;
		return stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(sysThreadId);
	}
	zinc::CLIB_LeftHemishpore_STRUCT_Output* zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(sysThreadId)" << std::endl;
		return stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(sysThreadId);
	}
	zinc::CLIB_LeftHemishpore_STRUCT_User_Algorithm* zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)" << std::endl;
		return stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId);
	}
	zinc::CLIB_LeftHemishpore_STRUCT_User_Input* zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)" << std::endl;
		return stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId);
	}
	zinc::CLIB_LeftHemishpore_STRUCT_User_Output* zinc::CLIB_LeftHemishpore_Framework::dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)" << std::endl;
		return stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(sysThreadId);
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework(sysThreadId)" << std::endl;
	}
// private.
	void zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(sysThreadId)" << std::endl;
		stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)" << std::endl;
		stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(sysThreadId)" << std::endl;
		stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App = new CLIB_LeftHemishpore_Framework_App(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)" << std::endl;
		stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_Global = new CLIB_LeftHemishpore_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
	}
	zinc::CLIB_LeftHemishpore_Framework_App* zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(sysThreadId)." << std::endl;
		return stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App;
	}
	zinc::CLIB_LeftHemishpore_Framework_Global* zinc::CLIB_LeftHemishpore_Framework::stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
		return stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_Global;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_Concurrent(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)." << std::endl;
		stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_Concurrent = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Input(sysThreadId)." << std::endl;
		stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Input = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Input(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Output(sysThreadId)." << std::endl;
		stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Output = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Output(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_User_Algorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_User_Algorithm = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_User_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)." << std::endl;
		stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Input = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_User_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)." << std::endl;
		stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Output = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Framework_Concurrent(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)." << std::endl;
		stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_Concurrent = new struct zinc::CLIB_LeftHemishpore_STRUCT_Concurrent(sysThreadId);
		while (stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Framework_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Input(sysThreadId)." << std::endl;
		stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Input = new struct zinc::CLIB_LeftHemishpore_STRUCT_Input(sysThreadId);
		while (stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Input(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Output(sysThreadId)." << std::endl;
		stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Output = new struct zinc::CLIB_LeftHemishpore_STRUCT_Output(sysThreadId);
		while (stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Output(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Framework_User_Algorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)." << std::endl;
		stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_User_Algorithm = new struct zinc::CLIB_LeftHemishpore_STRUCT_User_Algorithm(sysThreadId);
		while (stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Framework_User_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)." << std::endl;
		stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Input = new struct zinc::CLIB_LeftHemishpore_STRUCT_User_Input(sysThreadId);
		while (stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Framework_User_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)." << std::endl;
		stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Output = new struct zinc::CLIB_LeftHemishpore_STRUCT_User_Output(sysThreadId);
		while (stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)." << std::endl;
	}
	zinc::CLIB_LeftHemishpore_STRUCT_Concurrent* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(sysThreadId)." << std::endl;
		return stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_Concurrent;
	}
	zinc::CLIB_LeftHemishpore_STRUCT_Input* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(sysThreadId)." << std::endl;
		return stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Input;
	}
	zinc::CLIB_LeftHemishpore_STRUCT_Output* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(sysThreadId)." << std::endl;
		return stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Output;
	}
	zinc::CLIB_LeftHemishpore_STRUCT_User_Algorithm* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(sysThreadId)." << std::endl;
		return stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_User_Algorithm;
	}
	zinc::CLIB_LeftHemishpore_STRUCT_User_Input* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(sysThreadId)." << std::endl;
		return stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Input;
	}
	zinc::CLIB_LeftHemishpore_STRUCT_User_Output* zinc::CLIB_LeftHemishpore_Framework::stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= struct : stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(sysThreadId)." << std::endl;
		return stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Output;
	}