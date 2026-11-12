cmake_minimum_required(VERSION 4.2.3)
project(zinc_epicentre VERSION 1.2.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} STATIC
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        ../CLIB_LaunchQue/src/CLIB_LaunchQue_Framework.cpp
        ../CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Global.cpp
        ../CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App.cpp
        ../CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App_Control.cpp
        ../CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Execute.cpp
        io/src/CLIB_LeftHemisphore.cpp
        src/engine/CLIB_LeftHemisphore_Framework.cpp
        src/engine/CLIB_LeftHemisphore_Framework_Global.cpp
        src/independent/CLIB_LeftHemisphore_STRUCT_Input.cpp
        src/independent/CLIB_LeftHemisphore_STRUCT_Output.cpp
        src/independent/threads/CLIB_LeftHemisphore_STRUCT_Concurrent.cpp
        src/independent/CLIB_LeftHemisphore_STRUCT_User_Input.cpp
        src/independent/CLIB_LeftHemisphore_STRUCT_User_Output.cpp
        src/independent/CLIB_LeftHemisphore_STRUCT_User_Algorithm.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Algorithm_praise0.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Input_praise0.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise0.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Algorithm_praise1.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Input_praise1.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise1.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Algorithm_praise2.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Input_praise2.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise2.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Algorithm_praise3.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Input_praise3.cpp
        src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise3.cpp
        src/engine/CLIB_LeftHemisphore_Framework.cpp
        src/engine/CLIB_LeftHemisphore_Framework_App.cpp
        src/engine/CLIB_LeftHemisphore_Framework_App_Algorithms.cpp
        src/engine/CLIB_LeftHemisphore_Framework_App_Data.cpp
        src/engine/CLIB_LeftHemisphore_Framework_App_Data_Control.cpp
        src/engine/CLIB_LeftHemisphore_Framework_App_Execute.cpp
        src/engine/CLIB_LeftHemisphore_Framework_App_Execute_Control.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_MutexQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_LaunchQue/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        zinc_mutex_que
        zinc_launch_que
)
