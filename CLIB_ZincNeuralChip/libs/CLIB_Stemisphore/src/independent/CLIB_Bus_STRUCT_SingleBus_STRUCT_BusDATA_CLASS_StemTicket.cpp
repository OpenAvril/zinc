#include <cstddef>
#include "../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"

#include <limits.h>
uint64_t* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId;
    uint8_t* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId;
    uint16_t* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId;
    uint64_t* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId;
    uint8_t* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId;
// public.
    zinc::StemTicket::StemTicket(std::byte* sysThreadId, uint16_t* busIdForRoute, uint8_t* departureAccessId, uint64_t* departureJunctionId, uint64_t* arrivalJunctionId, uint8_t* arrivalAccessId) {
        stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket();
        stat_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input();
        stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input();
        this->set_Departure_AccessId(departureAccessId);
        this->set_Departure_JunctionId(departureJunctionId);
        this->set_Arrival_JunctionId(arrivalJunctionId);
        this->set_Arrival_AccessId(arrivalAccessId);
    }
    zinc::StemTicket::~StemTicket() {
        delete reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId;
        delete reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId;
        delete reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId;
        delete reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId;
    }
    uint8_t* zinc::StemTicket::get_Arrival_AccessId(){
        return stat_get_Arrival_AccessId();
    }
    uint64_t* zinc::StemTicket::get_Arrival_JunctionId(){
        return stat_get_Arrival_JunctionId();
    }
    uint8_t* zinc::StemTicket::get_Departure_AccessId(){
        return stat_get_Departure_AccessId();
    }
    uint16_t* zinc::StemTicket::get_busId() {
        return stat_get_busId();
    }
    uint64_t* zinc::StemTicket::get_Departure_JunctionId(){
        return stat_get_Departure_JunctionId();
    }
    void zinc::StemTicket::set_Arrival_AccessId(uint8_t* newValue_arrivalJunctionId){
        stat_set_Arrival_AccessId(*newValue_arrivalJunctionId);
    }
    void zinc::StemTicket::set_Arrival_JunctionId(uint64_t* newValue_arrivalJunctionId){
        stat_set_Arrival_JunctionId(*newValue_arrivalJunctionId);
    }
    void zinc::StemTicket::set_busId(uint16_t* value_busId) {
        stat_set_busId(*value_busId);
    }
    void zinc::StemTicket::set_Departure_AccessId(uint8_t* newValue_departureAccessId){
        stat_set_Departure_AccessId(*newValue_departureAccessId);
    }
    void zinc::StemTicket::set_Departure_JunctionId(uint64_t* newValue_departureJunctionId){
        stat_set_Departure_JunctionId(*newValue_departureJunctionId);
    }
// private.
    void zinc::StemTicket::stat_CLASS_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(){

    }
    void zinc::StemTicket::stat_CLASS_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(){

    }
    void zinc::StemTicket::stat_CLASS_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(){

    }
    void zinc::StemTicket::stat_CLASS_boot4_INSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(){

    }

    void zinc::StemTicket::stat_REG_boot0_DECLARE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(){

    }
    void zinc::StemTicket::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket(){
        stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId();
        stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId();
        stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId();
        stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId();
    }
    void zinc::StemTicket::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = nullptr;
    }
    void zinc::StemTicket::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = nullptr;
    }
    void zinc::StemTicket::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId = nullptr;
    }
    void zinc::StemTicket::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = nullptr;
    }
    void zinc::StemTicket::stat_REG_boot1_DEFINE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = nullptr;
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input(){
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId();
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = new uint64_t();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = static_cast<uint64_t>(UINT64_MAX);
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = new uint8_t();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = static_cast<uint8_t>(UINT8_MAX);
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId = new uint16_t();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId =  static_cast<uint16_t>(UINT16_MAX);
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = new uint64_t();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = static_cast<uint64_t>(UINT64_MAX);
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = new uint8_t();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = static_cast<uint8_t>(UINT8_MAX);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(){
        stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId();
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = static_cast<uint64_t>(0);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = static_cast<uint8_t>(0);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId = static_cast<uint16_t>(0);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = static_cast<uint8_t>(0);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = static_cast<uint64_t>(0);
    }
    uint8_t* zinc::StemTicket::stat_get_Arrival_AccessId(){
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId;
    }
    uint64_t* zinc::StemTicket::stat_get_Arrival_JunctionId(){
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId;
    }
    uint16_t* zinc::StemTicket::stat_get_busId() {
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId;
    }

    uint8_t* zinc::StemTicket::stat_get_Departure_AccessId(){
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId;
    }
    uint64_t* zinc::StemTicket::stat_get_Departure_JunctionId(){
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId;
    }
    void zinc::StemTicket::stat_set_Arrival_AccessId(uint8_t newValue_arrivalAccessId){
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = newValue_arrivalAccessId;;
    }
    void zinc::StemTicket::stat_set_Arrival_JunctionId(uint64_t newValue_arrivalJunctionId){
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = newValue_arrivalJunctionId;
    }
    void zinc::StemTicket::stat_set_busId(uint16_t value_busId) {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId = value_busId;
    }
    void zinc::StemTicket::stat_set_Departure_AccessId(uint8_t newValue_departureAccessId){
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = newValue_departureAccessId;;
    }
    void zinc::StemTicket::stat_set_Departure_JunctionId(uint64_t newValue_departureJunctionId){
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = newValue_departureJunctionId;
    }