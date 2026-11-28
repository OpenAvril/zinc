#include "../include/CLIB_SystemBus_Framework_Global.h"
#include "independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <iostream>
    uint16_t* zinc::CLIB_SystemBus_Framework_Global::stat_REG_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES;
    uint64_t* zinc::CLIB_SystemBus_Framework_Global::stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    std::list<uint64_t>* zinc::CLIB_SystemBus_Framework_Global::stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
// public.
    zinc::CLIB_SystemBus_Framework_Global::CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId);
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    zinc::CLIB_SystemBus_Framework_Global::~CLIB_SystemBus_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << ":: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : ~CLIB_SystemBus_Framework_Global()." << std::endl;
        std::cout << "thread " << std::to_string(0) << ":: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : ~CLIB_SystemBus_Framework_Global()." << std::endl;
    }
    int* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_Bool_To_Int(std::byte* sysThreadId, bool newValue_Bool) {
        int* temp = nullptr;
        temp = new int(INT_MAX);
        if (newValue_Bool) {
            *temp = 1;;
        }
        else {
            *temp = 0;
        }
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= int* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_Bool_To_Int(sysThreadId)." << std::endl;
        return temp;
    }

    zinc::StemTicket* zinc::CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_STRUCT_StemTicket(std::byte* sysThreadId, unsigned char* byteArray_StemTicket) {
        

        return reinterpret_cast<zinc::StemTicket*>(reinterpret_cast<class Object*>(byteArray_StemTicket));
    }
    class zinc::Object* zinc::CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_MsbByteArray_To_VUALUEofOBJ(std::byte* sysThreadId, unsigned char* byteArray_DATA) {
        return reinterpret_cast<zinc::Object*>(byteArray_DATA);
    }
    bool zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(std::byte* sysThreadId, unsigned char* bytes_Array) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbBool(sysThreadId)." << std::endl;
        return (bytes_Array[7] & 1) != 0;
    }
    uint8_t* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt8(std::byte* sysThreadId, unsigned char* bytes_Array) {
        auto temp = new uint8_t(UINT8_MAX);
        std::memcpy(&temp, bytes_Array, sizeof(uint8_t));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint8_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt8(sysThreadId)." << std::endl;
        return temp;
    }
    uint16_t* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt16(std::byte* sysThreadId, unsigned char* bytes_Array) {
        auto temp = new uint16_t(UINT16_MAX);
        std::memcpy(&temp, bytes_Array, sizeof(uint16_t));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint16_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt16(sysThreadId)." << std::endl;
        return temp;
    }
    uint32_t* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt32(std::byte* sysThreadId, unsigned char* bytes_Array) {
        auto temp = new uint32_t(UINT32_MAX);
        std::memcpy(&temp, bytes_Array, sizeof(uint32_t));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint32_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt32(sysThreadId)." << std::endl;
        return temp;
    }
    uint64_t* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt64(std::byte* sysThreadId, unsigned char* bytes_Array) {
        auto temp = new uint64_t(UINT64_MAX);
        std::memcpy(&temp, bytes_Array, sizeof(uint64_t));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint64_t* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbInt64(sysThreadId)." << std::endl;
        return temp;
    }
    double* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
        double* temp;
        temp = new double();
        std::memcpy(&temp, bytes_Array, sizeof(double));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= double* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_VUALUEofMsbDouble(sysThreadId)." << std::endl;
        return temp;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(std::byte* sysThreadId, class zinc::Object* DATA) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= unsigned char* : stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(sysThreadId)." << std::endl;
        return reinterpret_cast<unsigned char*>(DATA);
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_STRUCT_StemTicket_To_MsbByteArray(std::byte* sysThreadId, zinc::StemTicket* StemTicket) {
        std::list<unsigned char*>* listOfObject = new std::list<unsigned char*>();
        listOfObject->resize(5);
        auto temp = listOfObject->begin();
        std::advance(temp, 0);
        *temp = CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt16_To_MsbByteArray(sysThreadId, StemTicket->get_busId());
        temp = listOfObject->begin();
        std::advance(temp, 1);
        *temp = CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt8_To_MsbByteArray(sysThreadId, StemTicket->get_Departure_AccessId());
        temp = listOfObject->begin();
        std::advance(temp, 2);
        *temp = CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, StemTicket->get_Departure_JunctionId());
        temp = listOfObject->begin();
        std::advance(temp, 3);
        *temp = CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId, StemTicket->get_Arrival_JunctionId());
        temp = listOfObject->begin();
        std::advance(temp, 4);
        *temp = CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt8_To_MsbByteArray(sysThreadId, StemTicket->get_Arrival_AccessId());
        return reinterpret_cast<unsigned char*>(reinterpret_cast<class Object*>(listOfObject));
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char();
        for (int bitIndex = 0; bitIndex < sizeof(std::byte); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
        }
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbBool_to_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt8_To_MsbByteArray(std::byte* sysThreadId, uint8_t* newValue_Int) {
        auto buffer = new unsigned char(static_cast<unsigned char>(UINT8_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(uint8_t));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt8_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt16_To_MsbByteArray(std::byte* sysThreadId, uint16_t* newValue_Int) {
        auto buffer = new unsigned char(static_cast<unsigned char>(UINT16_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(uint16_t));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt16_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt32_To_MsbByteArray(std::byte* sysThreadId, uint32_t* newValue_Int) {
        auto buffer = new unsigned char(static_cast<unsigned char>(UINT32_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(uint32_t));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt32_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(std::byte* sysThreadId, uint64_t* newValue_Int) {
        auto buffer = new unsigned char(static_cast<unsigned char>(UINT64_MAX));
        std::memcpy(buffer, &newValue_Int, sizeof(uint64_t));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbInt64_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
        std::memcpy(buffer, &newValue_Double, sizeof(double));
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_VUALUEofMsbDouble_To_MsbByteArray(sysThreadId)." << std::endl;
        return buffer;
    }
    uint16_t* zinc::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint16_t* : stat_REG_get_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId)." << std::endl;
        return pr_stat_REG_get_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId);
    }
    uint64_t* zinc::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint64_t* : stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
        return pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
    }
    std::list<uint64_t> zinc::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= std::list<uint64_t> : stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
        return *pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId);
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId, uint16_t* NUMBER_OF_BUSSES) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: => uint16_t* : stat_REG_set_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId)." << std::endl;
        pr_stat_REG_set_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId, *NUMBER_OF_BUSSES);
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, uint64_t* MAX_NUMBER_OF_JUNCTIONS) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: => uint64_t* : stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
        pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId, *MAX_NUMBER_OF_JUNCTIONS);
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<uint64_t>* List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: => std::list<uint64_t>* : stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
        pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId, *List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS);
    }
    unsigned char* zinc::CLIB_SystemBus_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(std::byte* sysThreadId, std::byte* newValue_stdbyte) {
        auto ULL = new uint64_t();
        auto temp = std::to_integer<uint8_t>(*newValue_stdbyte);
        *ULL = temp;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint64_t* : stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbStdByteOf_uint8_t_To_MsbUnsignedLongLong_In_ByteArray(sysThreadId)." << std::endl;
        return reinterpret_cast<unsigned char*>(ULL);
    }
