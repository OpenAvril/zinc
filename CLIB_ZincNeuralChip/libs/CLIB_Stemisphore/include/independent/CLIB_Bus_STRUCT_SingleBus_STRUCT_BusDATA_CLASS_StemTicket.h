#ifndef CLIB_THREADS_LOG_CLIB_Bus_STRUCT_SingleBus_STRUCT_StemTicket_H
#define CLIB_THREADS_LOG_CLIB_Bus_STRUCT_SingleBus_STRUCT_StemTicket_H
#include <cstddef>
#include <cstdint>

namespace zinc {
    class StemTicket {
    public:
        StemTicket(std::byte* sysThreadId, uint16_t* busIdForRoute, uint8_t* departureAccessId, uint64_t* departureJunctionId, uint64_t* arrivalJunctionId, uint8_t* arrivalAccessId);
        ~StemTicket();
        uint8_t* get_Arrival_AccessId();
        uint16_t* get_busId();
        uint64_t* get_Arrival_JunctionId();
        uint8_t* get_Departure_AccessId();
        void set_busId(uint16_t* value_busId);
        uint64_t* get_Departure_JunctionId();
        void set_Arrival_AccessId(uint8_t* newValue_arrivalAccessId);
        void set_Arrival_JunctionId(uint64_t* newValue_arrivalJunctionId);
        void set_Departure_AccessId(uint8_t* newValue_departureAccessId);
        void set_Departure_JunctionId(uint64_t* newValue_departureJunctionId);
    private:
        static uint8_t* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId;
        static uint64_t* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId;
        static uint16_t* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId;
        static uint8_t* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId;
        static uint64_t* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId;
        static void stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        static void stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        static void stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        static void stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId();
        static void stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId();
        static void stat_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId();
        static void stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId();
        static void stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId();
        static uint8_t* stat_get_Arrival_AccessId();
        static uint64_t* stat_get_Arrival_JunctionId();
        static uint16_t* stat_get_busId();
        static uint8_t* stat_get_Departure_AccessId();
        static uint64_t* stat_get_Departure_JunctionId();
        static void stat_set_Arrival_AccessId(uint8_t newValue_arrivalAccessId);
        static void stat_set_Arrival_JunctionId(uint64_t newValue_arrivalJunctionId);
        static void stat_set_busId(uint16_t value_busId);
        static void stat_set_Departure_AccessId(uint8_t newValue_departureAccessId);
        static void stat_set_Departure_JunctionId(uint64_t newValue_departureJunctionId);
    };
}
#endif