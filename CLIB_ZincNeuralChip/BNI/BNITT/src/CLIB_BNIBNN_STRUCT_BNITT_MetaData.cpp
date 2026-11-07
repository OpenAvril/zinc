#include "../include/CLIB_BNIBNN_STRUCT_BNITT_MetaData.h"

    bool zinc::CLIB_BNIBNN_STRUCT_BNITT_MetaData::stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_ConditionCode_ParamId[2];
    bool zinc::CLIB_BNIBNN_STRUCT_BNITT_MetaData::stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_ConditionCode_PathId[2];
    std::string* zinc::CLIB_BNIBNN_STRUCT_BNITT_MetaData::stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_Description;
    zinc::Object* zinc::CLIB_BNIBNN_STRUCT_BNITT_MetaData::stat_REG_CLIB_BNIBNN_STRUCT_BNITT_Subset_BNN;
// public.
    std::byte* zinc::CLIB_BNIBNN_STRUCT_BNITT_MetaData::dyn_REG_get_CLIB_BNIBNN_STRUCT_BNITT_MetaData_ConditionCode(std::byte* sysThreadId) {
        auto temp = new bool[8] { true, true, true, true, true, true, true, true };
        temp[0] = stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_ParamId[0];
        temp[1] = stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_ParamId[1];
        temp[2] = stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_PathId[0];
        temp[3] = stat_REG_CLIB_BNIBNN_STRUCT_BNITT_MetaData_PathId[1];
        temp[4] = false;
        temp[5] = false;
        temp[6] = false;
        temp[7] = false;
        return temp;
    }
// private.