// private.
    void zinc::CLIB_SystemBus_Framework_Global::stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_CLASS_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot0_DECLAIRE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId);
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId);
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId);
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : dyn_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId)." << std::endl;
        stat_REG_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES = nullptr;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
        stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = nullptr;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
        stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = nullptr;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot1_DEFINE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
        stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = new uint64_t();
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = UINT64_MAX;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
        stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = new std::list<uint64_t>;
        pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(1);
        for (auto junctionId = new uint64_t(0); *junctionId < pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, *junctionId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot2_SUBSTANTIATE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId)." << std::endl;
        stat_REG_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES = new uint16_t(std::pow((*reinterpret_cast<double*>(zinc::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)) / 2.0), 2) - (*reinterpret_cast<double*>(zinc::CLIB_SystemBus_Framework_Global::stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)) / 2.0));;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId)." << std::endl;
    }

    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = UINT64_MAX;
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_SystemBus_Framework_Global::stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
        pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->resize(*stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId));
        for (auto junctionId = new uint64_t(0); *junctionId < pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->size(); ++junctionId) {
            auto temp = pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)->begin();
            std::advance(temp, *junctionId);
            *temp = UINT64_MAX;
        }
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_SystemBus_Framework_Global : stat_REG_boot3_INITIALISE_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
    }
    uint16_t* zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_get_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint16_t* : pr_stat_REG_get_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId)." << std::endl;
        return stat_REG_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES;
    }
    uint64_t* zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= uint64_t* : pr_stat_REG_get_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
        return stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS;
    }
    std::list<uint64_t>* zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: <= std::list<uint64_t>* : pr_stat_REG_get_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
        return stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }
    void zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_set_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(std::byte* sysThreadId, uint16_t NUMBER_OF_BUSSES) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: => uint16_t* : pr_stat_REG_set_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES(sysThreadId)." << std::endl;
        *stat_REG_CLIB_SystemBus_Framework_Global_NUMBER_OF_BUSSES = NUMBER_OF_BUSSES;
    }
    void zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(std::byte* sysThreadId, uint64_t MAX_NUMBER_OF_JUNCTIONS) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: => uint64_t* : pr_stat_REG_set_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS(sysThreadId)." << std::endl;
        *stat_REG_CLIB_SystemBus_Framework_Global_MAX_NUMBER_OF_JUNCTIONS = MAX_NUMBER_OF_JUNCTIONS;
    }
    void zinc::CLIB_SystemBus_Framework_Global::pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(std::byte* sysThreadId, std::list<uint64_t> List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS) {
        std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << "  :: => std::list<uint64_t> : pr_stat_REG_set_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS(sysThreadId)." << std::endl;
        *stat_REG_CLIB_SystemBus_Framework_Global_List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS = List_Of_MAX_NUMBER_OF_ACCESS_THREADS_AT_JUNCTIONS;
    }