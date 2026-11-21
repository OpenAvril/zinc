#ifndef CLIB_OPENEPICENTRE_STRUCT_USER_OUTPUT_H
#define CLIB_OPENEPICENTRE_STRUCT_USER_OUTPUT_H
#include "praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise0.h"
#include "praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise1.h"
#include "praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise2.h"
#include "praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise3.h"
#include "../engine/CLIB_LeftHemisphore_Framework.h"
#include <list>
namespace zinc {
	struct CLIB_LeftHemisphore_STRUCT_User_Output {
	public:
		std::list<class Object*>* dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(std::byte* sysThreadId, const uint64_t* praiseId);
		void dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
		void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
		void dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
		void dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
		static void stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
		static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
		static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
		static void stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
		static void stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_UserOutput(std::byte* sysThreadId);
	private:
		static std::list<class zinc::Object*>* stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_SUBSET;
		static struct CLIB_LeftHemisphore_STRUCT_Output_praise0* stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise0;
		static struct CLIB_LeftHemisphore_STRUCT_Output_praise1* stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise1;
		static struct CLIB_LeftHemisphore_STRUCT_Output_praise2* stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise2;
		static struct CLIB_LeftHemisphore_STRUCT_Output_praise3* stat_REG_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise3;
		static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_SUBSET(std::byte* sysThreadId);
		static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise0(std::byte* sysThreadId);
		static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise1(std::byte* sysThreadId);
		static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise2(std::byte* sysThreadId);
		static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise3(std::byte* sysThreadId);
		static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_SUBSET(std::byte* sysThreadId);
		static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise0(std::byte* sysThreadId);
		static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise1(std::byte* sysThreadId);
		static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise2(std::byte* sysThreadId);
		static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise3(std::byte* sysThreadId);
		static std::list<class Object*>* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_SUBSET(std::byte* sysThreadId);
		static struct CLIB_LeftHemisphore_STRUCT_Output_praise0* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise0(std::byte* sysThreadId);
		static struct CLIB_LeftHemisphore_STRUCT_Output_praise1* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise1(std::byte* sysThreadId);
		static struct CLIB_LeftHemisphore_STRUCT_Output_praise2* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise2(std::byte* sysThreadId);
		static struct CLIB_LeftHemisphore_STRUCT_Output_praise3* stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_UserOutput_Output_praise3(std::byte* sysThreadId);
	};
}
#endif