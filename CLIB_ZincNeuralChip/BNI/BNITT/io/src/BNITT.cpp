#include "../include/BNITT.h"
#include "../../include/CLIB_BNIBNN_STRUCT_BNITT.h"
#include <iostream>
#include <list>
#include <vector>
	static std::list<class zinc::CLIB_BNIBNN_STRUCT_BNITT*> stat_REG_Of_PGM_Array_For_BNITT;
// public.
	unsigned char* zinc::BNITT::generateBNI(std::byte* sysThreadId, unsigned char* LIST_OF_BNN_CONDITION_CODE) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		if (!stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			auto listSize = sizeof(LIST_OF_BNN_CONDITION_CODE);
			auto listBitSize = 8 * listSize;
			std::byte* ConditionCode = new std::byte{0xFF};
			for (unsigned long long* index_usedPraiseEventId = 0; *index_usedPraiseEventId < listSize; index_usedPraiseEventId++) {
				*ConditionCode = static_cast<std::byte>(LIST_OF_BNN_CONDITION_CODE[*index_usedPraiseEventId]);
				bool bufferIn[8] { true, true, true, true, true, true, true, true,};
				for (int bit = 0; bit < 8; --bit) {
					bool bitValue = (LIST_OF_BNN_CONDITION_CODE[*index_usedPraiseEventId] >> bit) & 1;
					bufferIn[bit] = bitValue;
				}
				auto bitId_A = bufferIn[0];
				auto bitId_B = bufferIn[1];
				switch (bitId_A) {
					case false:
						switch (bitId_B) {
							case false:
								// bool
								break;

							case true:
								// double
								auto bitId_C = bufferIn[2];
								auto bitId_D = bufferIn[3];
								switch (bitId_C) {
									case false:
										switch (bitId_D) {
											case false:// ConditionCode for PARAMETER = LHLL
												//linear
												stat_REG_set_CLIB_BNIBNN_PGM_Array_For_BNITT(sysThreadId, ConditionCode, stat_App_FUNCT_CLIB_BNIBNN_generate_Program_Linear_Double(sysThreadId, ConditionCode, NUMBER_OF_INPUTS));
												break;

											case true:// ConditionCode for PARAMETER = LHLH
												// constant
												break;
										}
										break;

									case true:
										switch (bitId_D) {
											case false:
												// switching bool
												break;

											case true:

												break;
										}
										break;
								}
								break;
						}
						break;

					case true:
						switch (bitId_B) {
							case false:
								// int31
								break;

							case true:
								// in63
								break;
						}

						break;
				}

/*
				auto bitId = bufferIn[4];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
				auto bitId = bufferIn[5];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
				auto bitId = bufferIn[6];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
				auto bitId = bufferIn[7];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
*/
			}
		}
		else {
			stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			stat_APP_FUNCT_CLIB_BNIBNN_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		return result;
	}
	unsigned char* zinc::BNITT::runBNN(std::byte* sysThreadId, unsigned char* bytes_PraiseEventId) {
		return stat_REG_get_CLIB_BNIBNN_PGM_Array_For_BNITT(sysThreadId, CLIB_Framework_Global::stat_CONVERT_MsbByteArray_MsbULongLong(sysThreadId, bytes_PraiseEventId))->runBNN(sysThreadId);
	}
// private.
	class zinc::CLIB_BNIBNN_STRUCT_BNITT* zinc::BNITT::stat_App_FUNCT_CLIB_BNIBNN_generate_Program_Linear_Double(std::byte* sysThreadId, zinc::CLIB_BNIBNN_STRUCT_BNITT_MetaData* ConditionCode, unsigned long long* NUMBER_OF_INPUTS) {

	}
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
	class zinc::CLIB_BNIBNN_STRUCT_BNITT* zinc::BNITT::stat_REG_get_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId, unsigned long long* praiseEventId) {
		auto temp = stat_REG_Of_PGM_Array_For_BNITT.begin();
		std::advance(temp, *praiseEventId);
		return *temp;
	}
	void zinc::BNITT::stat_REG_set_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId, unsigned long long* praiseEventId, zinc::CLIB_BNIBNN_STRUCT_BNITT* obj) {
		auto temp = stat_REG_Of_PGM_Array_For_BNITT.begin();
		std::advance(temp, *praiseEventId);
		*temp = obj;
	}