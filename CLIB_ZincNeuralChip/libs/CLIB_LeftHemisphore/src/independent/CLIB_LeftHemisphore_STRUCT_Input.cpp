#include "../../include/independent/CLIB_LeftHemisphore_STRUCT_Input.h"
#include "../../include/engine/CLIB_LeftHemisphore_Framework_App.h"
#include "../../include/engine/CLIB_LeftHemisphore_Framework_App_Data.h"
#include <cstddef>
#include <iostream>
#include <list>
    std::byte* zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId;
    unsigned long long* zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId;
    std::list<zinc::Object*>* zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset;
// public.
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj, unsigned long long* praiseEventId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)." << std::endl;
        switch (*praiseEventId) {
            case 0: {
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemisphore_STRUCT_Input_praise0*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Input(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId)->begin()));
                break;
            }
            case 1: {
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemisphore_STRUCT_Input_praise1*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Input(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId)->begin()));
                break;
            }
            case 2: {
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemisphore_STRUCT_Input_praise2*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Input(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId)->begin()));
                break;
            }
            case 3: {
                obj->dyn_CLASS_get_ptr_CLIB_LeftHemisphore_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_LeftHemisphore_Framework_App_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(sysThreadId, obj)->dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId, reinterpret_cast<CLIB_LeftHemisphore_STRUCT_Input_praise3*>(*obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Input(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId)->begin()));
                break;
            }
            default: {
                break;
            }
        }
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_APP_select_And_Set_LeftHemishpore_STRUCT_Input_Subset(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Input(sysThreadId)." << std::endl;
        stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot1_DEFINE_LeftHemishpore_STRUCT_Input(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Input(sysThreadId)." << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot2_SUBSTANTIATE_LeftHemishpore_STRUCT_Input(sysThreadId)." << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Input(std::byte* sysThreadId, zinc::CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Input(sysThreadId)." << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId, obj);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : dyn_REG_boot3_INITIALISE_LeftHemishpore_STRUCT_Input(sysThreadId)." << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId)." << std::endl;
        return stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId);
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= unsigned long long* : dyn_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId)." << std::endl;
        return stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId);
    }
    std::list<struct zinc::Object*>* zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= zinc::Object* : dyn_REG_get_ptr_Item_Of_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)." << std::endl;
        return stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_set_CLIB_LeftHemisphore_STRUCT_Input_playerId(std::byte* sysThreadId, std::byte* newPlayerId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => std::byte : dyn_REG_set_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId)." << std::endl;
        stat_REG_set_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId, *newPlayerId);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(std::byte* sysThreadId, unsigned long long* new_unsignedLongLong) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => unsigned long long : dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId)." << std::endl;
        stat_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId, *new_unsignedLongLong);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_STRUCT_Input_praise0* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => class* : dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId)." << std::endl;
        *temp = reinterpret_cast<zinc::Object*>(objInputSubset);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_STRUCT_Input_praise1* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => class* : dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId)." << std::endl;
        *temp = reinterpret_cast<zinc::Object*>(objInputSubset);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_STRUCT_Input_praise2* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => class* : dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(sysThreadId). " << std::endl;
        *temp = reinterpret_cast<zinc::Object*>(objInputSubset);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::dyn_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_Item_Of_ptr_Inputs_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_STRUCT_Input_praise3* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)->begin();
        std::advance(temp, 0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
        *temp = reinterpret_cast<zinc::Object*>(objInputSubset);
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Input(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_STRUCT_boot4_INSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Input(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot0_DECLARE_CLIB_LeftHemisphore_STRUCT_Input(sysThreadId). " << std::endl;
    }
// private.
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_Subset(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot1_DEFINE_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = new std::byte();
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = static_cast<std::byte>(255);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = new unsigned long long();
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = ULONG_LONG_MAX;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_Subset(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId). " << std::endl;
        stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset = new std::list<class zinc::Object*>();
        stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)->resize(1);
        *stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)->begin() = nullptr;
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = static_cast<std::byte>(0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = static_cast<unsigned long long>(0);
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_Subset(std::byte* sysThreadId, CLIB_LeftHemisphore_Framework* obj) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: entered LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId). " << std::endl;
        *stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)->begin() = nullptr;
        stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId)->assign(0ULL, *obj->dyn_STRUCT_get_CLIB_LeftHemisphore_Framework_User_Input(sysThreadId)->dyn_STRUCT_get_CLIB_LeftHemisphore_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, new unsigned long long(0))->begin());
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting LIB :: zinc : CLIB_LeftHemisphore_STRUCT_Input : stat_REG_boot3_INITIALISE_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
    }
    std::byte* zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_playerId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::byte* : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
        return stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId;
    }
    unsigned long long* zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= unsigned long long* : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
        return stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId;
    }
    std::list<class zinc::Object*>* zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(std::byte* sysThreadId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: <= std::list<zinc::Object*>* : stat_REG_get_ptr_CLIB_LeftHemisphore_STRUCT_Input_Subset(sysThreadId). " << std::endl;
        return stat_REG_ptr_LeftHemishpore_STRUCT_Input_Subset;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_set_CLIB_LeftHemisphore_STRUCT_Input_playerId(std::byte* sysThreadId, std::byte newPlayerId) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => std::byte : stat_REG_set_CLIB_LeftHemisphore_STRUCT_Input_playerId(sysThreadId). " << std::endl;
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_playerId = newPlayerId;
    }
    void zinc::CLIB_LeftHemisphore_STRUCT_Input::stat_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(std::byte* sysThreadId, unsigned long long new_unsignedLongLong) {
        std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: => unsigned long long : stat_REG_set_ptr_CLIB_LeftHemisphore_STRUCT_Input_praiseEventId(sysThreadId). " << std::endl;
        *stat_REG_ptr_LeftHemishpore_STRUCT_Input_praiseEventId = new_unsignedLongLong;
    }