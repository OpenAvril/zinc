#include "../../include/independent/CLIB_LeftHemisphore_STRUCT_User_Input.h"
#include "../../include/engine/CLIB_LeftHemisphore_Framework_Global.h"
#include <iostream>
#include <list>
	zinc::CLIB_LeftHemisphore_STRUCT_Input_praise0* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0;
	zinc::CLIB_LeftHemisphore_STRUCT_Input_praise1* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1;
	zinc::CLIB_LeftHemisphore_STRUCT_Input_praise2* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2;
	zinc::CLIB_LeftHemisphore_STRUCT_Input_praise3* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3;
// public.
	std::list<zinc::Object*>* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(std::byte* sysThreadId, const unsigned long long* praiseId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId). " << std::endl;
		auto result = new std::list<class zinc::Object*>();
		result->resize(1);
		auto temp = result->begin();
		std::cout << "alpha" << std::endl;
		switch (*praiseId) {
			case 0ULL:
				std::cout << "alpha : alpha" << std::endl;
				*temp = reinterpret_cast<class Object*>(stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(sysThreadId));
				break;

			case 1ULL:
				std::cout << "alpha : bravo" << std::endl;
				*temp = reinterpret_cast<class Object*>(stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId));
				break;

			case 2ULL:
				std::cout << "alpha : charlie" << std::endl;
				*temp = reinterpret_cast<class Object*>(stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId));
				break;

			case 3ULL:
				std::cout << "alpha : delta" << std::endl;
				*temp = reinterpret_cast<class Object*>(stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId));
				break;

			default:
				std::cout << "alpha : zulu" << std::endl;
				break;

		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId). " << std::endl;
		return result;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(sysThreadId);
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId);
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId);
		stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(sysThreadId);
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId);
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId);
		stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_UserInput(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_UserInput(sysThreadId). " << std::endl;
	}
// private.
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Inputpraise0(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0 = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Inputpraise0(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1 = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2 = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3 = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0 = new struct zinc::CLIB_LeftHemisphore_STRUCT_Input_praise0();
		while(stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(sysThreadId) == nullptr) {}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1 = new struct zinc::CLIB_LeftHemisphore_STRUCT_Input_praise1();
		while (stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId) == nullptr) {}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2 = new struct zinc::CLIB_LeftHemisphore_STRUCT_Input_praise2();
		while (stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId) == nullptr) {}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId). " << std::endl;
	}
	void zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3 = new struct zinc::CLIB_LeftHemisphore_STRUCT_Input_praise3();
		while (stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId) == nullptr) {}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId). " << std::endl;
	}
	zinc::CLIB_LeftHemisphore_STRUCT_Input_praise0* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(std::byte* sysThreadId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= struct : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise0;
	}
	zinc::CLIB_LeftHemisphore_STRUCT_Input_praise1* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(std::byte* sysThreadId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= struct : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise1;
	}
	zinc::CLIB_LeftHemisphore_STRUCT_Input_praise2* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(std::byte* sysThreadId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= struct : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise2;
	}
	zinc::CLIB_LeftHemisphore_STRUCT_Input_praise3* zinc::CLIB_LeftHemisphore_STRUCT_User_Input::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(std::byte* sysThreadId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= struct : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserInput_Input_praise3;
	}