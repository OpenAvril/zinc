cmake_minimum_required(VERSION 4.2.3)
project(zinc_bni_bnn_design_suite VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
        main.cpp
        io/src/BNITT.cpp
        src/engine/CLIB_BNIBNN_Framework.h
        src/engine/CLIB_BNIBNN_Framework_Global.h
        src/engine/CLIB_BNIBNN_Framework_App.h
        src/engine/CLIB_BNIBNN_Framework_App_Algotithms.h
        src/engine/CLIB_BNIBNN_Framework_App_Data.h
        src/engine/CLIB_BNIBNN_Framework_App_Execute.cpp
        src/engine/CLIB_BNIBNN_Framework_App_Execute_Control.h
        src/independent/binary_neural_network/CLIB_BNIBNN_STRUCT_bnn.h
        src/independent/binary_neural_network/CLIB_BNIBNN_STRUCT_bnn_MetaData.h
        src/independent/binary_neural_network/CLIB_BNIBNN_STRUCT_bnn_Binary.h
        src/independent/binary_neural_network/CLIB_BNIBNN_STRUCT_bnn_Constant.h
        src/independent/binary_neural_network/CLIB_BNIBNN_STRUCT_bnn_Linear.h
        src/independent/neural_path/CLIB_BNIBNN_STRUCT_np.h
        src/independent/neural_path/CLIB_BNIBNN_STRUCT_np_Linear.h
        src/independent/neural_path/CLIB_BNIBNN_STRUCT_np_Node.h
        src/independent/neural_path/CLIB_BNIBNN_STRUCT_np_PraiseSet.h
        src/independent/neural_path/CLIB_BNIBNN_STRUCT_np_PraiseSet.h
        src/independent/praise_sets/do_tasks/CLIB_BNIBNN_STRUCT_DoTask.h
        src/independent/praise_sets/do_tasks/CLIB_BNIBNN_STRUCT_DoTask_praose0.h
        src/independent/praise_sets/do_tasks/CLIB_BNIBNN_STRUCT_DoTask_UserAlgorithms.h
        src/independent/praise_sets/inputs/CLIB_BNIBNN_STRUCT_Input_Data.h
        src/independent/praise_sets/inputs/CLIB_BNIBNN_STRUCT_Input_praise0.h
        src/independent/praise_sets/inputs/CLIB_BNIBNN_STRUCT_Input_UserInputs.h
        src/independent/praise_sets/outputs/CLIB_BNIBNN_STRUCT_Output_Data.h
        src/independent/praise_sets/outputs/CLIB_BNIBNN_STRUCT_Output_praise0.h
        src/independent/praise_sets/outputs/CLIB_BNIBNN_STRUCT_Output_UserOutputs.h
)

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>io/include>
)

target_include_directories(${PROJECT_NAME} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>include/engine>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>include/independent/binary_neural_network>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>include/independent/neural_path>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>include/independent/praise_sets/do_tasks>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>include/independent/praise_sets/inputs>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>include/independent/praise_sets/outputs>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE

)