#include "../include/BNIDS.h"

#include <iostream>
#include <list>

// public.
	void zinc::BNIBNNDS::generateBNN(std::byte* sysThreadId, unsigned char* praiseEventId) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		if (!stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			stat_App_FUNCT_CLIB_MutexQue_generate_Program(sysThreadId, Global_BNI_BNN_Framework_Global::stat_CONVERT_MsbByteArray_To_MsbULongLong(praiseEventId, praiseEventId));
		}
		else {
			stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			stat_APP_FUNCT_CLIB_MutexQue_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
	}
    unsigned char* zinc::BNIBNNDS::runBNN(std::byte* sysThreadId, unsigned char* praiseId) {
     	std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		auto result = new std::list<zinc::Object*>;
		if (!stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			result->resize(2);

			//todo

			//result =
		}
		else {
			stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(2) = !stat_REG_get_CLIB_MutexQue_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			stat_APP_FUNCT_CLIB_MutexQue_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		return reinterpret_cast<zinc::Object*>(result);
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
    }
// private.
    void zinc::BNIBNNDS::stat_App_FUNCT_CLIB_MutexQue_generate_Program(std::byte* sysThreadId, unsigned long long* praiseEventId){
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
    void zinc::BNIBNNDS::stat_STRUCT_boot1_DEFINE_CLIB_MutexQue_array_of_ptr_Framework(std::byte* sysThreadId){

    }
    void zinc::BNIBNNDS::stat_STRUCT_boot3_INITIALISE_CLIB_MutexQue_sarray_of_ptr_Framework(std::byte* sysThreadId){

    }