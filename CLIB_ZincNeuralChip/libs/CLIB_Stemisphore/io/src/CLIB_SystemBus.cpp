#include "../include/CLIB_SystemBus.h"
#include "../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../../CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include "../../../CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include <array>
#include <cstddef>
#include <cstdint>
#include <iostream>
	static std::list<zinc::CLIB_SystemBus_Framework*>* stat_REG_CLIB_List_Of_SystemBus_Framework;
	static std::array<bool, 4>* stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	std::byte* zinc::Stemisphore::accessId = new std::byte{0x00};
	std::byte* zinc::Stemisphore::externalSide = new std::byte{0x01};
// public.
	std::byte* zinc::Stemisphore::generateHandle(std::byte* sysThreadId) {
		std::byte* result = nullptr;
		for (auto index_handleId = new uint8_t(1); *index_handleId < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index_handleId++) {
			zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index_handleId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		}
		auto oldSize = stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size();
		stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->resize(oldSize+1);
		for (auto index = new uint8_t(oldSize); *index < stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->size(); index++) {
			auto temp = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
			std::advance(temp, *index);
			temp = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
		}
		*result = *reinterpret_cast<std::byte*>(stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size() - 1);
		for (auto index_handleId = new uint8_t(1); *index_handleId < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index_handleId++) {
			zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index_handleId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		}		return result;
	}
	void zinc::Stemisphore::generateProgram(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : Bus : generateProgram(sysThreadId)." << std::endl;
		auto handle_id = new uint8_t(0);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_APP_CLIB_SystemBus_Framework_create_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_APP_CLIB_SystemBus_Framework_create_Architecture(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "        ,     \\      /      ," << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|              |\\../|               |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|               \\VV/                |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "| MIT Concurrent System Bussing .dll |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|___________________________________|" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|/                //               \\|"  << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "`                 V                 '" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : generateProgram(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::load(std::byte* sysThreadId, std::byte* handle_Id, StemTicket StemTicket, unsigned char* bytes_DATA) {
		auto objBus = static_cast<CLIB_Bus_STRUCT_SingleBus_Framework*>(CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, StemTicket.get_busId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
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
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())),StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
	}
	unsigned char* zinc::Stemisphore::unload(std::byte* sysThreadId, std::byte* handle_Id, StemTicket StemTicket) {
		auto bytes_DATA = new unsigned char();
		auto objBus = static_cast<CLIB_Bus_STRUCT_SingleBus_Framework*>(CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, StemTicket.get_busId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), StemTicket.get_Departure_JunctionId())),externalSide);
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			bytes_DATA = zinc::CLIB_Bus_STRUCT_SingleBus::unload(sysThreadId,StemTicket);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), StemTicket.get_Departure_JunctionId())), externalSide);
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses(sysThreadId, StemTicket.get_busId())), StemTicket.get_Departure_JunctionId());
		return bytes_DATA;
	}
	void zinc::Stemisphore::reInitialiseHandle(std::byte* sysThreadId, std::byte* handle_Id, unsigned char* MAX_NUMBER_OF_JUNCTIONS) {
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			auto oldSize = stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size();
			CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, MAX_NUMBER_OF_JUNCTIONS));
			auto list = new std::list<unsigned long long>();
			list->resize(*CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
			for (auto i = new unsigned long long(oldSize); *i < list->size(); i++) {
				list->assign(*i, 2);
			}
			CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, list);
			stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(sysThreadId);
			for (auto i = new unsigned long long(0); *i < list->size(); i++) {
				auto temp = list->begin();
				std::advance(temp, *i);
				auto ptr = new unsigned long long(*temp);
				zinc::CLIB_Bus_STRUCT_SingleBus::reInitialiseHandle(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, ptr));
			}
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
	}
	void zinc::Stemisphore::terminateProgram(std::byte* sysThreadId) {
		for (auto index_handleId = new uint8_t(1); *index_handleId < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index_handleId++) {
			zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index_handleId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : terminateProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_CLIB_List_Of_SystemBus_Framework;
			delete stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : terminateProgram(sysThreadId)." << std::endl;
		for (auto index_handleId = new uint8_t(1); *index_handleId < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index_handleId++) {
			zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index_handleId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		}
	}
// private.
	void zinc::Stemisphore::stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); memberFunctionId++) {
			if (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
			break;
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_List_Of_SystemBus_Framework = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_List_Of_SystemBus_Framework = new std::list<class zinc::CLIB_SystemBus_Framework*>();
		while (stat_REG_CLIB_List_Of_SystemBus_Framework == nullptr) {}
		stat_REG_CLIB_List_Of_SystemBus_Framework->resize(1);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId)." << std::endl;
	}
	std::list<zinc::CLIB_SystemBus_Framework*>* zinc::Stemisphore::stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class: stat_CLASS_get_ptr_CLIB_SystemBus_Framework(std::byte* sysThreadId)" << std::endl;
		return stat_REG_CLIB_List_Of_SystemBus_Framework;
	}
	zinc::CLIB_SystemBus_Framework* zinc::Stemisphore::stat_CLASS_get_ptr_CLIB_SystemBus_Framework(std::byte* sysThreadId, uint8_t* handleId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class: stat_CLASS_get_ptr_CLIB_SystemBus_Framework(std::byte* sysThreadId)" << std::endl;
		auto temp = stat_REG_CLIB_List_Of_SystemBus_Framework->begin();
		std::advance(temp, *handleId);
		return *temp;
	}
	void zinc::Stemisphore::stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();//todo number of function checks and summed or of.
		while (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t index = 0; index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		for (uint8_t index = 0; index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	std::array<bool, 4>* zinc::Stemisphore::stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::array<bool, 4>* : stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId)" << std::endl;
		return stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	}

