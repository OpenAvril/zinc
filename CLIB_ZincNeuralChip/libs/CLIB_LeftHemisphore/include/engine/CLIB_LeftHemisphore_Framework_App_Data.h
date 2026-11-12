#ifndef CLIB_OPENEPICENTRE_FRAMEWORK_APP_DATA_H
#define CLIB_OPENEPICENTRE_FRAMEWORK_APP_DATA_H
#include "CLIB_LeftHemisphore_Framework_App_Data_Control.h"
#include "../engine/CLIB_LeftHemisphore_Framework.h"
#include "../independent/CLIB_LeftHemisphore_STRUCT_Input.h"
#include "../independent/CLIB_LeftHemisphore_STRUCT_Output.h"
#include <cstddef>
#include <array>
#include <vector>
namespace zinc {
    class CLIB_LeftHemisphore_Framework_App_Data {
     public:
        CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId);
        virtual ~CLIB_LeftHemisphore_Framework_App_Data();
        class CLIB_LeftHemisphore_Framework_App_Data_Control* dyn_CLASS_get_ptr_dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, struct CLIB_LeftHemisphore_STRUCT_Input* objInput, struct CLIB_LeftHemisphore_STRUCT_Output* objOutput);
        struct CLIB_LeftHemisphore_STRUCT_Input* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Input_at_ItemSideToREAD_For_doubleBufferInput(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        struct CLIB_LeftHemisphore_STRUCT_Input* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        struct CLIB_LeftHemisphore_STRUCT_Input* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(std::byte* sysThreadId, uint8_t* concurrentThreadId);
        struct CLIB_LeftHemisphore_STRUCT_Output* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(std::byte* sysThreadId, uint8_t* concurrentThreadId);
        struct CLIB_LeftHemisphore_STRUCT_Input* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Item_On_vector_Of_stack_Of_InputPraise(std::byte* sysThreadId, unsigned long long* slot);
        struct CLIB_LeftHemisphore_STRUCT_Output* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Item_On_vector_Of_stack_Of_OutputPraise(std::byte* sysThreadId, unsigned long long* slot);
        struct CLIB_LeftHemisphore_STRUCT_Output* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj);
        struct CLIB_LeftHemisphore_STRUCT_Output* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework *obj);
        std::vector<struct CLIB_LeftHemisphore_STRUCT_Input*>* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_vector_Of_stack_Of_InputPraise(std::byte* sysThreadId);
        std::vector<struct CLIB_LeftHemisphore_STRUCT_Output*>* dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_vector_Of_stack_Of_OutputPraise(std::byte* sysThreadId);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_Framework_App_Data_Input_at_ItemSideToREAD_For_doubleBufferInput(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, struct CLIB_LeftHemisphore_STRUCT_Input* newClass);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, struct CLIB_LeftHemisphore_STRUCT_Input* newClass);
        void dyn_REG_set_CLIB_LeftHemisphore_Framework_App_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(std::byte* sysThreadId, uint8_t* concurrentThreadId, struct CLIB_LeftHemisphore_STRUCT_Input* newClass);
        void dyn_REG_set_CLIB_LeftHemisphore_Framework_App_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(std::byte* sysThreadId, uint8_t* concurrentThreadId, struct CLIB_LeftHemisphore_STRUCT_Output* newClass);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_Framework_App_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework* obj, struct CLIB_LeftHemisphore_STRUCT_Output* newClass);
        void dyn_REG_set_ptr_CLIB_LeftHemisphore_Framework_App_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(std::byte* sysThreadId, class CLIB_LeftHemisphore_Framework *obj, struct CLIB_LeftHemisphore_STRUCT_Output* newClass);
        void dyn_REG_set_CLIB_LeftHemisphore_Framework_App_Data_Item_On_Vector_Of_stack_Of_InputPraise(std::byte* sysThreadId, unsigned long long* slot, struct CLIB_LeftHemisphore_STRUCT_Input* newClass);
        void dyn_REG_set_CLIB_LeftHemisphore_Framework_App_Data_Item_On_Vector_Of_stack_Of_OutputPraise(std::byte* sysThreadId, unsigned long long* slot, struct CLIB_LeftHemisphore_STRUCT_Output* newClass);
        static void stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId);
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_App_Data(std::byte* sysThreadId);
    private:
        static class CLIB_LeftHemisphore_Framework_App_Data_Control* stat_CLASS_ptr_CLIB_LeftHemisphore_Framework_App_Data_Control;
        static std::array<struct CLIB_LeftHemisphore_STRUCT_Input*, 3>* stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_LeftHemisphore_STRUCT_Output*, 3>* stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_LeftHemisphore_STRUCT_Input*, 2>* stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
        static std::array<struct CLIB_LeftHemisphore_STRUCT_Output*, 2>* stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
        static std::vector<struct CLIB_LeftHemisphore_STRUCT_Input*>* stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<struct CLIB_LeftHemisphore_STRUCT_Output*>* stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        static class CLIB_LeftHemisphore_Framework_App_Data_Control* stat_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Control(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_buffer_Input_ReferenceForThread(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_buffer_Output_ReferenceForThread(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_buffer_stack_Of_InputPraise(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_App_Data_buffer_stack_Of_OutputPraise(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data_buffer_Input_ReferenceForThread(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data_buffer_Output_ReferenceForThread(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data_stack_Of_InputPraise(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_App_Data_stack_Of_OutputPraise(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_buffer_Input_ReferenceForThread(std::byte* sysThreadId, struct CLIB_LeftHemisphore_STRUCT_Input* objInput);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_buffer_Output_ReferenceForThread(std::byte* sysThreadId, struct CLIB_LeftHemisphore_STRUCT_Output* objOutput);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(std::byte* sysThreadId, struct CLIB_LeftHemisphore_STRUCT_Input* objInput);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(std::byte* sysThreadId, struct CLIB_LeftHemisphore_STRUCT_Output* objOutput);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_stack_Of_InputPraise(std::byte* sysThreadId, struct CLIB_LeftHemisphore_STRUCT_Input* objInput);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_App_Data_stack_Of_OutputPraise(std::byte* sysThreadId, struct CLIB_LeftHemisphore_STRUCT_Output* objOutput);
        static std::array<struct CLIB_LeftHemisphore_STRUCT_Input*, 3>* stat_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_Input_ReferenceForThread(std::byte* sysThreadId);//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_LeftHemisphore_STRUCT_Output*, 3>* stat_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_Output_ReferenceForThread(std::byte* sysThreadId);//NUMBER OF CONCURRENT THREADS.
        static std::array<struct CLIB_LeftHemisphore_STRUCT_Input*, 2>* stat_get_REG_ptr_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferInput(std::byte* sysThreadId);
        static std::array<struct CLIB_LeftHemisphore_STRUCT_Output*, 2>* stat_get_REG_ptr_CLIB_LeftHemisphore_Framework_App_Data_array_Of_buffer_ItemSide_For_doubleBufferOutput(std::byte* sysThreadId);
        static std::vector<struct CLIB_LeftHemisphore_STRUCT_Input*>* stat_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_vector_Of_stack_Of_InputPraise(std::byte* sysThreadId);
        static std::vector<struct CLIB_LeftHemisphore_STRUCT_Output*>* stat_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_vector_Of_stack_Of_OutputPraise(std::byte* sysThreadId);
        static void stat_REG_set_CLIB_LeftHemisphore_Framework_App_Data_Item_On_Array_Of_buffer_Input_ReferenceForThread(std::byte* sysThreadId, uint8_t concurrentThreadId, struct CLIB_LeftHemisphore_STRUCT_Input* newClass);
        static void stat_REG_set_CLIB_LeftHemisphore_Framework_App_Data_Item_On_Array_Of_buffer_Output_ReferenceForThread(std::byte* sysThreadId, uint8_t concurrentThreadId, struct CLIB_LeftHemisphore_STRUCT_Output* newClass);
        static void stat_REG_set_CLIB_LeftHemisphore_Framework_App_Data_Item_On_Vector_Of_stack_Of_InputPraise(std::byte* sysThreadId, unsigned long long slot, struct CLIB_LeftHemisphore_STRUCT_Input* newClass);
        static void stat_REG_set_CLIB_LeftHemisphore_Framework_App_Data_Item_On_Vector_Of_stack_Of_OutputPraise(std::byte* sysThreadId, unsigned long long slot, struct CLIB_LeftHemisphore_STRUCT_Output* newClass);
    };
};
#endif
