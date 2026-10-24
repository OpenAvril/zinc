#include "../include/CLIB_ThreadLogs_Framework_App_Algorithms.h"
#include <iostream>
// public.
	zinc::CLIB_ThreadLogs_Framework_App_Algorithms::CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId);
		stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	zinc::CLIB_ThreadLogs_Framework_App_Algorithms::~CLIB_ThreadLogs_Framework_App_Algorithms() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : ~CLIB_ThreadLogs_Framework_App_Algorithms()." << std::endl;
		std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : ~CLIB_ThreadLogs_Framework_App_Algorithms()." << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_APP_FUNCT_CLIB_printConsoleAndLog(uint8_t* sysThreadId, std::string* message)	{
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: * APP_FUNCT : dyn_APP_FUNCT_CLIB_printConsoleAndLog(sysThreadId)." << std::endl;
		stat_APP_FUNCT_CLIB_printConsoleAndLog(sysThreadId, message);
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::dyn_APP_FUNCT_CLIB_printLog(uint8_t* sysThreadId, std::string* message)	{
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: * APP_FUNCT : dyn_APP_FUNCT_CLIB_printLog(sysThreadId)." << std::endl;
		stat_APP_FUNCT_CLIB_printLog(sysThreadId, message);
	}
// private.
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms(sysThreadId)." << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::stat_APP_FUNCT_CLIB_printConsoleAndLog(uint8_t* sysThreadId, std::string* message)	{
		//std::cout << "thread " << std::to_string(*sysThreadId) << " :: * APP_FUNCT : dyn_APP_FUNCT_CLIB_printConsoleAndLog(sysThreadId)." << std::endl;
		//stat_APP_FUNCT_CLIB_printLog(sysThreadId, message);
		std::cout << "thread " << std::to_string(*sysThreadId) << *message << std::endl;
	}
	void zinc::CLIB_ThreadLogs_Framework_App_Algorithms::stat_APP_FUNCT_CLIB_printLog(uint8_t* sysThreadId, std::string* message)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: * APP_FUNCT : dyn_APP_FUNCT_CLIB_printLog(sysThreadId)." << std::endl;
		//todo log file
	}

