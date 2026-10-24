#include "../include/CLIB_MutexQueForThreadsLog_Framework.h"
#include <iostream>
	zinc::CLIB_MutexQueForThreadsLog_Framework_App* zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Framework_App;
	zinc::CLIB_MutexQueForThreadsLog_Framework_Global* zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_ptr_CLIB_MutexQueForThreadsLog_Framework_Global;
// public.
	zinc::CLIB_MutexQueForThreadsLog_Framework::CLIB_MutexQueForThreadsLog_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : CLIB_MutexQueForThreadsLog_Framework(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : CLIB_MutexQueForThreadsLog_Framework(sysThreadId)" << std::endl;
	}
	zinc::CLIB_MutexQueForThreadsLog_Framework::~CLIB_MutexQueForThreadsLog_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : CLIB_MutexQueForThreadsLog_Framework(sysThreadId)" << std::endl;
		delete stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Framework_App;
		delete stat_CLASS_ptr_CLIB_MutexQueForThreadsLog_Framework_Global;
		std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : CLIB_MutexQueForThreadsLog_Framework(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_MutexQueForThreadsLog_Framework::dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Architecture(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Architecture(sysThreadId)" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Architecture(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_MutexQueForThreadsLog_Framework::dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Global_and_Settings(uint8_t* sysThreadId)
	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Global_and_Settings(sysThreadId)" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Global_and_Settings(sysThreadId)" << std::endl;
	}
	zinc::CLIB_MutexQueForThreadsLog_Framework_App* zinc::CLIB_MutexQueForThreadsLog_Framework::dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(uint8_t* sysThreadId) {
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)" << std::endl;
		return stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId);
	}
	zinc::CLIB_MutexQueForThreadsLog_Framework_Global* zinc::CLIB_MutexQueForThreadsLog_Framework::dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId) {
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(sysThreadId)" << std::endl;
		return stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
	}
	void zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_App(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Framework(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Framework(sysThreadId)" << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_App(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Framework(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(sysThreadId)" << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(sysThreadId)" << std::endl;
	}
// private.
	void zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_App(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_App(sysThreadId)" << std::endl;
		stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_App(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(sysThreadId)" << std::endl;
		stat_CLASS_ptr_CLIB_MutexQueForThreadsLog_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_App(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_App(sysThreadId)" << std::endl;
		stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Framework_App = new class zinc::CLIB_MutexQueForThreadsLog_Framework_App(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_App(sysThreadId)" << std::endl;
	}
	void zinc::CLIB_MutexQueForThreadsLog_Framework::pr_stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : pr_stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(sysThreadId)" << std::endl;
		stat_CLASS_ptr_CLIB_MutexQueForThreadsLog_Framework_Global = new class zinc::CLIB_MutexQueForThreadsLog_Framework_Global(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog_Framework : pr_stat_CLASS_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(sysThreadId)" << std::endl;
	}
	zinc::CLIB_MutexQueForThreadsLog_Framework_App* zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(uint8_t* sysThreadId) {
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)" << std::endl;
		return stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Framework_App;
	}
	zinc::CLIB_MutexQueForThreadsLog_Framework_Global* zinc::CLIB_MutexQueForThreadsLog_Framework::stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(uint8_t* sysThreadId) {
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(sysThreadId)" << std::endl;
		return stat_CLASS_ptr_CLIB_MutexQueForThreadsLog_Framework_Global;
	}