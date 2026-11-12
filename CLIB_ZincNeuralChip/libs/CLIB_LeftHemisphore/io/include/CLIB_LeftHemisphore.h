#ifndef CLIB_LEFTHEMISPHORE_H
#define CLIB_LEFTHEMISPHORE_H
#include <array>
#include <list>
#include "../../include/engine/CLIB_LeftHemisphore_Framework.h"
extern "C" {
	namespace zinc {
		class Epicentre {
		public:
			static std::byte* gernerateHandle(std::byte* sysThreadId);
			static void generateProgram(std::byte* sysThreadId);
			static unsigned char* get_Output(std::byte* sysThreadId, std::byte* handleId, unsigned char* bytes_praiseId);
			static bool get_FLAG_isINITIALISED(std::byte* sysThreadId, std::byte* handleId);
			static bool get_FLAG_isStackLoaded_ServerInputReceive(std::byte* sysThreadId, std::byte* handleId);
			static bool get_FLAG_isStackLoaded_ServerOutputSend(std::byte* sysThreadId, std::byte* handleId);
			static unsigned char* get_MetaData_PraiseEventId(std::byte* sysThreadId, std::byte* handleId);
			static unsigned char* get_PGM_HandleId_For_MutexQue_At_InputStackBuffer(std::byte* sysThreadId, std::byte* handleId);
			static unsigned char* get_PGM_HandleId_For_MutexQue_At_OutputStackBuffer(std::byte* sysThreadId, std::byte* handleId);
			static void set_InputItemsFor_praise0(std::byte* sysThreadId, std::byte* handleId, unsigned char* bytesPraiseId, unsigned char* value_A, unsigned char* value_B);
			static void set_InputItemsFor_praise1(std::byte* sysThreadId, std::byte* handleId, unsigned char* bytesPraiseId, unsigned char* value_A, unsigned char* value_B);
			static void set_InputItemsFor_praise2(std::byte* sysThreadId, std::byte* handleId, unsigned char* bytesPraiseId, unsigned char* value_A, unsigned char* value_B);
			static void set_InputItemsFor_praise3(std::byte* sysThreadId, std::byte* handleId, unsigned char* bytesPraiseId, unsigned char* value_A, unsigned char* value_B);
			static void set_MetaData_PraiseEventId(std::byte* sysThreadId, std::byte* handleId, unsigned char* bytesPraiseId);
			static void reInitialiseHandle(std::byte* sysThreadId, std::byte* handleId, std::byte* NUMBER_OF_TASK_THREADS, std::byte* NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS);
			static void terminateProgram(std::byte* sysThreadId);
		private:
			static void stat_app_do_CLIB_LeftHemisphore_STRUCT_Input_MetaData(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj, std::byte* handleId, unsigned char* bytesPraiseId);
			static void stat_app_do_CLIB_LeftHemisphore_STRUCT_Input_DataControl(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj, std::byte* handleId, unsigned char* bytesPraiseId);
			static void CLIB_LeftHemisphore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
			static void CLIB_LeftHemisphore_stat_CLASS_boot1_DEFINE_Framework(std::byte* sysThreadId);
			static void CLIB_LeftHemisphore_stat_CLASS_boot3_INITIALISE_Framework(std::byte* sysThreadId);
			static class CLIB_LeftHemisphore_Framework* CLIB_LeftHemisphore_stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework(std::byte* sysThreadId, uint8_t* handleId);
			static std::list<zinc::CLIB_LeftHemisphore_Framework*>* CLIB_LeftHemisphore_stat_CLASS_get_List_Of_ptr_CLIB_LeftHemisphore_Framework(std::byte* sysThreadId);
			static void CLIB_LeftHemisphore_stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_isFLAG_INSTANTIATED(std::byte* sysThreadId);
			static void CLIB_LeftHemisphore_stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_isFLAG_INSTANTIATED(std::byte* sysThreadId);
			static void CLIB_LeftHemisphore_stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_isFLAG_INSTANTIATED(std::byte* sysThreadId);
			static std::array<bool, 15>* CLIB_LeftHemisphore_stat_REG_flag_CLIB_LeftHemisphore_array_isINSTANTIATED(std::byte* sysThreadId);
		};
	}
}
#endif