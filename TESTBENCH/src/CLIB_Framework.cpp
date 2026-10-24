#include "../include/CLIB_Framework.h"
#include <iostream>
#include <thread>
	zinc::CLIB_Framework_Global* zinc::CLIB_Framework::stat_CLASS_ptr_zinc_Framework_Global;
// public.
	zinc::CLIB_Framework::CLIB_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : zinc_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLARE_zinc_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : zinc_Framework(sysThreadId)." << std::endl;
	}
	zinc::CLIB_Framework::~CLIB_Framework() {
		std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : zinc_Framework : ~zinc_Framework(sysThreadId)." << std::endl;
		delete stat_CLASS_ptr_zinc_Framework_Global;
		std::cout << "thread " << std::to_string(0) << " :: exiting LIB :: wq : zinc_Framework : ~zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::dyn_CLASS_create_Architecture(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_zinc_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_zinc_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::dyn_CLASS_create_zinc_Framework_Global_and_Settings(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_zinc_Framework_Global(sysThreadId);
		pr_stat_CLASS_boot3_INITIALISE_zinc_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	zinc::CLIB_Framework_Global* zinc::CLIB_Framework::dyn_CLASS_get_ptr_zinc_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_boot3_INITIALISE_zinc_Framework_Globaldyn_CLASS_get_ptr_zinc_Framework(sysThreadId)." << std::endl;
		return stat_CLASS_get_ptr_zinc_Framework_Global(sysThreadId);
	}
	void zinc::CLIB_Framework::dyn_REG_boot0_DECLARE_zinc_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::dyn_REG_boot1_DEFINE_zinc_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::dyn_REG_boot2_SUBSTANTIATE_zinc_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;	}

	void zinc::CLIB_Framework::dyn_REG_boot3_INITIALISE_zinc_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::stat_CLASS_boot0_DECLARE_zinc_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::stat_CLASS_boot1_DEFINE_zinc_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::stat_CLASS_boot3_INITIALISE_zinc_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::stat_REG_boot0_DECLARE_zinc_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
// private.
	void zinc::CLIB_Framework::stat_CLASS_boot1_DEFINE_zinc_Framework_Global(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		stat_CLASS_ptr_zinc_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Framework::pr_stat_CLASS_boot3_INITIALISE_zinc_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
		stat_CLASS_ptr_zinc_Framework_Global = new class zinc::CLIB_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_zinc_Framework_Global(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: wq : zinc_Framework : boot0_REG_DECLARE_zinc_Framework(sysThreadId)." << std::endl;
	}
	zinc::CLIB_Framework_Global* zinc::CLIB_Framework::stat_CLASS_get_ptr_zinc_Framework_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_zinc_Framework(sysThreadId)." << std::endl;
		return stat_CLASS_ptr_zinc_Framework_Global;
	}