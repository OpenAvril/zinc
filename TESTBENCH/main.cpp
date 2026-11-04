
#include "../CLIB_ZincNeuralChip/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
//#include "../CLIB_ZincNeuralChip/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
//#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include/CLIB_SystemBus.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LeftHemishpore/io/include/CLIB_LeftHemishpore.h"
#include "../SoothCute/CLIB_Optimus.h"
#include <iostream>
#include <thread>
using namespace zinc;

int main() {
    auto sysThreadId = new std::byte{0x00};
    std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: Main : Running..." << std::endl;
    std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: starting : generateProgram(s)." << std::endl;
    zinc::MutexQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    //zinc::ThreadLogs::generateProgram(sysThreadId);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    //zinc::Stemisphore::generateProgram(sysThreadId);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    zinc::LaunchQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    zinc::Epicentre::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting : generateProgram(s)." << std::endl;
    std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: starting : SoothCute : prime." << std::endl;
    zinc::SoothCute::optimusPrime(sysThreadId);
    zinc::SoothCute::optimusPrime(sysThreadId);
    std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting : SoothCute : prime." << std::endl;
    //zinc::ThreadLogs::reInitialiseProgram(sysThreadId, new uint8_t(6));
   // zinc::ThreadLogs::printl(sysThreadId, new std::string("test"));

    //todo /\ /\ /\
    std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: Main : End!." << std::endl;
    return 0;
}
