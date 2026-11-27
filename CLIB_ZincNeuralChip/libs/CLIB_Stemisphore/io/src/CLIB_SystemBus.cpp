#include "../include/CLIB_SystemBus.h"
#include "../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework.h"
#include "../../../CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include <array>
#include <iostream>
	static std::list<zinc::CLIB_SystemBus_Framework*>* stat_REG_CLIB_List_Of_SystemBus_Framework;
	static std::array<bool, 6>* stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	std::byte* zinc::Stemisphore::accessId = new std::byte{0x00};
	std::byte* zinc::Stemisphore::externalSide = new std::byte{0x01};
// public.
	std::byte* zinc::Stemisphore::generateHandle(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : generateHandle(sysThreadId)." << std::endl;
		std::byte* result = nullptr;
		for (auto index_handleId = new uint8_t(0); *index_handleId < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index_handleId++) {
			zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index_handleId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		}
		auto oldSize = stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size();
		stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->resize(oldSize+1);
		for (auto index = new uint8_t(oldSize); *index < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index++) {
			auto DEFAULT = stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->begin();
			auto temp = DEFAULT;
			std::advance(temp, *index);
			*temp = *DEFAULT;
		}
		auto handleIndex = reinterpret_cast<uint8_t*>(stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size() - 1);
		for (auto index_handleId = new uint8_t(0); *index_handleId < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index_handleId++) {
			zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index_handleId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : generateHandle(sysThreadId)." << std::endl;
		return reinterpret_cast<std::byte*>(handleIndex);
	}
	void zinc::Stemisphore::generateProgram(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : generateProgram(sysThreadId)." << std::endl;
		auto handle_id = new uint8_t(0);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_APP_CLIB_SystemBus_Framework_create_Global_and_Settings(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_APP_CLIB_SystemBus_Framework_create_Architecture(sysThreadId);

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Registers - DEFINE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Data(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Execute(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Data(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Execute(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Registers - INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Data(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_Framework_App_Data(sysThreadId);
		stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, handle_id)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Execute(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "        ,     \\      /      ," << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "|              |\\../|               |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "|               \\VV/                |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "| MIT Concurrent System Bussing .dll |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "|___________________________________|" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "|/                //               \\|"  << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "`                 V                 '" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : generateProgram(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::load(std::byte* sysThreadId, std::byte* handle_Id, StemTicket StemTicket, unsigned char* bytes_DATA) {
		auto objBus = static_cast<CLIB_Bus_STRUCT_SingleBus_Framework*>(CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, StemTicket.get_busId()));
		auto busId = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_get_List_CLIB_List_Of_Busses(sysThreadId)->begin();
		std::advance(busId, *reinterpret_cast<uint8_t*>(handle_Id));
		auto ptr_busId = *busId;
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), reinterpret_cast<std::byte*>(StemTicket.get_Arrival_AccessId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), reinterpret_cast<std::byte*>(reinterpret_cast<uint8_t*>(StemTicket.get_Departure_JunctionId())));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), reinterpret_cast<uint8_t*>(StemTicket.get_Departure_JunctionId()))), externalSide);
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			zinc::CLIB_Bus_STRUCT_SingleBus::load(sysThreadId, StemTicket, bytes_DATA);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), reinterpret_cast<uint8_t*>(StemTicket.get_Departure_JunctionId()))), externalSide);
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())),reinterpret_cast<std::byte*>(reinterpret_cast<uint8_t*>(StemTicket.get_Departure_JunctionId())));
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), reinterpret_cast<std::byte*>(StemTicket.get_Arrival_AccessId()));
	}
	unsigned char* zinc::Stemisphore::unload(std::byte* sysThreadId, std::byte* handle_Id, StemTicket StemTicket) {
		auto bytes_DATA = new unsigned char();
		auto objBus = static_cast<CLIB_Bus_STRUCT_SingleBus_Framework*>(CLIB_Bus_STRUCT_SingleBus_Framework::stat_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_Bus_STRUCT_SingleBus_Item_On_List_Of_Busses(sysThreadId, StemTicket.get_busId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), reinterpret_cast<std::byte*>(StemTicket.get_Arrival_AccessId()));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), reinterpret_cast<std::byte*>(reinterpret_cast<uint8_t*>(StemTicket.get_Departure_JunctionId())));
		zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), reinterpret_cast<uint8_t*>(StemTicket.get_Departure_JunctionId()))), externalSide);
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			bytes_DATA = zinc::CLIB_Bus_STRUCT_SingleBus::unload(sysThreadId,StemTicket);
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction_At_AccessLock(sysThreadId, StemTicket.get_busId(), reinterpret_cast<uint8_t*>(StemTicket.get_Departure_JunctionId()))), externalSide);
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, objBus->dyn_CLASS_get_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_CLIB_Item_MutexQue_On_List_Of_Busses_At_Junction(sysThreadId, StemTicket.get_busId())), reinterpret_cast<std::byte*>(reinterpret_cast<uint8_t*>(StemTicket.get_Departure_JunctionId())));
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), reinterpret_cast<std::byte*>(StemTicket.get_Arrival_AccessId()));
		return bytes_DATA;
	}
	void zinc::Stemisphore::reInitialiseHandle(std::byte* sysThreadId, std::byte* handle_Id, unsigned char* MAX_NUMBER_OF_JUNCTIONS) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : reInitialiseHandle(sysThreadId)." << std::endl;
		auto a = stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId);
		std::cout << "test X" << std::endl;
		auto handle = CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, a);
		std::cout << "test Z" << std::endl;
		zinc::MutexQue::startByLock(sysThreadId, handle, accessId);
		std::cout << "test A" << std::endl;
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			std::cout << "test B" << std::endl;
			auto oldSize = stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size();
			std::cout << "test C" << std::endl;
			CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt64(sysThreadId, MAX_NUMBER_OF_JUNCTIONS));
			std::cout << "test D" << std::endl;
			auto list = new std::list<uint64_t>();
			std::cout << "test E" << std::endl;
			list->resize(*CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
			std::cout << "test F" << std::endl;
			for (auto i = new uint64_t(oldSize); *i < list->size(); i++) {
				list->assign(*i, 2);
			}
			std::cout << "test G" << std::endl;
			CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, list);
			std::cout << "test H" << std::endl;
			stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_List_Of_Busses(sysThreadId);
			std::cout << "test I" << std::endl;
			for (auto i = new uint64_t(0); *i < list->size(); i++) {
				auto temp = list->begin();
				std::advance(temp, *i);
				auto ptr = new uint64_t(*temp);
				zinc::CLIB_Bus_STRUCT_SingleBus::reInitialiseHandle(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, ptr));
			}
			std::cout << "test J" << std::endl;
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		std::cout << "test A" << std::endl;
		zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, reinterpret_cast<uint8_t*>(handle_Id))->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : reInitialiseHandle(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::terminateProgram(std::byte* sysThreadId) {
		for (auto index_handleId = new uint8_t(1); *index_handleId < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index_handleId++) {
			zinc::MutexQue::startByLock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index_handleId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : terminateProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_CLIB_List_Of_SystemBus_Framework;
			delete stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(4) = !stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2);
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : terminateProgram(sysThreadId)." << std::endl;
		for (auto index_handleId = new uint8_t(1); *index_handleId < stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->size(); index_handleId++) {
			zinc::MutexQue::endByUnlock(sysThreadId, CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_SystemBus_Framework(sysThreadId, index_handleId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_SystemBus_Framework_App_Execute(sysThreadId)->dyn_REG_get_PGM_CLIB_MutexQue_Of_Stemisphore(sysThreadId)), accessId);
		}
	}
// private.
	void zinc::Stemisphore::stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); memberFunctionId++) {
			if (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
			break;
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_APP_FUNCT_zinc_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_List_Of_SystemBus_Framework = nullptr;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId)." << std::endl;
		stat_REG_CLIB_List_Of_SystemBus_Framework = new std::list<class zinc::CLIB_SystemBus_Framework*>();
		stat_REG_CLIB_List_Of_SystemBus_Framework->resize(1);
		auto temp = stat_REG_CLIB_List_Of_SystemBus_Framework->begin();
		std::advance(temp, 0);
		*temp = nullptr;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework(sysThreadId)." << std::endl;
	}
	std::list<zinc::CLIB_SystemBus_Framework*>* zinc::Stemisphore::stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: <= class: stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(std::byte* sysThreadId)" << std::endl;
		return stat_REG_CLIB_List_Of_SystemBus_Framework;
	}
	zinc::CLIB_SystemBus_Framework* zinc::Stemisphore::stat_CLASS_get_ptr_CLIB_SystemBus_Framework(std::byte* sysThreadId, uint8_t* handleId) {
		auto temp = stat_CLASS_get_ptr_CLIB_List_Of_SystemBus_Framework(sysThreadId)->begin();
		std::advance(temp, *handleId);
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: <= class: stat_CLASS_get_ptr_CLIB_SystemBus_Framework(std::byte* sysThreadId, uint8_t* handleId)" << std::endl;
		return *temp;
	}
	void zinc::Stemisphore::stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot1_DEFINE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_zinc_isMemberFunctionINSTANTIATED = new std::array<bool, 6>();//todo number of function checks and summed or of.
		while (stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t index = 0; index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot2_SUBSTANTIATE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::Stemisphore::stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : Bus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		for (uint8_t index = 0; index < stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->size(); index++)	{
			stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : Bus : stat_REG_boot3_INITIALISE_zinc_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	std::array<bool, 6>* zinc::Stemisphore::stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: <= std::array<bool, 4>* : stat_REG_get_zinc_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId)" << std::endl;
		return stat_REG_flag_zinc_isMemberFunctionINSTANTIATED;
	}

