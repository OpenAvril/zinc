#ifndef CLIB_OPENEPICENTRE_FRAMEWORK_GLOBAL_H
#define CLIB_OPENEPICENTRE_FRAMEWORK_GLOBAL_H
#include <cstddef>
#include <cstdint>
namespace zinc {
    enum Axis {
        X,
        Y,
        Z
    };
    enum Praise {
        ADDER
    };
    class CLIB_LeftHemisphore_Framework_Global {
    public:
        CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        virtual ~CLIB_LeftHemisphore_Framework_Global();
        static void stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        static uint8_t* stat_REG_get_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static uint8_t* stat_REG_get_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId);
        static unsigned long long* stat_REG_get_CLIB_LeftHemisphore_Framework_Global_Item_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId);
        static void stat_REG_set_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS);
        static void stat_REG_set_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId, uint8_t* NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS);
        static void stat_REG_set_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId, uint8_t* NUMBER_OF_PRAISE_EVENTS);
        static void stat_CLASS_boot0_DECLARE_CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemisphore_Framework_Global(std::byte* sysThreadId);
        
        static int* stat_CONVERT_CLIB_LeftHemisphore_Framework_Global_Bool_To_Int(std::byte* sysThreadId, bool newValue_Bool);

        static class Object* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_VUALUEofOBJ(std::byte* sysThreadId, unsigned char* byteArray_DATA);
        static int* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(std::byte* sysThreadId, unsigned char* bytes_Array);
        static double* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array);
        static unsigned long long* stat_CONVERT_CLIB_LaunchQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array);

        static unsigned char* stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(std::byte* sysThreadId, class Object* DATA);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double);
        static unsigned char* stat_CONVERT_CLIB_LaunchQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* newValue_ULongLong);

        static int* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_Msbint(std::byte* sysThreadId, std::byte* newValue_stdbyte);
        static unsigned long long* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByte_To_MsbUnsignedLongLong(std::byte* sysThreadId, std::byte* newValue_stdbyte);

        static unsigned char* stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte);
    private:
        static uint8_t* stat_REG_ptr_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS;
        static uint8_t* stat_REG_ptr_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS;
        static unsigned long long* stat_REG_ptr_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_PRAISE_EVENTS;
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId);
        static void stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId);
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId);
        static void stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId);
        static uint8_t* pr_stat_REG_get_ptr_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId);
        static uint8_t* pr_stat_REG_get_ptr_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId);
        static unsigned long long* pr_stat_REG_get_ptr_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId);
        static void pr_stat_REG_set_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_PRAISE_EVENTS(std::byte* sysThreadId, uint8_t NUMBER_OF_PRAISE_EVENTS);
        static void pr_stat_REG_set_CLIB_LeftHemisphore_Framework_Global_MAX_NUMBER_OF_THREADS(std::byte* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS);
        static void pr_stat_REG_set_CLIB_LeftHemisphore_Framework_Global_NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS(std::byte* sysThreadId, uint8_t NUMBER_OF_THREADS_FOR_ONE_SIDE_OF_INJECTORS_EXTRACTORS);
    };
}
#endif
