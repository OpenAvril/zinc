#include "../include/BNITT.h"
#include "CLIB_Framework_Global.h"
#include <iostream>
#include <list>
	static std::list<class zinc::CLIB_BNIBNN_Framework*> stat_REG_Of_PGM_Array_For_BNITT;
// public.
	unsigned char* zinc::BNITT::generateBNI(std::byte* sysThreadId, unsigned char* listOf_FLAG_PraiseEventId) {
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		auto result = new std::list<class zinc::Object*>;
		if (!stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			std::list<bool>* temp_listOf_FLAG_PraiseEventId = CLIB_BNI_BNN_Framework_Global::stat_CONVERT_MsbByteArray_To_MsbListOfBool(sysThreadId, listOf_FLAG_PraiseEventId);
			for (unsigned long long* index_usedPraiseEventId = 0; *index_usedPraiseEventId < temp_listOf_FLAG_PraiseEventId->size(); index_usedPraiseEventId++) {
				auto temp = temp_listOf_FLAG_PraiseEventId->begin();
				std::advance(temp, *index_usedPraiseEventId);
				if (*temp) stat_REG_set_CLIB_BNIBNN_PGM_Array_For_BNITT(sysThreadId, stat_App_FUNCT_CLIB_BNIBNN_generate_Program(sysThreadId, Global_BNI_BNN_Framework_Global::stat_CONVERT_MsbByteArray_To_MsbULongLong(index_usedPraiseEventId, index_usedPraiseEventId)));
			}
		}
		else {
			stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			stat_APP_FUNCT_CLIB_BNIBNN_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		return result;
	}
	unsigned char* zinc::BNITT::runBNN(std::byte* sysThreadId, unsigned char* bytes_PraiseEventId) {
		return stat_REG_get_CLIB_BNIBNN_PGM_Array_For_BNITT(sysThreadId, CLIB_Framework_Global::stat_CONVERT_MsbByteArray_MsbULongLong(sysThreadId, bytes_PraiseEventId))->runBNN(sysThreadId);
	}
// private.
    bool zinc::BNITT::stat_APP_FUNCT_CLIB_BNIBNN_Calc_IsAllINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNITT::stat_REG_boot1_DEFINE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNITT::stat_REG_boot2_SUBSTANTIATE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNITT::stat_REG_boot3_INITIALISE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    std::array<bool, 2>* zinc::BNITT::stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNITT::stat_REG_boot1_DEFINE_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId){

    }
	void zinc::BNITT::stat_REG_boot3_INITIALISE_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId){

	}
	class zinc::CLIB_BNIBNN_Framework zinc::BNITT::stat_REG_get_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId, unsigned long long* praiseEventId) {
		auto temp = stat_REG_Of_PGM_Array_For_BNITT.begin();
		std::advance(temp, *praiseEventId);
		return *temp;
	}
	void zinc::BNITT::stat_REG_set_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId, unsigned long long* praiseEventId, class zinc::CLIB_BNIBNN_Framework* obj) {
		auto temp = stat_REG_Of_PGM_Array_For_BNITT.begin();
		std::advance(temp, *praiseEventId);
		*temp = obj;
	}