#include "../../include/engine/CLIB_LeftHemishpore_Framework_Global.h"
#include <cfloat>
#include <climits>
#include <cstring>
#include <iostream>
#include <ostream>
    uint8_t* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events;
// public.
    zinc::CLIB_LeftHemishpore_Framework_Global::CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    zinc::CLIB_LeftHemishpore_Framework_Global::~CLIB_LeftHemishpore_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : ~CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
        delete stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events;
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : ~CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(sysThreadId)." << std::endl;
    }
    uint8_t* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t : dyn_REG_get_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId). " << std::endl;
        return pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId);
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(uint8_t* sysThreadId, uint8_t* MAX_NUMBER_OF_THREADS) {
        pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(sysThreadId, *MAX_NUMBER_OF_THREADS);
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {

    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_Framework_Global(uint8_t* sysThreadId) {

    }
    int* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_Bool_To_Int(uint8_t* sysThreadId, bool newValue_Bool) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (newValue_Bool) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_MutexQue_Framework_Global_Bool_To_Int(sysThreadId)." << std::endl;
        return temp;
    }
    zinc::Object* zinc::CLIB_LeftHemishpore_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(uint8_t* sysThreadId, unsigned char* byteArray_DATA) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long* : stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_DATA(sysThreadId). " << std::endl;
        return reinterpret_cast<zinc::Object*>(byteArray_DATA);
    }
    bool zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    int* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        int* temp;
        temp = new int();
        std::memcpy(&temp, bytes_Array, sizeof(int));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        unsigned long long* temp;
        temp = new unsigned long long();
        std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    uint8_t* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_VUALUEofMsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array) {
        uint8_t* temp;
        temp = new uint8_t();
        std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_MsbByteArray_To_Msbuint8_t(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(uint8_t* sysThreadId, class zinc::Object* DATA) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long* : stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_DATA_To_MsbByteArray(sysThreadId). " << std::endl;
        return reinterpret_cast<unsigned char*>(DATA);
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<uint8_t>(255));
        std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(int));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_LeftHemishpore_Framework_Global::stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
        std::memcpy(buffer, &value, sizeof(unsigned long long));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_LeftHemishpore_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_number_Of_Praise_Events(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long : dyn_REG_get_CLIB_LeftHemishpore_Framework_Global_Item_number_Of_Praise_Events(sysThreadId). " << std::endl;
        return pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(sysThreadId);
    }
// private.
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot1_DEFINE_number_Of_Praise_Events(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = new uint8_t();
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = static_cast<uint8_t>(255);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId). " << std::endl;
        stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events = new unsigned long long();
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events = ULLONG_MAX;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = static_cast<uint8_t>(5);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId). " << std::endl;
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events = static_cast<unsigned long long>(4);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemishpore_Framework_Global : stat_REG_boot3_INITIALISE_number_Of_Praise_Events(sysThreadId). " << std::endl;
    }
    uint8_t* zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= uint8_t* : stat_REG_get_Ptr_number_Of_Implemented_Cores(sysThreadId). " << std::endl;
        return stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS;
    }
    unsigned long long* zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_get_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= unsigned long long* : stat_REG_get_Ptr_number_Of_Praise_Events(sysThreadId). " << std::endl;
        return stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_number_Of_Praise_Events;
    }
    void zinc::CLIB_LeftHemishpore_Framework_Global::pr_stat_REG_set_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS(uint8_t* sysThreadId, uint8_t MAX_NUMBER_OF_THREADS) {
        *stat_REG_ptr_CLIB_LeftHemishpore_Framework_Global_MAX_NUMBER_OF_THREADS = MAX_NUMBER_OF_THREADS;
    }