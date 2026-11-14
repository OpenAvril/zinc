#include "CLIB_Optimus.h"
//#include "../CLIB_ZincNeuralChip/libs/CLIB_ThreadsLog/libs/CLIB_MutexQueForThreadsLog/io/include/CLIB_MutexQueForThreadsLog.h"
//#include "../CLIB_ZincNeuralChip/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include/CLIB_SystemBus.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LeftHemisphore/io/include/CLIB_LeftHemisphore.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_MutexQue/include/CLIB_MutexQue_Framework_Global.h"
//#include "../CLIB_ZincNeuralChip/libs/CLIB_ThreadsLog/include/CLIB_ThreadLogs_Framework_Global.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_LaunchQue/include/CLIB_LaunchQue_Framework_Global.h"
//#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/include/CLIB_SystemBus_Framework_Global.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/include/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_StemTicket.h"
#include <cfloat>
#include <climits>
#include <cstring>
#include <iostream>
	static zinc::StemTicket* TICKET = nullptr;
	static std::array<bool, 1> stat_REG_ptr_CLIB_SoothCute_array_of_array_of_isMemberFunctionINSTANTIATED = { true };
// public.
	void zinc::SoothCute::optimusPrime(std::byte* sysThreadId) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: entered LIB :: zinc : SoothCute : prime(sysThreadId)." << std::endl;
		if (!zinc_SoothCute_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0)) {
			std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: SoothCute : PRIMING PACKAGE." << std::endl;
			zinc_SoothCute_PhoenixPrime(sysThreadId);
		}
		else {
			zinc_SoothCute_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0) = !zinc_SoothCute_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(sysThreadId).at(0);
		}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << " :: exiting LIB :: zinc : SoothCute : prime(sysThreadId)." << std::endl;
	}
