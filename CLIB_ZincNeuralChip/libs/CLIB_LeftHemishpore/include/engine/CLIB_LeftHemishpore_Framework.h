#ifndef CLIB_LEFTHEMISPHORE_FRAMEWORK_H
#define CLIB_LEFTHEMISPHORE_FRAMEWORK_H
#include "../../include/engine/CLIB_LeftHemishpore_Framework_App.h"
#include "../../include/engine/CLIB_LeftHemishpore_Framework_Global.h"
#include "../independent/threads/CLIB_LeftHemishpore_STRUCT_Concurrent.h"
#include "../independent/CLIB_LeftHemishpore_STRUCT_Input.h"
#include "../independent/CLIB_LeftHemishpore_STRUCT_Output.h"
#include "../independent/CLIB_LeftHemishpore_STRUCT_User_Algorithm.h"
#include "../independent/CLIB_LeftHemishpore_STRUCT_User_Input.h"
#include "../independent/CLIB_LeftHemishpore_STRUCT_User_Output.h"
namespace zinc {
    class CLIB_LeftHemishpore_Framework {
    public:
        CLIB_LeftHemishpore_Framework(std::byte* sysThreadId);
        virtual ~CLIB_LeftHemishpore_Framework();
        void dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Architecture(std::byte* sysThreadId, zinc::CLIB_LeftHemishpore_Framework* obj);
        void dyn_CLASS_create_CLIB_LeftHemishpore_Framework_Global_and_Settings(std::byte* sysThreadId);
        class CLIB_LeftHemishpore_Framework_App* dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        class CLIB_LeftHemishpore_Framework_Global* dyn_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId, class CLIB_LeftHemishpore_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId, class CLIB_LeftHemishpore_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId, class CLIB_LeftHemishpore_Framework* obj);
        void dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Concurrent(std::byte* sysThreadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Input(std::byte* sysThreadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Output(std::byte* sysThreadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Algorithm(std::byte* sysThreadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Input(std::byte* sysThreadId);
        void dyn_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_Framework_User_Output(std::byte* sysThreadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Concurrent(std::byte* sysThreadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Input(std::byte* sysThreadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Output(std::byte* sysThreadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Algorithm(std::byte* sysThreadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Input(std::byte* sysThreadId);
        void dyn_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_User_Output(std::byte* sysThreadId);
        struct CLIB_LeftHemishpore_STRUCT_Concurrent* dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(std::byte* sysThreadId);
        struct CLIB_LeftHemishpore_STRUCT_Input* dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(std::byte* sysThreadId);
        struct CLIB_LeftHemishpore_STRUCT_Output* dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(std::byte* sysThreadId);
        struct CLIB_LeftHemishpore_STRUCT_User_Algorithm* dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(std::byte* sysThreadId);
        struct CLIB_LeftHemishpore_STRUCT_User_Input* dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(std::byte* sysThreadId);
        struct CLIB_LeftHemishpore_STRUCT_User_Output* dyn_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(std::byte* sysThreadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId, zinc::CLIB_LeftHemishpore_Framework* obj);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework(std::byte* sysThreadId);
    private:
        static struct CLIB_LeftHemishpore_Framework_App* stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_App;
        static struct CLIB_LeftHemishpore_Framework_Global* stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_Global;
        static struct CLIB_LeftHemishpore_STRUCT_Concurrent* stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_Concurrent;
        static struct CLIB_LeftHemishpore_STRUCT_Input* stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Input;
        static struct CLIB_LeftHemishpore_STRUCT_Output* stat_STRUCT_CLIB_ptr_LeftHemishpore_Framework_Output;
		static struct CLIB_LeftHemishpore_STRUCT_User_Algorithm* stat_CLASS_ptr_CLIB_LeftHemishpore_Framework_User_Algorithm;
		static struct CLIB_LeftHemishpore_STRUCT_User_Input* stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Input;
		static struct CLIB_LeftHemishpore_STRUCT_User_Output* stat_STRUCT_ptr_CLIB_LeftHemishpore_Framework_User_Output;
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId, zinc::CLIB_LeftHemishpore_Framework* obj);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId);
        static struct CLIB_LeftHemishpore_Framework_App* stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_App(std::byte* sysThreadId);
        static struct CLIB_LeftHemishpore_Framework_Global* stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework_Global(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_User_Algorithm(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_User_Input(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_User_Output(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_Concurrent(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_Input(std::byte* sysThreadId);
        static void stat_STRUCT_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_Framework_Output(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_Framework_Concurrent(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_STRUCT_Input(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_STRUCT_Output(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_STRUCT_User_Algorithm(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_STRUCT_User_Input(std::byte* sysThreadId);
        static void stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_STRUCT_User_Output(std::byte* sysThreadId);
        static struct CLIB_LeftHemishpore_STRUCT_Concurrent* stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Concurrent(std::byte* sysThreadId);
        static struct CLIB_LeftHemishpore_STRUCT_Input* stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Input(std::byte* sysThreadId);
        static struct CLIB_LeftHemishpore_STRUCT_Output* stat_STRUCT_get_CLIB_LeftHemishpore_Framework_Output(std::byte* sysThreadId);
        static struct CLIB_LeftHemishpore_STRUCT_User_Algorithm* stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Algorithm(std::byte* sysThreadId);
        static struct CLIB_LeftHemishpore_STRUCT_User_Input* stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Input(std::byte* sysThreadId);
        static struct CLIB_LeftHemishpore_STRUCT_User_Output* stat_STRUCT_get_CLIB_LeftHemishpore_Framework_User_Output(std::byte* sysThreadId);
    };
}
#endif
