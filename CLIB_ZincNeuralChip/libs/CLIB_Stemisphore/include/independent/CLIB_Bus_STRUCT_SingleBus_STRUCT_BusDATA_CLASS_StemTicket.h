#ifndef CLIB_THREADS_LOG_CLIB_Bus_STRUCT_SingleBus_STRUCT_StemTicket_H
#define CLIB_THREADS_LOG_CLIB_Bus_STRUCT_SingleBus_STRUCT_StemTicket_H
#include <cstddef>
namespace zinc {
    class StemTicket {
    public:
        StemTicket(std::byte* sysThreadId, std::byte* departureAccessId, std::byte* departureJunctionId, std::byte* arrivalJunctionId, std::byte* arrivalAccessId);
        ~StemTicket();
        std::byte* get_Arrival_AccessId();
        std::byte* get_busId();
        std::byte* get_Arrival_JunctionId();
        std::byte* get_Departure_AccessId();
        void set_busId(std::byte* value_busId);
        std::byte* get_Departure_JunctionId();
        void set_Arrival_AccessId(std::byte* newValue_arrivalAccessId);
        void set_Arrival_JunctionId(std::byte *newValue_arrivalJunctionId);
        void set_Departure_AccessId(std::byte *newValue_departureAccessId);
        void set_Departure_JunctionId(std::byte* newValue_departureJunctionId);
    private:
        static std::byte* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId;
        static std::byte* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId;
        static std::byte* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId;
        static std::byte* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId;
        static std::byte* reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId;
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
        static std::byte* stat_get_Arrival_AccessId();
        static std::byte* stat_get_Arrival_JunctionId();
        static std::byte* stat_get_busId();
        static std::byte* stat_get_Departure_AccessId();
        static std::byte* stat_get_Departure_JunctionId();
        static void stat_set_Arrival_AccessId(std::byte newValue_arrivalJunctionId);
        static void stat_set_Arrival_JunctionId(std::byte newValue_arrivalJunctionId);
        static void stat_set_busId(std::byte value_busId);
        static void stat_set_Departure_AccessId(std::byte newValue_departureJunctionId);
        static void stat_set_Departure_JunctionId(std::byte newValue_departureJunctionId);
    };
}
#endif