// private.
	void zinc::SoothCute::zinc_SoothCute_PhoenixPrime(std::byte* sysThreadId) {
		auto handleId = new unsigned char();
		handleId = valueofMsbInt_To_MsbByteArray(sysThreadId,new int(INT_MAX));
		auto praiseId = new unsigned char();
		praiseId = valueofMsbInt_To_MsbByteArray(sysThreadId,new int(INT_MAX));
		auto stdByte = new std::byte();
		stdByte = new std::byte{0x00};
		auto string = new std::string(" ");
		auto boolValue = new bool();
		boolValue = new bool(true);
		auto bytes_UnsignedLongLong = new unsigned char();
		bytes_UnsignedLongLong = valueofMsbUnsignedLongLong_to_ByteArray(sysThreadId, new unsigned long long(0));
		auto bytes_Double = new unsigned char();
		bytes_Double = valueofMsbDouble_To_MsbByteArray(sysThreadId, new double(0));
		//auto ticket = new class Ticket(0,0,0,0,0);
		auto bytes_Cargo = new unsigned char();
		class zinc::Object* value_DATA = nullptr;
		bytes_Cargo = objDATA_To_MsbByteArray(sysThreadId, value_DATA);
		TICKET = new class zinc::StemTicket(sysThreadId, stdByte, stdByte, stdByte, stdByte);
		//zinc::ThreadLogs::generateProgram(std::byte* sysThreadId);
		//zinc::ThreadLogs::printl(sysThreadId, string);
		//zinc::ThreadLogs::reInitialiseProgram(sysThreadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		//zinc::ThreadLogs::terminateProgram(sysThreadId);

		zinc::MutexQue::endByUnlock(sysThreadId, handleId, stdByte);
		int* tempF0 = msbByteArray_To_valueOfmsbInt(sysThreadId, zinc::MutexQue::generateHandle(sysThreadId));
		//zinc::MutexQue::generateProgram(sysThreadId);
		zinc::MutexQue::reInitialiseHandle(sysThreadId, handleId, stdByte);
		zinc::MutexQue::startByLock(sysThreadId, handleId, stdByte);
		zinc::MutexQue::terminateProgram(sysThreadId, handleId);

		std::byte* tempC0 = zinc::LaunchQue::generateHandle(sysThreadId);
		//zinc::LaunchQue::generateProgram(sysThreadId);
		std::byte* tempC1 = zinc::LaunchQue::get_coreIdTolaunch(sysThreadId, stdByte, stdByte);
		bool tempC2 = zinc::LaunchQue::get_FlagSTATEisActive(sysThreadId, stdByte, stdByte);
		bool tempC3 = zinc::LaunchQue::get_FlagSTATEofConcurrentCore(sysThreadId, stdByte, stdByte);
		bool tempC4 = zinc::LaunchQue::get_FlagisIdle(sysThreadId, stdByte, stdByte);
		bool tempC5 = zinc::LaunchQue::get_FlagSTATEofThreadToLaunch(sysThreadId, stdByte, stdByte);
		zinc::LaunchQue::reInitialiseHandle(sysThreadId, stdByte, stdByte);
		zinc::LaunchQue::set_FlagSTATEofConcurrentCore(sysThreadId, stdByte, stdByte, boolValue);
		zinc::LaunchQue::terminateProgaram(sysThreadId);
		zinc::LaunchQue::threadRequestlaunch(sysThreadId, stdByte, stdByte);
		zinc::LaunchQue::threadEnd(sysThreadId, stdByte, stdByte);

		std::byte* tempD0 = zinc::Stemisphore::generateHandle(sysThreadId);
		//zinc::SystemBusses::generateProgram(sysThreadId);
		zinc::Stemisphore::load(sysThreadId, stdByte, *TICKET, bytes_Cargo);
		zinc::Stemisphore::reInitialiseHandle(sysThreadId, stdByte, praiseId);
		unsigned char* tempD2 = zinc::Stemisphore::unload(sysThreadId, stdByte, *TICKET);
		zinc::Stemisphore::terminateProgram(sysThreadId);

		std::byte* tempE0 = zinc::Epicentre::gernerateHandle(sysThreadId);
		zinc::Epicentre::generateProgram(sysThreadId);
		unsigned char* tempE1 = zinc::Epicentre::get_Output(sysThreadId, stdByte, praiseId);
		bool tempE2 = zinc::Epicentre::get_FLAG_isINITIALISED(sysThreadId, stdByte);
		bool tempE4 = zinc::Epicentre::get_FLAG_isStackLoaded_ServerInputReceive(sysThreadId, stdByte);
		bool tempE5 = zinc::Epicentre::get_FLAG_isStackLoaded_ServerOutputSend(sysThreadId, stdByte);
		unsigned char* tempE6 = zinc::Epicentre::get_MetaData_PraiseEventId(sysThreadId, stdByte);
		zinc::Epicentre::set_InputItemsFor_praise0(sysThreadId, stdByte, praiseId, bytes_Double, bytes_Double);
		zinc::Epicentre::set_InputItemsFor_praise1(sysThreadId, stdByte, praiseId, bytes_Double, bytes_Double);
		zinc::Epicentre::set_InputItemsFor_praise2(sysThreadId, stdByte, praiseId, bytes_Double, bytes_Double);
		zinc::Epicentre::set_InputItemsFor_praise3(sysThreadId, stdByte, praiseId, bytes_Double, bytes_Double);
		zinc::Epicentre::set_MetaData_PraiseEventId(sysThreadId, stdByte, praiseId);
		zinc::Epicentre::reInitialiseHandle(sysThreadId, stdByte, stdByte, stdByte);
		zinc::Epicentre::terminateProgram(sysThreadId);
}
	std::array<bool, 1> zinc::SoothCute::zinc_SoothCute_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId) {
		return stat_REG_ptr_CLIB_SoothCute_array_of_array_of_isMemberFunctionINSTANTIATED;
	}
	class zinc::Object* zinc::SoothCute::msbByteArray_To_ObjDATA(std::byte* sysThreadId, unsigned char* byteArray_DATA) {
		return reinterpret_cast<zinc::Object*>(byteArray_DATA);
	}
	bool zinc::SoothCute::msbByteArray_To_valueOfmsbBool(std::byte* sysThreadId, unsigned char* bytes_Array) {
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= bool : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_Msbbool(sysThreadId)." << std::endl;
		return (bytes_Array[7] & 1) != 0;
	}
	int* zinc::SoothCute::msbByteArray_To_valueOfmsbInt(std::byte* sysThreadId, unsigned char* bytes_Array) {
		int* temp;
		temp = new int();
		std::memcpy(&temp, bytes_Array, sizeof(int));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
		return temp;
	}
	double* zinc::SoothCute::msbByteArray_To_valueOfmsbDouble(std::byte* sysThreadId, unsigned char* bytes_Array) {
		double* temp;
		temp = new double();
		std::memcpy(&temp, bytes_Array, sizeof(double));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
		return temp;
	}
	std::byte* zinc::SoothCute::msbByteArray_To_valueOfMsbStdByte(std::byte* sysThreadId, unsigned char* bytes_Array) {
		std::byte* temp;
		temp = new std::byte();
		std::memcpy(&temp, bytes_Array, sizeof(std::byte));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
		return temp;
	}
	unsigned long long* zinc::SoothCute::msbByteArray_To_valueOfmsbunsignedLongLong(std::byte* sysThreadId, unsigned char* bytes_Array) {
		unsigned long long* temp;
		temp = new unsigned long long();
		std::memcpy(&temp, bytes_Array, sizeof(unsigned long long));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= std::byte* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_MsbByteArray_To_MsbStdByte(sysThreadId)." << std::endl;
		return temp;
	}
	unsigned char* zinc::SoothCute::objDATA_To_MsbByteArray(std::byte* sysThreadId, class zinc::Object* DATA) {
		return reinterpret_cast<unsigned char*>(DATA);
	}
	unsigned char* zinc::SoothCute::valueofMsbBool_to_MsbByteArray(std::byte* sysThreadId, bool newValue_Bool) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char();
		for (int bitIndex = 0; bitIndex < sizeof(uint8_t); bitIndex++) {
			buffer[bitIndex] = static_cast<unsigned char>(newValue_Bool);
		}
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_Msbbool_to_MsbByteArray(sysThreadId)." << std::endl;
		return buffer;
	}
	unsigned char* zinc::SoothCute::valueofMsbInt_To_MsbByteArray(std::byte* sysThreadId, int* newValue_Int) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char(static_cast<unsigned char>(INT_MAX));
		std::memcpy(buffer, &newValue_Int, sizeof(int));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
		return buffer;
	}
	unsigned char* zinc::SoothCute::valueofMsbDouble_To_MsbByteArray(std::byte* sysThreadId, double* newValue_Double) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char(static_cast<unsigned char>(DBL_MAX));
		std::memcpy(buffer, &newValue_Double, sizeof(double));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
		return buffer;
	}
	unsigned char* zinc::SoothCute::valueofMsbUnsignedLongLong_to_ByteArray(std::byte* sysThreadId, unsigned long long* newValue_ULongLong) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char(static_cast<unsigned char>(ULONG_LONG_MAX));
		std::memcpy(buffer, &newValue_ULongLong, sizeof(unsigned long long));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
		return buffer;
	}
	unsigned char* zinc::SoothCute::valueofMsbStdByte_To_MsbByteArray(std::byte* sysThreadId, std::byte* newValue_uint8_t) {
		unsigned char* buffer = nullptr;
		buffer = new unsigned char(static_cast<uint8_t>(255));
		std::memcpy(buffer, &newValue_uint8_t, sizeof(uint8_t));
		std::cout << "thread " << std::to_integer<int>(*sysThreadId) << "  :: <= unsigned char* : stat_CONVERT_CLIB_SystemBusses_Framework_Global_unsignedLongLong_to_ByteArray(sysThreadId)." << std::endl;
		return buffer;
	}