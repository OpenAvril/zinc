#include "../../../CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../../include/CLIB_MutexQue_Framework.h"
#include "../../include/CLIB_MutexQue_Framework_App.h"
#include "../../include/CLIB_MutexQue_Framework_App_Control.h"
#include "../../include/CLIB_MutexQue_Framework_Global.h"
#include <cstdint>
#include <iostream>
#include <limits.h>
static std::list<zinc::CLIB_MutexQue_Framework*>* stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue;//todo number of data clusters.
	static std::array<bool, 5>* stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;//todo number of data clusters.
// public.
	void zinc::MutexQue::endByUnlock(std::byte* sysThreadId, unsigned char* handleId, std::byte* byte_ACCESS_ID) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		if (!CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_APP_FUNCT_write_End(sysThreadId, zinc::MutexQue::CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, handleId)), reinterpret_cast<uint8_t*>(byte_ACCESS_ID));
			CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId, true);
			CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId, true);
		}
		else {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(3) = !CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
	}
	unsigned char* zinc::MutexQue::generateHandle(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : generateHandle(sysThreadId)" << std::endl;
		auto handleId = new unsigned long long(ULONG_LONG_MAX);
		CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->resize(CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->size()+1);
		CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->assign(CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->size(), *CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->begin());
		*handleId = static_cast<unsigned long long>(CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->size() - 1);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : generateHandle(sysThreadId)" << std::endl;
		return CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, handleId);
	}
	void zinc::MutexQue::generateProgram(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : generateProgram(sysThreadId)" << std::endl;
		CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
	 	CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
	 	CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId);
		CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : generateProgram(sysThreadId)" << std::endl;

	}
	void zinc::MutexQue::reInitialiseHandle(std::byte* sysThreadId, unsigned char* handleId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : reInitialiseHandle(sysThreadId)" << std::endl;
		auto temp = CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->begin();
		std::advance(temp, *CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, handleId));
		auto tempObj = *temp;
		std::cout << "a " << std::endl;
		tempObj->dyn_CLASS_get_ptr_CLIB_MutexQue_Global(sysThreadId)->dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Global_MAX_NUMBER_OF_THREADS_FOR_ACCESS_ID(sysThreadId, reinterpret_cast<uint8_t*>(MAX_NUMBER_OF_THREADS_FOR_ACCESS));
		std::cout << "b " << std::endl;
		tempObj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_boot3_REINITIALISE_CLIB_MutexQue_Framework_App_Control_For_New_Access_Count(sysThreadId, tempObj);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : reInitialiseHandle(sysThreadId)" << std::endl;
	}
	void zinc::MutexQue::startByLock(std::byte* sysThreadId, unsigned char* handleId, std::byte* byte_ACCESS_ID) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : lock(sysThreadId)" << std::endl;
		if (!CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, handleId))->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_APP_FUNCT_write_Start(sysThreadId, zinc::MutexQue::CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, handleId)), reinterpret_cast<uint8_t*>(byte_ACCESS_ID));
		}
		else {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(4) = !CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : lock(sysThreadId)" << std::endl;
	}
	void zinc::MutexQue::terminateProgram(std::byte* sysThreadId, unsigned char* handleId)	{
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : terminateProgram(sysThreadId)" << std::endl;
		if (!CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			delete stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue;
			delete stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
		}
		else {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(2) = !CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : terminateProgram(sysThreadId)" << std::endl;
	}
// private.
	void zinc::MutexQue::CLIB_MutexQue_App_FUNCT_generate_Program(std::byte* sysThreadId) {
		auto handleId = new unsigned long long(0);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_App_FUNCT_generate_Program(sysThreadId)" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_create_CLIB_MutexQue_Global_and_Settings(sysThreadId);
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_Global(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_MutexQue_Global(sysThreadId);
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_Global(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Global(sysThreadId);
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_Global(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Global(sysThreadId);
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings" << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_create_CLIB_MutexQue_Architecture(sysThreadId);

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Registers - DEFINE" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_MutexQue_Framework_App_Control(sysThreadId, CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Registers - DEFINE" << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Registers - SUBSTANTIATE" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_Framework_App_Control(sysThreadId,CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Registers - SUBSTANTIATE" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Registers - INITIALISE" << std::endl;
		CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_MutexQue_Framework_App_Control(sysThreadId,CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId, handleId));
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Registers - INITIALISE" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE" << std::endl;

		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: started Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: done Architecture array_of_array_of_isMemberFunctionINSTANTIATED REG - DECLARE DEFINE INITIALISE" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "        ,     \\      /      ," << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|              |\\../|               |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|               \\VV/                |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|     MIT Custom Mutex Que .dll      |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|___________________________________|" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "|/                //               \\|"  << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "`                 V                 '" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << "" << std::endl;
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_App_FUNCT_generate_Program(sysThreadId)" << std::endl;
	}
	bool zinc::MutexQue::CLIB_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(std::byte* sysThreadId) {
		CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = false;
		for(int index = 1; index < 5; index++) {
			if (CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(index)) {
				CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(index);
				break;
			}
		}
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= bool : CLIB_MutexQue_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId)" << std::endl;
		return CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
	}
	void zinc::MutexQue::CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(std::byte* sysThreadId) {
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue = nullptr;
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_PGM_boot1_DEFINE_array_of_ptr_Framework(sysThreadId)" << std::endl;
	}
	void zinc::MutexQue::CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(std::byte* sysThreadId) {
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId)" << std::endl;
		auto handleId = new int(0);
		auto size = new unsigned long long(1);
		stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue = new std::list<CLIB_MutexQue_Framework*>();
		CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(sysThreadId)->resize(*size);
		CLIB_MutexQue_App_FUNCT_generate_Program(sysThreadId);
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_PGM_boot3_INITIALISE_array_of_ptr_Framework(sysThreadId)" << std::endl;
	}
	void zinc::MutexQue::CLIB_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = nullptr;
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_boot1_DEFINE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	void zinc::MutexQue::CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();
		for (int memberFunctionId = 0; memberFunctionId < static_cast<int>(CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId) = true;
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	void zinc::MutexQue::CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
		for (int memberFunctionId = 0; memberFunctionId < static_cast<int>(CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->size()); memberFunctionId++) {
			CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId) = true;
		}
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(sysThreadId)" << std::endl;
	}
	std::array<bool, 5>* zinc::MutexQue::CLIB_MutexQue_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
		return stat_REG_ptr_CLIB_MutexQue_array_of_array_of_isMemberFunctionINSTANTIATED;
	}
	std::list<zinc::CLIB_MutexQue_Framework*>* zinc::MutexQue::CLIB_MutexQue_stat_PGM_get_array_of_ptr_CLIB_MutexQue(std::byte* sysThreadId) {
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::list<void*>* : CLIB_MutexQue_stat_PGM_get_array_of_ptr_MutexQue(sysThreadId)." << std::endl;
		return stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue;
	}
	zinc::CLIB_MutexQue_Framework* zinc::MutexQue::CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(std::byte* sysThreadId, unsigned long long* handleId)	{
		auto temp = stat_REG_ptr_CLIB_MutexQue_array_of_ptr_MutexQue->begin();
		std::advance(temp, *handleId);
	 	std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= class : CLIB_MutexQue_stat_PGM_get_ptr_CLIB_MutexQue(sysThreadId)." << std::endl;
		return static_cast<zinc::CLIB_MutexQue_Framework*>(*temp);
	}