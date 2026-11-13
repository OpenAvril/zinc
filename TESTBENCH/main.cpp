#include "../CLIB_ZincNeuralChip/libs/CLIB_LeftHemisphore/io/include/CLIB_LeftHemisphore.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include/CLIB_SystemBus.h"
//#include "../CLIB_ZincNeuralChip/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../SoothCute/CLIB_Optimus.h"
#include <iostream>
#include <thread>
using namespace zinc;
int main() {
    auto sysThreadId = new std::byte{0x00};
    std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: Main : Running..." << std::endl;
    std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: starting : generateProgram(s)." << std::endl;
    zinc::MutexQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    //zinc::ThreadLogs::generateProgram(sysThreadId);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    //zinc::Stemisphore::generateProgram(sysThreadId);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    zinc::LaunchQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    //zinc::Epicentre::generateProgram(sysThreadId);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting : generateProgram(s)." << std::endl;
    std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: starting : SoothCute : prime." << std::endl;
    zinc::SoothCute::optimusPrime(sysThreadId);
    zinc::SoothCute::optimusPrime(sysThreadId);
    std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: exiting : SoothCute : prime." << std::endl;

    auto NUM_ACCESS_IDS = new std::byte{0x02};
    auto handleId = CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_MsbByteArray_To_VUALUEofMsbunsignedLongLong(sysThreadId, zinc::MutexQue::generateHandle(sysThreadId));
    zinc::MutexQue::reInitialiseHandle(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, handleId), NUM_ACCESS_IDS);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    zinc::MutexQue::startByLock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, handleId),new std::byte{0x00});
    std::this_thread::sleep_for(std::chrono::seconds(2));
    zinc::MutexQue::endByUnlock(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, handleId),new std::byte{0x00});
    std::this_thread::sleep_for(std::chrono::seconds(2));

    auto NUM_CONCURRENT_THREADS = new std::byte{0x02};
    auto handle_Id_LaunchQue = reinterpret_cast<uint8_t*>(zinc::LaunchQue::generateHandle(sysThreadId));
    zinc::LaunchQue::reInitialiseHandle(sysThreadId, reinterpret_cast<std::byte*>(handle_Id_LaunchQue), NUM_CONCURRENT_THREADS);

    //auto handle_Id_stemisphore = zinc::Stemisphore::generateHandle(sysThreadId);
    //zinc::Stemisphore::reInitialiseHandle(sysThreadId, CLIB_MutexQue_Framework_Global::stat_CONVERT_CLIB_MutexQue_Framework_Global_VUALUEofMsbUnsignedLongLong_to_ByteArray(sysThreadId, handle_Id_stemisphore), new std::byte{0x00});
    //todo /\ /\ /\

    std::cout << "thread " << static_cast<unsigned long long>(*sysThreadId) << " :: Main : End!." << std::endl;
    return 0;
}
