
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include/CLIB_SystemBus.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LeftHemishpore/io/include/CLIB_LeftHemishpore.h"
#include "../Optimus/CLIB_Optimus.h"
#include <iostream>
#include <thread>
using namespace zinc;

int main() {
    auto sysThreadId = new uint8_t();
    *sysThreadId = 0;
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : Running..." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : Optimus : prime." << std::endl;
    zinc::Optimus::prime(sysThreadId);
    zinc::Optimus::prime(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : Optimus : prime." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : generateProgram(s)." << std::endl;
    zinc::MutexQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    zinc::ThreadLogs::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    zinc::Stemisphore::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    zinc::LaunchQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    zinc::Epicentre::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : generateProgram(s)." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : End!." << std::endl;
    return 0;
}
