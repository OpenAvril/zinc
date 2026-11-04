#ifndef CLIB_CLIB_PACKAGE_SoothCutePRIME_H
#define CLIB_CLIB_PACKAGE_SoothCutePRIME_H
#include <array>
#include <cstddef>
extern "C" {
    namespace zinc {
        class SoothCute {
        public:
            static void optimusPrime(std::byte* sysThreadId);
        private:
            static void zinc_SoothCute_PhoenixPrime(std::byte* sysThreadId);
            static std::array<bool, 1> zinc_SoothCute_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId);
            static class Object* msbByteArray_To_ObjDATA(std::byte* sysThreadId, unsigned char* byteArray_DATA);
            static bool msbByteArray_To_valueOfmsbBool(std::byte* sysThreadId, unsigned char* bytes_Array);
            static int* msbByteArray_To_valueOfmsbInt(std::byte* sysThreadId, unsigned char* bytes_Array);
            static double* msbByteArray_To_valueOfmsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array);
            static std::byte* msbByteArray_To_valueOfMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array);
            static unsigned long long* msbByteArray_To_valueOfmsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array);
            static unsigned char* objDATA_To_MsbByteArray(std::byte* sysThreadId, class Object* DATA);
            static unsigned char* valueofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool);
            static unsigned char* valueofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int);
            static unsigned char* valueofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double);
            static unsigned char* valueofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* newValue_ULongLong);
            static unsigned char* valueofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_uint8_t);
        };
    }
}
#endif
