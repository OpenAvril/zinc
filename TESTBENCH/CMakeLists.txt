cmake_minimum_required(VERSION 4.2.3)
project(TESTBENCH VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TESTBENCH
        main.cpp
        src/CLIB_Control.cpp
        src/CLIB_Framework.cpp
        src/CLIB_Framework_Global.cpp
        src/CLIB_Framework_Execute.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_ZincNeuralChip/libs/CLIB_MutexQue/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_ZincNeuralChip/libs/CLIB_LaunchQue/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_ZincNeuralChip/libs/CLIB_LeftHemisphore/io/include>

)

target_include_directories(${PROJECT_NAME} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../SoothCute>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_ZincNeuralChip/libs/CLIB_MutexQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_ZincNeuralChip/libs/CLIB_LaunchQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../CLIB_ZincNeuralChip/libs/CLIB_LeftHemisphore/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        SoothCute
        zinc_mutex_que
        zinc_stemisphore
        zinc_launch_que
        zinc_epicentre
)