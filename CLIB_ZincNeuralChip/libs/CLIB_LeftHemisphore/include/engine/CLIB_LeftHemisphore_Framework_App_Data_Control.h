#ifndef CLIB_OPENEPICENTRE_FRAMEWORK_APP_DATA_CONTROL_H
#define CLIB_OPENEPICENTRE_FRAMEWORK_APP_DATA_CONTROL_H
#include "CLIB_LeftHemisphore_Framework.h"
#include <cstddef>
#include <cstdint>
namespace zinc {
    class CLIB_LeftHemisphore_Framework_App_Data_Control {
    public:
        CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        virtual ~CLIB_LeftHemisphore_Framework_App_Data_Control();
        void app_FUNCT_flip_CLIB_LeftHemisphore_Framework_App_Data_Control_REG_Input_DoubleBuffer(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void app_FUNCT_flip_CLIB_LeftHemisphore_Framework_App_Data_Control_REG_Output_DoubleBuffer(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void app_FUNCT_pop_CLIB_LeftHemisphore_Framework_App_Data_Control_STACK_Of_Input(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, uint8_t* concurrentThreadId);
        void app_FUNCT_pop_CLIB_LeftHemisphore_Framework_App_Data_Control_STACK_Of_Output(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void app_FUNCT_push_CLIB_LeftHemisphore_Framework_App_Data_Control_STACK_Of_Input(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void app_FUNCT_push_CLIB_LeftHemisphore_Framework_App_Data_Control_STACK_Of_Output(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, uint8_t* concurrentThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        bool dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(std::byte* sysThreadId);
        bool dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(std::byte* sysThreadId);
        bool dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput(std::byte* sysThreadId);
        bool dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput(std::byte* sysThreadId);
        bool dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput(std::byte* sysThreadId);
        bool dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput(std::byte* sysThreadId);
        void dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(std::byte* sysThreadId, bool value);
        void dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(std::byte* sysThreadId, bool value);
        static void stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
    private:
        static bool* stat_REG_ptr_FLAG_CLIB_LeftHemisphore_Framework_App_Data_Control_isLoaded_Stack_InputAction;
        static bool* stat_REG_ptr_FLAG_CLIB_LeftHemisphore_Framework_App_Data_Control_isLoaded_Stack_OutputSend;
        static bool* stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
        static bool* stat_REG_ptr_CLIB_LeftHemisphore_Framework_App_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
        static void stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfInput(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfOutput(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfInput(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfOutput(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfInput(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfOutput(std::byte* sysThreadId);
        static bool stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction(std::byte* sysThreadId);
        static bool stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend(std::byte* sysThreadId);
        static bool stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput(std::byte* sysThreadId);
        static bool stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput(std::byte* sysThreadId);
        static void stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(std::byte* sysThreadId, bool new_Bool);
        static void stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(std::byte* sysThreadId, bool new_Bool);
        static void stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(std::byte* sysThreadId, bool new_Bool);
        static void stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(std::byte* sysThreadId, bool new_Bool);
    };
};
#endif
