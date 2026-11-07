#ifndef CLIB_LEFTHEMISPHORE_H
#define CLIB_LEFTHEMISPHORE_H
#include <array>
#include <cstddef>
#include <list>
#include "../../include/engine/CLIB_LeftHemishpore_Framework.h"
extern "C" {
	namespace zinc {
		class Epicentre {
		public:
			static unsigned char* gernerateHandle(std::byte* sysThreadId);
			static void generateProgram(std::byte* sysThreadId);
			static unsigned char* get_Output(std::byte* sysThreadId, unsigned char* handleId, unsigned char* bytes_praiseId);
			static unsigned char* get_FLAG_isINITIALISED(std::byte* sysThreadId, unsigned char* handleId);
			static unsigned char* get_FLAG_isStackLoaded_ServerInputReceive(std::byte* sysThreadId, unsigned char* handleId);
			static unsigned char* get_FLAG_isStackLoaded_ServerOutputSend(std::byte* sysThreadId, unsigned char* handleId);
			static unsigned char* get_MetaData_PraiseEventId(std::byte* sysThreadId, unsigned char* handleId);
			static unsigned char* get_PGM_HandleId_For_MutexQue_At_InputStackBuffer(std::byte* sysThreadId, unsigned char* handleId);
			static unsigned char* get_PGM_HandleId_For_MutexQue_At_OutputStackBuffer(std::byte* sysThreadId, unsigned char* handleId);
			static void set_InputItemsFor_praise0(std::byte* sysThreadId, unsigned char* handleId, unsigned char* praiseId, unsigned char* value_A, unsigned char* value_B);
			static void set_InputItemsFor_praise1(std::byte* sysThreadId, unsigned char* handleId, unsigned char* praiseId, unsigned char* value_A, unsigned char* value_B);
			static void set_InputItemsFor_praise2(std::byte* sysThreadId, unsigned char* handleId, unsigned char* praiseId, unsigned char* value_A, unsigned char* value_B);
			static void set_InputItemsFor_praise3(std::byte* sysThreadId, unsigned char* handleId, unsigned char* praiseId, unsigned char* value_A, unsigned char* value_B);
			static void set_MetaData_PraiseEventId(std::byte* sysThreadId, unsigned char* handleId, unsigned char* praiseId);
			static void reInitialiseHandle(std::byte* sysThreadId, unsigned char* handleId, std::byte* NUMBER_OF_TASK_THREADS);
			static void terminateProgram(std::byte* sysThreadId);
		private:
			static void stat_app_do_CLIB_LeftHemishpore_STRUCT_Input_MetaData(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj, unsigned char* handleId, unsigned char* praiseId);
			static void stat_app_do_CLIB_LeftHemishpore_STRUCT_Input_DataControl(std::byte* sysThreadId, CLIB_LeftHemishpore_Framework* obj, unsigned char* handleId, unsigned char* praiseId);
			static void CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(std::byte* sysThreadId);
			static void CLIB_LeftHemishpore_stat_CLASS_boot1_DEFINE_Framework(std::byte* sysThreadId);
			static void CLIB_LeftHemishpore_stat_CLASS_boot3_INITIALISE_Framework(std::byte* sysThreadId);
			static class CLIB_LeftHemishpore_Framework* CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId, int* handleId);
			static std::list<zinc::CLIB_LeftHemishpore_Framework*>* CLIB_LeftHemishpore_stat_CLASS_get_List_Of_ptr_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId);
			static void CLIB_LeftHemishpore_stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(std::byte* sysThreadId);
			static void CLIB_LeftHemishpore_stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(std::byte* sysThreadId);
			static void CLIB_LeftHemishpore_stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(std::byte* sysThreadId);
			static std::array<bool, 15>* CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(std::byte* sysThreadId);
		};
	}
}
#endif