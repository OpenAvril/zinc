#include <cstddef>
#include "../include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"
std::byte* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId;
    std::byte* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId;
    std::byte* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId;
    std::byte* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId;
    std::byte* zinc::StemTicket::reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId;
// public.
    zinc::StemTicket::StemTicket(std::byte* sysThreadId, std::byte* departureAccessId, std::byte* departureJunctionId, std::byte* arrivalJunctionId, std::byte* arrivalAccessId) {
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
    std::byte* zinc::StemTicket::get_Arrival_AccessId(){
        return stat_get_Arrival_AccessId();
    }
    std::byte* zinc::StemTicket::get_Arrival_JunctionId(){
        return stat_get_Arrival_JunctionId();
    }
    std::byte* zinc::StemTicket::get_Departure_AccessId(){
        return stat_get_Departure_AccessId();
    }
    std::byte* zinc::StemTicket::get_busId() {
        return stat_get_busId();
    }
    std::byte* zinc::StemTicket::get_Departure_JunctionId(){
        return stat_get_Departure_JunctionId();
    }
    void zinc::StemTicket::set_Arrival_AccessId(std::byte* newValue_arrivalJunctionId){
        stat_set_Arrival_AccessId(*newValue_arrivalJunctionId);
    }
    void zinc::StemTicket::set_Arrival_JunctionId(std::byte* newValue_arrivalJunctionId){
        stat_set_Arrival_JunctionId(*newValue_arrivalJunctionId);
    }
    void zinc::StemTicket::set_busId(std::byte* value_busId) {
        stat_set_busId(*value_busId);
    }
    void zinc::StemTicket::set_Departure_AccessId(std::byte* newValue_departureAccessId){
        stat_set_Departure_AccessId(*newValue_departureAccessId);
    }
    void zinc::StemTicket::set_Departure_JunctionId(std::byte* newValue_departureJunctionId){
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
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = new std::byte();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = reinterpret_cast<std::byte *>(0xFF);
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = new std::byte();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = reinterpret_cast<std::byte *>(0xFF);
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId = new std::byte();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId = reinterpret_cast<std::byte *>(0xFF);
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = new std::byte();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = reinterpret_cast<std::byte *>(0xFF);
    }
    void zinc::StemTicket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId() {
        reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = new std::byte();
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = reinterpret_cast<std::byte *>(0xFF);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(){
        stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId();
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = static_cast<std::byte>(0);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = static_cast<std::byte>(0);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId = static_cast<std::byte>(0);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = static_cast<std::byte>(0);
    }
    void zinc::StemTicket::stat_REG_boot3_INITIALISE_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId() {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = static_cast<std::byte>(0);
    }
    std::byte* zinc::StemTicket::stat_get_Arrival_AccessId(){
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId;
    }
    std::byte* zinc::StemTicket::stat_get_Arrival_JunctionId(){
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId;
    }
    std::byte* zinc::StemTicket::stat_get_busId() {
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId;
    }

    std::byte* zinc::StemTicket::stat_get_Departure_AccessId(){
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId;
    }
    std::byte* zinc::StemTicket::stat_get_Departure_JunctionId(){
        return reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId;
    }
    void zinc::StemTicket::stat_set_Arrival_AccessId(std::byte newValue_arrivalJunctionId){
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalJunctionId = newValue_arrivalJunctionId;;
    }
    void zinc::StemTicket::stat_set_Arrival_JunctionId(std::byte newValue_arrivalJunctionId){
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_arrivalAccessId = newValue_arrivalJunctionId;
    }
    void zinc::StemTicket::stat_set_busId(std::byte value_busId) {
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_busId = value_busId;
    }
    void zinc::StemTicket::stat_set_Departure_AccessId(std::byte newValue_departureAccessId){
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureJunctionId = newValue_departureAccessId;;
    }
    void zinc::StemTicket::stat_set_Departure_JunctionId(std::byte newValue_departureJunctionId){
        *reg_ptr_CLIB_Bus_STRUCT_SingleBus_CLASS_StemTicket_departureAccessId = newValue_departureJunctionId;
    }