cmake_minimum_required(VERSION 4.2.3)
project(SiliconLife VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_subdirectory(CLIB_ZincNeuralChip/libs/CLIB_ThreadsLog)
add_subdirectory(CLIB_ZincNeuralChip/libs/CLIB_MutexQue)
#add_subdirectory(CLIB_ZincNeuralChip/libs/CLIB_Stemisphore)
add_subdirectory(CLIB_ZincNeuralChip/libs/CLIB_LaunchQue)
add_subdirectory(CLIB_ZincNeuralChip/libs/CLIB_LeftHemishpore)
#add_subdirectory(Sooth)
add_subdirectory(TESTBENCH)