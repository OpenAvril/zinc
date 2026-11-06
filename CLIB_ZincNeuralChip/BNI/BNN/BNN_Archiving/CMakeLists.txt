cmake_minimum_required(VERSION 4.4)
project(BNN_Archiving)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME}
        io/src/BNN_Arch.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}io/include>
        $<INSTALL_INTERFACE:include>
)

target_include_directories(${PROJECT_NAME} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE

)
