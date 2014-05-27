//!
//! @file 			ColourTests.cpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.cladlab.com)
//! @created		2014/05/27
//! @last-modified 	2014/05/27
//! @brief			Makes sure the colours are printed correctly.
//! @details
//!					See README.rst in root dir for more info.

#include <iostream>
#include <fstream>
#include <cstdint>
#include <string>	// std::string

#include "../api/LoggerApi.hpp"

#include "../lib/UnitTest++/src/UnitTest++.h"

using namespace LoggerNs;

namespace LoggerTests
{
	SUITE(ColourTests)
	{

		TEST(ColourTest)
		{
			LoggerNs::Logger stdOut(std::cout, LoggerNs::Colours::WHITE(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be white." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::BLACK(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be black." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::DEFAULT(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be the default colour." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::LIGHT_GREY(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be light grey." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::DARK_GREY(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be dark grey." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::LIGHT_RED(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be light red." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::DARK_RED(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be dark red." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::LIGHT_YELLOW(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be light yellow." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::DARK_YELLOW(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be dark yellow." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::LIGHT_BLUE(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be light blue." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::DARK_BLUE(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be dark blue." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::LIGHT_GREEN(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be light green." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::DARK_GREEN(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be dark green." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::LIGHT_PURPLE(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be light purple." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::DARK_PURPLE(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be dark purple." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::LIGHT_CYAN(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be light cyan." << std::endl);

			stdOut = LoggerNs::Logger(std::cout, LoggerNs::Colours::DARK_CYAN(), LoggerNs::Colours::DEFAULT());
			stdOut.Print(Ss() << "This should be dark cyan." << std::endl);

			/*
			// This has to be a user check
			std::cout << "Are all colours correct (y/n)?";
			std::string myString;
			std::cin >> myString;
			CHECK_EQUAL("y", myString);*/
		}

	} // SUITE(ColourTests)

} // namespace LoggerTests

// EOF
