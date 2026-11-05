#include "../include/BNITT.h"

#include <iostream>
#include <list>

namespace zinc {
	class CLIB_BNIBNN_Framework;
}

	static std::list<class zinc::CLIB_BNIBNN_Framework*> stat_REG_Of_PGM_Array_For_BNITT;
// public.
	zinc::Object* zinc::BNIBNNDS::generateBNI(std::byte* sysThreadId, unsigned char* listOf_FLAG_PraiseEventId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		auto result = new std::list<class zinc::Object*>;
		if (!stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			std::list<bool>* temp_listOf_FLAG_PraiseEventId = CLIB_BNI_BNN_Framework_Global::stat_CONVERT_MsbByteArray_To_MsbListOfBool(sysThreadId, listOf_FLAG_PraiseEventId);
			for (unsigned long long* index_usedPraiseEventId = 0; index_usedPraiseEventId < temp_listOf_FLAG_PraiseEventId->size(); index_usedPraiseEventId++) {
				auto temp = temp_listOf_FLAG_PraiseEventId->begin();
				std::advance(temp, index_usedPraiseEventId);
				if (temp) {
					temp = stat_App_FUNCT_CLIB_MutexQue_generate_Program(sysThreadId, Global_BNI_BNN_Framework_Global::stat_CONVERT_MsbByteArray_To_MsbULongLong(index_usedPraiseEventId, index_usedPraiseEventId));

				}
			}
		}
		else {
			stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			stat_APP_FUNCT_CLIB_MutexQue_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		return result;
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
	}
// private.
    class zinc::CLIB_BNIBNN_Framework* zinc::BNIBNNDS::stat_App_FUNCT_CLIB_MutexQue_generate_Program(std::byte* sysThreadId, unsigned long long* praiseEventId){
		auto result = nullptr;
		switch () {
			case 0:

				break;

			case 1:

				break;

			case 2:

				break;

			case 3:

				break;

		}
		return result;
    }
    bool zinc::BNIBNNDS::stat_APP_FUNCT_CLIB_MutexQue_Calc_IsAllINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNIBNNDS::stat_REG_boot1_DEFINE_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNIBNNDS::stat_REG_boot2_SUBSTANTIATE_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNIBNNDS::stat_REG_boot3_INITIALISE_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    std::array<bool, 2>* zinc::BNIBNNDS::stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNIBNNDS::stat_STRUCT_boot1_DEFINE_CLIB_BNITT_List_Of_PGM_For_CLIB_BNIBNN_Framework(std::byte* sysThreadId){

    }
	void zinc::BNIBNNDS::stat_STRUCT_boot3_INITIALISE_CLIB_BNITT_List_Of_PGM_For_CLIB_BNIBNN_Framework(std::byte* sysThreadId){

	}
	void zinc::BNIBNNDS::stat_STRUCT_get_CLIB_BNITT_List_Of_PGM_For_CLIB_BNIBNN_Framework(std::byte* sysThreadId){

	}