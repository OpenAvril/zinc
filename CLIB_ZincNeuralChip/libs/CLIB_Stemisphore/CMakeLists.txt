cmake_minimum_required(VERSION 4.2.3)
project(zinc_stemisphore VERSION 1.2.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} STATIC
        io/src/CLIB_SystemBus.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Data.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute.cpp
        src/CLIB_SystemBus_Framework.cpp
        src/CLIB_SystemBus_Framework_Global.cpp
        src/CLIB_SystemBus_Framework_App.cpp
        src/CLIB_SystemBus_Framework_App_Execute.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/io/include>
)

target_include_directories(${PROJECT_NAME} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/independent>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        zinc_mutex_que
)