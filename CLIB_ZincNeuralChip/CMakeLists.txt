cmake_minimum_required(VERSION 4.2.3)
project(zinc_neural_chip VERSION 1.1.3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/CLIB_MutexQue)
add_subdirectory(libs/CLIB_Stemisphore)
add_subdirectory(libs/CLIB_LaunchQue)
add_subdirectory(libs/CLIB_LeftHemisphore)

add_library(${PROJECT_NAME} STATIC
        libs/CLIB_MutexQue/io/src/CLIB_MutexQue.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        libs/CLIB_Stemisphore/io/src/CLIB_SystemBus.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Data.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute.cpp
        libs/CLIB_Stemisphore/include/CLIB_SystemBus_Framework.h
        libs/CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h
        libs/CLIB_Stemisphore/include/CLIB_SystemBus_Framework_App.h
        libs/CLIB_Stemisphore/include/CLIB_SystemBus_Framework_App_Data.h
        libs/CLIB_Stemisphore/include/CLIB_SystemBus_Framework_App_Execute.h
        libs/CLIB_LaunchQue/io/src/CLIB_LaunchQue.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Global.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App_Control.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Execute.cpp
        libs/CLIB_LeftHemisphore/io/src/CLIB_LeftHemisphore.cpp
        libs/CLIB_LeftHemisphore/src/engine/CLIB_LeftHemisphore_Framework.cpp
        libs/CLIB_LeftHemisphore/src/engine/CLIB_LeftHemisphore_Framework_Global.cpp
        libs/CLIB_LeftHemisphore/src/independent/CLIB_LeftHemisphore_STRUCT_Input.cpp
        libs/CLIB_LeftHemisphore/src/independent/CLIB_LeftHemisphore_STRUCT_Output.cpp
        libs/CLIB_LeftHemisphore/src/independent/threads/CLIB_LeftHemisphore_STRUCT_Concurrent.cpp
        libs/CLIB_LeftHemisphore/src/independent/CLIB_LeftHemisphore_STRUCT_User_Input.cpp
        libs/CLIB_LeftHemisphore/src/independent/CLIB_LeftHemisphore_STRUCT_User_Output.cpp
        libs/CLIB_LeftHemisphore/src/independent/CLIB_LeftHemisphore_STRUCT_User_Algorithm.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Algorithm_praise0.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Input_praise0.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise0.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Algorithm_praise1.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Input_praise1.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise1.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Algorithm_praise2.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Input_praise2.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise2.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Algorithm_praise3.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Input_praise3.cpp
        libs/CLIB_LeftHemisphore/src/independent/praise_sets/CLIB_LeftHemisphore_STRUCT_Output_praise3.cpp
        libs/CLIB_LeftHemisphore/src/engine/CLIB_LeftHemisphore_Framework_App.cpp
        libs/CLIB_LeftHemisphore/src/engine/CLIB_LeftHemisphore_Framework_App_Algorithms.cpp
        libs/CLIB_LeftHemisphore/src/engine/CLIB_LeftHemisphore_Framework_App_Data.cpp
        libs/CLIB_LeftHemisphore/src/engine/CLIB_LeftHemisphore_Framework_App_Data_Control.cpp
        libs/CLIB_LeftHemisphore/src/engine/CLIB_LeftHemisphore_Framework_App_Execute.cpp
        libs/CLIB_LeftHemisphore/src/engine/CLIB_LeftHemisphore_Framework_App_Execute_Control.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_MutexQue/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_Stemisphore/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_LaunchQue/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_LeftHemisphore/io/include>

)

target_include_directories(${PROJECT_NAME} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_MutexQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_Stemisphore/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_LaunchQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_LeftHemisphore/include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        zinc_mutex_que
        zinc_Stemisphore
        zinc_launch_que
        zinc_epicentre
)
