#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus.h"
#include "../../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../../CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"
#include <array>
#include <cstddef>
#include <cstdint>
#include <iostream>
	static zinc::CLIB_Bus_STRUCT_SingleBus_Framework* stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework;
	static std::array<bool, 5>* stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
// public.
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework* zinc::CLIB_Bus_STRUCT_SingleBus::getProgram(std::byte* sysThreadId) {
		return stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::generateProgram(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_App_FUNCT_zinc_generate_Program(sysThreadId)." << std::endl;
		
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Architecture(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId));
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, new uint64_t(3));
		auto list = new std::list<std::byte>();
		list->resize(*reinterpret_cast<uint8_t*>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)));
		for (uint8_t i = 0; i < list->size(); i++) {
			list->assign(i, std::byte{0x02});
		}
		auto ptr = list;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, ptr);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: " << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: |      OpenAvril : CLIB_Bus_STRUCT_SingleBus        |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: |__________________|" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_App_FUNCT_zinc_generate_Program(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::load(std::byte* sysThreadId, StemTicket StemTicket, unsigned char* DATA) {
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId, CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(DATA)));
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
	}
	unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus::unload(std::byte* sysThreadId, StemTicket StemTicket) {
		auto bytes_DATA = new unsigned char();
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			bytes_DATA = CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)));
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		return bytes_DATA;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::reInitialiseHandle(std::byte* sysThreadId, unsigned char* MAX_NUMBER_OF_JUNCTIONS) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			auto oldSize = *reinterpret_cast<uint8_t*>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, MAX_NUMBER_OF_JUNCTIONS));
			auto list = new std::list<std::byte>();
			list->resize(*reinterpret_cast<uint8_t*>(MAX_NUMBER_OF_JUNCTIONS));
			for (uint8_t* index = &oldSize; *index < list->size(); index++) {
				list->assign(*index, std::byte{0x02});
			}
			auto ptr = list;
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, ptr);
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::terminateProgram(std::byte* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
			std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : terminateProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework;
			delete stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : terminateProgram(sysThreadId)." << std::endl;
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
	}
// private.
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t* memberFunctionId = new uint8_t(1); *memberFunctionId < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); memberFunctionId++) {
			if (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(*memberFunctionId)) stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(*memberFunctionId);
			break;
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot1_DEFINE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework = nullptr;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot1_DEFINE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot3_INITIALISE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework = new class zinc::CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId) == nullptr) {}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot3_INITIALISE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)." << std::endl;
	}
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework* zinc::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: <= class: stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId)" << std::endl;
		return stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();//todo number of function checks and summed or of.
		while (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t* index = 0; *index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(*index) = true;
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		for (uint8_t* index = 0; *index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(*index) = true;
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	std::array<bool, 5>*  zinc::CLIB_Bus_STRUCT_SingleBus::stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: <= std::array<bool, 5>* : stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId)" << std::endl;
		return stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	}

