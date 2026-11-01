cmake_minimum_required(VERSION 4.2.3)
project(zinc_control_sys_threads_log VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} STATIC
        io/src/CLIB_ThreadLogs.cpp
        libs/CLIB_MutexQueForThreadsLog/io/src/CLIB_MutexQueForThreadsLog.cpp
        libs/CLIB_MutexQueForThreadsLog/src/CLIB_MutexQueForThreadsLog_Framework.cpp
        libs/CLIB_MutexQueForThreadsLog/src/CLIB_MutexQueForThreadsLog_Framework_Global.cpp
        libs/CLIB_MutexQueForThreadsLog/src/CLIB_MutexQueForThreadsLog_Framework_App.cpp
        libs/CLIB_MutexQueForThreadsLog/src/CLIB_MutexQueForThreadsLog_Framework_App_Control.cpp
        src/CLIB_ThreadLogs_Framework.cpp
        src/CLIB_ThreadLogs_Framework_Global.cpp
        src/CLIB_ThreadLogs_Framework_App.cpp
        src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
        src/CLIB_ThreadLogs_Framework_App_Execute.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/io/include>
        $<INSTALL_INTERFACE:include>
)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_MutexQueForThreadsLog/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        zinc_control_mutex_que
)