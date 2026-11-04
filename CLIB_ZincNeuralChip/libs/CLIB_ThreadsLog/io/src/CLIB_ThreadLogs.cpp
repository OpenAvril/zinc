#include "../include/CLIB_ThreadLogs.h"
#include "../../libs/CLIB_MutexQueForThreadsLog/io/include/CLIB_MutexQueForThreadsLog.h"
#include "../../include/CLIB_ThreadLogs_Framework_Global.h"
#include <array>
#include <cstdint>
#include <iostream>
	static zinc::CLIB_ThreadLogs_Framework* stat_REG_PGM_CLIB_Framework;
	static std::array<bool, 4>* stat_REG_flag_CLIB_isMemberFunctionINSTANTIATED;
// public.
	void zinc::ThreadLogs::generateProgram(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : stat_App_FUNCT_CLIB_generate_Program(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_Framework(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_Framework(sysThreadId);
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_create_CLIB_ThreadLogs_Framework_Global_and_Settings(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_CLIB_ThreadLogs_Framework_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_CLIB_ThreadLogs_Framework_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_CLIB_ThreadLogs_Framework_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_create_CLIB_ThreadLogs_Framework_Architecture(sysThreadId);
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;

		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started Registers - INITIALISE." << std::endl;

		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot2_SUBSTANTIATE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId);
		stat_REG_boot3_INITIALISE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId);
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "        ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "|              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "|               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "|     MIT Sys Threads Log .dll       |" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "|___________________________________|" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "|/                //               \\|"  << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "`                 V                 '" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : stat_App_FUNCT_CLIB_generate_Program(sysThreadId)." << std::endl;
	}
	void zinc::ThreadLogs::printl(std::byte* sysThreadId, std::string* stringForLogPrint) {
		zinc::MutexQueForThreadsLog::startByLock(sysThreadId, CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)), CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, sysThreadId));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : printl(sysThreadId)." << std::endl;
		if (!stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)->dyn_APP_FUNCT_CLIB_printConsoleAndLog(sysThreadId, stat_CLASS_get_ptr_CLIB_Framework(sysThreadId), stringForLogPrint);
		}
		else {
			stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
			stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : printl(sysThreadId)." << std::endl;
		zinc::MutexQueForThreadsLog::endByUnlock(sysThreadId, CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)), CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, sysThreadId));
	}
	void zinc::ThreadLogs::reInitialiseProgram(std::byte* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY) {
		zinc::MutexQueForThreadsLog::startByLock(sysThreadId, CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)), CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, sysThreadId));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : reInitialiseProgram(sysThreadId)." << std::endl;
		if (!stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_CLIB_ThreadLogs_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)->dyn_PGM_boot3_REINITIALISE_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);
		}
		else {
			stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : reInitialiseProgram(sysThreadId)." << std::endl;
		zinc::MutexQueForThreadsLog::endByUnlock(sysThreadId, CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)), CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, sysThreadId));
	}
	void zinc::ThreadLogs::terminateProgram(std::byte* sysThreadId) {
		zinc::MutexQueForThreadsLog::startByLock(sysThreadId, CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)), CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, sysThreadId));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : stat_App_FUNCT_CLIB_terminate_Program(sysThreadId)." << std::endl;
		if (!stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_PGM_CLIB_Framework;
			delete stat_REG_flag_CLIB_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(3) = !stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0);
		}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : stat_App_FUNCT_CLIB_terminate_Program(sysThreadId)." << std::endl;
		zinc::MutexQueForThreadsLog::endByUnlock(sysThreadId, CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, stat_CLASS_get_ptr_CLIB_Framework(sysThreadId)->dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App(sysThreadId)->dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Execute(sysThreadId)->dyn_REG_get_HandleId_For_PGM_CLIB_ForThreadsAt_MutexQueForThreadsLog(sysThreadId)), CLIB_ThreadLogs_Framework_Global::stat_CONVERT_CLIB_ThreadLogs_Framework_Global_VUALUEofMsbStdByte_To_MsbByteArray(sysThreadId, sysThreadId));
	}
// private.
	void zinc::ThreadLogs::stat_APP_FUNCT_CLIB_Calc_IsAllINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : stat_APP_FUNCT_CLIB_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < static_cast<uint8_t>(stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			if (stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId)) stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(0) = stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(memberFunctionId);
			break;
		}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : stat_APP_FUNCT_CLIB_Calc_IsAllINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::ThreadLogs::stat_CLASS_boot1_DEFINE_CLIB_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : stat_CLASS_boot1_DEFINE_CLIB_Framework(sysThreadId)." << std::endl;
		stat_REG_PGM_CLIB_Framework = nullptr;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : stat_CLASS_boot1_DEFINE_CLIB_Framework(sysThreadId)." << std::endl;
	}
	void zinc::ThreadLogs::stat_CLASS_boot3_INITIALISE_CLIB_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : stat_CLASS_boot3_INITIALISE_CLIB_Framework(sysThreadId)." << std::endl;
		stat_REG_PGM_CLIB_Framework = new class zinc::CLIB_ThreadLogs_Framework(sysThreadId);
		while (stat_CLASS_get_ptr_CLIB_Framework(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : stat_CLASS_boot3_INITIALISE_CLIB_Framework(sysThreadId)." << std::endl;
	}
	class zinc::CLIB_ThreadLogs_Framework* zinc::ThreadLogs::stat_CLASS_get_ptr_CLIB_Framework(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: <= class* : stat_CLASS_get_ptr_CLIB_Framework(std::byte* sysThreadId) = " << std::endl;
		return stat_REG_PGM_CLIB_Framework;
	}
	void zinc::ThreadLogs::stat_REG_boot1_DEFINE_CLIB_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : stat_REG_boot1_DEFINE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_CLIB_isMemberFunctionINSTANTIATED = nullptr;
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : stat_REG_boot1_DEFINE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::ThreadLogs::stat_REG_boot2_SUBSTANTIATE_CLIB_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : stat_REG_boot2_SUBSTANTIATE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		stat_REG_flag_CLIB_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();//todo number of function checks and summed or of.
		while (stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId) == nullptr) {}
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); index++)	{
			stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : stat_REG_boot2_SUBSTANTIATE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	void zinc::ThreadLogs::stat_REG_boot3_INITIALISE_CLIB_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: CLIB : ThreadLogs : stat_REG_boot3_INITIALISE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
		for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->size()); index++)	{
			stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)->at(index) = true;
		}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: CLIB : ThreadLogs : stat_REG_boot3_INITIALISE_CLIB_array_Of_flag_isINSTANTIATED(sysThreadId)." << std::endl;
	}
	std::array<bool, 4>*  zinc::ThreadLogs::stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: <= std::array<bool, 4>* : stat_REG_get_CLIB_array_Of_flag_isINSTANTIATED(std::byte* sysThreadId) = " << std::endl;
		return stat_REG_flag_CLIB_isMemberFunctionINSTANTIATED;
	}

