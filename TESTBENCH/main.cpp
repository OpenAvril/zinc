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
    std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: Main : Running..." << std::endl;
    std::cout << "TEST : MutexQue : generateProgram" << std::endl;
    zinc::MutexQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    //zinc::ThreadLogs::generateProgram(sysThreadId);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "TEST : Stemisphore : generateProgram" << std::endl;
    zinc::Stemisphore::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    //std::cout << "TEST : LaunchQue : generateProgram" << std::endl;
    //zinc::LaunchQue::generateProgram(sysThreadId);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    //std::cout << "TEST : Epicentre : generateProgram" << std::endl;
    //zinc::Epicentre::generateProgram(sysThreadId);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting : generateProgram(s)." << std::endl;
    std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: starting : SoothCute : prime." << std::endl;
    zinc::SoothCute::optimusPrime(sysThreadId);
    zinc::SoothCute::optimusPrime(sysThreadId);
    std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: exiting : SoothCute : prime." << std::endl;
    //std::cout << "TEST : Epicentre : gernerateHandle" << std::endl;
    //auto handleId = zinc::Epicentre::gernerateHandle(sysThreadId);
    //std::cout << "TEST : Epicentre : reInitialiseHandle" << std::endl;
    //zinc::Epicentre::reInitialiseHandle(sysThreadId, handleId, new std::byte{0x02}, new std::byte{0x01});
    //todo /\ /\ /\

    std::cout << "thread " << static_cast<uint64_t>(*sysThreadId) << " :: Main : End!." << std::endl;
    return 0;
}
