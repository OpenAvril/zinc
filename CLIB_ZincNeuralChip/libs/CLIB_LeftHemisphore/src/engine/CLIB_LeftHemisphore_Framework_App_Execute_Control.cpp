#include "../../include/engine/CLIB_LeftHemisphore_Framework_App_Execute_Control.h"
#include <cstdint>
#include <iostream>
#include <thread>
	bool* zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised;
	std::list<bool>* zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;//NUMBER OF THREADS.
	std::list<std::thread*>* zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads;
// public.
	zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId);
		stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
	}
	zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::~CLIB_LeftHemisphore_Framework_App_Execute_Control() {
		std::cout << "thread " << std::to_string(0) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
		delete stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised;
		delete stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;
		delete stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads;
		std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
		stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
		stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId);
		stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
		stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId, obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId, obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
		stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
		stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId);
		stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId, obj);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_boot4_REINITIALISE_CLIB_LeftHemoshpore_Framework_App_Execute_Control_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj, uint8_t* MAX_NUMBER_OF_THREADS){
		CLIB_LeftHemisphore_Framework_Global::stat_REG_set_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId, MAX_NUMBER_OF_THREADS);
		stat_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId);
		stat_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId, obj);
		obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Framework_App_Execute(sysThreadId);

	}
	bool zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_get_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= bool : dyn_REG_get_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId)." << std::endl;
		return stat_REG_get_ptr_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
	}
	bool zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_get_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(std::byte* sysThreadId, uint8_t* concurrnetThreadId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= bool : dyn_REG_get_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId)." << std::endl;
		auto temp = stat_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId)->begin();
		std::advance(temp, concurrnetThreadId);
		return *temp;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_set_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId, bool state) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => bool : dyn_REG_set_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId)." << std::endl;
		stat_REG_set_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId, state);
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::dyn_REG_set_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(std::byte* sysThreadId, uint8_t* concurrnetThreadId, bool state) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => bool : dyn_REG_set_LeftHemishpore_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId)." << std::endl;
		stat_set_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId, *concurrnetThreadId, state);
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Execute_Control(sysThreadId). " << std::endl;
	}
// private.
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot1_DEFINE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised = new bool(sysThreadId);
		*stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised = true;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised = new std::list<bool>();
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->resize(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId));
		for (auto* concurrentThreadId = new std::byte{0x00}; *concurrentThreadId < static_cast<std::byte>(stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
			*temp = true;
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads = new std::list<std::thread*>();
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->resize(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId));
		for (auto* concurrentThreadId = new std::byte{0x00}; *concurrentThreadId < static_cast<std::byte>(stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp,std::to_integer<std::uint8_t>(*concurrentThreadId));
			*temp = nullptr;
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		*stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised = true;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		for (auto* concurrentThreadId = new std::byte{0x00}; *concurrentThreadId < static_cast<std::__byte_op_t<unsigned char>>(stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
			*temp = true;
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->resize(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId));
		for (auto* concurrentThreadId = new std::byte{0x02}; *concurrentThreadId < static_cast<std::byte>(stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
			*temp = new std::thread(zinc::CLIB_LeftHemisphore_STRUCT_Concurrent::stat_app_thread_Concurrency, sysThreadId, obj, concurrentThreadId);
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		auto oldSize = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size();
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->resize(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId));
		for (auto* concurrentThreadId = new std::uint8_t(oldSize); *concurrentThreadId < stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size(); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, *concurrentThreadId);
			*temp = true;
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_boot3_REINITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
		auto oldSize = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->size();
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->resize(*CLIB_LeftHemisphore_Framework_Global::stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId));
		for (auto* concurrentThreadId = new std::byte{0x00}; *concurrentThreadId < static_cast<std::__byte_op_t<unsigned char>>(stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
			*temp = new std::thread(zinc::CLIB_LeftHemisphore_STRUCT_Concurrent::stat_app_thread_Concurrency, sysThreadId, obj, concurrentThreadId);
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_Framework_App_Execute_Control : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_Threads(sysThreadId). " << std::endl;
	}
	bool* zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_get_ptr_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId) {
		bool* result = nullptr;
		result = new bool(false);
		for (auto* concurrentThreadId = new std::byte{0x00}; *concurrentThreadId < static_cast<std::byte>(stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->size()); concurrentThreadId++) {
			auto temp = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
			std::advance(temp, std::to_integer<std::uint8_t>(*concurrentThreadId));
			if (*temp == true) {
				*result = true;
				break;
			}
		}
		stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised = result;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::array<bool, 3>* : stat_REG_get_ptr_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised;
	}
	std::list<bool>* zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::array<bool, 3>* : stat_get_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_REG_set_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(std::byte* sysThreadId, bool newFLAG) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => bool : stat_REG_set_FLAG_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised(sysThreadId). " << std::endl;
		*stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_isSystemInitialised = newFLAG;
	}
	void zinc::CLIB_LeftHemisphore_Framework_App_Execute_Control::stat_set_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(std::byte* sysThreadId, uint8_t threadId, bool state) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => bool : stat_set_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(sysThreadId). " << std::endl;
		auto temp = stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Execute_Control_ListOf_FLAGisThreadInitialised->begin();
		std::advance(temp, threadId);
		*temp = state;
	}