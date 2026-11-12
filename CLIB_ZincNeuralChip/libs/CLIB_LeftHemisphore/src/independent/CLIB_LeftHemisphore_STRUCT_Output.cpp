#include "../../include/independent/CLIB_LeftHemisphore_STRUCT_Output.h"
#include "../../include/engine/CLIB_LeftHemisphore_Framework_App.h"
#include "../../include/engine/CLIB_LeftHemisphore_Framework_App_Data.h"
#include <cstddef>
#include <iostream>
#include <list>
    std::byte* zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_ptr_LeftHemishpore_STRUCT_Output_playerId;
    unsigned long long* zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_ptr_LeftHemishpore_STRUCT_Output_praiseEventId;
    std::list<zinc::Object*>* zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_ptr_LeftHemishpore_STRUCT_Output_Subset;
// public.
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Output_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj, unsigned long long* praiseEventId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Output_Subset(sysThreadId)." << std::endl;
        switch (*praiseEventId) {
            case 0: {
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemisphore_STRUCT_Output_praise0*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Output(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(sysThreadId, praiseEventId)->begin()));
                break;
            }
            case 1: {
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemisphore_STRUCT_Output_praise1*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Output(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(sysThreadId, praiseEventId)->begin()));
                break;
            }
            case 2: {
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemisphore_STRUCT_Output_praise2*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Output(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(sysThreadId, praiseEventId)->begin()));
                break;
            }
            case 3: {
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Output_at_ItemSideToWRITE_For_doubleBufferOutput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemisphore_STRUCT_Output_praise3*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Output(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(sysThreadId, praiseEventId)->begin()));
                break;
            }
            default: {
                break;
            }
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Output_Subset(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Output(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Output(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Output(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Output(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Output(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Output(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Output(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Output(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId, obj);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Output(sysThreadId)." << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId)." << std::endl;
        return stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId);
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= unsigned long long* : dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId)." << std::endl;
        return stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId);
    }
    std::list<struct zinc::Object*>* zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= zinc::Object* : dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)." << std::endl;
        return stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_set_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId, std::byte* newPlayerId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => std::byte : dyn_REG_set_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId)." << std::endl;
        stat_REG_set_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId, *newPlayerId);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId, unsigned long long* new_unsignedLongLong) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => unsigned long long : dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId)." << std::endl;
        stat_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId, *new_unsignedLongLong);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_STRUCT_Output_praise0* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => class* : dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(sysThreadId)." << std::endl;
        *temp = reinterpret_cast<zinc::Object*>(objOutputSubset);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_STRUCT_Output_praise1* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => class* : dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(sysThreadId)." << std::endl;
        *temp = reinterpret_cast<zinc::Object*>(objOutputSubset);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_STRUCT_Output_praise2* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => class* : dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(sysThreadId). " << std::endl;
        *temp = reinterpret_cast<zinc::Object*>(objOutputSubset);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_Item_Of_ptr_Outputs_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_STRUCT_Output_praise3* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
        *temp = reinterpret_cast<zinc::Object*>(objOutputSubset);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Output(sysThreadId). " << std::endl;
    }
// private.
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Output_playerId = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Output_praiseEventId = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Output_Subset = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Output_playerId = new std::byte();
        *stat_REG_ptr_LeftHemishpore_STRUCT_Output_playerId = static_cast<std::byte>(255);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Output_praiseEventId = new unsigned long long();
        *stat_REG_ptr_LeftHemishpore_STRUCT_Output_praiseEventId = ULONG_LONG_MAX;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Output_Subset = new std::list<class zinc::Object*>();
        stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)->resize(1);
        *stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)->begin() = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
        *stat_REG_ptr_LeftHemishpore_STRUCT_Output_playerId = static_cast<std::byte>(0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
        *stat_REG_ptr_LeftHemishpore_STRUCT_Output_praiseEventId = static_cast<unsigned long long>(0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId). " << std::endl;
        *stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)->begin() = nullptr;
        stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId)->assign(0, reinterpret_cast<struct zinc::Object*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Output(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserOutput_Item_On_List_Of_ptr_PraiseOutputSubsets(sysThreadId, new unsigned long long(0))->begin()));
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Output : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
        return stat_REG_ptr_LeftHemishpore_STRUCT_Output_playerId;
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= unsigned long long* : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
        return stat_REG_ptr_LeftHemishpore_STRUCT_Output_praiseEventId;
    }
    std::list<class zinc::Object*>* zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::list<zinc::Object*>* : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Output_Subset(sysThreadId). " << std::endl;
        return stat_REG_ptr_LeftHemishpore_STRUCT_Output_Subset;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_set_CLIB_LeftHemisphore_STRUCT_Output_playerId(std::byte* sysThreadId, std::byte newPlayerId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => std::byte : stat_REG_set_CLIB_LeftHemisphore_STRUCT_Output_playerId(sysThreadId). " << std::endl;
        *stat_REG_ptr_LeftHemishpore_STRUCT_Output_playerId = newPlayerId;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Output::stat_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(std::byte* sysThreadId, unsigned long long new_unsignedLongLong) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => unsigned long long : stat_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Output_praiseEventId(sysThreadId). " << std::endl;
        *stat_REG_ptr_LeftHemishpore_STRUCT_Output_praiseEventId = new_unsignedLongLong;
    }