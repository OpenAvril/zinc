#include "../include/CLIB_SystemBus.h"
#include "../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include "../../../CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include <array>
#include <cstddef>
#include <cstdint>
#include <iostream>
	static zinc::CLIB_SystemBus_Framework* stat_REG_CLIB_SystemBus_Framework;
	static std::array<bool, 4>* stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	std::byte* zinc::Stemisphore::accessId = new std::byte{0x00};
	std::byte* zinc::Stemisphore::externalSide = new std::byte{0x01};
// public.
	unsigned char* zinc::Stemisphore::generateHandle(std::byte* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		unsigned char* result = nullptr;
		auto oldSize = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size();
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->resize(oldSize+1);
		for (auto index = new uint8_t(oldSize); *index < stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size(); index++) {
			auto temp = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
			std::advance(temp, *index);
			temp = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
		}
		*result = *CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, reinterpret_cast<int*>(static_cast<int>(stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->
		                                            dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->
		                                            dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->
		                                            dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size() - 1)));
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		return result;
	}
	void zinc::Stemisphore::generateProgram(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : Bus : stat_App_FUNCT_zinc_generate_Program(sysThreadId)." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_APP_CLIB_SystemBus_Framework_create_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_APP_CLIB_SystemBus_Framework_create_Architecture(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "        ,     \\      /      ," << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|              |\\../|               |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|               \\VV/                |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "| MIT Concurrent System Bussing .dll |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|___________________________________|" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "|/                //               \\|"  << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "`                 V                 '" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << "" << std::endl;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : stat_App_FUNCT_zinc_generate_Program(sysThreadId)." << std::endl;
	}
	unsigned char* zinc::Stemisphore::isINSTANTIATED(std::byte* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : Bus : isINSTANTIATED(sysThreadId)." << std::endl;
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
		result = CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *temp);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " ::  exiting LIB :: zinc : Bus : isINSTANTIATED(sysThreadId)." << std::endl;
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		return result;
	}
	void zinc::Stemisphore::load(std::byte* sysThreadId, StemTicket StemTicket, unsigned char* bytes_DATA) {
		auto objBus = static_cast<CLIB_Bus_STRUCT_SingleBus_Framework*>(CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, StemTicket.get_busId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), StemTicket.get_Departure_JunctionId())), externalSide);
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			zinc::CLIB_Bus_STRUCT_SingleBus::load(sysThreadId, StemTicket, bytes_DATA);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), StemTicket.get_Departure_JunctionId())), externalSide);
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
	}
	unsigned char* zinc::Stemisphore::unload(std::byte* sysThreadId, StemTicket StemTicket) {
		auto bytes_DATA = new unsigned char();
		auto objBus = static_cast<CLIB_Bus_STRUCT_SingleBus_Framework*>(CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, StemTicket.get_busId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), StemTicket.get_Departure_JunctionId())), externalSide);
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			bytes_DATA = zinc::CLIB_Bus_STRUCT_SingleBus::unload(sysThreadId,StemTicket);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), StemTicket.get_Departure_JunctionId())), externalSide);
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		return bytes_DATA;
	}
	void zinc::Stemisphore::reInitialiseHandle(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_JUNCTIONS) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			auto oldSize = std::to_integer<std::uint8_t>(CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
			CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, MAX_NUMBER_OF_JUNCTIONS);
			auto list = new std::list<std::byte>();
			list->resize(std::to_integer<std::uint8_t>(*MAX_NUMBER_OF_JUNCTIONS));
			for (uint8_t i = oldSize; i < list->size(); i++) {
				list->assign(i, static_cast<std::__byte_op_t<unsigned char>>(2));
			}
			CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, list);
			stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(sysThreadId);
			for (uint8_t i = 0; i < list->size(); i++) {
				auto temp = list->begin();
				std::advance(temp, i);
				zinc::CLIB_Bus_STRUCT_SingleBus::reInitialiseHandle(sysThreadId, *temp);
			}
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
	}
	void zinc::Stemisphore::terminateProgram(std::byte* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : terminateProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_CLIB_SystemBus_Framework;
			delete stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : terminateProgram(sysThreadId)." << std::endl;
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
	}
// private.
	void zinc::Stemisphore::stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : Bus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); memberFunctionId++) {
			if (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
			break;
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : Bus : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId).<< " << std::endl;
		stat_REG_CLIB_SystemBus_Framework = nullptr;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId).<< " << std::endl;
	}
	void zinc::Stemisphore::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : Bus : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId).<< " << std::endl;
		stat_REG_CLIB_SystemBus_Framework = new class zinc::CLIB_SystemBus_Framework(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId) == nullptr) {}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId).<< " << std::endl;
	}
	zinc::CLIB_SystemBus_Framework* zinc::Stemisphore::stat_CLASS_get_ptr_CLIB_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= class: stat_CLASS_get_ptr_CLIB_SystemBus_Framework(std::byte* sysThreadId)<< " << std::endl;
		return stat_REG_CLIB_SystemBus_Framework;
	}
	void zinc::Stemisphore::stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : Bus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
	}
	void zinc::Stemisphore::stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : Bus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();//todo number of function checks and summed or of.
		while (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t index = 0; index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
	}
	void zinc::Stemisphore::stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: zinc : Bus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
		for (uint8_t index = 0; index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: zinc : Bus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
	}
	std::array<bool, 4>* zinc::Stemisphore::stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: <= std::array<bool, 4>* : stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId)<< " << std::endl;
		return stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	}

