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
	static std::array<bool, 4>* stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
// public.
	int* zinc::CLIB_Bus_STRUCT_SingleBus::generateHandle(std::byte* sysThreadId) {
		auto oldSize = stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size();
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->resize(oldSize+1);
		for (uint8_t i = oldSize; i < stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size(); i++) {
			auto temp = stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
			std::advance(temp, i);
			temp = stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
		}
		return new int(static_cast<int>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size() - 1));
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::generateProgram(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_App_FUNCT_zinc_generate_Program(sysThreadId)." << std::endl;
		
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_APP_CLIB_Bus_STRUCT_SingleBus_Framework_create_Architecture(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId));
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, std::byte{0x03});
		auto list = new std::list<std::byte>();
		list->resize(*reinterpret_cast<uint8_t*>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)));
		for (uint8_t i = 0; i < list->size(); i++) {
			list->assign(i, std::byte{0x02});
		}
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *list);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: " << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: |      OpenAvril : CLIB_Bus_STRUCT_SingleBus        |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: |__________________|" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_App_FUNCT_zinc_generate_Program(sysThreadId)." << std::endl;
	}
	unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus::isINSTANTIATED(std::byte* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : isINSTANTIATED(sysThreadId)." << std::endl;
		unsigned char* result = nullptr;
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			*temp = stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		result = CLIB_Bus_STRUCT_SingleBus_Framework_Global::stat_CONVERT_CLIB_Bus_STRUCT_SingleBus_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *temp);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " ::  exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : isINSTANTIATED(sysThreadId)." << std::endl;
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
		return result;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::load(std::byte* sysThreadId, StemTicket StemTicket, unsigned char* bytes_DATA) {
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId, CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(bytes_DATA)));
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
	}
	unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus::unload(std::byte* sysThreadId, StemTicket StemTicket) {
		auto bytes_DATA = new unsigned char();
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			bytes_DATA = CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data_DATA(sysThreadId)));
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		return bytes_DATA;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::reInitialiseHandle(std::byte* sysThreadId, std::byte MAX_NUMBER_OF_JUNCTIONS) {
			zinc::MutexQue::startByLock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
				if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			auto oldSize = *reinterpret_cast<uint8_t*>(stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, MAX_NUMBER_OF_JUNCTIONS);
			auto list = new std::list<std::byte>();
			list->resize(*reinterpret_cast<uint8_t*>(MAX_NUMBER_OF_JUNCTIONS));
			for (uint8_t* index = &oldSize; *index < list->size(); index++) {
				list->assign(*index, std::byte{0x02});
			}
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_Bus_STRUCT_SingleBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *list);
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction(sysThreadId);
			stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_MutexQue_Of_Bus_At_Junction_At_AccessLock(sysThreadId);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::terminateProgram(std::byte* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
			std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : terminateProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework;
			delete stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : terminateProgram(sysThreadId)." << std::endl;
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_MutexQue_Of_Bus(sysThreadId)), reinterpret_cast<std::byte*>(std::byte{0x00}));
	}
// private.
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t* memberFunctionId = new uint8_t(1); *memberFunctionId < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); memberFunctionId++) {
			if (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(*memberFunctionId)) stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(*memberFunctionId);
			break;
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
	}

	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot1_DEFINE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework = nullptr;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot1_DEFINE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot3_INITIALISE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework = new class zinc::CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(sysThreadId) == nullptr) {}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_CLASS_boot3_INITIALISE_CLIB_SingleBus_STRUCT_SingleBus_Framework(sysThreadId)." << std::endl;
	}
	zinc::CLIB_Bus_STRUCT_SingleBus_Framework* zinc::CLIB_Bus_STRUCT_SingleBus::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= class: stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework(std::byte* sysThreadId)" << std::endl;
		return stat_REG_CLIB_SingleBus_STRUCT_SingleBus_Framework;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();//todo number of function checks and summed or of.
		while (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t* index = 0; *index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(*index) = true;
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_Bus_STRUCT_SingleBus::stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		for (uint8_t* index = 0; *index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(*index) = true;
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : CLIB_Bus_STRUCT_SingleBus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	std::array<bool, 4>*  zinc::CLIB_Bus_STRUCT_SingleBus::stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= std::array<bool, 4>* : stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId)" << std::endl;
		return stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	}

