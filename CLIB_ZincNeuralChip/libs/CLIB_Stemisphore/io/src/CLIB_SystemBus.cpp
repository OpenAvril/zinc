#include "../include/CLIB_SystemBus.h"
#include "../../../Control/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../../Control/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include "../../../CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include <array>
#include <cstdint>
	static zinc::CLIB_SystemBus_Framework* stat_REG_CLIB_SystemBus_Framework;
	static std::array<bool, 4>* stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	uint8_t* zinc::Stemisphore::accessId = new uint8_t(0);
	uint8_t* zinc::Stemisphore::externalSide = new uint8_t(1);
// public.
	int* zinc::Stemisphore::generateHandle(uint8_t* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, accessId));
		int* result = nullptr;
		auto oldSize = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size();
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->resize(oldSize+1);
		for (uint8_t i = oldSize; i < stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size(); i++) {
			auto temp = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
			std::advance(temp, i);
			temp = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
		}
		*result = static_cast<int>(static_cast<int>(stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->
		                                            dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->
		                                            dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->
		                                            dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size() - 1));
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, accessId));
		return result;
	}
	void zinc::Stemisphore::generateProgram(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_App_FUNCT_zinc_generate_Program(sysThreadId)." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_APP_CLIB_SystemBus_Framework_create_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_APP_CLIB_SystemBus_Framework_create_Architecture(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "        ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "| MIT Concurrent System Bussing .dll |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|___________________________________|" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|/                //               \\|"  << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "`                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_App_FUNCT_zinc_generate_Program(sysThreadId)." << std::endl;
	}
	unsigned char* zinc::Stemisphore::isINSTANTIATED(uint8_t* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, accessId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : Bus : isINSTANTIATED(sysThreadId)." << std::endl;
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
		std::cout << "thread " << std::to_string(*sysThreadId) << " ::  exiting LIB :: zinc : Bus : isINSTANTIATED(sysThreadId)." << std::endl;
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, accessId));
		return result;
	}
	void zinc::Stemisphore::load(uint8_t* sysThreadId, Ticket ticket, unsigned char* bytes_DATA) {
		auto objBus = static_cast<CLIB_Bus_STRUCT_SingleBus_Framework*>(CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, ticket.get_busId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, ticket.get_busId())), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, ticket.get_Departure_JunctionId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, ticket.get_busId())), ticket.get_Departure_JunctionId());
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, ticket.get_busId(), ticket.get_Departure_JunctionId())), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, externalSide));
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			zinc::CLIB_Bus_STRUCT_SingleBus::load(sysThreadId, ticket, bytes_DATA);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, ticket.get_busId(), ticket.get_Departure_JunctionId())), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, externalSide));
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, ticket.get_busId())), ticket.get_Departure_JunctionId());
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, ticket.get_busId())), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, ticket.get_Departure_JunctionId()));
	}
	unsigned char* zinc::Stemisphore::unload(uint8_t* sysThreadId, Ticket ticket) {
		auto bytes_DATA = new unsigned char();
		auto objBus = static_cast<CLIB_Bus_STRUCT_SingleBus_Framework*>(CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, ticket.get_busId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, ticket.get_busId())), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, ticket.get_Departure_JunctionId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, ticket.get_busId())), ticket.get_Departure_JunctionId());
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, ticket.get_busId(), ticket.get_Departure_JunctionId())), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, externalSide));
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			bytes_DATA = zinc::CLIB_Bus_STRUCT_SingleBus::unload(sysThreadId,ticket);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, ticket.get_busId(), ticket.get_Departure_JunctionId())), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, externalSide));
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, ticket.get_busId())), ticket.get_Departure_JunctionId());
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, ticket.get_busId())), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, ticket.get_Departure_JunctionId()));
		return bytes_DATA;
	}
	void zinc::Stemisphore::reInitialiseHandle(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_JUNCTIONS) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, accessId));
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			auto oldSize = CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
			CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, MAX_NUMBER_OF_JUNCTIONS);
			auto list = new std::list<uint8_t>();
			list->resize(*MAX_NUMBER_OF_JUNCTIONS);
			for (uint8_t i = oldSize; i < static_cast<uint8_t>(list->size()); i++) {
				list->assign(i, 2);
			}
			CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, list);
			stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(sysThreadId);
			for (uint8_t i = 0; i < static_cast<uint8_t>(list->size()); i++) {
				auto temp = list->begin();
				std::advance(temp, i);
				zinc::CLIB_Bus_STRUCT_SingleBus::reInitialiseHandle(sysThreadId, *temp);
			}
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, accessId));
	}
	void zinc::Stemisphore::terminateProgram(uint8_t* sysThreadId) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, accessId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : terminateProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_CLIB_SystemBus_Framework;
			delete stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : terminateProgram(sysThreadId)." << std::endl;
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(sysThreadId, accessId));
	}
// private.
	void zinc::Stemisphore::stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < static_cast<uint8_t>(stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			if (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
			break;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId).<< " << std::endl;
		stat_REG_CLIB_SystemBus_Framework = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId).<< " << std::endl;
	}
	void zinc::Stemisphore::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId).<< " << std::endl;
		stat_REG_CLIB_SystemBus_Framework = new class zinc::CLIB_SystemBus_Framework(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId).<< " << std::endl;
	}
	zinc::CLIB_SystemBus_Framework* zinc::Stemisphore::stat_CLASS_get_ptr_CLIB_SystemBus_Framework(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class: stat_CLASS_get_ptr_CLIB_SystemBus_Framework(uint8_t* sysThreadId)<< " << std::endl;
		return stat_REG_CLIB_SystemBus_Framework;
	}
	void zinc::Stemisphore::stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
	}
	void zinc::Stemisphore::stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();//todo number of function checks and summed or of.
		while (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
	}
	void zinc::Stemisphore::stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId).<< " << std::endl;
	}
	std::array<bool, 4>*  zinc::Stemisphore::stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::array<bool, 4>* : stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(uint8_t* sysThreadId)<< " << std::endl;
		return stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	}

