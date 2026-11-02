
#include "../CLIB_ZincNeuralChip/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include/CLIB_SystemBus.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LeftHemishpore/io/include/CLIB_LeftHemishpore.h"
#include "../Sooth/CLIB_Optimus.h"
#include <iostream>
using namespace zinc;

int main() {
    auto sysThreadId = new uint8_t();
    *sysThreadId = 0;
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : Running..." << std::endl;
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : generateProgram(s)." << std::endl;
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
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : generateProgram(s)." << std::endl;
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : SoothCute : prime." << std::endl;
    //zinc::SoothCute::prime(sysThreadId);
    //zinc::SoothCute::prime(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : SoothCute : prime." << std::endl;
    //zinc::ThreadLogs::reInitialiseProgram(sysThreadId, new uint8_t(6));
   // zinc::ThreadLogs::printl(sysThreadId, new std::string("test"));

    //todo /\ /\ /\
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : End!." << std::endl;
    return 0;
}
