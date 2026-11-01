#include "../../../CLIB_MutexQueForThreadsLog/io/include/CLIB_MutexQueForThreadsLog.h"
#include "../../include/CLIB_MutexQueForThreadsLog_Framework.h"
#include "../../include/CLIB_MutexQueForThreadsLog_Framework_App.h"
#include "../../include/CLIB_MutexQueForThreadsLog_Framework_App_Control.h"
#include "../../include/CLIB_MutexQueForThreadsLog_Framework_Global.h"
#include <iostream>
#include <thread>
	static std::list<void*>* stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_ptr_MutexQueForThreadsLog;//todo number of data clusters.
	static std::array<bool, 5>* stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_array_of_isMemberFunctionINSTANTIATED;//todo number of data clusters.
// public.
	void zinc::MutexQueForThreadsLog::endByUnlock(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_ACCESS_ID) {
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : unlock(sysThreadId)" << std::endl;
		if (!CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId)), bytes_ACCESS_ID);
			CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQueForThreadsLog_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId, true);
			CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQueForThreadsLog_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId, true);
		}
		else {
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(3) = !CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : unlock(sysThreadId)" << std::endl;
	}
	unsigned char* zinc::MutexQueForThreadsLog::generateHandle(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : generateHandle(sysThreadId)" << std::endl;
		auto handleId = new int();
		CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->resize(static_cast<uint8_t>(CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->size()+1));
		CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->assign(CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->size(), *CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->begin());
		*handleId = static_cast<int>(CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->size() - 1);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : generateHandle(sysThreadId)" << std::endl;
		return CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(sysThreadId, handleId);
	}
	 void zinc::MutexQueForThreadsLog::generateProgram(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : generateProgram(sysThreadId)" << std::endl;
		CLIB_MutexQueForThreadsLog_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
	 	CLIB_MutexQueForThreadsLog_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
	 	CLIB_MutexQueForThreadsLog_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId);
		CLIB_MutexQueForThreadsLog_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : generateProgram(sysThreadId)" << std::endl;

	}
	unsigned char* zinc::MutexQueForThreadsLog::isINSTANTIATED(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : isINSTANTIATED(sysThreadId)" << std::endl;
		bool* result = nullptr;
		result = new bool(sysThreadId);
		*result = true;
		if (!CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			*result = CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
		}
		else {
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : isINSTANTIATED(sysThreadId)" << std::endl;
		return zinc::CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId, *result);
	}
	void zinc::MutexQueForThreadsLog::reInitialiseHandle(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : reInitialiseHandle(sysThreadId)" << std::endl;
		auto temp = CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->begin();
		std::advance(temp, *handleId);
		const auto tempObj = static_cast<CLIB_MutexQueForThreadsLog_Framework*>(*temp);
		tempObj->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(sysThreadId)->stat_REG_set_ptr_CLIB_MutexQueForThreadsLog_number_Of_Implemented_Threads(sysThreadId, CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(sysThreadId, bytes_MAX_NUMBER_OF_THREADS_FOR_ACCESS));
		tempObj->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App_Control(sysThreadId)->dyn_REG_boot3_REINITIALISE_CLIB_MutexQueForThreadsLog_Framework_App_Control_For_New_Access_Count(sysThreadId, tempObj);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : reInitialiseHandle(sysThreadId)" << std::endl;
	}
	void zinc::MutexQueForThreadsLog::startByLock(uint8_t* sysThreadId, unsigned char* handleId, unsigned char* bytes_ACCESS_ID) {
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : lock(sysThreadId)" << std::endl;
		if (!CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, CLIB_MutexQueForThreadsLog_Framework_Global::stat_CONVERT_CLIB_MutexQueForThreadsLog_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(sysThreadId, handleId)), bytes_ACCESS_ID);
		}
		else {
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(4) = !CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : lock(sysThreadId)" << std::endl;
	}
	void zinc::MutexQueForThreadsLog::terminateProgram(uint8_t* sysThreadId, unsigned char* handleId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : terminateProgram(sysThreadId)" << std::endl;
		if (!CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_ptr_MutexQueForThreadsLog;
			delete stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_array_of_isMemberFunctionINSTANTIATED;
		}
		else {
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(2) = !CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : terminateProgram(sysThreadId)" << std::endl;
	}
// private.
	void zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_App_FUNCT_generate_Program(uint8_t* sysThreadId) {
		auto handleId = new int(0);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_App_FUNCT_generate_Program(sysThreadId)" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings" << std::endl;
		CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId)->dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Global_and_Settings(sysThreadId);
		CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Global(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;
		CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId)->dyn_CLASS_create_CLIB_MutexQueForThreadsLog_Architecture(sysThreadId);

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;
		CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_MutexQueForThreadsLog_Framework_App_Control(sysThreadId, CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - DEFINE" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - SUBSTANTIATE" << std::endl;
		CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQueForThreadsLog_Framework_App_Control(sysThreadId,CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - SUBSTANTIATE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Registers - INITIALISE" << std::endl;
		CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQueForThreadsLog_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_MutexQueForThreadsLog_Framework_App_Control(sysThreadId,CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Registers - INITIALISE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " :: started Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: done Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "        ,     \\      /      ," << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|              |\\../|               |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|               \\VV/                |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|     MIT Custom Mutex Que .dll      |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|___________________________________|" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "|/                //               \\|"  << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "`                 V                 '" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_App_FUNCT_generate_Program(sysThreadId)" << std::endl;
	}
	bool zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
		CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = false;
		for(int index = 1; index < 5; index++) {
			if (CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(index)) {
				CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(index);
				break;
			}
		}
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= bool : CLIB_MutexQueForThreadsLog_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId)" << std::endl;
		return CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
	}
	void zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_ptr_MutexQueForThreadsLog = nullptr;
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId)" << std::endl;
	}
	void zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId)" << std::endl;
		auto handleId = new int(0);
		stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_ptr_MutexQueForThreadsLog = new std::list<void*>();
		CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->resize(1);
		CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)->assign(*handleId, new class zinc::CLIB_MutexQueForThreadsLog_Framework(sysThreadId));
		CLIB_MutexQueForThreadsLog_App_FUNCT_generate_Program(sysThreadId);
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId)" << std::endl;
	}
	void zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_array_of_isMemberFunctionINSTANTIATED = nullptr;
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	void zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_array_of_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId) = true;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	void zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		for (uint8_t memberFunctionId = 0; memberFunctionId < static_cast<uint8_t>(CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQueForThreadsLog : CLIB_MutexQueForThreadsLog_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	std::array<bool, 5>* zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
		return stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_array_of_isMemberFunctionINSTANTIATED;
	}
	std::list<void*>* zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_CLIB_MutexQueForThreadsLog(uint8_t* sysThreadId) {
	 	//std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= std::list<void*>* : CLIB_MutexQueForThreadsLog_stat_PGM_get_array_of_ptr_MutexQueForThreadsLog(sysThreadId)." << std::endl;
		return stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_ptr_MutexQueForThreadsLog;
	}
	zinc::CLIB_MutexQueForThreadsLog_Framework* zinc::MutexQueForThreadsLog::CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(uint8_t* sysThreadId, int* handleId)	{
		auto temp = stat_REG_ptr_CLIB_MutexQueForThreadsLog_array_of_ptr_MutexQueForThreadsLog->begin();
		std::advance(temp, *handleId);
	 	std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : CLIB_MutexQueForThreadsLog_stat_PGM_get_ptr_CLIB_MutexQueForThreadsLog(sysThreadId)." << std::endl;
		return static_cast<zinc::CLIB_MutexQueForThreadsLog_Framework*>(*temp);
	}