#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA.h"
#include "../../../CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include "../../include/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.h"
#include "../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"
#include <cstddef>
    class zinc::StemTicket* zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_REG_of_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket;
    unsigned char* zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_REG_of_CLIB_Bus_STRUCT_SingleBus_DATA;
// public.
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::dyn_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId){

    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::dyn_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId){

    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::dyn_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId){

    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId){

    }

    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId){

    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId){
        stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_DATA(sysThreadId);
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA(std::byte* sysThreadId){
        stat_REG_boot1_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(sysThreadId);
        stat_REG_boot1_INITIALISE_CLIB_Bus_STRUCT_SingleBus_DATA(sysThreadId);
    }
// private.
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(std::byte* sysThreadId){
        stat_REG_of_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket = nullptr;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_DATA(std::byte* sysThreadId){
        stat_REG_of_CLIB_Bus_STRUCT_SingleBus_DATA = nullptr;
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_REG_boot1_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(std::byte* sysThreadId){
        stat_REG_of_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket = new class StemTicket(sysThreadId, static_cast<std::byte*>(0), static_cast<std::byte*>(0), static_cast<std::byte*>(0), static_cast<std::byte*>(0));
        while (stat_REG_of_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket == nullptr) {
        }
    }
    void zinc::CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA::stat_REG_boot1_INITIALISE_CLIB_Bus_STRUCT_SingleBus_DATA(std::byte* sysThreadId){
        auto* DATA = new std::byte[1028];
        *stat_REG_of_CLIB_Bus_STRUCT_SingleBus_DATA = *CLIB_SystemBus_Framework_Global::stat_APP_CONVERT_CLIB_SystemBus_Framework_Global_VUALUEofOBJ_To_MsbByteArray(sysThreadId, reinterpret_cast<class Object*>(DATA));
    }
